#include <iostream>
using namespace std;

int eingabe;
int time_eins;
int time_eins_h;
int time_eins_m;
int time_eins_s;
int time_zwei;
int time_zwei_h;
int time_zwei_m;
int time_zwei_s;
int time_diff;
int time_diff_h;
int time_diff_m;
int time_diff_s;



int main()
{
	cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
	cin >> time_eins_h;
	time_eins = time_eins_h;
	cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
	cin >> time_eins_m;
	time_eins = time_eins * 60 + time_eins_m;
	cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
	cin >> time_eins_s;
	time_eins = time_eins * 60 + time_eins_s;
	cout << time_eins_h << ":" << time_eins_m << " Uhr und " << time_eins_s << " Sekunden sind in Sekunden seit Mitternacht: " << time_eins << endl << endl;

	cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> time_zwei_h;
	time_zwei = time_zwei_h;
	cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
	cin >> time_zwei_m;
	time_zwei = time_zwei * 60 + time_zwei_m;
	cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> time_zwei_s;
	time_zwei = time_zwei * 60 + time_zwei_s;
	cout << time_zwei_h << ":" << time_zwei_m << " Uhr und " << time_zwei_s << " Sekunden sind in Sekunden seit Mitternacht: " << time_zwei << endl << endl;

	time_diff = time_zwei - time_eins;
	cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:" << endl;

	time_diff_s = time_diff % 60;
	time_diff = time_diff / 60;
	time_diff_m = time_diff % 60;
	time_diff = time_diff / 60;
	time_diff_h = time_diff;

	cout << time_diff_h << " Stunden, "<< time_diff_m <<" Minuten und " << time_diff_s << " Sekunden." << endl;
	system("PAUSE");
	return 0;
}