#include <iostream>
#include "Dominios.h"

using namespace std;

int main()
{
    /* TESTE CLASSE CEP
    Cep c1;

    try{
        c1.setCep(70337080);
        cout << "Sucesso." << endl;
    }
    catch(invalid_argument &e){
        cout << "Excecao: " << e.what() << endl;
    }

    cout << "Cep: " << c1.getCep() << endl;
    */

    /*TESTE CLASSE CLASSE
    Classe cl1;
    string a = "-1";
    while (a.compare("0") != 0){
            cout << "insira a: ";
            cin >> a;
        try {
            cl1.setClasse(a);
            cout << "sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "classe: " << cl1.getClasse() << endl;
    }
    */

    /*TESTE CLASSE CODIGO_AGENCIA
    Codigo_Agencia co1;
    string a = "-1";
    while (a.compare("0") != 0){
            cout << "insira a: ";
            cin >> a;
        try {
            co1.setCodigo(a);
            cout << "sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "codigo: " << co1.getCodigo() << endl;
    }
    */

    /*TESTE CLASSE CODIGO_APLICACAO
    Codigo_Aplicacao co1;
    string a = "-1";
    while (a.compare("0") != 0){
            cout << "insira a: ";
            cin >> a;
        try {
            co1.setCodigo(a);
            cout << "sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "codigo: " << co1.getCodigo() << endl;
    }
    */

    /*TESTE CLASSE CODIGO_BANCO
    Codigo_Banco co1;
    string a = "-1";
    while (a.compare("0") != 0){
            cout << "insira a: ";
            cin >> a;
        try {
            co1.setCodigo(a);
            cout << "sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "codigo: " << co1.getCodigo() << endl;
    }
    */

    /*TESTE CLASSE CODIGO_PRODUTO


    Codigo_Produto co1;
    string a = "-1";
    while (a.compare("0") != 0){
            cout << "insira a: ";
            cin >> a;
        try {
            co1.setCodigo(a);
            cout << "sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "codigo: " << co1.getCodigo() << endl;
    }
    */

    /*TESTE CLASSE CPF
    Cpf c1;
    string a = "-1";

    while(a.compare("0") != 0){
        cout << "insira a: ";
        cin >> a;

        try {
            c1.setCpf(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "cpf: " << c1.getCpf() << endl;
    }
    */

    /*TESTE CLASSE DATA
    Data d1;
    string a = "-1";

    while(a.compare("0") != 0){
        cout << "insira a data: ";
        cin >> a;

        try {
            d1.setData(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "data: " << d1.getData() << endl;
    }
    */

    /*TESTE CLASSE EMISSOR
    Emissor e1;

    try {
        e1.setEmissor("Alo  alo");
        cout << "Sucesso." << endl;
    }
    catch (invalid_argument &e) {
        cout << "Excecao: " << e.what() << endl;
    }

    cout << "emissor: " << e1.getEmissor() << endl;

    */

    /*TESTE CLASSE ENDERECO
    Endereco e1;

    try {
        e1.setEndereco("SQS 304 Bloco  H.");
        cout << "Sucesso." << endl;
    }
    catch (invalid_argument &e) {
        cout << "Excecao: " << e.what() << endl;
    }

    cout << "endereco: " << e1.getEndereco() << endl;

    */

    /*TESTE CLASSE HORARIO
    Horario d1;
    string a = "-1";

    while(a.compare("0") != 0){
        cout << "insira o Horario: ";
        cin >> a;

        try {
            d1.setHorario(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "Horario: " << d1.getHorario() << endl;
    }

    */


    /*TESTE CLASSE NOME
    Nome n1;

    try {
        n1.setNome("Julia P");
        cout << "Sucesso." << endl;
    }
    catch (invalid_argument &e) {
        cout << "Excecao: " << e.what() << endl;
    }

    cout << "nome: " << n1.getNome() << endl;

    */

    /*TESTE CLASSE NUMERO
    Numero n1;
    string a = "-1";

    cout << n1.calculaDigito("546688") <<endl;

    while(a.compare("0") != 0){
        cout << "insira numero: ";
        cin >> a;

        try {

            n1.setNumero(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "numero: " << n1.getNumero() << endl;
    }
    */

    /*TESTE CLASSE PRAZO
    Prazo n1;
    int a = -1;

    while(a != 0){
        cout << "insira numero: ";
        cin >> a;

        try {

            n1.setPrazo(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "numero: " << n1.getPrazo() << endl;
    }
    */

    /*TESTE CLASSE SENHA
    Senha n1;
    string a = "-1";

    while(a.compare("0") != 0){
        cout << "insira senha: ";
        cin >> a;

        try {

            n1.setSenha(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "senha: " << n1.getSenha() << endl;
    }
    */

    //TESTE CLASSE VALOR_APLICACAO
    Valor_Aplicacao n1;
    float a = -1.0;

    while(a != 0.0){
        cout << "insira valor: ";
        cin >> a;

        try {

            n1.setValor(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "numero: " << n1.getValor() << endl;
    }


    return 0;

}
