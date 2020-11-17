
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, n3;
    printf( "\n   Introduzca el primer nucmero (entero): ", 163 );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo nucmero (entero): ", 163 );
    scanf( "%d", &n2 );
    printf( "\n   Introduzca el tercer nucmero (entero): ", 163 );
    scanf( "%d", &n3 );

    if ( n1 > n2, n1 > n3)
        printf( "\n   El %d es mayor.", n1 );
    else

        if ( n1 < n2, n3 < n2  )
            printf( "\n   El %d es mayor.", n2 );
    if ( n3 > n1, n3 > n2)
        printf( "\n   El %d es mayor.", n3 );
        else
            printf( "\n   SON IGUALES" );
    return(0);
  }


