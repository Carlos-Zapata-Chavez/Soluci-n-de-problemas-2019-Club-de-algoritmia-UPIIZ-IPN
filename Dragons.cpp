#include <bits/stdc++.h>
using namespace std;



int main()
{
    int s=0;
    int n=0;

    cin>>s;
    cin>>n;

    int dragones[n][2];

    for(int i=0; i<n; i++){
        int a=0;
        int b=0;

        cin>>a;
        cin>>b;

        dragones[i][0] = a;
        dragones[i][1] = b;
    }

    int auxa=0;
    int auxb=0;

    for(int i=1; i<n; i++){
        for(int j=n-1; j>=i; j--){
            if(dragones[j-1][0] > dragones[j][0]){

                auxa = dragones[j-1][0];
                auxb = dragones[j-1][1];

                dragones[j-1][0]=dragones[j][0];
                dragones[j-1][1]=dragones[j][1];

                dragones[j][0]=auxa;
                dragones[j][1]=auxb;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(s<=dragones[i][0]){
            cout<<"NO";
            return 0;
        }

        s+=dragones[i][1];
    }
    cout<<"YES";

    return 0;
}
