#include <iostream>

using namespace std;
int main()
{
	/*int num1;
	int num2;

	cout << "informe o primeiro numero";
	cin >> num1;
	cout << "informe o segundo numero";
	cin >> num2;
	if (num1 > num2) {
		cout << num1 << " eh maior que " << num2;
	}
	else if (num1 < num2) {
		cout << num1 << " eh menor que " << num2;
	}
	else {
		cout << num1 << " eh igual a " << num2;
	}*/

	/*int qtdProduto;
	cout << "quantos produtos ha no estoque?";
	cin >> qtdProduto;
	if (qtdProduto >= 100) {
		cout << "Quantidade suficiente no estoque";
	}
	else if (qtdProduto >= 50) {
		cout << "Atencao ao estoque";
	}
	else {
		cout << "Faça um novo pedido e reabasteça o estoque";
	}*/

	int num;
	cout << "Fale um numero: ";
	cin >> num;
	if (num > 0) {
		cout << "Seu numero eh positivo";
	}
	else if(num < 0){
		cout << "Seu numero eh negativo";
	}
	else {
		cout << "Seu numero eh zero";
	}
}


