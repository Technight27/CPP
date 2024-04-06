#include<bits/stdc++.h>
using namespace std;
	 int fact(int);
	 void display(int p){
		cout<<"The factorial is "<<p;
	 }
	int main() {
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int k=fact(n);
	display(k);
	return 0;
	}
	int fact(int n){
		if(n==1)
		return 1;
		int  p= fact(n-1);
		
		return(n*p);
	}