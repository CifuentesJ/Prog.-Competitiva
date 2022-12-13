#include <iostream>
using namespace std;

int main(){ 
    int N;
    cin >> N;

    int ** matriz = new int*[N];
    for (int i = 0; i < N; i++){
        matriz[i] = new int[N];        
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    int error = 0, cont2 = 0, cont3 = 0;
    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++){
            if(matriz[i][j] == 2){
                cont2++;
            }else if(matriz[i][j] == 3){
                cont3++;
            }
        }
    }


    if(cont2 % 4 != 0){
        error++;
    }
    if(cont3 % 9 != 0){
        error++;
    }

    if(error != 0){
        cout << "CONSIGUE MAS CROMOS, TIENES " << error << " ERROR(ES)" << endl;
    }else{
        cout << "ROAD TO QATAR 2022" << endl;
    }
    

    return 0;
}