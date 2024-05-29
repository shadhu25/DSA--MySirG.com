#include<stdio.h>
void TowerofHanoi(int, char, char, char);
int main(){
    int disk;
    printf("Enter the number of disk: ");
    scanf("%d",&disk);
    TowerofHanoi(disk,'A','B','C');
    return 0;
}

void TowerofHanoi(int n,char sour, char aux, char dest){
    if(n==1){
        printf("%c -> %c\n",sour,dest);
        return;
    }
    TowerofHanoi(n-1,sour,dest,aux);
    TowerofHanoi(1,sour,aux,dest);
    TowerofHanoi(n-1,aux,sour,dest);
}
