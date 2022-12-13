#include <iostream>
using namespace std;

int main(){ 
    int N;
    cin >> N;

    char ** matriz = new char*[N];
    for (int i = 0; i < N; i++){
        matriz[i] = new char[3];        
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    
    int posI = 0, posJ = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 3; j++){
            if(matriz[i][j] == 'X'){
                posI = i;
                posJ = j;
                break;
            }
        }
    }

    for (int i = posI; i < N; i++){
            if(matriz[posI+1][posJ] == '-'){
                posI++;
            }else if (matriz[posI][posJ+1] == '-' && matriz[posI+1][posJ+1] == '-'){
                posJ++;
            }else if(matriz[posI][posJ-1] == '-' && matriz[posI+1][posJ-1]){
                posJ--;
            }else{
                cout << "MARK DEBERA COMPRAR UNA CAMIONETA 4x4" << endl;
                break;
            }
            
    }
    
    if(posI == N-1){
        cout << "LA SUSPENSION SOBREVIVIO" << endl;
    }

    return 0;
}