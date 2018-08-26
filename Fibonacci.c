#include<stdio.h>

int main() {
  int f1 = -1;
  int f2 = 1;
  int f3;
  
  int n = 10;  
  
  int i = 0;
  
  while (i < n) {
      
      f3 = f1 + f2;
      
      printf("%d ",f3);
      
      f1 = f2;
      f2 = f3;
      ++i;
  }
}
