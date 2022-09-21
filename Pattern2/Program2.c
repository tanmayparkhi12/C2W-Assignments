/*2. take no of rows from the user
3 2 1
c b a
3 2 1
c b a*/

#include<stdio.h>
void main(){
	for(int i=1;i<=4;i++){
		int num=3;
		char ch='c';
		for(int j=1;j<=3;j++){
			if(i%2==0){
				printf("%c   ",ch);
				ch--;
			}else {
				printf("%d   ",num);
				num--;
			}
		}
		printf("\n");
	}
}
