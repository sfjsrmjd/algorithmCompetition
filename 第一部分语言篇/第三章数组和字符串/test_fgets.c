#include<stdio.h>
#include<string.h>
#define MAXN 5000+10
char buf[MAXN];
char s[MAXN];
int main(void) {
fgets(buf,MAXN,stdin);
printf("%d\n",(int)strlen(buf));
gets(s);
printf("%s:%d\n",s,(int)strlen(s));
return 0;
}
