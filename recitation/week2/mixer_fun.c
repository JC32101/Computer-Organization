// ----------------------------------------------------------------------------
//
// -------------------------------- C Basic Mixer --------------------------------
//
// ----------------------------------------------------------------------------
//
//  Purpose : To study the effects of performing operations on 
//            mixed data types.
//
//  Author  : Paul Zoski
//  Date    : 4/3/99
//  Modified: reformatted, JL Popyack Jan. 2002, Jan. 2003.
//  Modified: rewritten by Jun Yuan-Murray, 2016, August.
// 
// ----------------------------------------------------------------------------

#include <stdio.h>

// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------

void conditionmixer() {
	int i = 6;
	char ch = 'm';
	
	printf("3==4 = %d\n", 3==4); //3==4 = 0
	printf("3==3 = %d\n", 3==3); //3==3 =1
	printf("!0 = %d\n", !0); //!0 = 1
	printf("!(-1) = %d\n", !(-1)); //!(-1) = 0

        printf("%d\n", ch < 'z' && ch > 'a'); //1
	printf("%d\n", !(ch-'z')?1:0); //0
	printf("%d\n", 2 * 3 == 6 || (i = i + 1)); //1
        printf("%d\n", i); //6
}

void typemixer() {
	int   i=1, j=10, k=20 ;					
	char  a='a', B='B', dollarSign='$';
	// ---------------------------------------------------------------------
	// The variables were already assigned values.  Let's check them out.
	// ---------------------------------------------------------------------
	printf ("i = %d \tj=%d \t\t k=%d\n", i, j, k);	 //i=1  j=10 k=20	
	printf ("a = %c \tB=%c \t\t dollarSign=%c\n", a, B, dollarSign);		// a=a B=B dollarSign=$
	// ---------------------------------------------------------------------		
	// And now the fun stuff ....
	// ---------------------------------------------------------------------
		
	// ---------------------------------------------------------------------
	// an integer plus a character

	printf("a+j=%d\n", a+j); //a+j=107
	// ---------------------------------------------------------------------
		
	char newChar;
	newChar = a+j;
			
	// ---------------------------------------------------------------------
	// huh? What's going on here?
		
	printf("a+j=%c\n", newChar);//a+j=k
	printf("B-6=%d\n", B-6); //B-6=60

}
int main( void )
{
	typemixer();
        conditionmixer();
	return 0;
}
