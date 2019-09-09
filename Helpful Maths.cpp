#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cadena;

    cin>>cadena;

    int uno=0;
    int dos=0;
    int tres=0;

    for(int i=0; i<cadena.length(); i+=2){

        if(cadena[i] == '1'){
            uno++;
        }else if(cadena[i] == '2'){
            dos++;
        }else{
            tres++;
        }
    }

    if(cadena.length()==1){

        if(uno){
            cout<<"1";
        }else if(dos){
            cout<<"2";
        }else{
            cout<<"3";
        }
    }else{
        for(int i=0; i<uno-1; i++){
            cout<<"1+";
        }
        if(!dos && uno!=0 && !tres){
            cout<<"1";
        }else if(uno!=0){
            cout<<"1+";
        }
        for(int i=0; i<dos-1; i++){
            cout<<"2+";
        }
        if(!tres && dos!=0){
            cout<<"2";
        }else if(dos!=0){
            cout<<"2+";
        }
        for(int i=0; i<tres-1; i++){
            cout<<"3+";
        }
        if(tres!=0)cout<<"3";
    }

    return 0;
}
