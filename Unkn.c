#include<stdio.h>
int main() {
    int a,b,c,e,i;
    printf("Enter 1st integer: ");
    scanf("%d",&a);
    printf("Enter 2nd integer: ");
    scanf("%d",&b);
    c=a+b;
    printf("sum : %d",c);
    printf("\n");
    if(a>b)
    {
	e=a-b;
    }
	else{  e=b-a;
    }
    printf("difference : %d",e);
    printf("\n");
    i=a*b;
    printf("product : %d",i);
    printf("\n");
    return 0;
}


