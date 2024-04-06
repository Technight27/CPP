#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int a[n1];
    int b[n2];
    for(i=0;i<n1;i++)
    a[i]=arr[l+i];
    for(i=0;i<n2;i++)
    b[i]=arr[m+i+1];
    i=0,j=0,k=l;
    while(i<n1&& j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
            k++;
            i++;
    }
    while(j<n2){
        arr[k]=b[j];
            k++;
            j++;
    }



}
void mergesort(int arr[],int l,int r){
    int m; 
    m=(l+r)/2;
    if(l<r){
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int arr[5]={3,56,2,87,4};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){

    
    cout<<arr[i]<<endl;}
    return 0;
}










