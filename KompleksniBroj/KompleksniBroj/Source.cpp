#include <iostream>
using namespace std;

struct kompleksni
{
	float realni;
	float imaginarni;
};

void unos(kompleksni &o) {
	cout << "Unesite realni dio broja: " << endl;
	cin >> o.realni;
	cout << "Unesite imaginarni dio broja: " << endl;
	cin >> o.imaginarni;
}

void ispis(kompleksni &o) {
	cout << "Realni dio broja:" << endl;
	cout << o.realni << endl;
	cout << "Imaginarni dio broja:" << endl;
	cout << o.imaginarni << "i" << endl;
}

kompleksni zbrajanje(kompleksni o1, kompleksni o2) {
	kompleksni o3;
	o3.realni = o1.realni + o2.realni;
	o3.imaginarni = o1.imaginarni + o2.imaginarni;
	return o3;
}

kompleksni oduzimanje(kompleksni o1, kompleksni o2) {
	kompleksni o3;
	o3.realni = o1.realni - o2.realni;
	o3.imaginarni = o1.imaginarni - o2.imaginarni;
	return o3;
}

int main() {
	kompleksni objekt1, objekt2;
	kompleksni niz[5];

	unos(objekt1);
	unos(objekt2);

	ispis(objekt1);
	ispis(objekt2);

	cout << "Zbrajanje:" << endl;
	ispis(zbrajanje(objekt1, objekt2));
	cout << "Oduzimanje:" << endl;
	ispis(oduzimanje(objekt1, objekt2));

	niz[0].realni = objekt1.realni;
	niz[1] = objekt2;

	system("pause>0");
	return 0;
}