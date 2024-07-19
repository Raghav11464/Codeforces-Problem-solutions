#include<stdio.h>
#include<stdlib.h>

int main(){
     int i,j;
     scanf("%d%d",&i,&j);
     if(i==0 || j==0)
          exit(0);
     int dom=2;
     int max_dom;
     max_dom=(i*j)/dom;
     printf("%d", max_dom);
     return 0;
}