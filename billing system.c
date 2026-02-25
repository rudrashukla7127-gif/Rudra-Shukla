#include<stdio.h>
int main()
{
  printf("\n billing system:");
  int pen=10;
  int notebook=50;
  int pencil=30;
  int bag=200;
  int colour=30;
  int q1,q2,q3,q4,q5;
  
  printf("\n enter quantity of pen:");
  scanf("%d",&q1);
  printf("enter quantity of notebook:");
  scanf("%d",&q2);
  printf("enter quantity of pencil:");
  scanf("%d",&q3);
  printf("enter quantity of bag:");
  scanf("%d",&q4);
  printf("enter quantity of colour:");
  scanf("%d",&q5);
  int total;
  total=(q1*pen)+(q2*notebook)+(q3*pencil)+(q4*bag)+(q5*colour);
  printf("total bill=%d",total);
  }
