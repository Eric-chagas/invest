#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>


//Classe CEP

/// \brief CEP
///
///
/// ### Classe Cep #
///
/// 1. Classe utilizada para representar valor válido de CEP.
///
/// 2. Os valores aceitos, consistem em faixas de CEP válidas para determinados estados.
///
/// #### Respectivamente, os estados e as faixas de valores aceitos são: #
///
/// - <b>São Paulo</b>:
///   + (1000000 a 5999999) e (8000000 a 8499999)
///
/// - <b>Rio de Janeiro</b>:
///   + (20000000 a 26600999)
///
/// - <b>Brasília</b>:
///   + (70000000 a 70999999)
///
/// - <b>Salvador</b>:
///   + (40000000 a 41999999)
///
/// - <b>Forataleza</b>:
///   + (60000000 a 60999999)
///


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

        ///
        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com as faixas de valores aceitas para cep.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param cep
        ///
        /// @throw invalid_argument
        ///
        ///

        void validar(int);

public:
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
        /// Método <b> getCep </b>.
        ///
        /// - Retorna o valor armazenado no atributo cep.
        ///
        /// @return cep
        ///
        ///

        int getCep();
};

//Classe CLASSE

/// \brief CLASSE
///
///
/// ### Classe Classe #
///
/// 1. Classe utilizada para representar valor válido de Classe.
///
/// 2. Os valores aceitos, consistem em categorias de classe pré-definidas.
///
/// #### Os seguintes, são os valores aceitos para classe: #
///
/// - <b>CDB</b>
///
/// - <b>LCA</b>
///
/// - <b>LCI</b>
///
/// - <b>LF</b>
///
/// - <b>LC</b>
///

class Classe {
private:
        //Valores validos para validacao
        static const std::string VALOR_1;
        static const std::string VALOR_2;
        static const std::string VALOR_3;
        static const std::string VALOR_4;
        static const std::string VALOR_5;

        std::string classe;

        ///
        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com os valores aceitos para classe.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido.
        ///
        /// @param classe
        ///
        /// @throw invalid_argument
        ///
        ///

        void validar(std::string);
public:

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
        /// Método <b> getClasse </b>.
        ///
        /// - Retorna o valor armazenado no atributo classe.
        ///
        /// @return classe
        ///
        ///

        std::string getClasse();
};


//Classe CODIGO_AGENCIA

/// \brief CODIGO_AGENCIA
///
///
/// ### Classe Codigo_Agencia #
///
/// 1. Classe utilizada para representar valor válido de Código de agência.
///
/// 2. Os valores aceitos, consistem no formato XXXX, onde:
///    + X representa dígito (0-9);
///    + "0000" é valor considerádo inválido.
///
///


class Codigo_Agencia {
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;

        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com os valores aceitos para Código de Agência.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void validar(std::string);

        ///
        /// Método <b> validarDigitos </b>.
        ///
        ///
        /// - Realiza a busca no parâmetro passado, por valores diferentes de números de 0 a 9.
        ///
        /// - Lança exceção caso o parâmetro passado não seja composto exclusivamente por dígitos (0-9).
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void validarDigitos(std::string);
public:

        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void setCodigo(std::string);


        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///

        std::string getCodigo();
};

//Classe CODIGO_APLICACAO


/// \brief CODIGO_APLICACAO
///
///
/// ### Classe Codigo_Aplicacao #
///
/// 1. Classe utilizada para representar valor válido de Código de aplicação.
///
/// 2. Os valores aceitos, consistem no formato XXXXX, onde:
///    + X representa dígito (0-9);
///    + "00000" é valor considerádo inválido.
///
///

class Codigo_Aplicacao{
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;


        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com os valores aceitos para Código de Aplicação.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///


        void validar(std::string);


        ///
        /// Método <b> validarDigitos </b>.
        ///
        ///
        /// - Realiza a busca no parâmetro passado, por valores diferentes de números de 0 a 9.
        ///
        /// - Lança exceção caso o parâmetro passado não seja composto exclusivamente por dígitos (0-9).
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///


        void validarDigitos(std::string);
public:

        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///


        void setCodigo(std::string);

        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///

        std::string getCodigo();
};

//Classe CODIGO_BANCO

/// \brief CODIGO_BANCO
///
///
/// ### Classe Codigo_Banco #
///
/// 1. Classe utilizada para representar valor válido de Código de banco.
///
/// 2. Os valores aceitos, consistem no formato XXX, onde:
///    + X representa dígito (0-9);
///
/// 3. Valores aceitos são pré-definidos, e correspondem aos códigos dos 5 maiores bancos no Brasil:
///    + <b>Itau</b>: 341
///    + <b>Banco do Brasil</b>: 001
///    + <b>Bradesco</b>: 237
///    + <b>Caixa</b>: 104
///    + <b>Santander</b>: 033


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

        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com os valores aceitos para Código de Banco.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void validar(std::string);
public:

        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///


        void setCodigo(std::string);


        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///

        std::string getCodigo();
};

//Classe CODIGO_PRODUTO

/// \brief CODIGO_PRODUTO
///
///
/// ### Classe Codigo_Produto #
///
/// 1. Classe utilizada para representar valor válido de Código de produto.
///
/// 2. Os valores aceitos, consistem no formato XXX, onde:
///    + X representa dígito (0-9);
///    + "000" é valor considerádo inválido.
///
///


class Codigo_Produto {
private:
        //Codigo invalido para validacao
        static const std::string COD_INVALIDO;
        std::string codigo;

        ///
        /// Método <b> validar </b>.
        ///
        ///
        /// - Realiza a validação de formato do parâmetro passado, de acordo com os valores aceitos para Código de produto.
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void validar(std::string);

        ///
        /// Método <b> validarDigitos </b>.
        ///
        ///
        /// - Realiza a busca no parâmetro passado, por valores diferentes de números de 0 a 9.
        ///
        /// - Lança exceção caso o parâmetro passado não seja composto exclusivamente por dígitos (0-9).
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void validarDigitos(std::string);
public:

        ///
        /// Método <b> setCodigo </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido, ou valor não aceito.
        ///
        /// @param codigo
        ///
        /// @throw invalid_argument
        ///
        ///

        void setCodigo(std::string);

        ///
        /// Método <b> getCodigo </b>.
        ///
        /// - Retorna o valor armazenado no atributo codigo.
        ///
        /// @return codigo
        ///
        ///

        std::string getCodigo();
};

//Classe CPF

/// \brief CPF
///
///
/// ### Classe Cpf #
///
/// 1. Classe utilizada para representar valor válido de CPF.
///
/// 2. Os valores aceitos, consistem no formato XXX.XXX.XXX-YY, onde:
///    + X e Y representam dígito (0-9);
///    + YY são os dois dígitos verificadores de validade do número de CPF.
///    + A validação de YY ocorre por meio de algorítmo específico e unificado.
///

class Cpf {
private:
        //CPF, no formato: (XXX.XXX.XXX-XX)
        std::string cpf;


        ///
        /// Método <b> validarCpf </b>.
        ///
        /// - Realiza a validação do parâmetro passado, de acordo com o algoritmo de cálculo dos digitos verificadores do CPF.
        ///
        /// - O algorítmo é unificado para o número de CPF no Brasil, e é de fácil acesso.
        ///   + As informações para a implementação do algorítmo nessa função, foram retiradas do seguinte endereço: https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/
        ///
        ///
        /// - Lança exceção caso o parâmetro passado corresponda a um CPF inválido.
        ///
        ///
        /// @param cpf
        ///
        /// @throw invalid_argument
        ///
        ///

        //Metodo que consiste em um algoritmo de validacao dos 2 digitos verificadores do CPF.
        void validarCpf(std::string);
public:

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
        /// Método <b> getCpf </b>.
        ///
        /// - Retorna o valor armazenado no atributo CPF.
        ///
        /// @return cpf
        ///
        ///

        std::string getCpf();
};

//Classe DATA

/// \brief DATA
///
///
/// ### Classe Data #
///
/// 1. Classe utilizada para representar valor válido de Data.
///
/// 2. Os valores aceitos, consistem no formato DD/MM/YYYY (dia, mes e ano respectivamente), onde:
///    + D, M e Y representam dígito (0-9);
///    + São permitidos anos bissextos;
///    + São permitidas datas entre 2020 e 2099
///
///

class Data {
private:
        std::string data;

        ///
        /// Método <b> ano_bissexto </b>.
        ///
        /// - Realiza a verificação de existência de ano bissexto no ano passada como parâmetro.
        ///
        /// - Retorna true, caso ano seja bissexto, e false caso contrário.
        ///
        /// @param ano
        ///
        /// @return bool
        ///
        ///

        //Metodo que verifica ano bissexto
        bool ano_bissexto(int);

        ///
        /// Método <b> validarData </b>.
        ///
        /// - Realiza a validação do parâmetro passado, de acordo com os requisitos de valor válido para a classe DATA
        ///
        /// - Lança exceção em caso de formato ou valor invalido para data.
        ///
        /// @param data
        ///
        /// @throw invalid_argument
        ///
        ///

        void validarData(std::string);
public:

        ///
        /// Método <b> setData </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido ou valor não aceito.
        ///
        /// @param data
        ///
        /// @throw invalid_argument
        ///
        ///

        void setData(std::string);

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

//Classe EMISSOR

/// \brief EMISSOR
///
///
/// ### Classe Emissor #
///
/// 1. Classe utilizada para representar valor válido de emissor.
///
/// 2. Os valores aceitos, consistem em texto, onde:
///    + Existem entre 5 e 30 caracteres;
///    + Cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), caracter -, ponto ou espaço.;
///    + Apenas letras e dígitos podem estar em sequência;
///    + Em termo cujo primeiro caracter é letra, a mesma é maiúscula.
///


class Emissor {
private:
        std::string emissor;
        //metodos que validam o texto

        ///
        /// Método <b> validaCaracteres </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem caracteres que não sejam os especificados nos requisitos da classe Emissor.
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///

        //Checa se ha caracteres nao aceitos
        void validaCaracteres(std::string);


        ///
        /// Método <b> validaMaiuscula </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem termos cujo primeiro caracter seja letra, e ela não seja maiúscula
        ///
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///

        //Checa se o primeiro caracter e letra, e se for, se e maiuscula
        void validaMaiuscula(std::string);


        ///
        /// Método <b> validaSequencias </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existir sequência de caracteres que não sejam letras ou números
        ///
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///


        //Checa se ha pontos ou espacos em sequencia
        void validaSequencias(std::string);



        ///
        /// Método <b> validarEmissor </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de o parâmetro passado não corresponder com os requisitos especificados para a classe Emissor
        ///
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///


        //utiliza os metodos anteriores para validar o emissor inserido
        void validarEmissor(std::string);
public:

        ///
        /// Método <b> setEmissor </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido ou valor não aceito.
        ///
        /// @param emissor
        ///
        /// @throw invalid_argument
        ///
        ///

        void setEmissor(std::string);

        ///
        /// Método <b> getEmissor </b>.
        ///
        /// - Retorna o valor armazenado no atributo emissor.
        ///
        /// @return emissor
        ///
        ///

        std::string getEmissor();
};

//Classe ENDERECO

/// \brief ENDERECO
///
///
/// ### Classe Endereco #
///
/// 1. Classe utilizada para representar valor válido de endereço.
///
/// 2. Os valores aceitos, consistem em texto, onde:
///    + Existem entre 5 e 20 caracteres;
///    + Cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.;
///    + Apenas letras e dígitos podem estar em sequência;
///    + Em termo cujo primeiro caracter é letra, a mesma é maiúscula.
///


class Endereco {
private:
        std::string endereco;
        //metodos que validam o texto


        ///
        /// Método <b> validaCaracteres </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem caracteres que não sejam os especificados nos requisitos da classe Endereco.
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///

        //Checa se ha caracteres nao aceitos
        void validaCaracteres(std::string);


        ///
        /// Método <b> validaMaiuscula </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem termos cujo primeiro caracter seja letra, e ela não seja maiúscula
        ///
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///


        //Checa se o primeiro caracter e letra, e se for, se e maiuscula
        void validaMaiuscula(std::string);


        ///
        /// Método <b> validaSequencias </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existir sequência de caracteres que não sejam letras ou números
        ///
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///


        //Checa se ha pontos ou espacos em sequencia
        void validaSequencias(std::string);


        ///
        /// Método <b> validarEndereco </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de o parâmetro passado não corresponder com os requisitos especificados para a classe Endereco
        ///
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///

        //utiliza os metodos anteriores para validar o emissor inserido
        void validarEndereco(std::string);

public:

        ///
        /// Método <b> setEndereco </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido ou valor não aceito.
        ///
        /// @param endereco
        ///
        /// @throw invalid_argument
        ///
        ///

        void setEndereco(std::string);

        ///
        /// Método <b> getEndereco </b>.
        ///
        /// - Retorna o valor armazenado no atributo endereco.
        ///
        /// @return endereco
        ///
        ///

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

        ///
        /// Método <b> getHorario </b>.
        ///
        /// - Retorna o valor armazenado no atributo horario.
        ///
        /// @return horario
        ///
        ///

        std::string getHorario();
};

//Classe NOME

/// \brief NOME
///
///
/// ### Classe Nome #
///
/// 1. Classe utilizada para representar valor válido de nome.
///
/// 2. Os valores aceitos, consistem em texto, onde:
///    + Existem entre 5 e 30 caracteres;
///    + Cada caracter pode ser letra (A-Z ou a-z), ou espaço.;
///    + Apenas letras podem estar em sequência;
///    + Em todos os termos o primeiro caracter é letra, e a mesma é maiúscula;
///    + Deve haver pelomenos 5 letras.

class Nome {
private:
        std::string nome;

        //Metodos que validam o texto

        ///
        /// Método <b> validaCaracteres </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem caracteres que não sejam os especificados nos requisitos da classe Nome.
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///

        void validaCaracteres(std::string);

        ///
        /// Método <b> validaSequencias </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existir sequência de caracteres que não sejam letras
        ///
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///

        void validaSequencias(std::string);

        ///
        /// Método <b> validaNumerodeLetras </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção caso não hajam pelo menos 5 letras
        ///
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///


        void validaNumerodeLetras(std::string);


        ///
        /// Método <b> validaMaiuscula </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de existirem termos cujo primeiro caracter seja letra, e ela não seja maiúscula
        ///
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///

        void validaMaiuscula(std::string);

        ///
        /// Método <b> validarNome </b>.
        ///
        /// - Realiza a validação do parâmetro passado.
        ///
        /// - Lança exceção em caso de o parâmetro passado não corresponder com os requisitos especificados para a classe Nome
        ///
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///


        void validarNome(std::string);
public:

        ///
        /// Método <b> setNome </b>.
        ///
        ///
        /// - Armazena valor passado como parâmetro, caso seja válido;
        ///
        /// - Lança exceção caso o parâmetro passado tenha formáto inválido ou valor não aceito.
        ///
        /// @param nome
        ///
        /// @throw invalid_argument
        ///
        ///

        void setNome(std::string);

        ///
        /// Método <b> getNome </b>.
        ///
        /// - Retorna o valor armazenado no atributo nome.
        ///
        /// @return nome
        ///
        ///

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

        ///
        /// Método <b> getNumero </b>.
        ///
        /// - Retorna o valor armazenado no atributo numero.
        ///
        /// @return numero
        ///
        ///

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

        ///
        /// Método <b> getPrazo </b>.
        ///
        /// - Retorna o valor armazenado no atributo prazo.
        ///
        /// @return prazo
        ///
        ///

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

//Classe TAXA

class Taxa {
private:
        int taxa;
        void validarTaxa(int);
public:
        void setTaxa(int);

        ///
        /// Método <b> getTaxa </b>.
        ///
        /// - Retorna o valor armazenado no atributo taxa.
        ///
        /// @return taxa
        ///
        ///

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

//Classe VALOR_MINIMO

class Valor_Minimo {
private:
        //Valores aceitos: 1.000,00, 5.000,00, 10.000 ou 50.000,00
        float valor;
        void validarValor(float);
public:
        void setValor(float);

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

#endif // DOMINIOS_H_INCLUDED
