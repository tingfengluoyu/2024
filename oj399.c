#include <stdio.h>
int main()
{	char A;
	scanf("%c",&A);
	if (A>64 && A<91){
		A+=32;
		printf("%c", A);
	}
	else if (A>96 && A<122){
		A-=32;
		printf("%c",A);
	}
	else if (A>47 && A<58){
		printf("%c������",A);
	}
	else{
		printf("%c�������ַ�",A);
	}
}
