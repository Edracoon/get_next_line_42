/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epfennig <epfennig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:42:03 by epfennig          #+#    #+#             */
/*   Updated: 2021/03/02 17:23:35 by epfennig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(char *src);
char		*ft_strchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strnew(size_t size);
int			ft_strfree(char **ptr);
int			get_next_line(int fd, char **line);
int			ft_strlen(const char *str);
char		*ft_memalloc(size_t size);
void		*ft_memset(void *b, int c, size_t len);

#endif
