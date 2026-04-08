#include<stdio.h>
#include<string.h>
#define MAX (100)
struct student 
{
  char Name [MAX];
  int rollno;
  char grade;
  float marks;
};
int main ()
{
int n,i;
printf("\n enter value of n:");
scanf("%d",&n );

struct student s[n];
  printf(" student details:   ");
  for(i=0;i<n;i++)
  {
 printf("\n   Enter %d student details:", i+1);
 printf("\n Enter student Name: ");
 scanf(" %[^\n]", s[i].Name);
 printf("Enter rollno:");
 scanf("%d",&s[i].rollno);
 printf("Enter grade: ");
 scanf(" %c",&s[i].grade);
 printf("Enter marks:");
 scanf("%f", &s[i].marks); 
 }
 printf("\n--- Student Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name   : %s\n", s[i].Name);
        printf("Rollno : %d\n", s[i].rollno);
        printf("Grade  : %c\n", s[i].grade);
        printf("Marks  : %.2f\n", s[i].marks);
    }

    return 0;
 
 }
   
 
 
 
 
 
  
  
