#include<iostream>
using namespace std;

int main(){
		int n;
	cout<<"enter n";
	cin>>n;
	
	for(int i=0;i<n/2+2;i++){
	for(int j=0;j<n-i;j++){
		cout<<" ";
	}
	for(int j=0;j<2*i+1;j++){
		cout<<"@";
	}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		
	
		for(int j=0;j<(n/2)+1;j++){
			if(j>=n/2-i && j>=i-n/2){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		
		
	
	for(int j=0;j<n;j++){
		if(i==n/2){
			cout<<"@";
		}
		else{
			cout<<" ";
		}
	}
       for(int j=0;j<(n/2)+1;j++){
			if(j>=n/2-i && j>=i-n/2){
				cout<<"*";
			}
		
		}
	
		cout<<endl;
	}
	
}
