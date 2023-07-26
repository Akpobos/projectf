#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

/* C-Libraries */
#include <stdarg.h>
#include <unistd.h>


/* Structs */

/**
 * struct fmt_s - struct to print format
 * @c: specifier character
 * @prnt: function to print format
 */
struct fmt_s
{
	char c;
	int (*prnt)(va_list args, char *buffer, int *buff_i);
};

/* Typedef */

/* fmt_t - typedef for struct fmt_s */
typedef struct fmt_s fmt_t;

/* Prototypes - Utils_1 */
int print_numbers(int num, char *buffer, int *buff_i);
int _abs(int num);
void fmt_space(const char *str, int *i);
void check_specifier(
		const char c,
		int *count,
		va_list args,
		char *buffer,
		int *buff_i);
int print_binary(unsigned int num, char *buffer, int *buff_i);

/* Prototypes - Utils_2 */
int print_buffer(char *buffer, int *buff_i);
int add_buffer(char c, char *buffer, int *buff_i);
int print_uint(unsigned int num, char *buffer, int *buff_i);
int print_8(unsigned int num, char *buffer, int *buff_i);
int print_h_l(unsigned int num, char *buffer, int *buff_i);

/* Protypes - utils_3*/
int run_hex(unsigned int num, int hex_case, char *buffer, int *buff_i);
int print_h_u(unsigned int num, char *buffer, int *buff_i);

/* Prototypes - Others */
int _putchar(char c);
int print_fmt(char c, va_list args, char *buffer, int *buff_i);

/* Prototypes - print_func */
int print_char(va_list args, char *buffer, int *buff_i);
int print_str(va_list args, char *buffer, int *buff_i);
int print_int(va_list args, char *buffer, int *buff_i);
int print_bnry(va_list args, char *buffer, int *buff_i);
int print_u_int(va_list args, char *buffer, int *buff_i);

/* Prototypes - print_func_2.c */
int print_octal(va_list args, char *buffer, int *buff_i);
int print_hex_lower(va_list args, char *buffer, int *buff_i);
int print_hex_upper(va_list args, char *buffer, int *buff_i);

/* Prototypes - Main */
int _printf(const char *format, ...);

#endif
