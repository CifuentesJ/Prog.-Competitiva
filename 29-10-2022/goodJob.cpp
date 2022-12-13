#include <iostream>
using namespace std;

int main(){ 
    string correo, doc, placa, dom1 = "@gmail.com", dom2 = "@hotmail.com", dom3 = "@comunidad.iush.edu.co", domCorr = "";
    int errores = 0, contCor = 0;

    cin >> correo;
    cin >> doc;
    cin >> placa;

    for (int i = 0; i < correo.size(); i++){
        if(correo[i] != '@'){
            contCor++;
        }else{
            break;
        }
    }

    for (int i = contCor; i < correo.size(); i++){
        domCorr += correo[i];
    }

    if(domCorr == dom1 || domCorr == dom2 || domCorr == dom3){
        if(contCor < 8){
            errores++;
        }
    }else{
        errores++;
    }

    if(doc.size() > 7 && doc.size() < 11){
        for (int i = 0; i < doc.size(); i++){
            if(isalpha(doc[i])){
                errores++;
                break;
            }
        }
    }else{
        errores++;
    }

    if(placa.size() == 6){
        for (int i = 0; i < 6; i++){
            if (i < 3){
                if (isdigit(placa[i])){
                    errores++;
                    break;
                }
            }else{
                if (isalpha(placa[i])){
                    errores++;
                    break;
                }
            }
        }
        
    }else{
        errores++;
    }
    
    if(errores != 0){
        cout << "REEVALUAR CODIGO, SE HAN ENCONTRADO " << errores <<" ERROR(ES)" << endl;
    }else{
        cout << "CODIGO LIMPIO" << endl;
    }
    
    return 0;
}