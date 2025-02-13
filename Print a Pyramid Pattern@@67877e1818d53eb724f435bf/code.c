#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=a;j++){
            if(j==(a+1)/2){
                printf("* ");
            }
            else{
                printf(" ");
            }
        if(i==(a+1)/2){
            printf("* ");
        }
    }
    printf("\n");
}
}
