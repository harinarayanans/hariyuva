#include <stdio.h>

int main(void) {
 int hour1,min1,time1,hour2,min2,time2,diff;
 scanf("%d%d",&hour1,&min1);
 scanf("%d%d",&hour2,&min2);
 time1=hour1*60;
 time1=time1+min1;
 time2=hour2*60;
 time2=time2+min2;
 diff=(time2-time1);
 printf("%d",diff);
	return 0;
}


