#include<stdio.h>
int main(void) {
int count=0;
printf("%d %d %d\n",count++,count++,count++);
printf("%d\n",count);
count=count++;
printf("%d\n",count);
return 0;
}
