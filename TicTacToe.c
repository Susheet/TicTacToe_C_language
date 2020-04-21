#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,j,s;
 int a[10][10];
 char x=1,o=2;
 clrscr();
 printf("Tic tac game ");
 printf("\n player 1 is black emoji and player 2 is white emoji");
 printf("\n player 1 = 1 and player 2= 2");
 printf("\n");
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {
  printf("\n make your move");
  scanf("%d",&a[i][j]);
 }
}
for (i=0;i<3;i++)
{
 printf(" | ");
 for (j=0;j<3;j++)
 {
  printf("%c",a[i][j]);
  printf(" | ");
  }
 printf("\n--------------------\n");
}
s=0;
if (a[0][0]+a[0][1]+a[0][2]==3 || a[1][0]+a[1][1]+a[1][2]==3 || a[2][0]+a[2][1]+a[2][2]==3 || a[0][0]+a[1][0]+a[2][0]==3 || a[0][1]+a[1][1]+a[2][1]==3 || a[0][2]+a[1][2]+a[2][2]==3 || a[0][0]+a[1][1]+a[2][2]==3 || a[0][2]+a[1][1]+a[2][1]==3)
printf(" player 1 wins");
if (a[0][0]+a[0][1]+a[0][2]==6 || a[1][0]+a[1][1]+a[1][2]==6 || a[2][0]+a[2][1]+a[2][2]==6 || a[0][0]+a[1][0]+a[2][0]==6 || a[0][1]+a[1][1]+a[2][1]==6 || a[0][2]+a[1][2]+a[2][2]==6 || a[0][0]+a[1][1]+a[2][2]==6 || a[0][2]+a[1][1]+a[2][1]==6)
printf(" player 2 wins");
getch();
}
