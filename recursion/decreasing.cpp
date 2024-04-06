#include<bits/stdc++.h>
using namespace std;
void decreasing(int a){
     if(a==1){
     cout<<a<<endl;
     return;
     }
      cout<<a<<endl;
     decreasing(a-1);


}
int main(){
    decreasing(5);
    return 0;
}