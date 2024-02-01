 #include <stdio.h>
 #include "bank.h"

  void Inicializa(ContaBancaria* pconta, int numero, double saldo) {
pconta->numero = numero;
pconta->saldo = saldo;
 }
 void Deposito (ContaBancaria* pconta, double valor) {
pconta->saldo += valor;
 }
 void Saque (ContaBancaria* pconta, double valor) {
pconta->saldo -= valor;
 }
 void Imprime (ContaBancaria conta) {
printf("Numero: %d\n", conta.numero);
printf("Saldo: %f\n", conta.saldo);
 }

 int main() {
    ContaBancaria minhaConta;
    Inicializa(&minhaConta, 123, 1000.0);
    Deposito(&minhaConta, 500.0);
    Saque(&minhaConta, 200.0);
    Imprime(minhaConta);

    return 0;
}