#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int N,a1,a2,a3,total,x,y,z;
    scanf("%d,%d,%d,%d",&N,&a1,&a2,&a3);
    total=15*a1+20*a2+30*a3;
    if(N<total){
        printf("0\n");
        return 0;
    }
    total=N-total;
    x=total/50;
    y=(total-50*x)/5;
    z=total-50*x-5*y;
    printf("%d,%d,%d\n",z,y,x);
}
