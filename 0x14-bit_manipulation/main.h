#ifndef MAIN_H
#define MAIN_H

int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned int n, unsigned long int m);
void print_binary(unsigned long int n);

#endif
