#include<bits/stdc++.h>
using namespace std;
string subseq(string s,string ans){
    if(s.size()==0){
cout<<ans<<endl;
return ans;
    }
    char c=s[0];
    string a=s.substr(1);
    subseq(a,ans);
    subseq(a,ans+c);
}
int main()
{ 
     subseq("ABC","");
return 0;
    
} 

