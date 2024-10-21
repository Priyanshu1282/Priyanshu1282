#include <stdio.h>

int main(void) {
    int h;
    scanf("%d",&h);
    while(h--){
        int n,m,l;
        scanf("%d %d %d",&n,&m,&l);
        if(l%m==0)
        {
            if(n>=l/m)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        printf("NO\n");
    }
	// your code goes here
	return 0;
}


