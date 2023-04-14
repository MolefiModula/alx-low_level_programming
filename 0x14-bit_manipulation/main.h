#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit_at_index(unsigned long int n, unsigned int index);
int set_bit_at_index(unsigned long int *n, unsigned int index);
int clear_bit_at_index(unsigned long int *n, unsigned int index);
unsigned int count_flipped_bits(unsigned long int n, unsigned long int m);
int _atoi(const char*s);
int _putchar(char c);
int get_endianness(void);

#endif
