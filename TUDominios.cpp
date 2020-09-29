#include "TUDominios.h"

// Classe TUCEP

void TUCep::construir(){
    c1 = new Cep();
    sucesso = true;
}
void TUCep::testarSucesso(){
    try {
        c1->setCep(CEP_VALIDO);
        if(c1->getCep() != CEP_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCep::testarFalha(){
    try {
        c1->setCep(CEP_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCep::destruir(){
    delete c1;
}
bool TUCep::run(){

    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUClasse

//Valor valido 1 para Classe.
const std::string TUClasse::CLASSE_1_VALIDA = "LCA";
//Valor valido 2 para Classe.
const std::string TUClasse::CLASSE_2_VALIDA = "LF";
//Valor invalido para Classe.
const std::string TUClasse::CLASSE_INVALIDA = "CDM";

void TUClasse::construir(){
    c1 = new Classe();
    sucesso = true;
}
void TUClasse::testarSucesso1(){
    try {
        c1->setClasse(CLASSE_1_VALIDA);
        if(c1->getClasse() != CLASSE_1_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUClasse::testarSucesso2(){
    try {
        c1->setClasse(CLASSE_2_VALIDA);
        if(c1->getClasse() != CLASSE_2_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUClasse::testarFalha(){
    try {
        c1->setClasse(CLASSE_INVALIDA);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUClasse::destruir(){
    delete c1;
}
bool TUClasse::run(){

    construir();
    testarSucesso1();
    testarSucesso2();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUCODIGO_AGENCIA

//Valor valido para Codigo_Agencia
const std::string TUCodigo_Agencia::CODIGO_VALIDO = "4223";
//Valor invalido para Codigo_Agencia
const std::string TUCodigo_Agencia::CODIGO_INVALIDO = "0000";

void TUCodigo_Agencia::construir(){
    c1 = new Codigo_Agencia();
    sucesso = true;
}
void TUCodigo_Agencia::testarSucesso(){
    try {
        c1->setCodigo(CODIGO_VALIDO);
        if(c1->getCodigo() != CODIGO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCodigo_Agencia::testarFalha(){
    try {
        c1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCodigo_Agencia::destruir(){
    delete c1;
}
bool TUCodigo_Agencia::run(){
    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUCODIGO_APLICACAO

//Valor valido para Codigo_Aplicacao
const std::string TUCodigo_Aplicacao::CODIGO_VALIDO = "56689";
//Valor invalido para Codigo_Aplicacao
const std::string TUCodigo_Aplicacao::CODIGO_INVALIDO = "00000";

void TUCodigo_Aplicacao::construir(){
    c1 = new Codigo_Aplicacao();
    sucesso = true;
}
void TUCodigo_Aplicacao::testarSucesso(){
    try {
        c1->setCodigo(CODIGO_VALIDO);
        if(c1->getCodigo() != CODIGO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCodigo_Aplicacao::testarFalha(){
    try {
        c1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCodigo_Aplicacao::destruir(){
    delete c1;
}
bool TUCodigo_Aplicacao::run(){
    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}


//Classe TUCodigo_Banco

//Valor valido para Codigo_banco
const std::string TUCodigo_Banco::CODIGO_1_VALIDO = "001";
//Valor valido para Codigo_banco
const std::string TUCodigo_Banco::CODIGO_2_VALIDO = "341";
//Valor invalido para Codigo_banco
const std::string TUCodigo_Banco::CODIGO_INVALIDO = "786";

void TUCodigo_Banco::construir(){
    c1 = new Codigo_Banco();
    sucesso = true;
}
void TUCodigo_Banco::testarSucesso1(){
    try {
        c1->setCodigo(CODIGO_1_VALIDO);
        if(c1->getCodigo() != CODIGO_1_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCodigo_Banco::testarSucesso2(){
    try {
        c1->setCodigo(CODIGO_2_VALIDO);
        if(c1->getCodigo() != CODIGO_2_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCodigo_Banco::testarFalha(){
    try {
        c1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCodigo_Banco::destruir(){
    delete c1;
}
bool TUCodigo_Banco::run(){
    construir();
    testarSucesso1();
    testarSucesso2();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUCodigo_Produto

//Valor valido para Codigo_Produto
const std::string TUCodigo_Produto::CODIGO_VALIDO = "566";
//Valor invalido para Codigo_Produto
const std::string TUCodigo_Produto::CODIGO_INVALIDO = "000";

void TUCodigo_Produto::construir(){
    c1 = new Codigo_Produto();
    sucesso = true;
}
void TUCodigo_Produto::testarSucesso(){
    try {
        c1->setCodigo(CODIGO_VALIDO);
        if(c1->getCodigo() != CODIGO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCodigo_Produto::testarFalha(){
    try {
        c1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCodigo_Produto::destruir(){
    delete c1;
}
bool TUCodigo_Produto::run(){
    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}


//Classe TUCpf

//Valor valido para Cpf
const std::string TUCpf::CPF_VALIDO = "530.434.130-91";
//Valor invalido para Cpf
const std::string TUCpf::CPF_1_INVALIDO = "444.444.444-44";
//Valor invalido para Cpf
const std::string TUCpf::CPF_2_INVALIDO = "342.434.000-25";

void TUCpf::construir(){
    c1 = new Cpf();
    sucesso = true;
}
void TUCpf::testarSucesso(){
    try {
        c1->setCpf(CPF_VALIDO);
        if(c1->getCpf() != CPF_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUCpf::testarFalha1(){
    try {
        c1->setCpf(CPF_1_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCpf::testarFalha2(){
    try {
        c1->setCpf(CPF_2_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUCpf::destruir(){
    delete c1;
}
bool TUCpf::run(){

    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    destruir();

    return sucesso;
}



//Classe TUData

//Valor valido para Data
const std::string TUData::DATA_VALIDA = "30/11/2057";
//Valor valido para Data
const std::string TUData::ANO_BISSEXTO = "29/02/2024";
//Valor invalido para Data
const std::string TUData::DATA_INVALIDA = "29/02/2021";

void TUData::construir(){
    c1 = new Data();
    sucesso = true;
}
void TUData::testarSucesso(){
    try {
        c1->setData(DATA_VALIDA);
        if(c1->getData() != DATA_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUData::testarBissexto(){
    try {
        c1->setData(ANO_BISSEXTO);
        if(c1->getData() != ANO_BISSEXTO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUData::testarFalha(){
    try {
        c1->setData(DATA_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUData::destruir(){
    delete c1;
}
bool TUData::run(){

    construir();
    testarSucesso();
    testarBissexto();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUEmissor

//Valor valido para Emissor
const std::string TUEmissor::EMISSOR_VALIDO = "Secretaria-d E.Seguranca02.";
//Valor invalido para Emissor
const std::string TUEmissor::EMISSOR_1_INVALIDO = "//&^%$#//caracter estranho";
//Valor invalido para Emissor
const std::string TUEmissor::EMISSOR_2_INVALIDO = "espacos   .. ----  sequenciais";
//Valor invalido para Emissor
const std::string TUEmissor::EMISSOR_3_INVALIDO = "lETRA mINUSCULA NAO PODE";
//Valor invalido para Emissor
const std::string TUEmissor::EMISSOR_4_INVALIDO = "longooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";

void TUEmissor::construir(){
    c1 = new Emissor();
    sucesso = true;
}
void TUEmissor::destruir(){
    delete c1;
}
void TUEmissor::testarSucesso(){
    try {
        c1->setEmissor(EMISSOR_VALIDO);
        if(c1->getEmissor() != EMISSOR_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUEmissor::testarFalha1(){
    try {
        c1->setEmissor(EMISSOR_1_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEmissor::testarFalha2(){
    try {
        c1->setEmissor(EMISSOR_2_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEmissor::testarFalha3(){
    try {
        c1->setEmissor(EMISSOR_3_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEmissor::testarFalha4(){
    try {
        c1->setEmissor(EMISSOR_4_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
bool TUEmissor::run(){
    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    testarFalha3();
    testarFalha4();
    destruir();

    return sucesso;
}


//Classe TUEndereco

//Valor valido para Endereco
const std::string TUEndereco::ENDERECO_VALIDO = "St.Johns Wood02";
//Valor invalido para Endereco
const std::string TUEndereco::ENDERECO_1_INVALIDO = "//&^%$#/ABBEY.Rd";
//Valor invalido para Endereco
const std::string TUEndereco::ENDERECO_2_INVALIDO = "o!h d4rlng ..----  ";
//Valor invalido para Endereco
const std::string TUEndereco::ENDERECO_3_INVALIDO = "b3CUZ C aaa";
//Valor invalido para Endereco
const std::string TUEndereco::ENDERECO_4_INVALIDO = "shor";

void TUEndereco::construir(){
    c1 = new Endereco();
    sucesso = true;
}
void TUEndereco::destruir(){
    delete c1;
}
void TUEndereco::testarSucesso(){
    try {
        c1->setEndereco(ENDERECO_VALIDO);
        if(c1->getEndereco() != ENDERECO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUEndereco::testarFalha1(){
    try {
        c1->setEndereco(ENDERECO_1_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEndereco::testarFalha2(){
    try {
        c1->setEndereco(ENDERECO_2_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEndereco::testarFalha3(){
    try {
        c1->setEndereco(ENDERECO_3_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUEndereco::testarFalha4(){
    try {
        c1->setEndereco(ENDERECO_4_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
bool TUEndereco::run(){
    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    testarFalha3();
    testarFalha4();
    destruir();

    return sucesso;
}



//Classe TUHorario

//Valor valido para Horario
const std::string TUHorario::HORARIO_1_VALIDO = "13:00";
//Valor valido para Horario
const std::string TUHorario::HORARIO_2_VALIDO = "17:00";
//Valor valido para Horario
const std::string TUHorario::HORARIO_3_VALIDO = "15:39";
//Valor invalido para Horario
const std::string TUHorario::HORARIO_INVALIDO = "22:30";

void TUHorario::construir(){
    c1 = new Horario();
    sucesso = true;
}
void TUHorario::testarSucesso1(){
    try {
        c1->setHorario(HORARIO_1_VALIDO);
        if(c1->getHorario() != HORARIO_1_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUHorario::testarSucesso2(){
    try {
        c1->setHorario(HORARIO_2_VALIDO);
        if(c1->getHorario() != HORARIO_2_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUHorario::testarSucesso3(){
    try {
        c1->setHorario(HORARIO_3_VALIDO);
        if(c1->getHorario() != HORARIO_3_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUHorario::testarFalha(){
    try{
        c1->setHorario(HORARIO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUHorario::destruir(){
    delete c1;
}
bool TUHorario::run(){
    construir();
    testarSucesso1();
    testarSucesso2();
    testarSucesso3();
    testarFalha();
    destruir();

    return sucesso;
}




//Classe TUNome

//Valor valido para Nome
const std::string TUNome::NOME_VALIDO = "Jane Doe";
//Valor invalido para Nome
const std::string TUNome::NOME_1_INVALIDO = "Meu.n00me";
//Valor invalido para Nome
const std::string TUNome::NOME_2_INVALIDO = "  Espacoso  Aqui";
//Valor invalido para Nome
const std::string TUNome::NOME_3_INVALIDO = "Nome comum";
//Valor invalido para Nome
const std::string TUNome::NOME_4_INVALIDO = "E3 L3tr4";

void TUNome::construir(){
    c1 = new Nome();
    sucesso = true;
}
void TUNome::destruir(){
    delete c1;
}
void TUNome::testarSucesso(){
    try {
        c1->setNome(NOME_VALIDO);
        if(c1->getNome() != NOME_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUNome::testarFalha1(){
    try {
        c1->setNome(NOME_1_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUNome::testarFalha2(){
    try {
        c1->setNome(NOME_2_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUNome::testarFalha3(){
    try {
        c1->setNome(NOME_3_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUNome::testarFalha4(){
    try {
        c1->setNome(NOME_4_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
bool TUNome::run(){
    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    testarFalha3();
    testarFalha4();
    destruir();

    return sucesso;
}



//Classe TUNumero

//Valor valido para Numero
const std::string TUNumero::NUMERO_VALIDO = "546688-1";
//Valor invalido para Numero
const std::string TUNumero::NUMERO_1_INVALIDO = "466713-9";
//Valor invalido para Numero
const std::string TUNumero::NUMERO_2_INVALIDO = "984235-2";

void TUNumero::construir(){
    c1 = new Numero();
    sucesso = true;
}
void TUNumero::testarSucesso(){
    try {
        c1->setNumero(NUMERO_VALIDO);
        if(c1->getNumero() != NUMERO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUNumero::testarFalha1(){
    try {
        c1->setNumero(NUMERO_1_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUNumero::testarFalha2(){
    try {
        c1->setNumero(NUMERO_2_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUNumero::destruir(){
    delete c1;
}
bool TUNumero::run(){

    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    destruir();

    return sucesso;
}



// Classe TUPrazo

void TUPrazo::construir(){
    c1 = new Prazo();
    sucesso = true;
}
void TUPrazo::testarSucesso(){
    try {
        c1->setPrazo(PRAZO_VALIDO);
        if(c1->getPrazo() != PRAZO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUPrazo::testarFalha(){
    try {
        c1->setPrazo(PRAZO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUPrazo::destruir(){
    delete c1;
}
bool TUPrazo::run(){

    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}



//Classe TUSenha

//Valor valido para Senha
const std::string TUSenha::SENHA_VALIDA = "102934";
//Valor invalido para Senha
const std::string TUSenha::SENHA_1_INVALIDA = "9283Ab";
//Valor invalido para Senha
const std::string TUSenha::SENHA_2_INVALIDA = "222111";

void TUSenha::construir(){
    c1 = new Senha();
    sucesso = true;
}
void TUSenha::destruir(){
    delete c1;
}
void TUSenha::testarSucesso(){
    try {
        c1->setSenha(SENHA_VALIDA);
        if(c1->getSenha() != SENHA_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUSenha::testarFalha1(){
    try {
        c1->setSenha(SENHA_1_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUSenha::testarFalha2(){
    try {
        c1->setSenha(SENHA_2_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}
bool TUSenha::run(){
    construir();
    testarSucesso();
    testarFalha1();
    testarFalha2();
    destruir();

    return sucesso;
}



// Classe TUTaxa

void TUTaxa::construir(){
    c1 = new Taxa();
    sucesso = true;
}
void TUTaxa::testarSucesso(){
    try {
        c1->setTaxa(TAXA_VALIDA);
        if(c1->getTaxa() != TAXA_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUTaxa::testarFalha(){
    try {
        c1->setTaxa(TAXA_INVALIDA);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUTaxa::destruir(){
    delete c1;
}
bool TUTaxa::run(){

    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}



// Classe TUValor_Aplicacao

void TUValor_Aplicacao::construir(){
    c1 = new Valor_Aplicacao();
    sucesso = true;
}
void TUValor_Aplicacao::testarSucesso(){
    try {
        c1->setValor(VALOR_APLICACAO_VALIDO);
        if(c1->getValor() != VALOR_APLICACAO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUValor_Aplicacao::testarFalha(){
    try {
        c1->setValor(VALOR_APLICACAO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUValor_Aplicacao::destruir(){
    delete c1;
}
bool TUValor_Aplicacao::run(){

    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}


// Classe TUValor_Minimo

void TUValor_Minimo::construir(){
    c1 = new Valor_Minimo();
    sucesso = true;
}
void TUValor_Minimo::testarSucesso(){
    try {
        c1->setValor(VALOR_MINIMO_VALIDO);
        if(c1->getValor() != VALOR_MINIMO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUValor_Minimo::testarFalha(){
    try {
        c1->setValor(VALOR_MINIMO_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}
void TUValor_Minimo::destruir(){
    delete c1;
}
bool TUValor_Minimo::run(){

    construir();
    testarSucesso();
    testarFalha();
    destruir();

    return sucesso;
}


