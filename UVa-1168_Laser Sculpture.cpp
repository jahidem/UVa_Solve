/*Jahid Hossain
 * Jahangirnagar University 
 * 8/16/2020
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;cin>>n;
    while(n){
        int k,an=0;cin>>k;vector<int> ls(k+1);ls[0]=n;
        for(int u=1;u<=k;u++)cin>>ls[u];
        for(int u=1;u<=k;u++){
            an+=max(ls[u-1]-ls[u],0);
        }
        cout<<an<<"\n";
        cin>>n;}
}
