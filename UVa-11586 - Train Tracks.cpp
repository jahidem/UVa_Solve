/*Jahid Hossain
 * Jahangirnagar University 
 * 8/16/2020
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t;cin>>t;cin.ignore();
   while(t--){
       string s;getline(cin,s);int ls[4]={},u=0;
       for(char x:s){
           if(x=='M') {
               if(u % 2) ls[0]++;
               else ls[1]++ ;
           }
           else if(x=='F') {
               if(u % 2) ls[2]++;
               else ls[3]++ ;
           }
       if(x!=' ')u++;}
       if(u>2&&ls[0]==ls[3]&&ls[1]==ls[2]) cout<<"LOOP\n";
       else cout<<"NO LOOP\n";//cout<<u;
       //for(int x:ls) cout<<x<<"\n";
   }
}
