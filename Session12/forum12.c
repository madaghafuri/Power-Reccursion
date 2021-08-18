#include <stdio.h>
int power(int base, int pow){
    
    if(pow != 0){
        return base * power(base, pow-1);
    }else{
        return 1;
    }
}

int main(){
    int i=0,x,y, result=0;
    scanf("%d %d",&x,&y);

    result = power(x,y);

    printf("%d",result);

    return 0;
}