/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ppe <joao-ppe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:53:51 by joao-ppe          #+#    #+#             */
/*   Updated: 2023/05/29 15:37:54 by joao-ppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 42
# endif

//get_next_line.c
char	*get_next_line(int fd);
char	*get_new_line(char *stash);
char	*read_file(int fd, char *stash);
char	*store_leftovers(char *stash);
char	*clean_memory(char **stash, char **buffer);

//get_next_line_utils.c
size_t	ft_strclen(const char *str, char c);
size_t	ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strndup(char *s1, size_t n);

#endif
