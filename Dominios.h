#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>

//Codar as declaracoes das classes
//Lembrar da documentacao
//Lembrar do std::

//Classe CEP

class Cep {
private:
        // Constantes para validacao do cep, por estado:
        // SP:
        static const int MIN_1_SP = 1000000;
        static const int MAX_1_SP = 5999999;
        static const int MIN_2_SP = 8000000;
        static const int MAX_2_SP = 8499999;

        // RJ:
        static const int MIN_RJ = 20000000;
        static const int MAX_RJ = 26600999;

        // DF:
        static const int MIN_DF = 70000000;
        static const int MAX_DF = 70999999;

        // Salvador:
        static const int MIN_SSA = 40000000;
        static const int MAX_SSA = 41999999;

        //Fortaleza:
        static const int MIN_FOR = 60000000;
        static const int MAX_FOR = 60999999;

        int cep;

        void validar(int);

public:
        void setCep(int);
        int getCep();
};

//Classe CLASSE

class Classe {
private:
        //Valores validos para validacao
        static const std::string VALOR_1;
        static const std::string VALOR_2;
        static const std::string VALOR_3;
        static const std::string VALOR_4;
        static const std::string VALOR_5;

        std::string classe;
        void validar(std::string);
public:
        void setClasse(std::string);
        std::string getClasse();
};

//Classe CODIGO_AGENCIA

class Codigo_Agencia {
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;
        void validar(std::string);
        void validarDigitos(std::string);
public:
        void setCodigo(std::string);
        std::string getCodigo();
};

//Classe CODIGO_APLICACAO

class Codigo_Aplicacao{
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;
        void validar(std::string);
        void validarDigitos(std::string);
public:
        void setCodigo(std::string);
        std::string getCodigo();
};

//Classe CODIGO_BANCO

class Codigo_Banco {
private:
        //Codigos de banco validos para validacao
        //Bancos: Itau: 341, Banco do Brasil: 001, Bradesco: 237, Caixa: 104, Santander: 033
        static const std::string COD_ITAU;
        static const std::string COD_BB;
        static const std::string COD_BRADESCO;
        static const std::string COD_CAIXA;
        static const std::string COD_SANTANDER;

        std::string codigo;
        void validar(std::string);
public:
        void setCodigo(std::string);
        std::string getCodigo();
};

//Classe CODIGO_PRODUTO

class Codigo_Produto {
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;
        void validar(std::string);
        void validarDigitos(std::string);
public:
        void setCodigo(std::string);
        std::string getCodigo();
};

//Classe CPF

class Cpf {
private:
        //CPF, no formato: (XXX.XXX.XXX-XX)
        std::string cpf;
        //Metodo que consiste em um algoritmo de validacao dos 2 digitos verificadores do CPF.
        void validarCpf(std::string);
public:
        void setCpf(std::string);
        std::string getCpf();
};


#endif // DOMINIOS_H_INCLUDED
