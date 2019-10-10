#include <bits/stdc++.h>

using namespace std;

vector < pair< int64_t , int64_t> > perros(400000);

int main()
{
    int n;
    cin>>n;

    int p;

    while(n--){
        cin>>p;
        if(p<0){
            perros[200000+abs(p)].first++;
            perros[200000+abs(p)].second = p;
        }else{
            perros[p].first++;
            perros[p].second = p;
        }
    }

    sort(perros.begin(), perros.end(), greater< pair < int64_t, int64_t> >());

    for(int64_t i=0; i<400000; i++){

        if(perros[i].first == 0) break;

        cout<<perros[i].second<<endl;
    }


    return 0;
}
