#ifndef TUENTIDADES_H_INCLUDED
#define TUENTIDADES_H_INCLUDED

#include "Entidades.h"

class TUAplicacao{
private:
        static const std::string CODIGO_VALIDO;
        static const std::string VALOR_VALIDO;
        static const std::string DATA_VALIDA;
        static const std::string CODIGO_INVALIDO;
        static const std::string VALOR_INVALIDO;
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


#endif // TUENTIDADES_H_INCLUDED
