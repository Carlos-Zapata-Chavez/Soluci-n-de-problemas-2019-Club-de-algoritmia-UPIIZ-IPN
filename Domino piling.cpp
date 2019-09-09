#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m=0;
    int n=0;

    cin>>m;
    cin>>n;

    if(!(m%2)){
        cout<< m * 0.5 * n;
    }else{

        cout<< ((m-1) * 0.5 * n)+(floor(n/2));
    }

    return 0;
}
