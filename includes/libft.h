#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
** Fill memory with a constant byte.
*/
void	*ft_memset(void *s, int c, size_t n);
/*
** Searches for the last occurence of the character in the string.
*/
char	*ft_strrchr(const char *s, int c);
/*
** Zero a byte string.
*/
void	ft_bzero(void *s, size_t n);
/*
** Find the first occurrence of find in s, where the search is limited
** to the first strlen characters of s. 
*/
char	*ft_strnstr(const char *s, const char *find, size_t n);
/*
** Copy memory to memory until the specified number of bytes
** has been copied.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
** Compares at most the first n bytes of str1 and str2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*
** Copies no more than n bytes from memory area src to memory area dest,
** stopping when the character c is found.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
/*
** Convert a string to an integer.
*/
int		ft_atoi(const char *nptr);
/*
** Returns a pointer to dest. copies n bytes from memory area
** src to memory area dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*
** Return nonzero if symbol is alphabet.
*/
int		ft_isalpha(int c);
/*
** Scan memory for a character and return pointer or NULL.
*/
void	*ft_memchr(const void *s, int c, size_t n);
/*
** Return nonzero if argument is an alphanumeric character, else - 0.
*/
int		ft_isdigit(int c);
/*
** Compares the first n bytes of memory area str1 and memory area str2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
** Return nonzero if argument is an alphanumeric character, else - 0.
*/
int		ft_isalnum(int c);
/*
** Calculate and return the length of a string.
*/
size_t	ft_strlen(const char *s);
/*
** Returns nonzero if c, in the current.
*/
int		ft_isascii(int c);
/*
** Copy and concatenate strings and return length of second string.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/*
** Return nonzero if character is printable.
*/
int		ft_isprint(int c);
/*
** Copies the source src to end of the destination dst char array.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/*
** Return alphabet character, but convert to upper-case.
*/
int		ft_toupper(int c);
/*
** Searches for the first occurence of the character in the string.
*/
char	*ft_strchr(const char *s, int c);
/*
** Return alphabet character, but convert to lower-case.
*/
int		ft_tolower(int c);
/*
** Allocate and free dynamic memory.
*/
void	*ft_calloc(size_t nmemb, size_t size);
/*
** Dublicate a string.
*/
char	*ft_strdup(const char *s);
/*
** Allocates memory and returns a substring of strings s.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*
** Allocates memory and gets a new code, which is
** the basis of the union of s1 and s2.
*/
char	*ft_strjoin(char const *s1, char const *s2);
/*
** Allocates memory and returns a copy of s1 with the characters
** specified in set removed from the beginning and end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set);
/*
** Allocates memory and returns an array of strings
** obtained by splitting s using c as the delimiter.
** The array must end with a NULL pointer.
*/
char	**ft_split(char const *s, char c);
/*
** Allocates memory and returns a string representing
** the integer given as argument. Negative numbers need
** to be processed.
*/
char	*ft_itoa(int n);
/*
** Applies the function f to each character of the string s
** to create a new string, allocating memory as a result of
** successive applications of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*
** Prints the character c to the stream specified by the file descriptor.
*/
void	ft_putchar_fd(char c, int fd);
/*
** Prints the string s to the stream specified by the file descriptor.
*/
void	ft_putstr_fd(char *s, int fd);
/*
** Prints the string s to the stream specified by
** the file descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd);
/*
** Outputs the integer n to the stream specified by the file descriptor.
*/
void	ft_putnbr_fd(int n, int fd);
/*
** Returns a new list element.
*/
t_list	*ft_lstnew(void *content);
/*
** Adds the new element to the beginning of the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/*
** Returns the list's size.
*/
int		ft_lstsize(t_list *lst);
/*
** Returns the last element of the list.
*/
t_list	*ft_lstlast(t_list *lst);
/*
** Adds the new element to the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/*
** Frees memory of the contents of a list element using the del
** function given as a parameter and frees the element. The memory
** of the next element of the list should not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/*
** Removes and frees the memory of this list's element and all
** its successors using the del and free functions.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));
/*
** Iterates the list lst and applies the f function to the contents of each element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/*
** Iterates the list lst and applies the f function to
** the contents of each element. Creates a new list as
** a result of successive applications of the f function.
** The del function is used to remove the contents of an element if necessary.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif