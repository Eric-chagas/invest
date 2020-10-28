#include "TUEntidades.h"


//Classe TUAPlicacao

static const std::string TUAplicacao::CODIGO_VALIDO;
static const std::string TUAplicacao::VALOR_VALIDO;
static const std::string TUAplicacao::DATA_VALIDA;
static const std::string TUAplicacao::CODIGO_INVALIDO;
static const std::string TUAplicacao::VALOR_INVALIDO;
static const std::string TUAplicacao::DATA_INVALIDA;

void TUAplicacao::construir();

void TUAplicacao::testarSucessoCodigo();
void TUAplicacao::testarFalhaCodigo();

void TUAplicacao::testarSucessoValor();
void TUAplicacao::testarFalhaValor();

void TUAplicacao::testarSucessoData();
void TUAplicacao::testarFalhaData();

void TUAplicacao::testarMetodos();

void TUAplicacao::destruir();
bool TUAplicacao::run();
