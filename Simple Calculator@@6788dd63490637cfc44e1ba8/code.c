#include <stdio.h>
int main() {
    int a,b,r;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    switch(c){
        case '+':
        r=a+b;
        printf("%d",r);
        break;
        case '-':
        r=a-b;
        printf("%d",r);
        break;
        case '*':
        r=a*b;
        printf("%d",r);
        break;
        case '/':
        if (b!=0){
        r=a/b;
        printf("%d",r);
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}