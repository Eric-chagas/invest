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

//Classe DATA

class Data {
private:
        std::string data;
        //Metodo que verifica ano bissexto
        bool ano_bissexto(int);
        void validarData(std::string);
public:
        void setData(std::string);
        std::string getData();
};

//Classe EMISSOR

class Emissor {
private:
        std::string emissor;
        //metodos que validam o texto

        //Checa se ha caracteres nao aceitos
        void validaCaracteres(std::string);

        //Checa se o primeiro caracter e letra, e se for, se e maiuscula
        void validaMaiuscula(std::string);

        //Checa se ha pontos ou espacos em sequencia
        void validaSequencias(std::string);

        //utiliza os metodos anteriores para validar o emissor inserido
        void validarEmissor(std::string);
public:
        void setEmissor(std::string);
        std::string getEmissor();
};

//Classe ENDERECO

class Endereco {
private:
        std::string endereco;
        //metodos que validam o texto

        //Checa se ha caracteres nao aceitos
        void validaCaracteres(std::string);

        //Checa se o primeiro caracter e letra, e se for, se e maiuscula
        void validaMaiuscula(std::string);

        //Checa se ha pontos ou espacos em sequencia
        void validaSequencias(std::string);

        //utiliza os metodos anteriores para validar o emissor inserido
        void validarEndereco(std::string);

public:
        void setEndereco(std::string);
        std::string getEndereco();
};

//Classe HORARIO

class Horario {
private:
        //Valores limite para as horas
        static const int HORA_MAXIMA = 17;
        static const int HORA_MINIMA = 13;

        //Horario no formato HH:MM
        std::string horario;
        void validarHorario(std::string);
public:
        void setHorario(std::string);
        std::string getHorario();
};

//Classe NOME

class Nome {
private:
        std::string nome;

        //Metodos que validam o texto

        void validaCaracteres(std::string);
        void validaSequencias(std::string);
        void validaNumerodeLetras(std::string);
        void validaMaiuscula(std::string);
        void validarNome(std::string);
public:
        void setNome(std::string);
        std::string getNome();
};

//Classe NUMERO

class Numero {
private:
        //Numero no formato XXXXXX-Y, onde Y e digito verificador calculado utilizando o algoritmo Modulo de 11.
        std::string numero;
        void verificarDigito(std::string);
public:
        int calculaDigito(std::string);
        void setNumero(std::string);
        std::string getNumero();
};

//Classe PRAZO

class Prazo {
private:
        //Valores aceitos: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72.
        int prazo;
        void validarPrazo(int);
public:
        void setPrazo(int);
        int getPrazo();
};

//Classe SENHA

class Senha {
private:
        //Senha no formato XXXXXX
        std::string senha;
        void validarSenha(std::string);
public:
        void setSenha(std::string);
        std::string getSenha();
};

//Classe TAXA

class Taxa {
private:
        int taxa;
        void validarTaxa(int);
public:
        void setTaxa(int);
        int getTaxa();
};

//Classe VALOR_APLICACAO

class Valor_Aplicacao {
private:
        //Valor em reais
        static const float VALOR_MAXIMO;
        float valor;
        void validarValor(float);
public:
        void setValor(float);
        float getValor();
};

//Classe VALOR_MINIMO

class Valor_Minimo {
private:
        //Valores aceitos: 1.000,00, 5.000,00, 10.000 ou 50.000,00
        float valor;
        void validarValor(float);
public:
        void setValor(float);
        float getValor();
};

#endif // DOMINIOS_H_INCLUDED
