#include<stdio.h>

int unique_character(char *s)
{
int count=0,i,j;
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
{
if(s[i]==s[j])
{
count++;
break;
}
}
}
return count;
}


int main()
{
char s[100]="ramy";
int count;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]>=65&&s[i]<=90)
s[i]=s[i]+32;
}
count=unique_character(&s);
if(count==0)
printf("string doesnot contain duplicate charcaters\n");
else
printf("string contain duplicate charcaters\n");
}
