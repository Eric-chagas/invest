#include <iostream>
#include "Dominios.h"
#include "TUDominios.h"
#include "TUEntidades.h"

using namespace std;

int main()
{

    //Teste Classe APLICACAO

    TUAplicacao* testeAplicacao = new TUAplicacao();

    if(testeAplicacao->run() == true){
        cout << "Classe \"APLICACAO\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"APLICACAO\" falhou! Erro na implementação." << endl;
    }

    delete testeAplicacao;


    //Teste Classe CONTA

    TUConta* testeConta = new TUConta();

    if(testeConta->run() == true){
        cout << "Classe \"CONTA\" testada com sucesso!" << endl;
    }
    else{
        cout << "Teste de \"CONTA\" falhou! Erro na implementação." << endl;
    }

    delete testeConta;



    //Teste classe PRODUTO

    TUProduto* testeProduto = new TUProduto();

    if(testeProduto->run() == true){
        cout << "Classe \"PRODUTO\" testada com sucesso!" << endl;
    }
    else{
        cout << "Teste de \"PRODUTO\" falhou! Erro na implementação." << endl;
    }

    delete testeProduto;




















/*
    //Teste classe CEP

    TUCep* testeCep = new TUCep();

    if(testeCep->run() == true){
        cout << "Classe \"CEP\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"CEP\" falhou! Erro na implementação." << endl;
    }

    delete testeCep;




    //Teste classe CLASSE

    TUClasse* testeClasse = new TUClasse();

    if(testeClasse->run() == true){
        cout << "Classe \"CLASSE\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"CLASSE\" falhou! Erro na implementação." << endl;
    }

    delete testeClasse;




    //Teste classe CODIGO_AGENCIA

    TUCodigo_Agencia* testeCodigoAgencia = new TUCodigo_Agencia();

    if(testeCodigoAgencia->run() == true){
        cout << "Classe \"Codigo_Agencia\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Codigo_Agencia\" falhou! Erro na implementação." << endl;
    }

    delete testeCodigoAgencia;



    //Teste classe CODIGO_APLICACAO

    TUCodigo_Aplicacao* testeCodigoAplicacao = new TUCodigo_Aplicacao();

    if(testeCodigoAplicacao->run() == true){
        cout << "Classe \"Codigo_Aplicacao\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Codigo_Aplicacao\" falhou! Erro na implementação." << endl;
    }

    delete testeCodigoAplicacao;



    //Teste classe CODIGO_BANCO

    TUCodigo_Banco* testeCodigoBanco = new TUCodigo_Banco();

    if(testeCodigoBanco->run() == true){
        cout << "Classe \"Codigo_Banco\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Codigo_Banco\" falhou! Erro na implementação." << endl;
    }

    delete testeCodigoBanco;



    //Teste classe Codigo_Produto

    TUCodigo_Produto* testeCodigoProduto = new TUCodigo_Produto();

    if(testeCodigoProduto->run() == true){
        cout << "Classe \"Codigo_Produto\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Codigo_Produto\" falhou! Erro na implementação." << endl;
    }

    delete testeCodigoProduto;


    //Teste Classe CPF

    TUCpf* testeCpf = new TUCpf();

    if(testeCpf->run() == true){
        cout << "Classe \"CPF\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"CPF\" falhou! Erro na implmentação." << endl;
    }

    delete testeCpf;


    //Teste Classe DATA

    TUData* testeData = new TUData();

    if(testeData->run() == true){
        cout << "Classe \"Data\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Data\" falhou! Erro na implmentação." << endl;
    }

    delete testeData;


    //Teste Classe EMISSOR

    TUEmissor* testeEmissor = new TUEmissor();

    if(testeEmissor->run() == true){
        cout << "Classe \"Emissor\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Emissor\" falhou! Erro na implmentação." << endl;
    }

    delete testeEmissor;


    //Teste Classe ENDERECO

    TUEndereco* testeEndereco = new TUEndereco();

    if(testeEndereco->run() == true){
        cout << "Classe \"Endereco\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Endereco\" falhou! Erro na implmentação." << endl;
    }

    delete testeEndereco;


    //Teste Classe HORARIO

    TUHorario* testeHorario = new TUHorario();

    if(testeHorario->run() == true){
        cout << "Classe \"Horario\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Horario\" falhou! Erro na implmentação." << endl;
    }

    delete testeHorario;


    //Teste Classe NOME

    TUNome* testeNome = new TUNome();

    if(testeNome->run() == true){
        cout << "Classe \"Nome\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Nome\" falhou! Erro na implmentação." << endl;
    }

    delete testeNome;



    //Teste Classe NUMERO

    TUNumero* testeNumero = new TUNumero();

    if(testeNumero->run() == true){
        cout << "Classe \"Numero\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Numero\" falhou! Erro na implmentação." << endl;
    }

    delete testeNumero;


    //Teste Classe PRAZO

    TUPrazo* testePrazo = new TUPrazo();

    if(testePrazo->run() == true){
        cout << "Classe \"Prazo\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Prazo\" falhou! Erro na implmentação." << endl;
    }

    delete testePrazo;


    //Teste Classe SENHA

    TUSenha* testeSenha = new TUSenha();

    if(testeSenha->run() == true){
        cout << "Classe \"Senha\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Senha\" falhou! Erro na implmentação." << endl;
    }

    delete testeSenha;


    //Teste Classe TAXA

    TUTaxa* testeTaxa = new TUTaxa();

    if(testeTaxa->run() == true){
        cout << "Classe \"Taxa\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Taxa\" falhou! Erro na implmentação." << endl;
    }

    delete testeTaxa;


    //Teste Classe VALOR_APLICACAO

    TUValor_Aplicacao* testeValor_Aplicacao = new TUValor_Aplicacao();

    if(testeValor_Aplicacao->run() == true){
        cout << "Classe \"Valor_Aplicacao\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Valor_Aplicacao\" falhou! Erro na implmentação." << endl;
    }

    delete testeValor_Aplicacao;


    //Teste Classe VALOR_MINIMO

    TUValor_Minimo* testeValor_Minimo = new TUValor_Minimo();

    if(testeValor_Minimo->run() == true){
        cout << "Classe \"Valor_Minimo\" testada com sucesso!" << endl;
    }
    else {
        cout << "Teste de \"Valor_Minimo\" falhou! Erro na implmentação." << endl;
    }

    delete testeValor_Minimo;


*/

    return 0;

}

