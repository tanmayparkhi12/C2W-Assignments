/*1. take no of rows from the user
4 3 2 1
5 4 3 2
6 5 4 3
7 6 5 4*/

#include<stdio.h>
void main(){
	int num=4;
	for(int i=1;i<=4;i++){
		for(int i=1;i<=4;i++){
			printf("%d ",num);
			num--;
		}
		num=num+5;
		printf("\n");
	}
}
