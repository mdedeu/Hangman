#include <stdio.h>
#include "getnum.h"
#include <string.h>
#define CLEAN_BUFFER while (getchar() != '\n')

/* reads an integer */
int 
getint(const char msg[], ... )
{
	int n, done = 0;
	va_list ap;
		
	do	
	{
		va_start(ap, msg);
		vprintf(msg, ap);
		va_end(ap);

		if ( scanf("%d",&n) != 1)
		{
			printf("\nIncorrect entry\n");
			CLEAN_BUFFER;
		}
		else
			done = 1;
	} while (! done);
	CLEAN_BUFFER;
	return n;
}

/* reads a float */
float 
getfloat(const char msg[], ...)
{
	float n;
	int done = 0;
	va_list ap;
		
	do	
	{
		va_start(ap, msg);
		vprintf(msg, ap);
		va_end(ap);

		if ( scanf("%g",&n) != 1)
		{
			printf("\nIncorrect Entry\n");
			CLEAN_BUFFER;
		}
		else
			done = 1;
	} while (! done);
	CLEAN_BUFFER;
	return n;
}

/*reads a double */
double 
getdouble(const char msg[], ...)
{
	double n;
	int done = 0;
	va_list ap;
		
	do	
	{
		va_start(ap, msg);
		vprintf(msg, ap);
		va_end(ap);

		if ( scanf("%lg",&n) != 1)
		{
			printf("\nIncorrect Entry\n");
			CLEAN_BUFFER;
		}
		else
			done = 1;
	} while (! done);
	CLEAN_BUFFER;
	return n;
}

/* lee S,s,N, o n  */
int 
yesNo(const char msg[], ...)
{
	int op;
	int done = 0;
	va_list ap;
		
	do	
	{
		va_start(ap, msg);
		vprintf(msg, ap);
		va_end(ap);

		op = getchar();
		if ( strchr("SsNn", op) == NULL)
		{
			printf("\nIncorrect Entry\n");
			if (op != '\n')
				CLEAN_BUFFER;
		}
		else
			done = 1;
	} while (! done);
	CLEAN_BUFFER;
	return strchr("Ss", op) != NULL;
}
