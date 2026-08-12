#include <stdio.h>
int main()
{
	int height;
	printf("Please input your metric height:");
	scanf("%d",&height);
	int inheight=(height/30.48)*12+0.5;
	int foot=inheight/12;
	int inch=inheight%12;
	printf("%d %d\n\n\n",foot,inch);
	return 0;
}
