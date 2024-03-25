#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("enter a string:");
	scanf("%s",&a);
	if(a[0]=='a'&&a[strlen(a)-1]=='a')
	printf("accepted:\n");
	else
	printf("rejected:\n");
	return 0;
}