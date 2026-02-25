#include<stdio.h>
int main() 
{
int maths;
int pps;
int bee;
int fai;
int egd;

printf ("\n enter the  valid marks of maths = ");
scanf("%d",&maths);

while(maths<0 || maths>100  ) 
{
printf( "\nenter the valid marks of maths [0-100]");
printf ("\n enter the  valid marks of maths = ");
scanf("%d",&maths);
 
}
printf ("\n enter the marks of bee = ");
scanf("%d",&bee);

while(bee<0 || bee>100  ) 
{
printf( "\nenter the valid marks of bee [0-100]");
printf ("\n enter the marks of bee = ");
scanf("%d",&bee);
 
}
printf ("\n enter the valid marks of pps = ");
scanf("%d",&pps);
while(pps<0 || pps>100  ) 
{
printf( "\n enter the valid marks of bee [0-100]");
printf ("\n enter the valid marks of pps = ");
scanf("%d",&pps);
 
}

printf ("\n enter the valid marks of fai = ");
scanf("%d",&fai);
if(fai<0 || fai>100  ) 
{
printf( "\nenter the valid marks of fai [0-100]");
 
}
printf ("\n enter the  valid marks of egd = ");
scanf("%d",&egd);
if(egd<0 || egd>100  ) 
{
printf( "\nenter the valid marks of egd [0-100]");
 
 
}
int total = maths  + pps + bee+ egd + fai ;
printf("\n total is: %d",total);
float percentage = total*100/500;
printf("\n percentage is : %f", percentage);
return 0;
}

if(percentage>=85)
{
printf("A");
}
else if (percentage<85;
{
printf("B");
 }
 
