#include<bits/stdc++.h>
using namespace std;
void insert(int* a,int n){
    int i,j,s,curr;
    for(i=1;i<n;i++){
        j=i-1;
        curr=a[i];
        while(curr<a[j]&& j>=0){
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=curr;
        



    }

}
int main(){
int a[5]={34,2,56,4,56};
int n=5;
insert(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
  return 0;
}