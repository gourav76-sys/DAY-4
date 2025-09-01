#include <stdio.h>

int main()
 {
	int coin;
    
        printf("enter 1 for head 0 for tail: ");
        scanf("%d",&coin);
        if (coin==1)
        {
        	printf("it's' head.");
		}
	 else 
	{
        printf("it's Tail.");
    }

    return 0;
}
