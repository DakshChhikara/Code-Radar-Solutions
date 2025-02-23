#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i %i %c",&a,&b,&c);
    if (c=='+'){
        printf("%i",a+b);
    }
    else if(c=='-'){
        printf("%i",a-b);
    }
    else if(c=='*'){
        printf("%i",a*b);
    }
    else if (c=='/'){
        if (b==0){
            printf("Invalid");
        }
        else{
            printf("%i",a/b);
        }
    }
}