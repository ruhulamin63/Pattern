// A fast IO program 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
      int row,col,n;
      
      cin>>n;
      
      for(int row=1; row<=n; row++){
      	
      		for(int col=1; col<= n; col++){
      	
	      		if(row==1 || row==n || col==row)
	      			//special char
	      				printf("*");
	      		else
	      			printf(" ");
	      	}
				printf("\n");
		}		
    return 0; 
} 
