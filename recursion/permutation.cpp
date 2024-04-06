#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    int a=n*fact(n-1);
    return a;
}
int main()
{ int n,r;
cout<<"Enter total no of people and no of chairs"<<endl;
cin>>n>>r;
int p=fact(n);
int q=fact(n-r);
cout<<"Total no of permutations is "<<p/q;
    return 0;
} 