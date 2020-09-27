#include "Dominios.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

//Lembrar de acrescentar os comentarios doxygen.

//Classe CEP

void Cep::validar(int cep){
    if (!((cep >= MIN_1_SP && cep <= MAX_1_SP)
          || (cep >= MIN_2_SP && cep <= MAX_2_SP)
          || (cep >= MIN_RJ && cep <= MAX_RJ)
          || (cep >= MIN_DF && cep <= MAX_DF)
          || (cep >= MIN_SSA && cep <= MAX_SSA)
          || (cep >= MIN_FOR && cep <= MAX_FOR))){
                throw invalid_argument("Cep invalido.");
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
            throw invalid_argument("Classe invalida.");
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
            throw invalid_argument("Codigo de Agencia invalido.");
        }
    }
}
void Codigo_Agencia::validar(std::string codigo){
    if (codigo.length() != 4 || codigo.compare(COD_INVALIDO) == 0){
        throw invalid_argument("Codigo de Agencia invalido.");
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
            throw invalid_argument("Codigo de Aplicacao invalido.");
        }
    }
}
void Codigo_Aplicacao::validar(std::string codigo){
    if (codigo.length() != 5 || codigo.compare(COD_INVALIDO) == 0) {
        throw invalid_argument("Codigo de Aplicacao invalido.");
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
            throw invalid_argument("Codigo de Banco invalido.");
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
            throw invalid_argument("Codigo de Produto invalido.");
        }
    }
}
void Codigo_Produto::validar(std::string codigo){
    if (codigo.length() != 3 || codigo.compare(COD_INVALIDO) == 0) {
        throw invalid_argument("Codigo de Produto invalido.");
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



