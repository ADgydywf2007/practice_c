#include <stdio.h>
int main()
{
	int height;
	printf("«Î ‰»Î…Ì∏ﬂ:");
	scanf("%d",&height);
	int inheight=(height/30.48)*12;
	int foot=inheight/12;
	int inch=inheight%12;
	printf("%d %d",foot,inch);
	return 0;
}
