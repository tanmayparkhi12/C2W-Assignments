/*8. If possible take no of rows from the user
1 3 5
7 9 11
13 15 17*/

#include<stdio.h>
void main(){
	int num=1;
	for (int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			printf("%d ",num);
			num=num+2;
		}
		printf("\n");
	}
}

