#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int hour,min,total,money;
    scanf("%d %d",&hour,&min);
    int hour2,min2;
    scanf("%d %d",&hour2,&min2);
    if(min2<min){
        hour2--;
        min2=min2-min+60;
        total=(hour2-hour)*60+min2;
    }
    else{
        min2=min2-min;
        total=(hour2-hour)*60+min2;
    }

    if(total<=120){
        money=(total/30)*30;
        printf("%d\n",money);
    }
    else if(120<total && total<240){
        total=total-120;
        money=(total/30)*40+120;
        printf("%d\n",money);
    }
    else{
        total=total-240;
        money=(total/30)*60+280;
        printf("%d\n",money);
    }
}
