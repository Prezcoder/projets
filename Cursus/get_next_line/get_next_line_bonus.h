/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouchar <fbouchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:41:51 by fbouchar          #+#    #+#             */
/*   Updated: 2023/01/30 12:19:54 by fbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_next(char *str);
char	*ft_line(char *str);
char	*read_file(int fd, char *str);
char	*ft_strjoin(char *saved, char *buf);
char	*ft_strchr(const char *s, int c);
char	*malloc_join(char *saved, char *buf);

size_t	ft_strlen(const char *theString);

#endif
