/*Jahid Hossain
 * Jahangirnagar University 
 * 8/17/2020
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string toH(int x){
    string s="";
    while(x){
        int nw=x%16;
        if(nw>9) s+=('A'+nw%10);
        else s+=to_string(nw);
        x/=16;
    }reverse(s.begin(),s.end());
    return s;
}
int main()
{
   int t;cin>>t;
   for(int c=1;c<=t;c++){
       string s;cin>>s;
       int u=0,ls[100]={};
       for(char x:s){
           if(x!='.'){
               if(x=='+'){
                   ls[u]=(ls[u]+1)%256;
               }
               else if(x=='-'){
                   ls[u]--;
                   if(ls[u]<0) ls[u]+=256;
               }
               else if(x=='>') u=(u+1)%100;
               else if(x=='<'){
                   u--;if(u<0) u+=100;
               }//cout<<u<<"\n";
           }
       }
       cout<<"Case "<<c<<":";
       for(int x:ls){cout<<" ";
           if(!x) cout<<"00";
           else{
               if(15>=x){cout<<'0';
               if(9>=x) cout<<x;
               else cout<<(char)('A'+x%10);
               }
               else cout<<toH(x);
           }
           }
   cout<<"\n";}
}
