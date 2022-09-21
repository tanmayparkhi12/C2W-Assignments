/*9. If possible take no of rows from the user
2 5 10
17 26 37
50 65 82
*/

#include <stdio.h>
void main(){
	int num=1;
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			printf("%d ",num*num+1);
			num++;
		}
		printf("\n");
	}
}
