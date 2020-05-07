#include<stdio.h>
int main()
{
	int cock,hen,chick;
	for(cock=0;cock<=20;cock++)
		for(hen=0;hen<=33;hen++)
			for(chick=0;chick<=99;chick++)
				if(cock*5+hen*3+chick/3==100)
				if(cock+hen+chick==100)
				if(chick%3==0)
					printf("¹«¼¦£º%dÄ¸¼¦£º%dÐ¡¼¦£º%d\n",cock,hen,chick);
	return 0;
}
