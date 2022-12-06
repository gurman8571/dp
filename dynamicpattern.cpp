#include<iostream>
using namespace std;


	void dpat(){
	
		int n;
	cout<<"enter n";
	cin>>n;
	
	if(n==1 || n%2==0){
		cout<<"please eneter odd no expect 1";
	return;
	}
		for(int i=0;i<=n/2;i++){
	    
	         for(int j=1;j<=n/2;j++){
	         	cout<<" ";
			 }
			     for(int j=1;j<=i;j++){
	         	cout<<" ";
			 }
			   for(int j=1;j<=n-(2*i);j++){
	         	cout<<"@";
			 }
			 
	     
		cout<<endl;	
		}
		
		for(int i=n;i>0;i--){
	    
	        for(int j=1;j<=n;j++){
	        	
	        	if(j==1||j==n||i==n )
	        	{
	        		cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			 
	     
		cout<<endl;	
		}
		
		
	}
	void dpat4(){
		int n;
	cout<<"enter n";
	cin>>n;

		for(int i=0;i<=n/2+1;i++){

        for(int j=0;j<n-i;j++){
        	cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"@";
		}
         cout<<endl;
          }
		for(int i=0;i<n;i++){
			for(int j=0;j<n/2+1;j++){
				if(j>=n/2 -i && j>=i-n/2){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			
				for(int j=0;j<n;j++){
					if(i== n/2){
					cout<<"@";
				}
				else{
				cout<<" ";
				}
				}
				
			
				for(int j=0;j<n/2+1;j++){
				if(j>=n/2 -i && j>=i-n/2){
					cout<<"*";
				}
			
			}
			cout<<endl;
		}
	
		
			
	}
	void dpat5(){
		int n;
		int x=0;
	cout<<"enter n";
	cin>>n;

		for(int i=0;i<2*n;i++){
			bool flag=false;
			if(i<n+1){
				cout<<"@";
				
			}
			else{
				cout<<" ";
			}
          for(int j=0;j<n*(n-1)+1;j++){
          	if(i>=n/2 && i<2*n-n/2){
          		if(j<(n-1)*x || j>(n-1)*x+n-1)
				  cout<<" ";
				  else{
				  	cout<<"*";
				  	flag=true;
				  }
			  }
          	else{
          	cout<<" ";
			  }
		  }
		  if(flag){
		  	x++;
		  }
		  	if(i>=n-1){
				cout<<"@";
				
			}
			else{
				cout<<" ";
			}
				cout<<endl;
			}
		
		
			
	}
int main(){

	 //zerone();
	 //rhombus();
	 //palindromicpatt();
	 dpat();
	//dpat2();
	//dpat3();
	//dpat4();
	//dpat5();
}
