/*4. take no of rows from the user
I H G
F E D
C B A*/

#include<stdio.h>
void main(){
	char ch='I';
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			printf("%c  ",ch);
			ch--;
		}
		printf("\n");
	}
}
