#include<bits/stdc++.h>
using namespace std;
void bubble(int* a,int n){
    int i,j,s,t=0;
    for(i=0;i<n-1;i++){


for(j=i+1;j<n;j++){
    if(a[j]<a[j-1]){
        swap(a[j],a[j-1]);
        

    }
}

    }

}
int main(){
int a[5]={34,2,56,4,56};
int n=5;
bubble(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
  return 0;
}