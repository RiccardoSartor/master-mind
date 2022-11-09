#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand((int)time(0));

    int casuale, tentativi=9, nin, lung=4;
    int vcasuale[4], v_in[4], comuniunivoci[4]={0};

    bool boolneri[4] = {false};
    bool boolbianchi[4] = {false};

    int flag=0;
    for(int z=0; z<4; z++){
        cout << "\nInserisci il numero generato [" << z << "]: ";
        cin >> vcasuale[z];
    }

    for(int i=0; i<tentativi; i++){
        cout << "\nTuo tentativo n." << i+1 << ": ";
        for(int z=0; z<4; z++){
            boolneri[z]=false;
        }
        for(int z=0; z<4; z++){
            cout << "\nInserisci il numero  [" << z << "]: ";
            cin >> v_in[z];
        }

        for(int j=0; j<lung; j++){ // controllo neri
            if(vcasuale[j]==v_in[j]){
                boolneri[j] = true;
                cout<<"n";
            }
        }
        int rd=0;
        for(int j=0; j<lung; j++){
            for(int k=0; k<lung; k++){
                if (v_in[j]==vcasuale[k] && !boolneri[j] && !boolneri[k]) {
                    flag = 0;
                    for (int x = 0; x < rd; x++) {
                        if (comuniunivoci[x] == v_in[i]) {
                            flag++;
                        }
                    }
                    if (flag == 0) {
                        comuniunivoci[k] = v_in[i];
                        rd++;
                    }
                }
            }
        }
        for(int j=0; j<rd; j++){
            cout <<"b";
        }
    }
	cout << endl;
	system("pause");
}
