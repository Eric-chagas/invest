#include "Dominios.h"
#include <iostream>
#include <stdexcept>
#include <string>


//Lembrar de acrescentar os comentarios doxygen.

//Classe CEP

void Cep::validar(int cep){
    if (!((cep >= MIN_1_SP && cep <= MAX_1_SP)
          || (cep >= MIN_2_SP && cep <= MAX_2_SP)
          || (cep >= MIN_RJ && cep <= MAX_RJ)
          || (cep >= MIN_DF && cep <= MAX_DF)
          || (cep >= MIN_SSA && cep <= MAX_SSA)
          || (cep >= MIN_FOR && cep <= MAX_FOR))){
                throw std::invalid_argument("Cep invalido.");
          }
}
void Cep::setCep(int cep){
    validar(cep);
    this->cep = cep;
}
int Cep::getCep(){
    return this->cep;
}


// Classe CLASSE

const std::string Classe::VALOR_1 = "CDB";
const std::string Classe::VALOR_2 = "LCA";
const std::string Classe::VALOR_3 = "LCI";
const std::string Classe::VALOR_4 = "LF";
const std::string Classe::VALOR_5 = "LC";


void Classe::validar(std::string classe){
    if (classe.compare(VALOR_1) != 0
        && classe.compare(VALOR_2) != 0
        && classe.compare(VALOR_3) != 0
        && classe.compare(VALOR_4) != 0
        && classe.compare(VALOR_5) != 0){
            throw std::invalid_argument("Classe invalida.");
        }
}
void Classe::setClasse(std::string classe){
    validar(classe);
    this->classe = classe;
}
std::string Classe::getClasse(){
    return this->classe;
}


//Classe CODIGO_AGENCIA

const std::string Codigo_Agencia::COD_INVALIDO = "0000";

void Codigo_Agencia::validarDigitos(std::string codigo){
    //Esse trecho de codigo checa se o codigo e composto apenas por digitos (0-9)
    int i;
    for(i = 0; i < codigo.length(); i++){
        if ((int)codigo[i] < 48 || (int)codigo[i] > 57){
            throw std::invalid_argument("Codigo de Agencia invalido.");
        }
    }
}
void Codigo_Agencia::validar(std::string codigo){
    if (codigo.length() != 4 || codigo.compare(COD_INVALIDO) == 0){
        throw std::invalid_argument("Codigo de Agencia invalido.");
    }
    else{
        validarDigitos(codigo);
    }
}
void Codigo_Agencia::setCodigo(std::string codigo){
    validar(codigo);
    this->codigo = codigo;
}
std::string Codigo_Agencia::getCodigo(){
    return this->codigo;
}


//Classe CODIGO_APLICACAO

const std::string Codigo_Aplicacao::COD_INVALIDO = "00000";

void Codigo_Aplicacao::validarDigitos(std::string codigo){
    //Esse trecho de codigo checa se o codigo e composto apenas por digitos (0-9)
    int i;
    for(i = 0; i < codigo.length(); i++){
        if ((int)codigo[i] < 48 || (int)codigo[i] > 57){
            throw std::invalid_argument("Codigo de Aplicacao invalido.");
        }
    }
}
void Codigo_Aplicacao::validar(std::string codigo){
    if (codigo.length() != 5 || codigo.compare(COD_INVALIDO) == 0) {
        throw std::invalid_argument("Codigo de Aplicacao invalido.");
    }
    else{
        validarDigitos(codigo);
    }
}
void Codigo_Aplicacao::setCodigo(std::string codigo){
    validar(codigo);
    this->codigo = codigo;
}
std::string Codigo_Aplicacao::getCodigo(){
    return this->codigo;
}


//Classe CODIGO_BANCO

//Bancos: Itau: 341, Banco do Brasil: 001, Bradesco: 237, Caixa: 104, Santander: 033
const std::string Codigo_Banco::COD_ITAU = "341";
const std::string Codigo_Banco::COD_BB = "001";
const std::string Codigo_Banco::COD_BRADESCO = "237";
const std::string Codigo_Banco::COD_CAIXA = "104";
const std::string Codigo_Banco::COD_SANTANDER = "033";

void Codigo_Banco::validar(std::string codigo){
    if(codigo.compare(COD_ITAU) != 0
       && codigo.compare(COD_BB) != 0
       && codigo.compare(COD_BRADESCO) != 0
       && codigo.compare(COD_CAIXA) != 0
       && codigo.compare(COD_SANTANDER) != 0){
            throw std::invalid_argument("Codigo de Banco invalido.");
       }
}
void Codigo_Banco::setCodigo(std::string codigo){
    validar(codigo);
    this->codigo = codigo;
}
std::string Codigo_Banco::getCodigo(){
    return this->codigo;
}


//Classe CODIGO_PRODUTO

const std::string Codigo_Produto::COD_INVALIDO = "000";

void Codigo_Produto::validarDigitos(std::string codigo){
    //Esse trecho de codigo checa se o codigo e composto apenas por digitos (0-9)
    int i;
    for(i = 0; i < codigo.length(); i++){
        if ((int)codigo[i] < 48 || (int)codigo[i] > 57){
            throw std::invalid_argument("Codigo de Produto invalido.");
        }
    }
}
void Codigo_Produto::validar(std::string codigo){
    if (codigo.length() != 3 || codigo.compare(COD_INVALIDO) == 0) {
        throw std::invalid_argument("Codigo de Produto invalido.");
    }
    else{
        validarDigitos(codigo);
    }
}
void Codigo_Produto::setCodigo(std::string codigo){
    validar(codigo);
    this->codigo = codigo;
}
std::string Codigo_Produto::getCodigo(){
    return this->codigo;
}


//Classe CPF


//Algoritmo que valida o CPF com base nos 2 digitos verificadores;
//*0. Se todos os digitos forem iguais, o CPF e invalido.
//1. Multiplica-se os 9 primeiros digitos do CPF em sequencia por 10, 9, 8, 7, 6, 5, 4, 3 e 2 respectivamente;
//2. Somam-se os resultados das multiplicacoes anteriores
//3. Multiplica-se a soma por 10 e divide-se o resultado por 11, e o resto dessa divisao deve corresponder ao primeiro digito.
//OBS: se o resto da divisao for 10, o digito devera ser 0.
//4. Repie-se o mesmo processo, porem acrescentando o primeiro digito verificador aos primeiros 9 digitos do CPF
//e o numero 11 na primeira multiplicacao em sequencia.
//5. o resltado agora deve corresponder ao segundo digito verificador

void Cpf::validarCpf(std::string cpf){
    if (cpf[0] == cpf[1]
        && cpf[1] == cpf[2]
        && cpf[2] == cpf[4]
        && cpf[4] == cpf[5]
        && cpf[5] == cpf[6]
        && cpf[6] == cpf[8]
        && cpf[8] == cpf[9]
        && cpf[9] == cpf[10]){
            throw std::invalid_argument("CPF invalido.");
    }
    else{
        int soma, resto, cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, digito1, digito2;

        cpf1 = (int)cpf[0] - 48;
        cpf2 = (int)cpf[1] - 48;
        cpf3 = (int)cpf[2] - 48;
        cpf4 = (int)cpf[4] - 48;
        cpf5 = (int)cpf[5] - 48;
        cpf6 = (int)cpf[6] - 48;
        cpf7 = (int)cpf[8] - 48;
        cpf8 = (int)cpf[9] - 48;
        cpf9 = (int)cpf[10] - 48;
        digito1 = (int)cpf[12] - 48;
        digito2 = (int)cpf[13] - 48;

        //Verificacao do primeiro digito

        soma = cpf1*10 + cpf2*9 + cpf3*8 + cpf4*7 + cpf5*6 + cpf6*5 + cpf7*4 + cpf8*3 + cpf9*2;
        resto = (soma*10)%11;

        //std::cout << "soma: " << soma << std::endl << "resto: " << resto << std::endl << "digito1: " << digito1 << std::endl;

        if(resto == 10){
            resto = 0;
            if(digito1 != resto){
                throw std::invalid_argument("CPF invalido.");
            }
        }
        else{
            if(digito1 != resto){
                throw std::invalid_argument("CPF invalido.");
            }
        }

        //Verificacao do segundo digito
        //soma = 0, resto = 0;
        soma = cpf1*11 + cpf2*10 + cpf3*9 + cpf4*8 + cpf5*7 + cpf6*6 + cpf7*5 + cpf8*4 + cpf9*3 + digito1*2;
        resto = (soma*10)%11;

        //std::cout << "soma: " << soma << std::endl << "resto: " << resto << std::endl << "digito2: " << digito2 << std::endl;

        if(resto == 10){
            resto = 0;
            if(digito2 != resto){
                throw std::invalid_argument("CPF invalido.");
            }
        }
        else{
            if(digito2 != resto){
                throw std::invalid_argument("CPF invalido.");
            }
        }
    }
}
void Cpf::setCpf(std::string cpf){
    validarCpf(cpf);
    this->cpf = cpf;
}
std::string Cpf::getCpf(){
    return this->cpf;
}


//Classe Data

bool Data::ano_bissexto(int ano){
    if (ano%4 == 0){
        if(ano%100 != 0) {
            return true;
        } else {
            if(ano%400 == 0){
                return true;
            } else {
                return false;
            }
        }
    } else{
        return false;
    }
}

void Data::validarData(std::string data){
    //bool dia_valido = true, mes_valido = true, ano_valido = true;

    int dia = stoi(data.substr(0, 2));
    int mes = stoi(data.substr(3, 2));
    int ano = stoi(data.substr(6));

    //Dia
    if(mes != 2){
        if(dia < 1 || dia > 31){
            throw std::invalid_argument("Data invalida.");
        }
    } else if (mes == 2) {
        //Ano bissexto
        if(ano_bissexto(ano) == true){
            if(dia < 1 || dia > 29){
                throw std::invalid_argument("Data invalida.");
            }
        } else {
            if(dia < 1 || dia > 28){
                throw std::invalid_argument("Data invalida.");
            }
        }
    }

    //Mês
    if(mes < 1 || mes > 12){
        throw std::invalid_argument("Data invalida.");
    }

    //Ano
    if (ano < 2020 || ano > 2099){
        throw std::invalid_argument("Data invalida.");
    }
}

void Data::setData(std::string data){
    validarData(data);
    this->data = data;
}

std::string Data::getData(){
    return this->data;
}


//Classe EMISSOR

void Emissor::validaCaracteres(std::string emissor){
    int i;
    for(i = 0; i < emissor.length(); i++){
        if(!((int)emissor[i] >= 48 && (int)emissor[i] <= 57)
           && !((int)emissor[i] >= 65 && (int)emissor[i] <= 90)
           && !((int)emissor[i] >= 97 && (int)emissor[i] <= 122)
           && emissor[i] != ' '
           && emissor[i] != '.'
           && emissor[i] != '-'){
                throw std::invalid_argument("Caracter invalido.");
           }
    }
}

void Emissor::validaMaiuscula(std::string emissor){
    if(((int)emissor[0] >= 65 && (int)emissor[0] <= 90)
        ||((int)emissor[0] >= 97 && (int)emissor[0] <= 122)){
            if(!((int)emissor[0] >= 65 && (int)emissor[0] <= 90)){
                throw std::invalid_argument("A primeira letra deve ser maiuscula.");
            }
    }
    int i;
    for(i = 0; i < emissor.length() - 1; i++){
        if(emissor[i] == ' ' || emissor[i] == '.' && !((int)emissor[i+1] >= 48 && (int)emissor[i+1] <= 57)){
            if(!((int)emissor[i+1] >= 65 && (int)emissor[i+1] <= 90)){
                throw std::invalid_argument("Termos devem iniciar com letra maiuscula.");
            }
        }
    }

}

void Emissor::validaSequencias(std::string emissor){
    int i;
    for(i = 0; i < emissor.length() - 1; i++){
        if(emissor[i] == ' ' || emissor[i] == '.' || emissor[i] == '-'){
            if(!((int)emissor[i+1] >= 65 && (int)emissor[i+1] <= 90)
                && !((int)emissor[i+1] >= 97 && (int)emissor[i+1] <= 122)
                && !((int)emissor[i+1] >= 48 && (int)emissor[i+1] <= 57)){
                    throw std::invalid_argument("Sequencia de caracteres invalida.");
            }
        }
    }
}

void Emissor::validarEmissor(std::string emissor){
    if(emissor.length() < 5 || emissor.length() > 30){
        throw std::invalid_argument("Tamanho invalido.");
    }
    validaCaracteres(emissor);
    validaMaiuscula(emissor);
    validaSequencias(emissor);
}

void Emissor::setEmissor(std::string emissor){
    validarEmissor(emissor);
    this->emissor = emissor;
}

std::string Emissor::getEmissor(){
    return this->emissor;
}


//Classe ENDERECO

void Endereco::validaCaracteres(std::string endereco){
    int i;
    for(i = 0; i < endereco.length(); i++){
        if(!((int)endereco[i] >= 48 && (int)endereco[i] <= 57)
           && !((int)endereco[i] >= 65 && (int)endereco[i] <= 90)
           && !((int)endereco[i] >= 97 && (int)endereco[i] <= 122)
           && endereco[i] != ' '
           && endereco[i] != '.'){
                throw std::invalid_argument("Caracter invalido.");
           }
    }
}

void Endereco::validaMaiuscula(std::string endereco){
    if(((int)endereco[0] >= 65 && (int)endereco[0] <= 90)
        ||((int)endereco[0] >= 97 && (int)endereco[0] <= 122)){
            if(!((int)endereco[0] >= 65 && (int)endereco[0] <= 90)){
                throw std::invalid_argument("A primeira letra deve ser maiuscula.");
            }
    }
    int i;
    for(i = 0; i < endereco.length() - 1; i++){
        if((endereco[i] == ' ' || endereco[i] == '.') && !((int)endereco[i+1] >= 48 && (int)endereco[i+1] <= 57)){
            if(!((int)endereco[i+1] >= 65 && (int)endereco[i+1] <= 90)){
                throw std::invalid_argument("Termos devem iniciar com letra maiuscula.");
            }
        }
    }
}

void Endereco::validaSequencias(std::string endereco){
    int i;
    for(i = 0; i < endereco.length() - 1; i++){
        if(endereco[i] == ' ' || endereco[i] == '.'){
            if(!((int)endereco[i+1] >= 65 && (int)endereco[i+1] <= 90)
                && !((int)endereco[i+1] >= 97 && (int)endereco[i+1] <= 122)
                && !((int)endereco[i+1] >= 48 && (int)endereco[i+1] <= 57)){
                    throw std::invalid_argument("Sequencia de caracteres invalida.");
            }
        }
    }
}

void Endereco::validarEndereco(std::string endereco){
    if(endereco.length() < 5 || endereco.length() > 20){
        throw std::invalid_argument("Tamanho invalido.");
    }
    validaCaracteres(endereco);
    validaSequencias(endereco);
    validaMaiuscula(endereco);
}

void Endereco::setEndereco(std::string endereco){
    validarEndereco(endereco);
    this->endereco = endereco;
}

std::string Endereco::getEndereco(){
    return this->endereco;
}



//Classe HORARIO

void Horario::validarHorario(std::string horario){
    int horas, minutos;
    horas = stoi(horario.substr(0, 2));
    minutos = stoi(horario.substr(3));

    if(horas < 13 || horas > 17){
        throw std::invalid_argument("Horario invalido.");
    }

    if(horas != HORA_MAXIMA){
        if(minutos < 0 || minutos > 59){
            throw std::invalid_argument("Horario invalido.");
        }
    }
    else if (horas == HORA_MAXIMA){
        if(minutos > 0){
            throw std::invalid_argument("Horario invalido.");
        }
    }
}
void Horario::setHorario(std::string horario){
    validarHorario(horario);
    this->horario = horario;
}
std::string Horario::getHorario(){
    return this->horario;
}


//Classe NOME

void Nome::validaCaracteres(std::string nome){
    int i;
    for(i = 0; i < nome.length(); i++){
        if(!((int)nome[i] >= 65 && (int)nome[i] <= 90)
           && !((int)nome[i] >= 97 && (int)nome[i] <= 122)
           && nome[i] != ' '){
            throw std::invalid_argument("Caracter invalido.");
        }
    }
}
void Nome::validaSequencias(std::string nome){
    int i;
    for(i = 0; i < nome.length() - 1; i++){
        if(nome[i] == ' '){
            if(nome[i+1] == ' '){
                throw std::invalid_argument("Sequencia de caracteres invalida.");
            }
        }
    }
}
void Nome::validaNumerodeLetras(std::string nome){
    int letras = 0, i;
    for(i = 0; i < nome.length(); i++){
        if(((int)nome[i] >= 65 && (int)nome[i] <= 90)
           || ((int)nome[i] >= 97 && (int)nome[i] <= 122)){
            letras++;
        }
    }
    if(letras < 5){
        throw std::invalid_argument("Numero de letras insuficiente.");
    }
}
void Nome::validaMaiuscula(std::string nome){
    if(!((int)nome[0] >= 65 && (int)nome[0] <= 90)){
        throw std::invalid_argument("Nomes devem iniciar com letra maiuscula");
    }
    int i;
    for(i = 0; i < nome.length() - 1; i++){
        if(nome[i] == ' '){
            if(!((int)nome[i+1] >= 65 && (int)nome[i+1] <= 90)){
                throw std::invalid_argument("Nomes devem iniciar com letra maiuscula.");
            }
        }
    }
}
void Nome::validarNome(std::string nome){
    if(nome.length() < 5 || nome.length() > 30){
        throw std::invalid_argument("Tamanho invalido.");
    }

    validaCaracteres(nome);
    validaSequencias(nome);
    validaNumerodeLetras(nome);
    validaMaiuscula(nome);
}
void Nome::setNome(std::string nome){
    validarNome(nome);
    this->nome = nome;
}
std::string Nome::getNome(){
    return this->nome;
}


//Classe NUMERO

int Numero::calculaDigito(std::string numero){
    int soma, resto, n1, n2, n3, n4, n5, n6, dv;

        n1 = (int)numero[0] - 48;
        n2 = (int)numero[1] - 48;
        n3 = (int)numero[2] - 48;
        n4 = (int)numero[3] - 48;
        n5 = (int)numero[4] - 48;
        n6 = (int)numero[5] - 48;

        //Calculo do digito

        soma = n1*7 + n2*6 + n3*5 + n4*4 + n5*3 + n6*2;
        resto = (soma*10)%11;

        if(resto == 10){
            resto = 0;
            return resto;
        }
        else {
            return resto;
        }
}

void Numero::verificarDigito(std::string numero){
     int soma, resto, n1, n2, n3, n4, n5, n6, dv;

        n1 = (int)numero[0] - 48;
        n2 = (int)numero[1] - 48;
        n3 = (int)numero[2] - 48;
        n4 = (int)numero[3] - 48;
        n5 = (int)numero[4] - 48;
        n6 = (int)numero[5] - 48;
        dv= (int)numero[7] - 48;


        //Verificacao do digito

        soma = n1*7 + n2*6 + n3*5 + n4*4 + n5*3 + n6*2;
        resto = (soma*10)%11;

        if(resto == 10){
            resto = 0;
            if(dv != resto){
                throw std::invalid_argument("Numero invalido.");
            }
        }
        else{
            if(dv != resto){
                throw std::invalid_argument("Numero invalido.");
            }
        }
}

void Numero::setNumero(std::string numero){
    verificarDigito(numero);
    this->numero = numero;
}
std::string Numero::getNumero(){
    return this->numero;
}


//Classe PRAZO

//Valores aceitos: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72.
void Prazo::validarPrazo(int prazo){
    if(prazo != 6 && prazo!= 12 && prazo!= 18 && prazo!= 24 && prazo!= 30
       && prazo!= 36 && prazo!= 42 && prazo!= 48 && prazo!= 54 && prazo!= 60 && prazo!= 66 && prazo!= 72){
        throw std::invalid_argument("Prazo invalido.");
    }
}
void Prazo::setPrazo(int prazo){
    validarPrazo(prazo);
    this->prazo = prazo;
}
int Prazo::getPrazo(){
    return this->prazo;
}


//Classe SENHA

void Senha::validarSenha(std::string senha){
    if(senha.length() != 6){
        throw std::invalid_argument("Senha muito curta.");
    }
    int i = 0, j = 0, frequencia[255];
    for(j = 0; j < 255; j++){
        frequencia[j] = 0;
    }
    for(i = 0; i < senha.length(); i++){
        if (!((int)senha[i] >= 48 && (int)senha[i] <= 57)){
            throw std::invalid_argument("Digito invalido.");
        }
        frequencia[senha[i]]++;
    }
    for(i = 0; i < 255; i++){
        if(frequencia[i] > 1){
            throw std::invalid_argument("Caracter repetido.");
        }
    }
}
void Senha::setSenha(std::string senha){
    validarSenha(senha);
    this->senha = senha;
}
std::string Senha::getSenha(){
    return this->senha;
}



//Classe TAXA

void Taxa::validarTaxa(int taxa){
    if(taxa < 0 || taxa > 200){
        throw std::invalid_argument("Taxa invalida.");
    }
}
void Taxa::setTaxa(int taxa){
    validarTaxa(taxa);
    this->taxa = taxa;
}
int Taxa::getTaxa(){
    return this->taxa;
}



//Classe VALOR_APLICACAO

const float Valor_Aplicacao::VALOR_MAXIMO = 1000000.00;

void Valor_Aplicacao::validarValor(float valor){
    if(valor < 0.0 || valor > VALOR_MAXIMO){
        throw std::invalid_argument("Valor invalido.");
    }
}
void Valor_Aplicacao::setValor(float valor){
    validarValor(valor);
    this->valor = valor;
}
float Valor_Aplicacao::getValor(){
    return this->valor;
}


//Classe VALOR_MINIMO

void Valor_Minimo::validarValor(float valor){
    if(valor != 1000.00 && valor != 5000.00 && valor != 10000 && valor != 50000.00){
        throw std::invalid_argument("Valor invalido.");
    }
}
void Valor_Minimo::setValor(float valor){
    validarValor(valor);
    this->valor = valor;
}
float Valor_Minimo::getValor(){
    return this->valor;
}
