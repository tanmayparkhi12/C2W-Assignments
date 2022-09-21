/*7. If possible take no of rows from the user
1	2	9	4
25	6	49	8
81	10	121	12
169	14	225	16*/

#include<stdio.h>
void main(){
	int x=1;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(j%2==1){
				printf("%d	",x*x);
			}
			else{
				printf("%d	",x);
			}
			x++;
		}
		printf("\n");
	}
}

