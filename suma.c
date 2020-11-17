#include<stdio.h>

int main(int argc, char** argv) {
  int n= 10;
  int w= 0;
  int m= 0;
  int u= 1;
  int a= 1;
  
  
printf("0, ");

  while (a<n){    
    m= u;
    u= w;
    w= m + u;
    a++;
    printf ("%d, ",w);
  }
  return 0;
}
