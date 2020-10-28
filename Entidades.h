#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"


//Classe APLICACAO

/// \brief APLICAÇÃO
///
///
/// ### Classe aplicação #
///
/// 1. Classe utilizada para representar uma aplicação financeira.
///
/// 2. Os atributos consistem em instâncias de classes:
///
/// - <b>Código de Aplicação</b>
///
/// - <b>Valor de Aplicação</b>
///
/// - <b>Data</b>
///


class Aplicacao{
private:
        Codigo_Aplicacao* codigo = new Codigo_Aplicacao();
        Valor_Aplicacao* valor = new Valor_Aplicacao();
        Data* data = new Data();
public:
        ///
        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///
        void setCodigo(std::string);
        ///
        ///
        /// Método <b> setValor </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param valor
        ///
        /// @throw invalid_argument
        ///
        ///
        void setValor(float);
        ///
        ///
        /// Método <b> setData </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param data
        ///
        /// @throw invalid_argument
        ///
        ///
        void setData(std::string);

        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///
        std::string getCodigo();
        ///
        /// Método <b> getValor </b>.
        ///
        /// - Retorna o valor armazenado no atributo valor.
        ///
        /// @return valor
        ///
        ///
        float getValor();
        ///
        /// Método <b> getData </b>.
        ///
        /// - Retorna o valor armazenado no atributo data.
        ///
        /// @return data
        ///
        ///
        std::string getData();
};


//Classe CONTA

/// \brief CONTA
///
///
/// ### Classe conta #
///
/// 1. Classe utilizada para representar uma Conta bancária.
///
/// 2. Os atributos consistem em instâncias de classes:
///
/// - <b>Código de Banco</b>
///
/// - <b>Código de Agência</b>
///
/// - <b>Número</b>
///


class Conta{
private:
        Codigo_Banco* banco = new Codigo_Banco();
        Codigo_Agencia* agencia = new Codigo_Agencia();
        Numero* numero = new Numero();
public:
        ///
        ///
        /// Método <b> setBanco </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param banco
        ///
        /// @throw invalid_argument
        ///
        ///
        void setBanco(std::string);
        ///
        ///
        /// Método <b> setAgencia </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param agencia
        ///
        /// @throw invalid_argument
        ///
        ///
        void setAgencia(std::string);
        ///
        ///
        /// Método <b> setNumero </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param numero
        ///
        /// @throw invalid_argument
        ///
        ///
        void setNumero(std::string);

        ///
        /// Método <b> getBanco </b>.
        ///
        /// - Retorna o valor armazenado no atributo banco.
        ///
        /// @return banco
        ///
        ///
        std::string getBanco();
        ///
        /// Método <b> getAgencia </b>.
        ///
        /// - Retorna o valor armazenado no atributo agência.
        ///
        /// @return agencia
        ///
        ///
        std::string getAgencia();
        ///
        /// Método <b> getNumero </b>.
        ///
        /// - Retorna o valor armazenado no atributo número.
        ///
        /// @return numero
        ///
        ///
        std::string getNumero();
};


//Classe PRODUTO

/// \brief PRODUTO
///
///
/// ### Classe produto #
///
/// 1. Classe utilizada para representar um produto no sistema.
///
/// 2. Os atributos consistem em instâncias de classes:
///
/// - <b>Código de Produto</b>
///
/// - <b>Classe</b>
///
/// - <b>Emissor</b>
///
/// - <b>Prazo</b>
///
/// - <b>Data</b>
///
/// - <b>Taxa</b>
///
/// - <b>Horário</b>
///
/// - <b>Valor Mínimo</b>
///

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
        ///
        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///
        void setCodigo(std::string);
        ///
        ///
        /// Método <b> setClasse </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param classe
        ///
        /// @throw invalid_argument
        ///
        ///
        void setClasse(std::string);
        ///
        ///
        /// Método <b> setEmissor </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///
        void setEmissor(std::string);
        ///
        ///
        /// Método <b> setPrazo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param prazo
        ///
        /// @throw invalid_argument
        ///
        ///
        void setPrazo(int);
        ///
        ///
        /// Método <b> setVencimento </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param vencimento
        ///
        /// @throw invalid_argument
        ///
        ///
        void setVencimento(std::string);
        ///
        ///
        /// Método <b> setTaxa </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param taxa
        ///
        /// @throw invalid_argument
        ///
        ///
        void setTaxa(int);
        ///
        ///
        /// Método <b> setHorario </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param horario
        ///
        /// @throw invalid_argument
        ///
        ///
        void setHorario(std::string);
        ///
        ///
        /// Método <b> setValor </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param valor
        ///
        /// @throw invalid_argument
        ///
        ///
        void setValor(float);

        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///
        std::string getCodigo();
        ///
        /// Método <b> getClasse </b>.
        ///
        /// - Retorna o valor armazenado no atributo classe.
        ///
        /// @return classe
        ///
        ///
        std::string getClasse();
        ///
        /// Método <b> getEmissor </b>.
        ///
        /// - Retorna o valor armazenado no atributo emissor.
        ///
        /// @return emissor
        ///
        ///
        std::string getEmissor();
        ///
        /// Método <b> getPrazo </b>.
        ///
        /// - Retorna o valor armazenado no atributo prazo.
        ///
        /// @return prazo
        ///
        ///
        int getPrazo();
        ///
        /// Método <b> getVencimento </b>.
        ///
        /// - Retorna o valor armazenado no atributo vencimento.
        ///
        /// @return vencimento
        ///
        ///
        std::string getVencimento();
        ///
        /// Método <b> getTaxa </b>.
        ///
        /// - Retorna o valor armazenado no atributo taxa.
        ///
        /// @return taxa
        ///
        ///
        int getTaxa();
        ///
        /// Método <b> getHorario </b>.
        ///
        /// - Retorna o valor armazenado no atributo horario.
        ///
        /// @return horario
        ///
        ///
        std::string getHorario();
        ///
        /// Método <b> getValor </b>.
        ///
        /// - Retorna o valor armazenado no atributo valor.
        ///
        /// @return valor
        ///
        ///
        float getValor();
};


//Classe USUARIO

/// \brief USUARIO
///
///
/// ### Classe usuário #
///
/// 1. Classe utilizada para representar um cadastro de usuário no sistema.
///
/// 2. Os atributos consistem em instâncias de classes:
///
/// - <b>Nome</b>
///
/// - <b>Endereço</b>
///
/// - <b>CEP</b>
///
/// - <b>CPF</b>
///
/// - <b>Senha</b>
///

class Usuario{
private:
        Nome* nome = new Nome();
        Endereco* endereco = new Endereco();
        Cep* cep = new Cep();
        Cpf* cpf = new Cpf();
        Senha* senha = new Senha();
public:
        ///
        ///
        /// Método <b> setNome </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///
        void setNome(std::string);
        ///
        ///
        /// Método <b> setEndereco </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///
        void setEndereco(std::string);
        ///
        ///
        /// Método <b> setCep </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param cep
        ///
        /// @throw invalid_argument
        ///
        ///
        void setCep(int);
        ///
        ///
        /// Método <b> setCpf </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param cpf
        ///
        /// @throw invalid_argument
        ///
        ///
        void setCpf(std::string);
        ///
        ///
        /// Método <b> setSenha </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param senha
        ///
        /// @throw invalid_argument
        ///
        ///
        void setSenha(std::string);


        ///
        /// Método <b> getNome </b>.
        ///
        /// - Retorna o valor armazenado no atributo nome.
        ///
        /// @return nome
        ///
        ///
        std::string getNome();
        ///
        /// Método <b> getEndereco </b>.
        ///
        /// - Retorna o valor armazenado no atributo endereço.
        ///
        /// @return endereco
        ///
        ///
        std::string getEndereco();
        ///
        /// Método <b> getCep </b>.
        ///
        /// - Retorna o valor armazenado no atributo CEP.
        ///
        /// @return cep
        ///
        ///
        int getCep();
        ///
        /// Método <b> getCPF </b>.
        ///
        /// - Retorna o valor armazenado no atributo CPF.
        ///
        /// @return cpf
        ///
        ///
        std::string getCpf();
        ///
        /// Método <b> getSenha </b>.
        ///
        /// - Retorna o valor armazenado no atributo senha.
        ///
        /// @return senha
        ///
        ///
        std::string getSenha();
};



#endif // ENTIDADES_H_INCLUDED
