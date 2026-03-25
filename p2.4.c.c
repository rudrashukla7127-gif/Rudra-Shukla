#include<stdio.h>
int main()
{
	char str[100];
	int choice;
	int length;
	do
	{
	printf("main menu");
	printf("1. reverse number");
	printf("2. upper to lower");
	printf("3. lower to upper");
	printf("4. length of the string");
	printf("5. exit");
	
	printf("enter your choice (1-5)");
	scanf("%d",&choice);
	
	if(choice>=1 && choice<=4)
	{
	printf("enter string");
	scanf("%s",str);
	length = 0;
	
	while(str[length]='\0')
	{
	length++;
	}
	}
	switch(choice)
	{
	case 1:
	printf("originalstring:%s",str);
	printf("reverse");
	for(int i=str[length]-1;i>=0;i--)
	{
	printf("%c",str[i]);
	}
	printf("\n");
	break;
	case 2:
	printf("originalstring:%s",str);
	printf("lower case");
	for(int i=0;i<length;i++)
	{
	if(str[i]>='A' && str[i]<='Z')
	{
	printf("%c",str[i]-32);
	}
	printf("%c",str[i]);
	break;
	case 3:
	printf("original string:%S",str);
	printf("upper case");
	for(int i=0;i<length;i++)
	{
	if(str[i]>='a' && str[i]<='z')
	{
	printf("%c",str[i]+32);
	}
	printf("%c",str[i]);
	}
	break;
	case 4:
	printf("originalstring:%s",str);
	printf("length is%d",length);
	break;
	case 5:
	printf("exit the program");
	break;
	default:
	printf("please enter valid case[1-5]");
	}
	}
	while(choice!=5);
	return 0;
	}
      