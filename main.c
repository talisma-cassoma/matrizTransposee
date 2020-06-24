#include<stdio.h>
#include<math.h>

void transp(int M,int N,int *po){	
int i,j,*p;

for(i=0; i<N; i++){
	for(j=0; j<M; j++){
	p=po +j*N + i;
	printf("%d\t",*p);
	}
printf("\n");
}}

int main (){
int *po,*p,M=2, N=3;
int i,j;
int a[2][3]={{1,2,3},
		    {4,5,6}};

po=&a[0][0];

for(i=0; i<M; i++){
	for(j=0; j<N; j++){
	p=po + i*N + j ; 
	printf("%d\t",*p);
	}
printf("\n");
}
	
printf("=====================\n");

transp( M, N, po);
	return 0;
}
