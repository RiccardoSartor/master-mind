#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 
int main(){
	srand((int)time(0));
	int length = 4; //lunghezza del numero
	int numero[length];
	int range = 6 + 1; //range = max - min + 1
	int tentativi = 9;
	int risposta, risposta_v[length];
	int contatore;
	int trovato, trovato_trovato; //0 = false, 1 = true
	int temp;
	int contavittoria;
	
	for(int i = 0; i < length; i++){
		numero[i] = rand()%range;
	}
	
	//debug
	cout << "numero -> \t\t";
	for(int i = 0; i < length; i++){
		cout << numero[i];
	}
	cout << endl;
	//fine debug
	
	for(int i = 0; i < tentativi; i++){  
	contavittoria = 0;
		//alla vittoria i = 9
		cout << "\nInserisi el numero -> \t";
		cin >> risposta;
		
		temp = 0;
		for(int j = length-1; j >= 0; j--){
			risposta_v[i]=risposta%10; 
			risposta = risposta / 10;
			//cout<<endl<<"Risposta: "<<risposta_v[i]; 
		}
		for(int j = 0; j < length; j++){
			if (risposta_v[j] == numero[j]){
				contavittoria++;
				cout << "n";
			}else{
				for(int k=0; k<length; k++){
					if(j != k && risposta_v[j] == numero[k]){
						j=length;
						trovato_trovato= 0;
						for(int z=0; z<j; z++){
							if(risposta_v[z] == risposta_v[j]){
								trovato_trovato = 1; 
								z = j+1; 
							}
							if(trovato_trovato == 0){
								cout<<"b"; 
							}	
						} 
					}
				}
			}
		}
		if(contavittoria == length){
			i = 9;
			cout<<"\nVittoria"; 
		}else if(i == 8){
			cout << "hai perso suca"<<endl;
		}
		
	}
	
}
