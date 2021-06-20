#include<stdio.h>

#include<math.h>

int main()

{

int a[50][50];

int b[50][50];

int sum[50][50];

int mul[50][50];

int T[50][50];

int i,j,k,m1,m2,n1,n2,r,c;

int op;

printf("1 for addition\n");

printf("2 for multiplication\n");

printf("3 for transpose\n");

printf("enter op\n");

scanf("%d",&op);

switch (op)

{

case 1:

printf("Enter row and column of a:\n");

scanf("%d%d",&m1,&n1);

printf("Enter row and column of b:\n");

scanf("%d%d",&m2,&n2);

printf("enter elements of a:\n");

printf("enter elements of b:\n");

if(m1==m2&&n1==n2)

{

for(i=0;i<m1;i++)

{

for(j=0;j<n1;j++)

{

scanf ("%d",&a[i][j]);

}

}

for(i=0;i<m2;i++)

{

for(j=0;j<n2;j++)

{

scanf ("%d",&b[i][j]);

}

}

printf("addition:\n");

for(i=0;i<m1;i++)

{

for(j=0;j<n1;j++)

{

sum[i][j]=a[i][j]+b[i][j];

}

}

for(i=0;i<m1;i++)

{

for(j=0;j<n1;j++)

{

printf (" %d \t",sum[i][j]);

}

printf ("\n");

}

}

else

{

printf("addition not possible");

}

break;

case 2:

printf("Enter row and column of a:\n");

scanf("%d%d",&m1,&n1);

printf("Enter row and column of b:\n");

scanf("%d%d",&m2,&n2);

printf("enter elements of a:\n");

printf("enter elements of b:\n");

if(n1==m2)

{

for(i=0;i<m1;i++)

{

for(j=0;j<n1;j++)

{

scanf ("%d",&a[i][j]);

}

}

for(i=0;i<m2;i++)

{

for(j=0;j<n2;j++)

{

scanf ("%d",&b[i][j]);

}

}

printf("multiplication:\n");

for(i=0;i<m1;i++)

{

for(j=0;j<n2;j++)

{

for(k=0;k<n1;k++)

{

mul[i][j]=mul[i][j]+a[i][k]*b[k][j];

}

}

}

for(i=0;i<m1;i++)

{

for(j=0;j<n2;j++)

{

printf (" %d \t",mul[i][j]);

}

printf ("\n");

}

}

else

{

printf("multiplication not possible");

}

break;

case 3:

printf("Enter row and column of a:\n");

scanf("%d%d",&r,&c);

printf("enter elements of a:\n");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

scanf ("%d",&a[i][j]);

}

}

printf("Transpose:\n");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

T[j][i]=a[i][j];

}

}

for(i=0;i<c;i++)

{

for(j=0;j<r;j++)

{

printf (" %d\t",T[i][j]);

}

printf ("\n");

}

break;

default:

printf("exit");

break;

}

 return 0;

}

