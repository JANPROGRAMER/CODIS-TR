#include <bits/stdc++.h>
using namespace std;

void Endevina_Nombre(int nombre_secret, int low, int high){
    int mid, intents = 0;
    char resposta;
    while (high >= low){
        intents ++;
        mid = (low + high) / 2;
        cout << "L'algorisme ha provat el numero: " << mid << endl;
        cin >> resposta;
        if (resposta == '='){
            cout << "L'algorisme ha encertat el nombre secret " << nombre_secret << " en " << intents << " intents!" << endl;
            break;
        }
        else if (resposta == '>'){
            high = mid - 1;
            continue;
        }
        else if (resposta == '<'){
            low = mid + 1;
            continue;
        }
    }
}

int main(){
    int nombre_secret;
    cout << "Introdueix el nombre secret (entre 0 i 100) " << endl;
    cin >> nombre_secret;
    cout << "L'algorisme binary search provara diferents numeros" << endl;
    cout << "Hauras d'escriure `=` si l'algorisme ha encertat el teu numero secret" << endl;
    cout << "Hauras d'escriure `>` si el numero que l'algorisme ha provat es mes gran que el numero secret" << endl;
    cout << "Hauras d'escriure `<` si el numero que l'algorisme ha provat es mes petit que el numero secret" << endl;

    int low = 0;
    int high = 100;
    Endevina_Nombre(nombre_secret, low, high);
}