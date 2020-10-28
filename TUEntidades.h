#ifndef TUENTIDADES_H_INCLUDED
#define TUENTIDADES_H_INCLUDED

#include "Entidades.h"


//Classe TUAplicacao

class TUAplicacao{
private:
        static const std::string CODIGO_VALIDO;
        static const float VALOR_VALIDO;
        static const std::string DATA_VALIDA;

        static const std::string CODIGO_INVALIDO;
        static const float VALOR_INVALIDO;
        static const std::string DATA_INVALIDA;

        Aplicacao* a1;

        void construir();

        void testarSucessoCodigo();
        void testarFalhaCodigo();

        void testarSucessoValor();
        void testarFalhaValor();

        void testarSucessoData();
        void testarFalhaData();

        void testarMetodos();
        void destruir();
public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUConta

class TUConta {
private:
        static const std::string BANCO_VALIDO;
        static const std::string AGENCIA_VALIDA;
        static const std::string NUMERO_VALIDO;

        static const std::string BANCO_INVALIDO;
        static const std::string AGENCIA_INVALIDA;
        static const std::string NUMERO_INVALIDO;

        Conta* a1;

        void construir();

        void testarSucessoBanco();
        void testarFalhaBanco();

        void testarSucessoAgencia();
        void testarFalhaAgencia();

        void testarSucessoNumero();
        void testarFalhaNumero();

        void testarMetodos();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUProduto

class TUProduto {
private:
        static const std::string CODIGO_VALIDO;
        static const std::string CLASSE_VALIDA;
        static const std::string EMISSOR_VALIDO;
        static const int PRAZO_VALIDO;
        static const std::string VENCIMENTO_VALIDO;
        static const int TAXA_VALIDA;
        static const std::string HORARIO_VALIDO;
        static const float VALOR_VALIDO;

        static const std::string CODIGO_INVALIDO;
        static const std::string CLASSE_INVALIDA;
        static const std::string EMISSOR_INVALIDO;
        static const int PRAZO_INVALIDO;
        static const std::string VENCIMENTO_INVALIDO;
        static const int TAXA_INVALIDA;
        static const std::string HORARIO_INVALIDO;
        static const float VALOR_INVALIDO;

        Produto* a1;

        void construir();

        void testarSucessoCodigo();
        void testarFalhaCodigo();

        void testarSucessoClasse();
        void testarFalhaClasse();

        void testarSucessoEmissor();
        void testarFalhaEmissor();

        void testarSucessoPrazo();
        void testarFalhaPrazo();

        void testarSucessoVencimento();
        void testarFalhaVencimento();

        void testarSucessoTaxa();
        void testarFalhaTaxa();

        void testarSucessoHorario();
        void testarFalhaHorario();

        void testarSucessoValor();
        void testarFalhaValor();

        void testarMetodos();
        void destruir();

public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};


//Classe TUUsuario

class TUUsuario{
private:
        static const std::string NOME_VALIDO;
        static const std::string ENDERECO_VALIDO;
        static const int CEP_VALIDO;
        static const std::string CPF_VALIDO;
        static const std::string SENHA_VALIDA;

        static const std::string NOME_INVALIDO;
        static const std::string ENDERECO_INVALIDO;
        static const int CEP_INVALIDO;
        static const std::string CPF_INVALIDO;
        static const std::string SENHA_INVALIDA;

        Usuario* a1;

        void construir();

        void testarSucessoNome();
        void testarFalhaNome();

        void testarSucessoEndereco();
        void testarFalhaEndereco();

        void testarSucessoCep();
        void testarFalhaCep();

        void testarSucessoCpf();
        void testarFalhaCpf();

        void testarSucessoSenha();
        void testarFalhaSenha();

        void testarMetodos();
        void destruir();
public:
        bool run();
        bool sucesso;

        //Armazena descricao de eventual lancamento de excecao nos testes
        const char* descr_except;
};

#endif // TUENTIDADES_H_INCLUDED
