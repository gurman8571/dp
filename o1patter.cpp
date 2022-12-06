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
void zerone(){
	int n;
	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		
	            
	             	for(int k=1;k<=i;k++){
		               if(i%2==0){
		               	if(k%2==0)
		               	cout<<"1"<<" ";
		               	else{
		               		cout<<"0"<<" ";
						   }
		               	
					   }
		               else{
		               	if(k%2==0)
		               	cout<<"0"<<" ";
		               	else{
		               		cout<<"1"<<" ";
						   }
					   }
		             }  	
				 
				 
			
			cout<<endl;
		}
	
	}
	void rhombus(){
	int n;
	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		
	            
	             	for(int k=1;k<=n-i;k++){
		              cout<<" ";
					   }
					   
					   	for(int k=1;k<=n;k++){
		                  cout<<"*";
					   }
					   
					   
		              		 
			
			cout<<endl;
		}
	
	}
	void palindromicpatt(){
		int n;
	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		
	            
	             	for(int k=1;k<=n-i;k++){
		             cout<<" ";
					   }
					   int j=i;
					   for(j;j>=1;j--){
		             cout<<j;
					   }
					   if(i>1){
					   for(int l=2;l<=i;l++){
					              cout<<l;
					   }
				}
					   
					   
					   
					   
					   
					   
		              		 
			
			cout<<endl;
		}	
		
	}
	void star(){
		int n;
	cout<<"enter n";
	cin>>n;
		for(int i=1;i<=n;i++){
		
		
					for(int j=1;j<=n-i;j++){
						cout<<" ";
					}
					for(int j=1;j<=(2*i-1);j++){
						cout<<"*";
					}
			cout<<endl;
		}	
		
			for(int i=n;i>=1;i--){
		
		
					for(int j=1;j<=n-i;j++){
						cout<<" ";
					}
					for(int j=1;j<=(2*i-1);j++){
						cout<<"*";
					}
			cout<<endl;
		}	
				
	}
int main(){

	 //zerone();
	 //rhombus();
	 //palindromicpatt();
	 star();
}
