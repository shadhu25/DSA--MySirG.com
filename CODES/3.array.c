#include<stdio.h>
int main(){
    int a[5];
    a[0]=44;
    a[4]=100;
    printf("%d\n",a[0]);
    printf("%d\n",a[4]);
    int b[3][3];
    b[1][1]=22;
    b[2][2]=33;
    b[3][3]=44;
    printf("%d\n",b[1][1]);
    printf("%d\n",b[2][2]);
    printf("%d\n",b[3][3]);
    return 0;
}