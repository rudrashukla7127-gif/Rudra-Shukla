#include<stdio.h>
void check_even_odd()
 { 
 int num1;
        printf("\nEnter the value of num1:");
        scanf("%d",&num1);
        
        if(num1%2==0)
        printf("\nNumber is even");
        
        else
        printf("\nNumber is odd");
  }
  
int main ()
{
int n,num1,sum,a,b,c, num2;
do
{
printf("\n ===================== MENU =========================\n");
   printf("\n1. Number is even/odd\n");
   printf("\n2. Number is positive/negative\n");
   printf("\n3. Greatest of three numbers\n");
   printf("\n4. sum of digits\n");
   printf("\n5. Exit the program\n");
   
   printf("\nEnter the value of case number [1-5]: ");
   scanf("%d",&n);
   
switch (n)
   {
     case 1:
        printf("\nEnter the value of num1:");
        scanf("%d",&num1);
        
        if(num1%2==0)
        {
        printf("\nNumber is even");
        }
        
        else
        {
        printf("\nNumber is odd");
        }
        break;
     case 2:
          printf("\nEnter the value of num2:");
          scanf("%d",&num2);
          
          if(num2>0)
          printf("\nNumber is positive");
          
          else
          printf("\nNumber is negative");
          
          break;
    case 3:
    printf("\n Enter the value of a,b,c:");
    scanf("%d" "%d" "%d", &a,&b,&c);
               if(a==b && a==c)
           {
            printf("\nAll the values are equal");
           }
           else if(a>b && a>c)
           {
           printf("\nGreatest value is a");
           }
           else if(b>a && b>c)
           { 
            printf("\nGreatest value is b");
           }
           else
           {
             printf("\nGreatest value is c");
           }
           
           break;
         
         
         case 4:
         printf("enter ther value of num3")
         
         break;
         
         case 5:
         break;
         
         default:
         printf("enter valid choice (1-5)\n");
      }
      }while(n!=5);
  
