/*10. take no of rows from the user
D4 C3 B2 A1
A1 B2 C3 D4
D4 C3 B2 A1
A1 B2 C3 D4*/

#include<stdio.h>
void main(){
	char ch1='D',ch2='A';
	int num1=4,num2=1;
	for(int i=1; i<=4; i++){
		char ch1='D',ch2='A';
        	int num1=4,num2=1;
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%c%d	",ch1,num1);
				ch1--;
				num1--;
			}else {
				printf("%c%d	",ch2,num2);
				ch2++;
				num2++;
			}
		}
		printf("\n");
	}
}
