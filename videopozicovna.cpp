#include <iostream>
using namespace std;
int main()
{
	int janwm;
	int vyberfilmu;
	int vyberaniefilmu, vyberaniefilmu1;
	string meno1;
	string meno2;
	int vstup = 0;
	cout << "Zdravim chces vstupit do videopozicovne?" << endl;
	cout << "Ak chces vstupit do videopozicovne stlac 1" << endl;
	cout << "Ak si nechcel ist do videopozicovne stlac 2" << endl;
	cin >> vstup;
	if (vstup == 2) {
		return 0;
	}
	else if (vstup == 1) {}
	while (true) {

		cout << "Videopozicovna" << endl;
		cout << "___________________________________________________________________________" << endl;
		cout << "Vyber podla cisla operaciu ktoru chces uskutocnit : " << endl;
		cout << "1. Vyber filmu na pozicanie" << endl;
		cout << "2. Zoznam pozicanych filmov" << endl;
		cout << "3. Vratit film" << endl;

		cin >> vyberfilmu;
		switch (vyberfilmu) {
		case 1:
			cout << "1. Spiderman" << endl;
			cout << "2. Lego film" << endl;
			cin >> vyberaniefilmu1;
			switch (vyberaniefilmu1) {
			case 1:
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Spiderman " << endl;
				cin >> meno1;
				break;
			case 2:
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Lego Film " << endl;
				cin >> meno2;
				break;
			}

				break;
		case 2:
			cout << "Pozicane filmy na zozname su tieto: " << endl;
			cout << "Spiderman - " << meno1 << endl;
			cout << "Lego film - " << meno2 << endl;
			break;
		}
		system("PAUSE");
	}
}
