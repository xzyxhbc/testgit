#include <stdio.h>

int main()
{
	int a=1;
	long b=114514;
	char c='a';
	unsigned long d =1145141919810;
	char e[]="Kick your ass back here";
	printf("%d\n%d\n%d\n%d\n%d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	return 0;
}
