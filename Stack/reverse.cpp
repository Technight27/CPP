#include<bits/stdc++.h>
using namespace std;
void reversed(string s){
    stack<string> st;
    int i=0;
    for(i=0;i<s.size();i++){
        string w="";
    while(s[i]!=' '&& i<s.size()){
         w+=s[i];
        i++;
    }
    st.push(w);

}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  
}
}
int  main(){
    string s=" How, are you doing?";
    reversed(s);
    return 0;
}