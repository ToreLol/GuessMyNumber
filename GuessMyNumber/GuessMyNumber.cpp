#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int num = 0, guess = 0, tries = 0;
	srand(static_cast<unsigned int>(time(0)));
	num = rand() % 100 + 1;
	cout << "\nGuess the number uwu\n";
	cout << "\nIntenta conseguir el numero en 1 intento para un mensaje secreto!!🙀 (pero sera solo 1 mensaje secreto? 🤨 )\n\n";

	do
	{
		cout << "\nQue numero estoy pensando?\n";
		cin >> guess;
		tries++;

		if (guess > num) {
			cout << "\nTe pasaste!";
			if (guess <= num + 10) {
				cout << "\nEstas cerca!\n";
			}
		}
		else if (guess < num) {
			cout << "\nTe falta!";
			if (guess >= num - 10) {
				cout << "\nEstas cerca!\n";
			}
		}
		else
			cout << "\nAhuevo! le atinaste en " << tries << " intentos!\n";
	} while (guess != num);
	if (tries == 1)
		cout << "!!!!!!!!!!!!!\nLO LOGRASTE EN 1 INTENTO WTF\n!!!!!!!!!!!!!";
	if (tries >= 100)
		cout << "!!!!!!!!!!!!!\nXDDDD BRO NO ERA TAN DIFICIL COMO PARA LLEGAR A 100 INTENTOS XDDDD\n!!!!!!!!!!!!!";

	return 0;
}