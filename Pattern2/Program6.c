/*6. take no of rows from the user
= = = =
$ $ $ $
= = = =
$ $ $ $*/

#include<stdio.h>
void main(){
	char ch1='=',ch2='$';
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i%2==0){
				printf("%c  ",ch2);
			}else {
				printf("%c  ",ch1);
			}
		}
		printf("\n");
	}
}
