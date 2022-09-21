/*7. take no of rows from the user
1	2	3	4
25	36	49	64
9	10	11	12
169	196	225	256*/

#include<stdio.h>
void main(){
	int num=1,x;
	printf("Enter Rows\n");
	scanf("%d",&x);
	for(int i=1;i<=x; i++){
		for(int j=1;j<=x; j++){
			if(i%2==0){
				printf("%d	",num*num);
			}else {
				printf("%d	",num);
			}
			num++;
		}
		printf("\n");
	}
}
