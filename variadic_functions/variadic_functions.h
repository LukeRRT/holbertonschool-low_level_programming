#ifndef Header_variadic
#define Header_variadic

#include <stdarg.h>

typedef struct op
{
	char type;
	void (*func)(va_list *args);
} op_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
