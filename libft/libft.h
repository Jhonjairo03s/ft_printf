/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:11:01 by jhvalenc          #+#    #+#             */
/*   Updated: 2024/12/17 14:25:22 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isalnum(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t length);
void			*ft_calloc(size_t count, size_t size);
void			ft_bzero(void *s, size_t nbr);
void			*ft_memcpy(void *dest, const void *origen, size_t nbr);
void			*ft_memmove(void *dest, const void *origen, size_t nbr);
size_t			ft_strlcat(char *dest, const char *origen, size_t destbufer);
size_t			ft_strlcpy(char *dest, const char *origen, size_t destbufer);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memchr(const void *p, int crt, size_t nbr);
int				ft_memcmp(const void *str1, const void *str2, size_t nbr);
int				ft_strncmp(const char *str1, const char *str2, size_t nbr);
char			*ft_strchr(const char *str, int crt);
char			*ft_strrchr(const char *str, int crt);
char			*ft_strnstr(const char *str, const char *find, size_t len);
char			*ft_strdup(const char *original);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			**ft_split(char const *s, char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
