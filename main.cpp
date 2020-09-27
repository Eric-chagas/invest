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

    //TESTE CLASSE EMISSOR
    Emissor e1;
    string a = "-1";

    while(a.compare("0") != 0){
        cout << "insira a emissor: ";
        cin >> a;

        try {
            e1.setEmissor(a);
            cout << "Sucesso." << endl;
        }
        catch (invalid_argument &e) {
            cout << "Excecao: " << e.what() << endl;
        }

        cout << "emissor: " << e1.getEmissor() << endl;
    }

    return 0;

}
