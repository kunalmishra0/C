//Matrix Multiplication

#include <stdio.h>
#include <conio.h>

void main()
{
int a[100][100], b[100][100], c[100][100],k, i, j,r1,c1,c2,r2;
printf("Enter size of a and b matrix: r1,c1 and r2,c2\n");
scanf("%d",&r1);
scanf("%d",&c1);
scanf("%d",&r2);
scanf("%d",&c2);

if(c1!=r2){
printf("Multiplication is not possible!");
}
else{
printf("Enter elements of A matrix\n");
for(i=0;i<r1;i++){
  for(j=0;j<c1;j++){
	  scanf("%d",&a[i][j]);
	  }
  }

printf("Enter elements of B matrix\n");
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
{scanf("%d",&b[i][j]);
}
}

printf("\n Matrix A:\n");
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
{printf("%d ",a[i][j]);
}
printf("\n");
}

printf("\n Matrix B\n:");
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
{printf("%d ",b[i][j]);
}
printf("\n");
}

printf(" The multiplication of matrices A & B is:\n");

//C matrix

for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
{c[i][j]=0;
for(k=0;k<c1;k++)
{c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

//Printing C matrix
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}

}
getch();

}