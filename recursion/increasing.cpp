#include<bits/stdc++.h>
using namespace std;
void increasing(int a){
     if(a==1){
     cout<<a<<endl;
     return;
     }
     
     increasing(a-1);
     cout<<a<<endl;


}
int main(){
    increasing(5);
    return 0;
}