#include <iostream>
using namespace std;

int main(){ 
    int N;
    cin >> N;

    string placa = "";
    int puntos = 0;
    for (int i = 0; i < N; i++){
        cin >> placa;

        if((placa[0] == placa[1] && placa[1] == placa[2]) || (placa[3] == placa[4] && placa[5] == placa[4])){
            puntos += 3;
        }else if((placa[0] == placa[1]) || (placa[1] == placa[2]) || (placa[3] == placa[4]) || (placa[4] == placa[5])){
            puntos += 1;
        }
    }

    cout << puntos << endl;    

    return 0;
}