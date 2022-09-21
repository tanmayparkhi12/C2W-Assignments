/*
3. If possible take no of rows from the user

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4*/
#include<stdio.h>
void main(){
	int num=1;
	for(int i=1; i<=4; i++){
		for(int j=1; j<=4; j++){
			printf(" %d",num);
		}
		num++;
		printf(" \n");
	}
}
