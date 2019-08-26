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
      	
      		for(int col=1; col<=n - row; col++){
      			printf(" ");
			  }
      	
      		for(int col=1; col<=2*row - 1; col++){
      			//cout<<" "<<col;
      			printf("%d",col);
			  }
			  printf("\n");
	  }
  
    return 0; 
} 
