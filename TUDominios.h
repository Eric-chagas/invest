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
        static const std::string Emissor_VALIDO;
        //Valor invalido para Emissor
        static const std::string Emissor_1_INVALIDO;
        //Valor invalido para Emissor
        static const std::string Emissor_2_INVALIDO;
        //Valor invalido para Emissor
        static const std::string Emissor_3_INVALIDO;
        //Valor invalido para Emissor
        static const std::string Emissor_4_INVALIDO;

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
        static const std::string Endereco_VALIDO;
        //Valor invalido para Endereco
        static const std::string Endereco_1_INVALIDO;
        //Valor invalido para Endereco
        static const std::string Endereco_2_INVALIDO;
        //Valor invalido para Endereco
        static const std::string Endereco_3_INVALIDO;
        //Valor invalido para Endereco
        static const std::string Endereco_4_INVALIDO;

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


#endif // TUDOMINIOS_H_INCLUDED
