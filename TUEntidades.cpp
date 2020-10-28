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


//Classe TUConta

const std::string TUConta::BANCO_VALIDO = "341";
const std::string TUConta::AGENCIA_VALIDA = "4223";
const std::string TUConta::NUMERO_VALIDO = "546688-1";
const std::string TUConta::BANCO_INVALIDO = "786";
const std::string TUConta::AGENCIA_INVALIDA = "0000";
const std::string TUConta::NUMERO_INVALIDO = "984235-2";

void TUConta::construir(){
    a1 = new Conta();
    sucesso = true;
}

void TUConta::testarSucessoBanco(){
    try {
        a1->setBanco(BANCO_VALIDO);
        if(a1->getBanco() != BANCO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUConta::testarFalhaBanco(){
    try {
        a1->setBanco(BANCO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUConta::testarSucessoAgencia(){
    try{
        a1->setAgencia(AGENCIA_VALIDA);
        if(a1->getAgencia() != AGENCIA_VALIDA){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUConta::testarFalhaAgencia(){
    try{
        a1->setAgencia(AGENCIA_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUConta::testarSucessoNumero(){
    try{
        a1->setNumero(NUMERO_VALIDO);
        if(a1->getNumero() != NUMERO_VALIDO){
            sucesso = false;
        }
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUConta::testarFalhaNumero(){
    try{
        a1->setNumero(NUMERO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUConta::testarMetodos(){
    testarSucessoBanco();
    testarFalhaBanco();
    testarSucessoAgencia();
    testarFalhaAgencia();
    testarSucessoNumero();
    testarFalhaNumero();
}
void TUConta::destruir(){
    delete a1;
}


bool TUConta::run(){
    construir();
    testarMetodos();
    destruir();
    return sucesso;
}


//Classe TUProduto

const std::string TUProduto::CODIGO_VALIDO = "566";
const std::string TUProduto::CLASSE_VALIDA = "LCA";
const std::string TUProduto::EMISSOR_VALIDO = "Secretaria-d E.Seguranca02.";
const int TUProduto::PRAZO_VALIDO = 36;
const std::string TUProduto::VENCIMENTO_VALIDO = "30/11/2057";
const int TUProduto::TAXA_VALIDA = 150;
const std::string TUProduto::HORARIO_VALIDO = "17:00";
const float TUProduto::VALOR_VALIDO = 10000.00;

const std::string TUProduto::CODIGO_INVALIDO = "000";
const std::string TUProduto::CLASSE_INVALIDA = "CDM";
const std::string TUProduto::EMISSOR_INVALIDO = "//&^%$#//caracter estranho";
const int TUProduto::PRAZO_INVALIDO = 59;
const std::string TUProduto::VENCIMENTO_INVALIDO = "29/02/1993";
const int TUProduto::TAXA_INVALIDA = 480;
const std::string TUProduto::HORARIO_INVALIDO = "22:30";
const float TUProduto::VALOR_INVALIDO = 28790.34;

void TUProduto::construir(){
    a1 = new Produto();
    sucesso = true;
}

void TUProduto::testarSucessoCodigo(){
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
void TUProduto::testarFalhaCodigo(){
    try{
        a1->setCodigo(CODIGO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoClasse(){
    try{
        a1->setClasse(CLASSE_VALIDA);
        if(a1->getClasse() != CLASSE_VALIDA){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaClasse(){
    try{
        a1->setClasse(CLASSE_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e) {
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoEmissor(){
    try{
        a1->setEmissor(EMISSOR_VALIDO);
        if(a1->getEmissor() != EMISSOR_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaEmissor(){
    try{
        a1->setEmissor(EMISSOR_INVALIDO);
        sucesso = false;
    }
    catch (std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoPrazo(){
    try{
        a1->setPrazo(PRAZO_VALIDO);
        if(a1->getPrazo() != PRAZO_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaPrazo(){
    try{
        a1->setPrazo(PRAZO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoVencimento(){
    try{
        a1->setVencimento(VENCIMENTO_VALIDO);
        if(a1->getVencimento() != VENCIMENTO_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaVencimento(){
    try{
        a1->setVencimento(VENCIMENTO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoTaxa(){
    try{
        a1->setTaxa(TAXA_VALIDA);
        if(a1->getTaxa() != TAXA_VALIDA){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaTaxa(){
    try{
        a1->setTaxa(TAXA_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoHorario(){
    try{
        a1->setHorario(HORARIO_VALIDO);
        if(a1->getHorario() != HORARIO_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaHorario(){
    try{
        a1->setHorario(HORARIO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarSucessoValor(){
    try{
        a1->setValor(VALOR_VALIDO);
        if(a1->getValor() != VALOR_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUProduto::testarFalhaValor(){
    try{
        a1->setValor(VALOR_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUProduto::testarMetodos(){
    testarSucessoCodigo();
    testarFalhaCodigo();
    testarSucessoClasse();
    testarFalhaClasse();
    testarSucessoEmissor();
    testarFalhaEmissor();
    testarSucessoPrazo();
    testarFalhaPrazo();
    testarSucessoVencimento();
    testarFalhaVencimento();
    testarSucessoTaxa();
    testarFalhaTaxa();
    testarSucessoHorario();
    testarFalhaHorario();
    testarSucessoValor();
    testarFalhaValor();
}
void TUProduto::destruir(){
    delete a1;
}

bool TUProduto::run(){
    construir();
    testarMetodos();
    destruir();
    return sucesso;
}



//Classe TUUsuario

const std::string TUUsuario::NOME_VALIDO = "Jane Doe";
const std::string TUUsuario::ENDERECO_VALIDO = "St.Johns Wood02";
const int TUUsuario::CEP_VALIDO = 8002056;
const std::string TUUsuario::CPF_VALIDO = "530.434.130-91";
const std::string TUUsuario::SENHA_VALIDA = "102934";

const std::string TUUsuario::NOME_INVALIDO = "E3 L3tr4";
const std::string TUUsuario::ENDERECO_INVALIDO = "o!h d4rlng ..----  ";
const int TUUsuario::CEP_INVALIDO = 9405010;
const std::string TUUsuario::CPF_INVALIDO = "342.434.000-25";
const std::string TUUsuario::SENHA_INVALIDA = "222111";

void TUUsuario::construir(){
    a1 = new Usuario();
    sucesso = true;
}

void TUUsuario::testarSucessoNome(){
    try {
        a1->setNome(NOME_VALIDO);
        if(a1->getNome() != NOME_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUUsuario::testarFalhaNome(){
    try {
        a1->setNome(NOME_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUUsuario::testarSucessoEndereco(){
    try {
        a1->setEndereco(ENDERECO_VALIDO);
        if(a1->getEndereco() != ENDERECO_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUUsuario::testarFalhaEndereco(){
    try {
        a1->setEndereco(ENDERECO_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUUsuario::testarSucessoCep(){
    try {
        a1->setCep(CEP_VALIDO);
        if(a1->getCep() != CEP_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUUsuario::testarFalhaCep(){
    try {
        a1->setCep(CEP_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUUsuario::testarSucessoCpf(){
    try {
        a1->setCpf(CPF_VALIDO);
        if(a1->getCpf() != CPF_VALIDO){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUUsuario::testarFalhaCpf(){
    try {
        a1->setCpf(CPF_INVALIDO);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUUsuario::testarSucessoSenha(){
    try {
        a1->setSenha(SENHA_VALIDA);
        if(a1->getSenha() != SENHA_VALIDA){
            sucesso = false;
        }
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
        sucesso = false;
    }
}
void TUUsuario::testarFalhaSenha(){
    try {
        a1->setSenha(SENHA_INVALIDA);
        sucesso = false;
    }
    catch(std::invalid_argument &e){
        descr_except = e.what();
    }
}

void TUUsuario::testarMetodos(){
    testarSucessoNome();
    testarFalhaNome();

    testarSucessoEndereco();
    testarFalhaEndereco();

    testarSucessoCep();
    testarFalhaCep();

    testarSucessoCpf();
    testarFalhaCpf();

    testarSucessoSenha();
    testarFalhaSenha();
}
void TUUsuario::destruir(){
    delete a1;
}
bool TUUsuario::run(){
    construir();
    testarMetodos();
    destruir();

    return sucesso;
}
