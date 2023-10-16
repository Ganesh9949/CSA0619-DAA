#include<stdio.h>
int main() {
	int m,n,p,q;
	printf("enter the no of rows and columns in first matrix");
	scanf("%d %d",&m , &n);
	
	printf("enter the no of rows and colums in second matrix");
	scanf("%d %d",&p,&q);
	
	if(n!=p) {
		printf("matrix multiplication is not applicable");
		return 1;
	}
	int first[m][n],second[p][q],result[m][q];
	printf("enter elements of the first matrix");
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			scanf("%d",&first[i][j]);
		}
	}
	printf("enter elements of second matrix");
	for(int i=0;i<p;i++) {
		for(int j=0;j<q;j++) {
			scanf("%d",&second[i][j]);
			
		}
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<q;j++) {
			result[i][j] = 0;
			for(int k=0;k<n;k++) {
				result[i][j] +=first[i][k]*second[k][j];
			}
		}
	}
	printf("result of matrix multiplication:\n");
	for(int i=0;i<m;i++) {
		for(int j=0;j<q;j++) {
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
