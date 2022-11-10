#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand((int)time(0));

    int tentativi=9, lung=4;
    int vcasuale[4], v_in[4], comuniunivoci[4]={0};

    bool boolneri[4] = {false};

    int flag=0;

    for(int z=0; z<4; z++){
        cout << "\nInserisci il numero generato [" << z << "]: ";
        cin >> vcasuale[z];
    }

    for(int i=0; i<tentativi; i++){



        cout << "\nTuo tentativo n." << i+1 << ": ";

        for(int j=0; j<4; j++){
            cout << "\nInserisci il numero  [" << j << "]: ";
            cin >> v_in[j];
            boolneri[j]=false;
        }

        for(int j=0; j<lung; j++){ // controllo neri
            if(vcasuale[j]==v_in[j]){ // c == pin
                boolneri[j] = true;
                cout<<"n";
            }
        }
/*
        int dvu=0; //dimensione vettore univoci
        for(int j=0; j<lung; j++){
            for(int k=0; k<lung; k++){
                if (v_in[j]==vcasuale[k] && !boolneri[j] && !boolneri[k]) {
                    flag = 0;
                    for (int x = 0; x < dvu; x++) {
                        if (comuniunivoci[x] == v_in[j]) {
                            flag++;
                        }
                    }
                    if (flag == 0) {
                        comuniunivoci[dvu] = v_in[j];
                        dvu++;
                    }
                }
            }
        }
        for(int j=0; j<dvu; j++){
            cout << "\n" << comuniunivoci[j];
            cout <<"b";
        }*/


        int dvu=1; //dimensione vettore univoci
        for(int j=0; j<lung; j++){
            for(int k=0; k<lung; k++){
                if (v_in[j]==vcasuale[k] && !boolneri[j] && !boolneri[k]) {
                    flag = 0;
                    for (int x = 1; x <=dvu; x++) {
                        if (comuniunivoci[x-1] == v_in[j]) {
                            flag++;
                        }
                    }
                    if (flag == 0) {
                        comuniunivoci[dvu-1] = v_in[j];
                        dvu++;
                    }
                }
            }
        }

        
        for(int j=1; j<dvu; j++){
            cout << "\n" << comuniunivoci[j-1];
            cout <<"b";
        }
    }
	cout << endl;
	system("pause");
}
