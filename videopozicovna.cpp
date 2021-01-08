#include <iostream>

using namespace std;

int main()
{
	int vstup = 0;
	cout << "Zdravim chces vstupit do videopozicovne?" << endl;
	cout << "Ak chces vstupit do videopozicovne stlac 1" << endl;
	cout << "Ak si nechcel ist do videopozicovne stlac 2" << endl;
	cin >> vstup;
	if (vstup == 2) {
		return 0;
	}
	else if (vstup == 1) {
	}
	while (true) {
	
	cout << "Videopozicovna" << endl;
	cout << "___________________________________________________________________________" << endl;
	cout << "Vyber podla cisla operaciu ktoru chces uskutocnit : " << endl;
	cout << "1. Zoznam pozicanych filmov" << endl;
	cout << "2. Vyber filmu na pozicanie" << endl;
	cout << "3. Vratit film" << endl;
	
	int vyberfilmu;
	int vyberaniefilmu;
	string meno1;
	string meno2;
	cin >> vyberfilmu;
	switch (vyberfilmu) {
	case 1:


		break;
	case 2:
		cout << "Spiderman" << endl;
		cout << "Lego film" << endl;
		cin >> vyberaniefilmu;
		switch (vyberaniefilmu) {
		case 1:
			cout << "Zadaj svoje meno pre pozicanie tohto filmu Spiderman" << endl;
			cin >> meno1;
			break;
		case 2:

			break;
		}
		

		system("PAUSE");
		break;
	case 3:
		break;
	
	}
	
	
	}
}