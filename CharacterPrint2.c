#include <stdio.h>
int main()
{
	int i,j;
	int n=5;  
	
	char ch;
	
	for(i=1;i<=n;++i){
	    ch='A';
		for(j=n;j>=1;--j){
		      if(j<=i){
				printf("%c",ch);
				++ch;
		      }else{
		          printf(" ");  //space print
		      }
		}
		printf("\n");
	}
	
	return 0;
}