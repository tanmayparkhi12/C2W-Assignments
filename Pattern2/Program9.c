/*9. take no of rows from the user
1	3	8
15	24	35
48	63	80*/

#include<stdio.h>
void main(){
	int num=1;
	for(int i=1;i<=3; i++){
		for(int j=1;j<=3; j++){
			if(i==1 && j==1){
				printf("%d	",num);
				num++;
			}else {
				printf("%d	",num*num-1);
				num++;
			}
		}
		printf("\n");
	}
}

