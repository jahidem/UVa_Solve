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
		string ans="+x";char ul='#';n--;
		while(n--){
			string s;cin>>s;
		    if(ans[1]=='x'&&s[1]!='o'){
                if(ans[0]=='+') ans=s;
                else{
                    ans[1]=s[1];ans[0]=(s[0]=='+'? '-':'+');}
		    }
		    else if(ans[1]==s[1]){
		        if(s[0]==ans[0]) ans="-x";
		        else ans="+x";
		        }
		}
    cout<<ans<<"\n";
	cin>>n;}
}

