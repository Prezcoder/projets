/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouchar <fbouchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 07:43:41 by fbouchar          #+#    #+#             */
/*   Updated: 2022/12/15 07:48:18 by fbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc >= 2)
    {
        while (argv[argc - 1][i])
        {
            write (1, &argv[argc - 1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}