/*10. If possible take no of rows from the user
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1*/

#include<stdio.h>
void main(){
	for(int i=1;i<=4;i++){
		int num=4;
		char ch='D';
		for(int j=1;j<=4;j++){
			printf("%c%d  ",ch,num);
			ch--;
			num--;
		}
		printf("\n");
	}
}
