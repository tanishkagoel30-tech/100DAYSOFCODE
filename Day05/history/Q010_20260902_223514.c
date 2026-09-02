#include<stdio.h>
int main()
{
int time,hours,minutes,seconds;
printf("Time in seconds:");
scanf("%d",time);
hours=time/3600;
minutes=(time%3600)/60;
seconds=(time%60);
printf("seconds in hours %d%d%d\n",hours,minutes,seconds);
return 0;

}