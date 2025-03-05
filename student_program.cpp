#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "\nMAIN : %s", output ) ;
}//end function

char* reverse( char str1[] ) {
	char reverse [ 50 ] ;

	printf( "Enter str1 : " ) ;
    fgets( reverse, sizeof(reverse), stdin ) ;  // ใช้ fgets เพื่อให้รับค่าที่มีช่องว่างได้
    reverse[strcspn(reverse, "\n")] = '\0' ;
	// output = reverse(text) ;

	int length = strlen( reverse ) ;
	int i ;

	for( i = 0 ; i < length ; i++ ) {
		str1[ i ] = reverse[ length - 1 - i ] ;
	}

	str1[length] = '\0' ;
	
	printf( "FUNC : %s", str1 ) ;
	// for( i = 0 ; i < length ; i++ ) {
	// 	printf( "%c", str1[ i ] ) ;
	// }
	return str1 ;
}