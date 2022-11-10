#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand((int)time(0));

    int flag=0, pneri=0, pbia=0;
    int tentativi=9, lung=4;
    int cas[4], pin[4], vcu[4]={0};
    int du=0, de=0; //dimensioni vettore univoci, du=dim univoci, de= dim extra
    bool boolneri[4] = {false};

    for(int z=0; z<4; z++){
        cout << "\nInserisci il numero generato [" << z << "]: ";
        cin >> cas[z];
    }

    for(int i=0; i<tentativi; i++){

        cout << "\n\n\nTuo tentativo n." << i+1 << ": ";

        for(int j=0; j<4; j++){
            cout << "\nInserisci il numero  [" << j << "]: ";
            cin >> pin[j];
            boolneri[j]=false;
        }
        cout << "\n\nRISULTATO:  ";

        pneri=0;pbia=0;
        for(int j=0; j<lung; j++){ // controllo neri
            if(cas[j]==pin[j]){ // c == pin
                boolneri[j] = true;
                pneri++;
                cout<<"N ";
            }
        }

        du=0;
        for(int j=0; j<lung; j++){
            for(int k=0; k<lung; k++){
                if (pin[j]==cas[k] && !boolneri[j] && !boolneri[k]) {
                    flag = 0;
                    for (int x = 0; x < du; x++) {
                        if (vcu[x] == pin[j]) {
                            flag++;
                        }
                    }
                    if (flag == 0) {
                        vcu[du] = pin[j];
                        du++;
                    }
                }
            }
        }
        de=du;
        for(int j=0; j<du; j++){
            int cv1=0, cv2=0;
            for(int k=0; k<lung; k++){
                if(vcu[j]==pin[k] && !boolneri[k]){
                    cv1++;
                }
                if(vcu[j]==cas[k] && !boolneri[k]){
                    cv2++;
                }
            }
            if (cv1==2 && cv2 == 2){
                vcu[de] = vcu[j];
                de++;
            }
        }

        // da ora si userà de al posto di du 
        for(int j=0; j<de; j++){
            cout <<"B ";
        }
        cout << "\nVettore Univoci: ";
        for(int j=0; j<du; j++){
            cout << vcu[j] << "\t";
		}
        cout << "\nVettore Univoci Extra: ";
        for(int j=0; j<de; j++){
            cout << vcu[j] << "\t";
		}

/*
        int du=1; //dimensione vettore univoci
        for(int j=0; j<lung; j++){
            for(int k=0; k<lung; k++){
                if (pin[j]==cas[k] && !boolneri[j] && !boolneri[k]) {
                    flag = 0;
                    for (int x = 1; x <=du; x++) {
                        if (vcu[x-1] == pin[j]) {
                            flag++;
                        }
                    }
                    if (flag == 0) {
                        vcu[du-1] = pin[j];
                        du++;
                    }
                }
            }
        }

        
        for(int j=1; j<du; j++){
            cout << "\n" << vcu[j-1];
            cout <<"b";
        }
*/
    }
	cout << endl;
	system("pause");
}
