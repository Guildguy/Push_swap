/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:20:49 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/13 17:20:52 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

typedef struct Node
{
	int			val;
	struct Node	*next;
}				t_node;

//libft
int		ft_atol(const char *nptr);
//printf
////print_utils
int		ft_islower(int c);
char	*ft_itoa(int n);
char	*ft_uns_itoa(unsigned int n);
////print_num
int		print_int(int n);
int		print_uns_int(unsigned int n);
int		hex_len(unsigned int n);
void	hex_write(unsigned int n, char format);
int		print_hex(unsigned int n, char format);
////print_char
int		print_chr(char c);
int		print_str(char *str);
int		ptr_len(uintptr_t ptr);
void	ptr_write(uintptr_t ptr);
int		print_ptr(void *pointer);
////printf
int		format_specifier(va_list arg, const char format);
int		ft_printf(char *str, ...);
//push_swap
void	deallocate(t_node **root);

#endif
