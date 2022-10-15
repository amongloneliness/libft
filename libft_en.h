#ifndef LIBFT_H
#define LIBFT_H

/*            directives
 *  ------------------------------
 *    <unistd.h>  - directive for unicode symbols
 *    <stddef.h>  - directive for size_t type
 *    <stddef.h>  - directive for malloc() and free() memory functions
 *  ------------------------------
 * 
 *            prototypes
 *  ------------------------------
 *  void    ft_putchar(..);      print symbol <c> on console
 *  void    ft_putstr(..);       print line of char on console
 *  void    ft_putdigit(..);     print digit on console
 *  int     ft_len_nbr(..);      return length of number
 *  void    ft_putnbr(..);       print number on console
 *  char   *ft_strchr(..);       searches for the first occurence of the character in the string
 *  char   *ft_strrchr(..);      searches for the last occurence of the character in the string
 *  int     ft_isalpha(..);      return 1 if symbol is alphabet
 *  int     ft_tolower(..);      return alphabet character, but convert to lower-case
 *  int     ft_toupper(..);      return alphabet character, but convert to upper-case
 *  void   *ft_memset(..);       fill memory with a constant byte
 *  int     ft_atoi(..);         convert a string to an integer
 *  void    ft_bzero(..)         zero a byte string
 *  void   *ft_memcpy(..)        copy memory to memory until the specified number of bytes
 *                               has been copied
 *  int     ft_strncmp(..);      compares at most the first n bytes of str1 and str2
 *  size_t  ft_strlen(..);       calculate and return the length of a string
 *  int     ft_isalnum(..);      return 1 if argument is an alphanumeric character, else - 0
 *  int     ft_isdigit(..);      return 1 if argument is an alphanumeric character, else - 0
 *  int     ft_isascii(..);      returns nonzero if c, in the current 
 *  int     ft_isprint(..);      return 1 if character is printable
 *  char   *ft_strcpy(..);       copy the string src to dst and return dest 
 *  size_t  ft_strlcpy(..);      copy and concatenate strings and return length of second string
 *  size_t  ft_strlcat(..);      copies the source src to end of the destination dst char array
 *  size_t  ft_strnlen(..);      determine the length of a fixed-size string
 *  char   *ft_strnstr (..);     Find the first occurrence of find in s, where the search is limited
 *                               to the first slen characters of s
 *  void   *ft_memccpy(..);      copies no more than n bytes from memory area src to memory area dest,
 *                               stopping when the character c is found
 *  void   *ft_memmove(..);      returns a pointer to dest. copies n bytes from memory area src to memory area dest
 *  void   *ft_memchr(..);       scan memory for a character and return pointer or NULL;
 *  int     ft_memcmp(..);       compares the first n bytes of memory area str1 and memory area str2
 *  void   *ft_calloc(..);       allocate and free dynamic memory
 *  char   *ft_strdup(..);       dublicate a string
 *  ------------------------------
 */

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putdigit(int digit);
int ft_len_nbr(int nbr);
void ft_putnbr(int nbr);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_isalpha(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlen(const char *s);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
char *ft_strcpy(char *dst, const char *src);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strnlen(const char *s, size_t maxlen);
char *ft_strnstr(const char *s, const char *find, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t bmemb, size_t size);
char *ft_strdup(const char *s);


#endif