#include<iostream>
using namespace std;

int main(){
	
	
		int n;
	cout<<"enter n";
	cin>>n;

	
	for(int i=0;i<=n/2+1;i++){
		
	
	for(int j=0;j<n;j++){
	  cout<<" ";
     }
      for(int j=0;j<=(n/2-i);j++){
	         	cout<<" ";
			 }
			 for(int j=1;j<=2*i-1;j++){
	         	cout<<"*";
			 }
			 
			 
			 
cout<<endl;		
	}

	for(int i=0;i<n-2;i++){
		
	
	for(int j=0;j<n;j++){
	  cout<<" ";
     }
     
      for(int j=0;j<n;j++){
	        if(j==0||j==n-1)
	        {
	        	cout<<"@";
			}
			else{
				cout<<" ";	
			}
			 }
			 
cout<<endl;		
	}
       for(int i=0;i<n/2+1;i++){
       	for(int j=0;j<i;j++){
       		cout<<" ";
		   }
       	for(int j=0;j<n-2*i;j++){
       		cout<<"*";
		   }
		   if(i==0){
		   	cout<<"@";
		   }
		   else{
		   	cout<<" ";
		   }
		   for(int j=0;j<n-2;j++){
       		cout<<" ";
		   }
		   if(i==0){
		   	cout<<"@";
		   }
		   else{
		   	cout<<" ";
		   }
		   
		  
		  for(int j=0;j<2*i;j++){
		  	cout<<" ";
		  }
		for(int j=0;j<n-2*i;j++){
       		cout<<"*";
		   }
		
		
		   cout<<endl;
	   }
	   
	   
	    



}
