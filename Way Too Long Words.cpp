#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int n=0;
    cin>>n;
    for(int i=0; i<n; i++){

        cin>>cadena;

        int tam=0;

        tam=cadena.length();

        if(tam<=10){
            cout<<cadena<<endl;
        }else{
            cout<<cadena[0];
            cout<<tam-2;
            cout<<cadena[tam-1]<<endl;
        }
    }

    return 0;
}
