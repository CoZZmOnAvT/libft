/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:30:35 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/08 19:26:42 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdarg.h>

/*
**-----------------------------------------------------------------------------|
**		Type T_CONV
**
**		act			: string with conversion
**
**		[func]		: a function what will be called
**
**		[lf]		: a function what calculate output length
**
**		size		: sizeof conversion parameter
**		[1		-	char (w_int)]
**		[2		-	w_int]
**		[3		-	unsigned char (int)]
**		[4		-	char (int)]
**		[5		-	unsigned short int]
**		[6		-	short int]
**		[7		-	int]
**		[8		-	void *]
**		[9		-	intmax_t]
**		[10		-	size_t]
**		[11		-	ptrdiff_t]
**		[12		-	double]
**		[13		-	float]
**		[14		-	long double]
**
**		[prefix]	: prefix for output [0 for octal, 0x(X) for hexademical]
**
**		[uns]		: 1, when value what will be sent to function unsigned,
**					  0 - value signed
**
**		[superp]	: 'p', write '0' even argument is zero, 0 - otherwise
**-----------------------------------------------------------------------------|
*/

/*
**-----------------------------------------------------------------------------|
**		Type T_BASIC
**
**		All basic types what will be used in the function progress
**-----------------------------------------------------------------------------|
*/

/*
**-----------------------------------------------------------------------------|
**		Type T_FLAGS
**
**		[fw]		: flags length
**
**		[prefix]	: 1, put prefix before number, 0 - otherwise
**
**		[l_jusity]	: 1, value will be at the left side of minimum-wide
**						container,
**					  0 - right side
**
**		[plus_sign]	: symbol what will be printed before value
**----------------------------------------------------------------------------|
*/

typedef	long double		t_ld;
typedef	unsigned long	t_ul;
typedef	unsigned int	t_ui;
typedef	unsigned char	t_uc;
typedef	unsigned short	t_ush;

typedef struct			s_conv
{
	char	act[16];
	void	(*func)();
	size_t	(*lf)();
	char	size;
	char	*prefix;
	int		uns;
	char	superp;
}						t_conv;

typedef union			u_basic
{
	t_wint		c;
	int			i;
	t_ui		ui;
	void		*p;
	t_ld		lf;
	double		f;
	intmax_t	im;
	uintmax_t	uim;
	size_t		z;
	ptrdiff_t	pd;
}						t_basic;

typedef struct			s_flags
{
	int		fw;
	char	prefix;
	char	l_j;
	char	fill;
	char	p_s;
	long	m_w;
	long	p;
	char	p_f;
}						t_flags;

# define LDOUBLE(f, a, v, t)(t < 14 ? f(*(double *)&v, a) : f(*(t_ld *)&v, a))

# define FTCALL(f, a, v, t)(t < 12 ? f(*(void **)&v, a) : LDOUBLE(f, a, v, t))

void					set_types(t_conv *conv, va_list *args, t_basic *types);

int						arg_negative(t_basic *arg, t_conv *conv);

int						arg_zero(t_basic arg, t_conv c);

void					ft_printr(t_flags flg, t_conv *conv,
									t_basic types, long p);

void					ft_printl(t_flags flg, t_conv *conv,
									t_basic types, long p);

#endif
