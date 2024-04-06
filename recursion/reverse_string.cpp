#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.size()==0)
    return;
    string r=s.substr(1);
    reverse(r);
    cout<<s[0];

}
int main()
{
    reverse("binod");
    return 0;
}