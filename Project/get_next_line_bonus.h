/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonini <fbonini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:28:31 by fbonini           #+#    #+#             */
/*   Updated: 2021/06/11 16:50:53 by fbonini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

int			get_next_line(int fd, char **line);

void		*ft_memcpy(void *dest, const void *src, size_t n);

size_t		ft_strlen(const char *s);

char		*ft_strdup(const char *str);

size_t		ft_strlcpy(char *dest, const char *src, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strchr(const char *src, int c);

char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
