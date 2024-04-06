#include<bits/stdc++.h>
using namespace std;
void selec(int* a,int n){
    int i,j,s,t=0;
    for(i=0;i<n-1;i++){
t=i;

for(j=i+1;j<n;j++){
    if(a[j]<a[t]){
        t=j;
        

    }
}
swap(a[t],a[i]);
    }

}
int main(){
int a[5]={34,2,56,4,56};
int n=5;
selec(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
  return 0;
}