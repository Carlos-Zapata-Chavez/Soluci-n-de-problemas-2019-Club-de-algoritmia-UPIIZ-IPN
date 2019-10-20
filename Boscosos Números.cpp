#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cadena;

    cin>>cadena;

    int tabla[9];

    memset(tabla, 0, sizeof(tabla));

    for(int i=0; i<cadena.size(); i++){
        tabla[cadena[i]-48]++;
    }

    int pares = tabla[0] + tabla[2] + tabla[4] + tabla[6] + tabla[8];

    if(pares%2){
        cout<<"CHAFA";
    }else{
        cout<<"CHIDO";
    }
    return 0;
}
