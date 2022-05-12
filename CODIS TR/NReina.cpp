#include <bits/stdc++.h>
using namespace std;

int n;
int Tauler[10000][10000];

void printSol(){
    for (int x = 0; x < n; x++){
        for (int y = 0; y < n; y++){
            cout << Tauler[x][y] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int fil, int col){
    int i, j;

    for (i = 0; i < col; i++)
        if (Tauler[fil][i])
            return false;
 
    for (i = fil, j = col; i >= 0 && j >= 0; i--, j--)
        if (Tauler[i][j])
            return false;
 
    for (i = fil, j = col; j >= 0 && i < n; i++, j--)
        if (Tauler[i][j])
            return false;
 
    return true;
}

bool backtracking(int col){
    if (col == n){ // hem col·locat les n reines
        printSol();
        return true;  
    }      

    for (int i = 0; i < n; i++){
        if (isSafe(i, col)){
            Tauler[i][col] = 1; // la posició és vàlida (reina) 
            if (backtracking(col + 1))
                return true;
            
            Tauler[i][col] = 0;
        }
    }   
    return false;
}


int main(){
    cout << "Introdueix una n: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            Tauler[i][j] = 0;
        }
    }
    if (backtracking(0) == false)
        cout << "No hi ha ninguna solucio posible per a aquesta n" << endl;
}