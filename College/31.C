//Print transpose of matrix 

#include<stdio.h>
#include<conio.h>

void main() {
	int a[100][100], b[100][100], i, j, r, c;

	// Input for number of rows and columns
	printf("Enter no of rows: ");
	scanf("%d", &r);
	printf("Enter no of columns: ");
	scanf("%d", &c);

	// Input the elements of matrix A
	printf("Enter the A matrix elements:\n");
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	// Display the matrix A
	printf("The A matrix is:\n");
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Transposing the matrix A into matrix B
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			b[j][i] = a[i][j];
		}
	}

	// Display the transpose matrix B
	printf("The Transpose matrix B is:\n");
	for(i = 0; i < c; i++) {
		for(j = 0; j < r; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
   getch();
}
