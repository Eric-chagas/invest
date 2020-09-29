#ifndef TUDOMINIOS_H_INCLUDED
#define TUDOMINIOS_H_INCLUDED

#include "Dominios.h"
//Classes teste que possuem metodos que testam os metodos publicos e lancamento de excecao
//Testes sao realizados utilizando:
//1. Ponteiro para objeto da classe em teste;
//2. Valores constantes para casos de teste (falha e sucesso)
//3. Metodos que preparam o ambiente de teste, testam, e limpam o ambiente novamente.
//4. Os requisitos atendidos pelos testes, englobam os casos de uso especificados no documento com as instrucoes e requisitos
//sobre o sistema desenvolvido.



//Classe TUCEP

class TUCep{
private:
        //CEP valido para a faixa de SP.
        static const int CEP_VALIDO = 8002056;
        //CEP invalido
        static const int CEP_INVALIDO = 9405010;

        Cep* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCLASSE

class TUClasse {
private:
        //Valor valido 1 para Classe.
        static const std::string CLASSE_1_VALIDA;
        //Valor valido 2 para Classe.
        static const std::string CLASSE_2_VALIDA;
        //Valor invalido para Classe.
        static const std::string CLASSE_INVALIDA;

        Classe* c1;

        void construir();
        void testarSucesso1();
        void testarSucesso2();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCODIGO_AGENCIA

class TUCodigo_Agencia {
private:
        //Valor valido para Codigo_Agencia
        static const std::string CODIGO_VALIDO;
        //Valor invalido para Codigo_Agencia
        static const std::string CODIGO_INVALIDO;

        Codigo_Agencia* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCODIGO_APLICACAO

class TUCodigo_Aplicacao {
private:
        //Valor valido para Codigo_Aplicacao
        static const std::string CODIGO_VALIDO;
        //Valor invalido para Codigo_Aplicacao
        static const std::string CODIGO_INVALIDO;

        Codigo_Aplicacao* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCODIGO_BANCO
class TUCodigo_Banco {
private:
        //Valor valido para Codigo_Banco
        static const std::string CODIGO_1_VALIDO;
        //Valor valido para Codigo_Banco
        static const std::string CODIGO_2_VALIDO;
        //Valor invalido para Codigo_Banco
        static const std::string CODIGO_INVALIDO;

        Codigo_Banco* c1;

        void construir();
        void testarSucesso1();
        void testarSucesso2();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCodigo_Produto

class TUCodigo_Produto {
private:
        //Valor valido para Codigo_Produto
        static const std::string CODIGO_VALIDO;
        //Valor invalido para Codigo_Produto
        static const std::string CODIGO_INVALIDO;

        Codigo_Produto* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUCpf

class TUCpf{
private:
        //Valor valido para Cpf
        static const std::string CPF_VALIDO;
        //Valor invalido para Cpf
        static const std::string CPF_1_INVALIDO;
        //Valor invalido para Cpf
        static const std::string CPF_2_INVALIDO;

        Cpf* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUData

class TUData{
private:
        //Valor valido para Data
        static const std::string DATA_VALIDA;
        //Valor valido para Data
        static const std::string ANO_BISSEXTO;
        //Valor invalido para Data
        static const std::string DATA_INVALIDA;

        Data* c1;

        void construir();
        void testarSucesso();
        void testarBissexto();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUEmissor

class TUEmissor{
private:
        //Valor valido para Emissor
        static const std::string EMISSOR_VALIDO;
        //Valor invalido para Emissor
        static const std::string EMISSOR_1_INVALIDO;
        //Valor invalido para Emissor
        static const std::string EMISSOR_2_INVALIDO;
        //Valor invalido para Emissor
        static const std::string EMISSOR_3_INVALIDO;
        //Valor invalido para Emissor
        static const std::string EMISSOR_4_INVALIDO;

        Emissor* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void testarFalha3();
        void testarFalha4();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUEndereco

class TUEndereco{
private:
        //Valor valido para Endereco
        static const std::string ENDERECO_VALIDO;
        //Valor invalido para Endereco
        static const std::string ENDERECO_1_INVALIDO;
        //Valor invalido para Endereco
        static const std::string ENDERECO_2_INVALIDO;
        //Valor invalido para Endereco
        static const std::string ENDERECO_3_INVALIDO;
        //Valor invalido para Endereco
        static const std::string ENDERECO_4_INVALIDO;

        Endereco* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void testarFalha3();
        void testarFalha4();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};

//Classe TUHorario

class TUHorario{
private:
        //Valor valido para Horario
        static const std::string HORARIO_1_VALIDO;
        //Valor valido para Horario
        static const std::string HORARIO_2_VALIDO;
        //Valor valido para Horario
        static const std::string HORARIO_3_VALIDO;
        //Valor invalido para Horario
        static const std::string HORARIO_INVALIDO;

        Horario* c1;

        void construir();
        void testarSucesso1();
        void testarSucesso2();
        void testarSucesso3();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUNome

class TUNome{
private:
        //Valor valido para Nome
        static const std::string NOME_VALIDO;
        //Valor invalido para Nome
        static const std::string NOME_1_INVALIDO;
        //Valor invalido para Nome
        static const std::string NOME_2_INVALIDO;
        //Valor invalido para Nome
        static const std::string NOME_3_INVALIDO;
        //Valor invalido para Nome
        static const std::string NOME_4_INVALIDO;

        Nome* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void testarFalha3();
        void testarFalha4();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUNumero

class TUNumero{
private:
        //Valor valido para Numero
        static const std::string NUMERO_VALIDO;
        //Valor invalido para Numero
        static const std::string NUMERO_1_INVALIDO;
        //Valor invalido para Numero
        static const std::string NUMERO_2_INVALIDO;

        Numero* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUPrazo

class TUPrazo{
private:
        //Prazo valido
        static const int PRAZO_VALIDO = 36;
        //Prazo invalido
        static const int PRAZO_INVALIDO = 59;

        Prazo* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUSenha

class TUSenha{
private:
        //Valor valido para Senha
        static const std::string SENHA_VALIDA;
        //Valor invalido para Senha
        static const std::string SENHA_1_INVALIDA;
        //Valor invalido para Senha
        static const std::string SENHA_2_INVALIDA;

        Senha* c1;

        void construir();
        void testarSucesso();
        void testarFalha1();
        void testarFalha2();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUTaxa

class TUTaxa{
private:
        //Taxa valido
        static const int TAXA_VALIDA = 128;
        //Taxa invalido
        static const int TAXA_INVALIDA = 459;

        Taxa* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUValor_Aplicacao

class TUValor_Aplicacao{
private:
        //Valor_Aplicacao valido
        static const int VALOR_APLICACAO_VALIDO = 658000.34;
        //Valor_Aplicacao invalido
        static const int VALOR_APLICACAO_INVALIDO = 56000000.98;

        Valor_Aplicacao* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUValor_Minimo

class TUValor_Minimo{
private:
        //Valor_Minimo valido
        static const int VALOR_MINIMO_VALIDO = 5000.00;
        //Valor_Minimo invalido
        static const int VALOR_MINIMO_INVALIDO = 37000.57;

        Valor_Minimo* c1;

        void construir();
        void testarSucesso();
        void testarFalha();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


#endif // TUDOMINIOS_H_INCLUDED
