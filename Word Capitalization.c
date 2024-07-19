#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    scanf("%s", str);
    int i=0;
    if(str[i]>='a' && str[i]<='z'){
        str[i]-=32;
        printf("%s", str);
    }
    else
        printf("%s", str);
    return 0;
}