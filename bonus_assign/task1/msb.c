#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int msb(int x);
void print_binary(int n);

//Please do not modify main().
//All your changes must be made within msb()
int main(int argc, char **argv) {
	if (argc<2) {
		printf("Invoke as %s <n> \n\twhere <n> is an integer\n",argv[0]);
		return 1;
	}
	int x=atoi(argv[1]);
	printf("X= "); 
	print_binary(x); 
	printf("\n");
	printf("The most significant bit of %d is at position %d\n",x,msb(x));
	return 0;
}

int msb(int x) {
	if (x == 0) return -1;    
	int w, ep, mask;
  w=32; // Number of bits that might contain most significant 1
	ep=0; // Rightmost bit that might contain most significant 1
  
	while(w>1) { //Narrow down to a single bit
    w =  w >> 1;
    ep += w;

    mask = ~(~0 << w) << ep;

    if((mask & x) == 0){
      ep -= w;
    }
    
		printf("M= "); print_binary(mask); printf(" hw=%d ep=%d\n",w,ep);
	}
	return ep;
}

//Do not modify print_binary
void print_binary(int n) {
	int i;
	for(i=31;i>=0;i--) {
		printf("%c",(n&1<<i)?'1':'0');
		if (0==i%4) printf(" ");
	}
}
