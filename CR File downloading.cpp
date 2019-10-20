#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cadena;
    char accion;

    deque < string > cola;

    while(cin>>accion){
        switch (accion){
        case 'D':
            cin>>cadena;
            cola.push_back(cadena);
            cout<<"ok"<<endl;
            break;
        case 'T':

            cout<<"descargada "<<cola.front()<<endl;

            cola.pop_front();
            break;

        case 'X':
            cout<<cola.size()<<" descarga(s) abortadas"<<endl;
            break;

        case 'C':

            cout<<"faltan "<<cola.size()<<" descarga(s)"<<endl;
            break;
        }
    }
    return 0;
}
