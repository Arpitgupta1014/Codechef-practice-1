#include <stdio.h>
int main(void) {
    int N;
    scanf("%d",&N);
    if(N%4==0)
    N=N+1;
    else
    N=N-1;
    printf("%d",N);
	// your code goes here
	return 0;
}
