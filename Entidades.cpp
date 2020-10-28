#include "Entidades.h"
#include <iostream>
#include <stdexcept>
#include <string>


//Classe APLICACAO

void Aplicacao::setCodigo(std::string codigo){
    this->codigo->setCodigo(codigo);
}
void Aplicacao::setValor(float valor){
    this->valor->setValor(valor);
}
void Aplicacao::setData(std::string data){
    this->data->setData(data);
}

std::string Aplicacao::getCodigo(){
    return this->codigo->getCodigo();
}
float Aplicacao::getValor(){
    return this->valor->getValor();
}
std::string Aplicacao::getData(){
    return this->data->getData();
}


//Classe CONTA

void Conta::setBanco(std::string banco){
    this->banco->setCodigo(banco);
}
void Conta::setAgencia(std::string agencia){
    this->agencia->setCodigo(agencia);
}
void Conta::setNumero(std::string numero){
    this->numero->setNumero(numero);
}

std::string Conta::getBanco(){
    return this->banco->getCodigo();
}
std::string Conta::getAgencia(){
    return this->agencia->getCodigo();
}
std::string Conta::getNumero(){
    return this->numero->getNumero();
}


//Classe PRODUTO

void Produto::setCodigo(std::string codigo){
    this->codigo->setCodigo(codigo);
}
void Produto::setClasse(std::string classe){
    this->classe->setClasse(classe);
}
void Produto::setEmissor(std::string emissor){
    this->emissor->setEmissor(emissor);
}
void Produto::setPrazo(int prazo){
    this->prazo->setPrazo(prazo);
}
void Produto::setVencimento(std::string vencimento){
    this->vencimento->setData(vencimento);
}
void Produto::setTaxa(int taxa){
    this->taxa->setTaxa(taxa);
}
void Produto::setHorario(std::string horario){
    this->horario->setHorario(horario);
}
void Produto::setValor(float valor){
    this->valor->setValor(valor);
}

std::string Produto::getCodigo(){
    return this->codigo->getCodigo();
}
std::string Produto::getClasse(){
    return this->classe->getClasse();
}
std::string Produto::getEmissor(){
    return this->emissor->getEmissor();
}
int Produto::getPrazo(){
    return this->prazo->getPrazo();
}
std::string Produto::getVencimento(){
    return this->vencimento->getData();
}
int Produto::getTaxa(){
    return this->taxa->getTaxa();
}
std::string Produto::getHorario(){
    return this->horario->getHorario();
}
float Produto::getValor(){
    return this->valor->getValor();
}


//Classe USUARIO

void Usuario::setNome(std::string nome){
    this->nome->setNome(nome);
}
void Usuario::setEndereco(std::string endereco){
    this->endereco->setEndereco(endereco);
}
void Usuario::setCep(int cep){
    this->cep->setCep(cep);
}
void Usuario::setCpf(std::string cpf){
    this->cpf->setCpf(cpf);
}
void Usuario::setSenha(std::string senha){
    this->senha->setSenha(senha);
}

std::string Usuario::getNome(){
    return this->nome->getNome();
}
std::string Usuario::getEndereco(){
    return this->endereco->getEndereco();
}
int Usuario::getCep(){
    return this->cep->getCep();
}
std::string Usuario::getCpf(){
    return this->cpf->getCpf();
}
std::string Usuario::getSenha(){
    return this->senha->getSenha();
}


