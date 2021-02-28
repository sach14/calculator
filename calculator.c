#include<stdio.h>
int main(){
    int a,b,c;
    printf("please enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
     printf("%d+%d=%d\n",a,b,c);
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
    c=b/a;
    printf("%d/%d=%d\n",a,b,c);
   
    
    
    
    return 0;
}