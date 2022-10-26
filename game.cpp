#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand((int)time(0));
	int numero[4];
	int range = 6 + 1; //range = max - min + 1
	int tentativi = 9;
	int risposta, risposta_v[4];
	int contatore;
	bool stop = false, trovato, trovato_trovato;
	
	for(int i = 0; i < 4; i++){  //assegnazione valori random
		numero[i] = rand()%6+1;
	}
	
	//debug
	cout << "numero -> ";
	for(int i = 0; i < 4; i++){
		cout << numero[i];
	}
	cout << endl;
	
	do{
		cout << "Inserisci il numero -> ";
		cin >> risposta;
		
		risposta_v[0] = ((risposta % 10000) - (risposta % 1000))/1000;
		risposta_v[1] = ((risposta % 1000) - (risposta % 100))/100;
		risposta_v[2] = ((risposta % 100) - (risposta % 10))/10;
		risposta_v[3] = ((risposta % 10) - (risposta % 1))/1;
		
		for(int i = 0; i < 4; i++){
			trovato = false;
			if (risposta_v[i] == numero[i]){
				cout << 'n';
			}else{
				contatore = 0;
				while(!trovato && contatore < 4){
					//cout << "-> " << risposta_v[i]<<endl<<"-> " << numero[contatore]<<endl<<endl;
					if(i != contatore && risposta_v[i] == numero[contatore]){
						trovato_trovato = false;
						for(int j = 0; j < i; j++){
							if(risposta_v[j] == risposta_v[i]){
								trovato_trovato = true;
								break;
							}
						}
						trovato = true;
						if(!trovato_trovato){
							cout << 'b';
						}
						
					}
					contatore++;
				}
				/*if(!trovato){
					cout << 'f';
				}*/
			}
		}
		cout << endl;
		
	}while(!stop && tentativi > 0);
}
