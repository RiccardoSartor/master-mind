#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 // commenti in fianco alle variabili indicano il nome delle varibili nel file di testo ghe_penso_mi_pt2
int main() {
	srand((int)time(0));
	int tentativi = 9; //t
	int length = 4; //l
	int casuale[length]; //c
	int input; //in
	int pezzi_input[length]; //pin
	int contaN; //cn
	int controllo_doppi; //cd
	int numeri_usciti[length]; //nu[l]
	int conta_numeri_usciti; //cnu
	cout << "Numero generato->\t";
	for (int i = 0; i < length; i++) { //(int i=0; i<l; i++){
		casuale[i] = rand() % 6 +1; //ATTENZIONE NON SI USA IL RANGE c[i]
		cout << casuale[i];
	}
	cout << endl;
	for (int i = 0; i < tentativi; i++) { // (int i=0; i<t; i++){
		cout << "\nInserisci il numero->\t";
		cin >> input; //in
		conta_numeri_usciti = 0; //cnu
		for(int j=0; j<length; j++){ //(int i=0; i<l; i++){
			numeri_usciti[j]=-1; // nu[j]=-1
		}
		for (int j = length - 1; j >= 0; j--) { //(int i=l-1; i>=0; i++){
			pezzi_input[j] = input % 10;  //non serve perche nel basic si fa in modo diverso
			input = input / 10;
			// cout << endl
			//	 << "Risposta: " << pezzi_input[j];
		}
		for(int j=0; j<length; j++){
			cout<<"\t"<<pezzi_input[j]; 
		}
		contaN = 0; //cn=0
		for (int j = 0; j < length; j++) { //(int i=0; i<l; i++){
			for (int k = 0; k < length; k++) { //(int i=0; i<l; i++){
				controllo_doppi = 0; //cd=0
				for (int z = 0; z <= conta_numeri_usciti; z++) { //(int i=0; i<=cnu; i++){
					if (pezzi_input[k] == numeri_usciti[z]) { // pin[k] == nu[z]
						controllo_doppi = 1; //cd=1
					}
				}
					if (casuale[j] == pezzi_input[k] && j == k) { // c[j]==pin[] and j=k
						cout << 'n';
						contaN++; //cn++
						numeri_usciti[conta_numeri_usciti] = pezzi_input[k]; // nu[cnu]=pin[k]
						conta_numeri_usciti++; //cnu++
					}
				if (controllo_doppi == 0) { //cd ==0
					if (casuale[j] == pezzi_input[k] && j != k) { //c[j]=pin[k] and j!=k
						cout << 'b';
						numeri_usciti[conta_numeri_usciti] = pezzi_input[k];// nu[cnu]=pin[k]
						conta_numeri_usciti++;//cnu++
					}
				}
			}
		}
		if (contaN == 4) { //cn=4
			cout << endl
				 << "Hai vinto Bravo MONA co a M maiuscoea";
			i = 10;
		}
		if (i == 8 && contaN != 4) { //i=8 and cn!=4
			cout << endl
				 << "Hai perso Bravo";
		}
	}
	cout << endl;
	system("pause");
}
