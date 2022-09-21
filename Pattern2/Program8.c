/*8. take no of rows from the user
18 16 14
12 10 8
6 4 2*/

#include<stdio.h>
void main(){
	int num=18;
	for(int i=1; i<=3; i++){
		for(int j=1;j<=3;j++){
			printf("%d	",num);
			num=num-2;
		}
		printf("\n");
	}
}
