#include<iostream>
using namespace std;

int main(){
		int n;
	cout<<"enter n";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		
	
	for(int j=0;j<n;j++){
		if(i==n/2 || i<n/2&&j<=i||i>n/2&&j<n-i ){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	if(i==n/2-1||i==n/2+1){
		cout<<" *";
	}
		if(i==n/2){
		cout<<"***";
	}
cout<<endl;		
	}
		
}
