#include<iostream>
using namespace std;

int main(){
		int n;
	cout<<"enter n";
	cin>>n;
	
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
			if(i==0){
				cout<<"@";
			}
			else{
				if(j==n-1){
					cout<<"@";
				}
				else{
					cout<<" ";
				}
			}
		}
		for(int j=0;j<n;j++){
			cout<<" ";
		}
		
		for(int j=0;j<n;j++){
			if(i==0){
				cout<<"@";
			}
			else{
				if(j==0){
					cout<<"@";
				}
				else{
					cout<<" ";
				}
			}
		}
	
	for(int j=0;j<(n/2)+1;j++){
			if(j>=n/2-i && j>=i-n/2){
				cout<<"*";
			}
			
		}
	
		cout<<endl;
	}
	for(int i=0;i<(n/2)+2;i++){
		for(int j=0;j<(n/2)+1;j++){
         cout<<" ";			
		}
			for(int j=0;j<n-1;j++){
         cout<<" ";			
		}
		if(i==0){
			for(int j=0;j<n+2;j++){
				cout<<"*";
			}
		}
		else{
			for(int j=0;j<i;j++){
         cout<<" ";			
		}	
		for(int j=0;j<(n+2)-2*i;j++){
			cout<<"*";
		}
		}
	
		cout<<endl;
	}
	
}
