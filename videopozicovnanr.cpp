#include <iostream>
#include <time.h>
#include <stdlib.h>     
using namespace std;
int main()
{
	int skuska = 0;
	int skuska1 = 0;
	int skuska2 = 0;
	int skuska3 = 0;
	int skuska4 = 0;
	int vyberfilmu;
	int vyberaniefilmu, vyberaniefilmu1;
	string cistemeno;
	string meno1, meno2, meno3, meno4, meno5;
	int vstup = 0;
	cout << "Zdravim chces vstupit do videopozicovne?" << endl;
	cout << "Ak chces vstupit do videopozicovne stlac 1" << endl;
	cout << "Ak si nechcel ist do videopozicovne stlac 2" << endl;
	cout << "___________________________________________________________________________" << endl;
	cin >> vstup;
	if (vstup == 2) {
		return 0;
	}
	else if (vstup == 1) {}
	while (true) {

		cout << "Vitaj vo videopozicovni! " << endl;
		cout << "___________________________________________________________________________" << endl;
		cout << "Vyber podla cisla operaciu ktoru chces uskutocnit : " << endl;
		cout << "1. Vyber filmu na pozicanie" << endl;
		cout << "2. Zoznam pozicanych filmov" << endl;
		cout << "3. Vratit film" << endl;

		cin >> vyberfilmu;
		switch (vyberfilmu) {
		case 1:
			cout << "___________________________________________________________________________" << endl;
			cout << "1. Spiderman" << endl;
			cout << "2. Lego film" << endl;
			cout << "3. Avengers-Endgame" << endl;
			cout << "4. Taxi 5 " << endl;
			cout << "5. Rychlo a zbesilo 8" << endl;
			cout << "6. Vyber nahodneho filmu z hore uvedenych" << endl;
			cout << "7. Odist na hlavne menu " << endl;
			cout << "___________________________________________________________________________" << endl;

			cin >> vyberaniefilmu1;
			




			switch (vyberaniefilmu1) {
			case 1:
				if (skuska == 1) {
					cout << "Tento film je pozicany, zoznam pozicanych filmov si mozes pozriet ak stlacis 2 v uvodnom menu" << endl;
					break;
				}
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Spiderman " << endl;
				cin >> meno1;
				skuska = 1;
				break;
			case 2:
				if (skuska1 == 2)
				{
					cout << "Tento film je pozicany, zoznam pozicanych filmov si mozes pozriet ak stlacis 2 v uvodnom menu" << endl;
					break;
				}
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Lego Film " << endl;
				cin >> meno2;
				skuska1 = 2;
				break;
			case 3:
				if (skuska2 == 3)
				{
					cout << "Tento film je pozicany, zoznam pozicanych filmov si mozes pozriet ak stlacis 2 v uvodnom menu" << endl;
					break;
				}
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Avengers-Endgame " << endl;
				cin >> meno3;
				skuska2 = 3;
				break;
			case 4:
				if (skuska3 == 4)
				{
					cout << "Tento film je pozicany, zoznam pozicanych filmov si mozes pozriet ak stlacis 2 v uvodnom menu" << endl;
					break;
				}
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Taxi 5 " << endl;
				cin >> meno4;
				skuska3 = 4;
				break;
			case 5:
				if (skuska4 == 5)
				{
					cout << "Tento film je pozicany, zoznam pozicanych filmov si mozes pozriet ak stlacis 2 v uvodnom menu" << endl;
					break;
				}
				cout << "Zadaj svoje meno pre pozicanie tohto filmu: Rychlo a zbesilo 8" << endl;
				cin >> meno5;
				skuska4 = 5;
				break;
			case 6:
				int nahodnyfilm;
				int nwmco;
				srand(time(0));
				nahodnyfilm = (rand() % 5 + 1);
				if (nahodnyfilm == 1) {
					if (skuska == 1) {
						cout << "Tvoj nahodne film je zial pozicany, mozes to sksuit znova a dufat ze ti nepadne uz pozicany film :D, alebo si mozes pozriet pozicane filmy v zozname pozicanych filmov a vybrat si sam! " << endl;
						break;
					}
					cout << "Tvoj nahodne vybraty film je: Spiderman! " << endl;
					cout << "Zadaj svoje meno pre pozicanie tohto filmu: Spiderman " << endl;
					cin >> meno1;
					skuska = 1;
				}
				if (nahodnyfilm == 2) {
					if (skuska1 == 2)
					{
						cout << "Tvoj nahodne film je zial pozicany, mozes to sksuit znova a dufat ze ti nepadne uz pozicany film :D, alebo si mozes pozriet pozicane filmy v zozname pozicanych filmov a vybrat si sam! " << endl;
						break;
					}
					cout << "Tvoj nahodne vybraty film je: Lego Film! " << endl;
					cout << "Zadaj svoje meno pre pozicanie tohto filmu: Lego Film " << endl;
					cin >> meno2;
					skuska1 = 2;
				}
				if (nahodnyfilm == 3) {
					if (skuska2 == 3)
					{
						cout << "Tvoj nahodne film je zial pozicany, mozes to sksuit znova a dufat ze ti nepadne uz pozicany film :D, alebo si mozes pozriet pozicane filmy v zozname pozicanych filmov a vybrat si sam! " << endl;
						break;
					}
					cout << "Tvoj nahodne vybraty film je: Avengers-Endgame! " << endl;
					cout << "Zadaj svoje meno pre pozicanie tohto filmu: Avengers-Endgame " << endl;
					cin >> meno3;
					skuska2 = 3;
				}
				if (nahodnyfilm == 4) {
					if (skuska3 == 4)
					{
						cout << "Tvoj nahodne film je zial pozicany, mozes to sksuit znova a dufat ze ti nepadne uz pozicany film :D, alebo si mozes pozriet pozicane filmy v zozname pozicanych filmov a vybrat si sam! " << endl;
						break;
					}
					cout << "Tvoj nahodne vybraty film je: Taxi 5! " << endl;
					cout << "Zadaj svoje meno pre pozicanie tohto filmu: Taxi 5 " << endl;
					cin >> meno4;
					skuska3 = 4;
				}
				if (nahodnyfilm == 5) {
					if (skuska4 == 5)
					{
						cout << "Tvoj nahodne film je zial pozicany, mozes to sksuit znova a dufat ze ti nepadne uz pozicany film :D, alebo si mozes pozriet pozicane filmy v zozname pozicanych filmov a vybrat si sam! " << endl;
						break;
					}
					cout << "Tvoj nahodne vybraty film je: Rychlo a zbesilo 8! " << endl;
					cout << "Zadaj svoje meno pre pozicanie tohto filmu: Rychlo a zbesilo 8" << endl;
					cin >> meno5;
					skuska4 = 5;
				}
			
				break;
			case 7:
				
				break;

			}break;
		case 2:
			cout << "Pozicane filmy na zozname su tieto: " << endl;
			cout << "Spiderman          - " << meno1 << endl;
			cout << "Lego film          - " << meno2 << endl;
			cout << "Avengers-Endgame   - " << meno3 << endl;
			cout << "Taxi 5             - " << meno4 << endl;
			cout << "Rychlo a zbesilo 8 - " << meno5 << endl;
			break;
		case 3:
			cout << "Rozhodol si sa vratit film, napis presne svoje meno ktore si zadaval pri pozicavani filmu (dodrziavaj male a velke pismena)" << endl;
			cin >> cistemeno;
			if (meno1 == cistemeno) {
				cout << "Uspesne si vratil film Spiderman! " << endl;
				meno1 = "";
				skuska = 0;
			}
			else if (meno2 == cistemeno) {
				cout << "Uspesne si vratil film Lego film! " << endl;
				meno2 = "";
				skuska1 = 0;
			}
			else if (meno3 == cistemeno) {
				cout << "Uspesne si vratil film Avengers-Endgame! " << endl;
				meno3 = "";
				skuska2 = 0;
			}
			else if (meno4 == cistemeno) {
				cout << "Uspesne si vratil film Taxi 5! " << endl;
				meno4 = "";
				skuska3 = 0;
			}
			else if (meno5 == cistemeno) {
				cout << "Uspesne si vratil film Rychlo a zbesilo 8! " << endl;
				meno5 = "";
				skuska4 = 0;
			}
			else if (cistemeno == cistemeno) {
				cout << "Nemas poziciany ziadny film alebo si zadal zle meno! " << endl;
			}
		}
		system("PAUSE");
	}
}