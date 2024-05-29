// fabonacci series
#include<stdio.h>
int fun(int);
int main(){
    int s;
    int a;
    printf("Enter the number of term : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        printf("%d ",fun(i));
    return 0;
}
int fun(int k){
    int j;
    if(k==1||k==2)
        return 1;
    j=fun(k-1)+fun(k-2);
    return j;
}