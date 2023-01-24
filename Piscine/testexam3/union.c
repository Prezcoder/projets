/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouchar <fbouchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:29:25 by fbouchar          #+#    #+#             */
/*   Updated: 2022/12/14 11:49:48 by fbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_doubles2(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int check_doubles1(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    ft_union(char *str, char *str1)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (check_doubles1(str, str[i], i) == 1)
            write (1, &str[i], 1);
        i++;
    }
    i = 0;
    while (str1[i])
    {
        if (check_doubles2(str, str1[i]) == 1)
        {
            if (check_doubles1(str1, str1[i], i) == 1)
                write (1, &str1[i], 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write (1, "\n", 1);
    return (0);
}