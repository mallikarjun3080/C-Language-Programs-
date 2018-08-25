#include <stdio.h>
int main()
{
	int i,j;
	int n=5;  

	
	for(i=1;i<=n;++i){
	    
		for(j=n;j>=1;--j){
		      if(j<=i){
				printf("*");
			
		      }else{
		          printf(" ");  //space print
		      }
		}
		printf("\n");
	}
	
	return 0;
}