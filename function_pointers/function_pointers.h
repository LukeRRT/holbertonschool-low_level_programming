#ifndef Header_file
#define Header_file

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int (*get_op_func(char *s))(int, int);

#endif
