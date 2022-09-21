/*3. take no of rows from the user
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1*/

#include<stdio.h>
void main(){
	int num=4;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			printf("%d ",num);
		}
		printf("\n");
		num--;
	}
}
