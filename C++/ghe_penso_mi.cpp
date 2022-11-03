#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand((int)time(0));
	int tentativi = 9;
	int length = 4;
	int casuale[length];
	int input;
	int pezzi_input[length];
	int range = 6 + 1;
	int contaN;
	int controllo_doppi;
	int numeri_usciti[length];
	int conta_numeri_usciti;
	cout << "Numero generato->\t";
	for (int i = 0; i < length; i++) {
		casuale[i] = rand() % range;
		cout << casuale[i];
	}
	cout << endl;
	for (int i = 0; i < tentativi; i++) {
		cout << "\nInserisci il numero->\t";
		cin >> input;
		conta_numeri_usciti = 0;
		for(int j=0; j<length; j++){
			numeri_usciti[j]=-1; 
		}
		for (int j = length - 1; j >= 0; j--) {
			pezzi_input[j] = input % 10;
			input = input / 10;
			// cout << endl
			//	 << "Risposta: " << pezzi_input[j];
		}
		contaN = 0;
		for (int j = 0; j < length; j++) {
			for (int k = 0; k < length; k++) {
				controllo_doppi = 0;
				for (int z = 0; z <= conta_numeri_usciti; z++) {
					if (pezzi_input[k] == numeri_usciti[z]) {
						controllo_doppi = 1;
					}
				}
					if (casuale[j] == pezzi_input[k] && j == k) {
						cout << 'n';
						contaN++;
						numeri_usciti[conta_numeri_usciti] = pezzi_input[k];
						conta_numeri_usciti++;
					}
				if (controllo_doppi == 0) {
					if (casuale[j] == pezzi_input[k] && j != k) {
						cout << 'b';
						numeri_usciti[conta_numeri_usciti] = pezzi_input[k];
						conta_numeri_usciti++;
					}
				}
			}
		}
		if (contaN == 4) {
			cout << endl
				 << "Hai vinto Bravo MONA co a M maiuscoea";
			i = 10;
		}
		if (i == 8 && contaN != 4) {
			cout << endl
				 << "Hai perso Bravo";
		}
	}
	cout << endl;
	system("pause");
}
