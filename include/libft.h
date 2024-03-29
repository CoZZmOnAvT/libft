/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:45:39 by pgritsen          #+#    #+#             */
/*   Updated: 2018/08/26 20:09:58 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <inttypes.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

/*
**		Macroses
*/

# define FT_IGNORE(x)((void)sizeof(x));

# define INT_MAX_LEN 10

# define BUFF_SIZE 32

# ifndef M_PI
#  define M_PI 3.14159265358979323846
# endif

# ifndef M_E
#  define M_E 2.7182818284590452354
# endif

# ifndef INFINITY
#  define INFINITY 1.0 / 0.0
# endif

# define ABS(num)(num < 0 ? -num : num)

# define ROUND(x)((int)(x + 0.5f))

# define NUMERIC_ALPHABET "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

/*
**		Typedefs
*/

typedef unsigned char	t_uchar;
typedef unsigned int	t_uint;
typedef unsigned long	t_ulong;
typedef unsigned short	t_ushort;

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_dlist
{
	struct s_dlist	*prev;
	void			*content;
	size_t			content_size;
	struct s_dlist	*next;
}				t_dlist;

typedef int		t_wint;

/*
**		Linked list functions
*/

t_list			*ft_lstnew(void const *content, size_t content_size);

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void			ft_lstadd(t_list **alst, t_list *node);

void			ft_lstadd_back(t_list **dst, t_list *src);

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

t_list			*ft_strsplit_lst(char const *s, char c);

/*
**		Main Functions
*/

void			*ft_memset(void *ptr, int value, size_t num);

void			*ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memccpy(void *dest, const void *src, int c, size_t n);

void			*ft_memmove(void *destination, const void *source, size_t num);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_ucharlen(t_wint c);
size_t			ft_strlen(const char *s);
size_t			ft_strnlen(const char *s, size_t len);
size_t			ft_strulen(const t_wint *s);
size_t			ft_strunlen(const t_wint *s, size_t len);

size_t			ft_strclen(const char *s, int c);

char			*ft_strdup(const char *src);

char			*ft_strcpy(char *dest, const char *src);

char			*ft_strncpy(char *dest, const char *src, size_t n);

char			*ft_strcat(char *dest, const char *src);

char			*ft_strncat(char *s1, const char *s2, size_t n);

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strnchr(const char *s, int c, size_t limit);

char			*ft_strstr(const char *haystack, const char *needle);

char			*ft_strnstr(const char *haystack, const char *needle,
							size_t len);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_str_replace(char *src, char b, char t);

int				ft_atoi(const char *s);

intmax_t		ft_atol_base(const char *s, int base);

long long		ft_atoll(const char *s);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

/*
**		Additional Functions
*/

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(char const *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(char const *s1, char const *s2);

int				ft_strnequ(char const *s1, char const *s2, size_t n);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

char			*ft_vstrjoin(int n, ...);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strnjoin(char const *s1, char const *s2,
								unsigned char symb);

char			*ft_strtrim(char const *s);

char			*ft_strntrim(char const *s, int c);

char			**ft_strsplit(char const *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(t_wint c);
void			ft_putchar_fd(t_wint c, int fd);

void			ft_putstr(char const *s);
void			ft_putnstr(char const *s, size_t len);
void			ft_putustr(t_wint const *s);
void			ft_putunstr(t_wint const *s, size_t len);
void			ft_putstr_fd(char const *s, int fd);

void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);

void			ft_putnbr(int n);
void			ft_putlnbr(long n);
void			ft_putfnbr(double num, long ap);
void			ft_putlfnbr(long double num, long ap);
void			ft_putenbr_l(double num, long ap);
void			ft_putenbr_u(double num, long ap);
void			ft_putelnbr_l(long double num, long ap);
void			ft_putelnbr_u(long double num, long ap);
void			ft_putunbr(unsigned int num);
void			ft_putulnbr(long unsigned n);
void			ft_putnbr_fd(int n, int fd);

char			*ft_strrev(char *s);

char			*ft_strshift(char *str, long offset);

int				ft_get_next_line(const int fd, char **line);

int				ft_printf(const char *format, ...);

double			ft_pow(double num, double power);

double			ft_exp(double x);

double			ft_degtorad(double deg);

intmax_t		ft_abs(intmax_t num);

size_t			ft_skipdigits(const char *s);

size_t			ft_nbrlen(int num);
size_t			ft_nbrllen(long num);
size_t			ft_nbrulen(unsigned int num);
size_t			ft_nbrullen(unsigned long num);
size_t			ft_nbrflen(double num, long ap);
size_t			ft_nbrlflen(long double num, long ap);
size_t			ft_nbrelen(double num, long ap);
size_t			ft_nbrellen(long double num, long ap);

void			ft_puthex_l(unsigned int n);
void			ft_puthex_u(unsigned int n);
void			ft_putlhex_l(unsigned long n);
void			ft_putlhex_u(unsigned long n);

size_t			ft_hexlen(unsigned int n);
size_t			ft_lhexlen(unsigned long n);

void			ft_putoct(unsigned int n);
void			ft_putloct(unsigned long n);

size_t			ft_octlen(unsigned int n);
size_t			ft_loctlen(unsigned long n);

void			ft_putbinary(uintmax_t n);

size_t			ft_nbrblen(unsigned long n);

void			ft_putnnp_l(char const *s, size_t len);
void			ft_putnnp_u(char const *s, size_t len);

size_t			ft_strnplen(const char *s);
size_t			ft_strnnplen(const char *s, size_t len);

void			ft_swap_c(char *a, char *b);
void			ft_swap_si(short int *a, short int *b);
void			ft_swap_i(int *a, int *b);
void			ft_swap_l(long *a, long *b);
void			ft_swap_f(double *a, double *b);

double			ft_get_fractional(double num);

char			*ft_get_content(const char *src, char open, char close);

double			ft_atof(const char *src);

void			*ft_memjoin(const void *m1, const void *m2,
							size_t b1, size_t b2);

uint64_t		ft_clamp(uint64_t min, uint64_t max, uint64_t val);

size_t			ft_cinustr(const char *s);
size_t			ft_cinustrn(const char *s, size_t n);
size_t			ft_cinustrcn(const char *s, size_t n);

/*
**		Circular double linked list functions
*/

t_dlist			*ft_dlstnew(void *content, size_t content_size);

void			ft_dlstpush(t_dlist **dest, t_dlist *src);

void			ft_dlstpush_back(t_dlist **dest, t_dlist *src);

void			ft_dlstdelelem(t_dlist **del);

void			ft_dlstclear(t_dlist **dlst);

size_t			ft_dlstsize(t_dlist *dlst);

void			ft_dlstpop(t_dlist *dlst);

void			ft_dlstpop_back(t_dlist *dlst);

t_dlist			*ft_dlstmerge(t_dlist **a, t_dlist **b);

t_dlist			*ft_strsplit_dlst(char const *s, char c);

void			ft_dlstupdate_indexes(t_dlist *dlst);

void			ft_dlstswap_content(t_dlist *a, t_dlist *b);

t_dlist			*ft_dlstindex(t_dlist *lst, ssize_t index);

void			ft_dlstsort(t_dlist *begin, t_dlist *end,
							int (*cmp)(void *, void *));

#endif
