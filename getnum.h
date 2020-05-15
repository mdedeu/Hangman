//Código Provisto por la Cátedra de Programación Imperativa del I.T.B.A
#include <stdarg.h>
/*
** The objective of these functions is to read numbers from standard input.
** They receive as a parameter a string of characters,
** containing the same format as for the printf function.
** It will print that string before reading the number
** If you input wrong data, it will keep running. 
** If you input a number followed by other characters,  the functions will ignore them* */


#ifndef _getnum_h

#define _getnum_h

/* reads an integer number
** Example of use: n = getint("Input a number between %d  and %d: ", 0, 10);
**              a = getint("");
*/
int getint(const char msg[], ...);

/* reads a real number
** Example of use: idem getint()
*/
float getfloat(const char msg[], ...);

/* Reads a real number with double precision
** Example of use: idem getint()
*/
double getdouble(const char msg[], ...);


/* reads S or s(for yes) and N or n (for no) */
int yesNo(const char msg[], ...);

#endif
