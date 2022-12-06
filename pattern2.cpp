#include<iostream>
using namespace std;


void halfparymid(){
		int n;

	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		//print spaces
			for(int j=1;j<=n-i;j++){
			cout<<" ";
		}   
		for(int k=1;k<=i;k++){
			cout<<"*";
		}   
			cout<<endl;
		}
}
void invertedhalfparymid(){
	int n;

	cout<<"enter n";
	cin>>n;
		for(int i=n;i>=1;i--){
		
		for(int j=1;j<=i;j++){
			cout<<"*";
		}   
			cout<<endl;
		}
	
	}

void halfparymidusingnumber(){
	int n;

	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			cout<<i;
		}   
			cout<<endl;
		}
	
	}
	
void  floydspattern(){
	int n;

	cout<<"enter n";
	cin>>n;
	int count=1;
		for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		
	    
			cout<<endl;
		}
		
		}
		
		void butterfly(){
		int n;
	cout<<"enter n";
	cin>>n;
	
		for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
		cout<<"*";
		}   
			for(int l=1;l<=(2*n-2*i);l++){
			cout<<" ";
		}   
		for(int k=1;k<=i;k++){
			cout<<"*";
		}  
		
		
		
			cout<<endl;
		}
		for(int i=n;i>=1;i--){
		
		for(int j=1;j<=i;j++){
		cout<<"*";
		}   
			for(int l=1;l<=(2*n-2*i);l++){
			cout<<" ";
		}   
		for(int k=1;k<=i;k++){
			cout<<"*";
		}  
		
		
		
			cout<<endl;
		}	
		}
		
		void invertparymidno(){
		int n;
	cout<<"enter n";
	cin>>n;
		for(int i=n;i>=1;i--){
		
	
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}  
			cout<<endl;
		}		
		}
int main(){
	//rect();
	 //rectwithspace();
	 //invertedhalfparymid();
	 //halfparymid();
	 //halfparymidusingnumber();
	 //floydspattern();
	 //butterfly();
	 invertparymidno();
}
