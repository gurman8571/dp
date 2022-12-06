#include<iostream>
using namespace std;

int main(){
		int n;
	cout<<"enter n";
	cin>>n;
	
	for(int i=0;i<=n/2;i++){
		
	for(int j=0;j<n/2+i;j++){
		cout<<" ";
	}
	for(int j=0;j<n-2*i;j++){
		cout<<"@";
	}
	
if(i!=n-1){
	cout<<endl;	
}	
	}
	for(int i=0;i<n;i++){
		if(i==0){
		for(int j=0;j<n;j++){
		cout<<"*";
		}	
		}
		else{
	      	for(int j=0;j<n;j++){
		       
		       if(j==0||j==n-1){
		       	cout<<"*";
			   }
			   else{
			   	cout<<" ";
			   }
		}		 
		}
		
		
		
		cout<<endl;
	}
	
}
