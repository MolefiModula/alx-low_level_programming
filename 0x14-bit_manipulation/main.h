#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *binary_string);
void print_binary(unsigned long int num);
int get_bit_at_index(unsigned long int num, unsigned int index);
int set_bit_at_index(unsigned long int *num, unsigned int index);
int clear_bit_at_index(unsigned long int *num, unsigned int index);
unsigned int count_flipped_bits(unsigned long int num1, unsigned long intnum2);

#endif
