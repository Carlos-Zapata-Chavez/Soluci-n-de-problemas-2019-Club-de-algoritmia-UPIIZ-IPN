#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;

    int x=0;
    int y=0;
    int z=0;

    for(int i=0; i<n ; i++){

        int num=0;

        cin>>num;
        x+=num;
        cin>>num;
        y+=num;
        cin>>num;
        z+=num;
    }

    if( !x && !y && !z){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
