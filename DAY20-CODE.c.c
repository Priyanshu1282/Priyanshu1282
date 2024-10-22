#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int r1,r2,r3,r4;
        scanf("%d %d %d %d", &r1, &r2, &r3, &r4);
        if(r1==0 && r2==0 && r3==0 && r4==0)
        {
            printf("in \n");
        }
        else
        printf("out \n");
        t--;
    }
	// your code goes here
	return 0;
}


