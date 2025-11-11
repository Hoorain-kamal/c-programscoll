#include<stdio.h>
int main(){
    int a = 5, b = 10;
    printf("RESULT1:%d\n",(a<b)&&(b>0));
    printf("RESULT2:%d\n",(a>b)||(b>0));
    printf("RESULT3:%d\n",!(a==b));

    return 0;

}