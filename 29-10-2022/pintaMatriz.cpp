#include <iostream>
using namespace std;

int main(){ 
    char matriz[8][8];

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> matriz[i][j];
        }
    }

    char color = 'N';
    for (int i = 0; i < 8; i++){
        int cant = 0;
        for (int j = 0; j < 8; j++){
            if(matriz[i][j] == 'R'){
                cant++;
            }
        }
        if(cant == 8){
            color = 'R';
            break;
        }

        cant = 0;
        for (int j = 0; j < 8; j++){
            if(matriz[j][i] == 'B'){
                cant++;
            }
        }
        if(cant == 8){
            color = 'B';
            break;
        }
    }

    cout << color << endl;

    return 0;
}