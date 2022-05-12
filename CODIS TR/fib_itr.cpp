#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    vector <int> f(n+2); // llista on guardem els valors de les posicions de la sequencia
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++){ // iteració
        f[i] = f[i-1] + f[i-2]; 
    } 

    return f[n];
    
}

int main(){
    cout << "Introdueix la posicio del nombre de la sequencia de fibonacci que vulguis coneixer:\n";
    int nombre;
    cin >> nombre;
    cout << fib(nombre);
}