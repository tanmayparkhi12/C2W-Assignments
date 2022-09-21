/*5. take no of rows from the user
D C B A
e d c b
F E D C
g f e d*/
#include<stdio.h>
void main(){
	char ch1='D',ch2='e';
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf("%c  ",ch1);
				ch1--;
			}else {
				printf("%c  ",ch2);
				ch2--;
			}
		}
		printf("\n");
		if(i%2==0){
			ch2=ch2+6;
		}else{
			ch1=ch1+6;

		}

	}
}
