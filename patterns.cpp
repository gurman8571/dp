#include<iostream>
using namespace std;


void rect(){
	int n;
	cout<<"enter n";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<n;j++)
		{
		cout<<"*"<<" ";		
		}
		cout<<endl;
	}
}
void rectwithspace(){
	int n;
	int c;
	cout<<"enter n";
	cin>>n;
	cout<<"enter c";
	cin>>c;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++)
		{
		   if(i==1|| i== n || j==1 || j==c){
		   	cout<<"*";
		   }
		  	
		   else{
		   	cout<<" ";
		   }
		   
		}
		cout<<endl;
	}
}


int main(){
	//rect();
	 rectwithspace();
}
