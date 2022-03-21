#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res=0;
    int t[4];
    int occ=0;
    for(int i=0;i<4;i++){
        cin>>t[i];
    }
    sort(t,t+4);
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(t[i]==t[j]){
            occ++;
            break;
            }
        }
        res+=occ;
        occ=0;
    }
    cout<<res<<'\n';
    return 0;
}
