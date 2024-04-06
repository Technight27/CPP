#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>& st, int e){
    if(st.empty())
    return;
    int to=st.top();
    st.pop();
     insertatbottom(st,e);
    st.push(to);
    
}

void rev(stack<int>& st){
    if(st.empty())
    return;
    int t=st.top();
    st.pop();
    rev(st);
    insertatbottom(st,t);

  
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    rev(st);

    // Print elements of the reversed stack without popping
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
