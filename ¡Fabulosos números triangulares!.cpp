#include<bits/stdc++.h>

using namespace std;

int numeros[100000];

int triangular(int pos);

int main()
{
    int n;
    uint64_t s=0;
    cin>>n;

    memset(numeros, -1, sizeof(numeros));

    numeros[0]=0;
    numeros[1]=1;

    int pos;

    while(n--){
        cin>>pos;
        cout<<triangular(pos)<<endl;
    }

    return 0;
}

int triangular(int pos){
    if(numeros[pos] != -1) return numeros[pos];

    numeros[pos]= triangular(pos-1)+pos;

    return numeros[pos];
}
