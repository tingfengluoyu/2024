#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n % 2==1){
		printf("-1\n");
	}
	else {
		for (int i = 19;i > 0;i--){
			if (n>=pow(2,i)){
				printf("%d ", (int)pow(2,i));
				n -= pow(2,i);
			}
			if (n == 0){
				break;
			}
		}
	}
	return 0;
}
