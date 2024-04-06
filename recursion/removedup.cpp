#include<iostream>
#include<string>
using namespace std;

string removed( string s){
if(s.size()==0)
return "";
char c=s[0];
string ans=removed(s.substr(1));
if(c==ans[0])  return ans;
return c+ans;
}
 int main(){
    string a=removed("aaabbbdddfffgg");
    cout<<a;
    return 0;
 }