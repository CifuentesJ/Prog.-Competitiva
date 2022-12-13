#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int N;
    cin >> N;
    cin.ignore();

    string * lista = new string[N];
    for(int i = 0; i < N; i++){
        getline(cin, lista[i]);
    }

    string * unicos = new string[N];
    bool band = true;
    int pos = 1;
    unicos[0] = lista[0];
    for(int i = 1; i < N; i++){
        band = true;
        for (int j = 0; j < (pos) && band; j++){
            if(lista[i] == unicos[j] ){
                band = false;
            }
        }
        if(band){
            unicos[pos] = lista[i];
            pos++;
        }
    }
    
    double * porc = new double[pos];
    for(int i = 0; i < pos; i++){
        double cont = 0;
        for (int j = 0; j < N; j++){
            if(unicos[i] == lista[j] ){
                cont++;
            }
        }
        porc[i] = cont / (double)N * 100;
    }
    
    double * copiaPorc = new double[pos];
    for (int i = 0; i < pos; i++){
        copiaPorc[i] = porc[i];
    }

    bool band2 = true;
    for(int i = 0; i < pos-1 && band2; i++){
        band2 = false;
        for (int j = 0; j < pos-i-1; j++){
            if (copiaPorc[j] < copiaPorc[j+1]){
                int aux = copiaPorc[j];
                copiaPorc[j] = copiaPorc[j+1];
                copiaPorc[j+1] = aux;
                band = true;
            }
        }
    }

    for (int i = 0; i < pos; i++){
        if(copiaPorc[0] == porc[i]){
            cout << unicos[i] << " " << porc[i] << "% Balon de oro" << endl;
        }
    }
    for (int i = 0; i < pos; i++){
        if(copiaPorc[1] == porc[i]){
            cout << unicos[i] << " " << porc[i] << "% Balon de plata" << endl;
        }
    }
    for (int i = 0; i < pos; i++){
        if(copiaPorc[2] == porc[i]){
            cout << unicos[i] << " " << porc[i] << "% Balon de bronce" << endl;
        }
    }
    for (int i = 3; i < pos; i++){
        for (int j = 0; j < pos; j++){
            if(copiaPorc[i] == porc[j]){
                cout << unicos[j] << " " << porc[j] << "%" << endl;
            }
        }
    }
}
