#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_stpcpy(char * dst, const char * src);
char	*ft_stpncpy(char * dst, const char * src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int 	ft_toupper(int c);
int 	ft_tolower(int c);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isspace(int c);

#endif
