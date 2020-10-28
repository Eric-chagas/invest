#include "TUEntidades.h"
#include "Dominios.h"
#include "Entidades.h"

//Classe TUAPlicacao

const std::string TUAplicacao::CODIGO_VALIDO = "56689";
const float TUAplicacao::VALOR_VALIDO = 658000.34;
const std::string TUAplicacao::DATA_VALIDA = "29/02/2024";
const std::string TUAplicacao::CODIGO_INVALIDO = "00000";
const float TUAplicacao::VALOR_INVALIDO = 56000000.98;
const std::string TUAplicacao::DATA_INVALIDA = "29/02/2021";

void TUAplicacao::construir(){
    a1 = new Aplicacao();
    sucesso = true;
}

void TUAplicacao::testarSucessoCodigo(){
    try {
        a1->setCodigo(CODIGO_VALIDO);
        if(a1->getCodigo() != CODIGO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUAplicacao::testarFalhaCodigo(){
    try {
        a1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUAplicacao::testarSucessoValor(){
    try {
        a1->setValor(VALOR_VALIDO);
        if(a1->getValor() != VALOR_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUAplicacao::testarFalhaValor(){
    try{
        a1->setValor(VALOR_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUAplicacao::testarSucessoData(){
    try{
        a1->setData(DATA_VALIDA);
        if(a1->getData() != DATA_VALIDA){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUAplicacao::testarFalhaData(){
    try {
        a1->setData(DATA_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUAplicacao::testarMetodos(){
    testarSucessoCodigo();
    testarFalhaCodigo();
    testarSucessoValor();
    testarFalhaValor();
    testarSucessoData();
    testarFalhaData();
}

void TUAplicacao::destruir(){
    delete a1;
}
bool TUAplicacao::run(){
    construir();
    testarMetodos();
    destruir();

    return sucesso;
}
