#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"


//Classe APLICACAO

class Aplicacao{
private:
        Codigo_Aplicacao* codigo = new Codigo_Aplicacao();
        Valor_Aplicacao* valor = new Valor_Aplicacao();
        Data* data = new Data();
public:
        void setCodigo(std::string);
        void setValor(float);
        void setData(std::string);

        std::string getCodigo();
        float getValor();
        std::string getData();
};


//Classe CONTA

class Conta{
private:
        Codigo_Banco* banco = new Codigo_Banco();
        Codigo_Agencia* agencia = new Codigo_Agencia();
        Numero* numero = new Numero();
public:
        void setBanco(std::string);
        void setAgencia(std::string);
        void setNumero(std::string);

        std::string getBanco();
        std::string getAgencia();
        std::string getNumero();
};


//Classe PRODUTO

class Produto{
private:
        Codigo_Produto* codigo = new Codigo_Produto();
        Classe* classe = new Classe();
        Emissor* emissor = new Emissor();
        Prazo* prazo = new Prazo();
        Data* vencimento = new Data();
        Taxa* taxa = new Taxa();
        Horario* horario = new Horario();
        Valor_Minimo* valor = new Valor_Minimo();
public:
        void setCodigo(std::string);
        void setClasse(std::string);
        void setEmissor(std::string);
        void setPrazo(int);
        void setVencimento(std::string);
        void setTaxa(int);
        void setHorario(std::string);
        void setValor(float);

        std::string getCodigo();
        std::string getClasse();
        std::string getEmissor();
        int getPrazo();
        std::string getVencimento();
        int getTaxa();
        std::string getHorario();
        float getValor();
};


//Classe USUARIO

class Usuario{
private:
        Nome* nome = new Nome();
        Endereco* endereco = new Endereco();
        Cep* cep = new Cep();
        Cpf* cpf = new Cpf();
        Senha* senha = new Senha();
public:
        void setNome(std::string);
        void setEndereco(std::string);
        void setCep(int);
        void setCpf(std::string);
        void setSenha(std::string);

        std::string getNome();
        std::string getEndereco();
        int getCep();
        std::string getCpf();
        std::string getSenha();
};



#endif // ENTIDADES_H_INCLUDED
