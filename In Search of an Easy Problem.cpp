#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;

    int a=0;
    int b=0;
    for(int i=0; i<n; i++){

        cin>>b;
        a += b;

    }

    if(a){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

    return 0;
}
