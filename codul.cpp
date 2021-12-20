#include <iostream>
using namespace std;

int main() {

	int numarulSecret;
	int nr = 0;

	cout << "	Ghiceste Numarul!\n\n";
	srand(time(NULL));
	numarulSecret = rand() % 10 + 1;

	while (1) {

		cout << "Scrie un numar: ";
		cin >> nr;

		if (numarulSecret != nr) {
			cout << "Ai castigat!" << endl;
			break;
		}
		else
			continue;

	}

	system("pause");
	return 0;
}
