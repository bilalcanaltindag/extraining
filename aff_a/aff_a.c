/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:41:23 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/24 20:08:20 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "a", 1);
	}
	else
	{
		while (*argv[1] != '\0')
		{
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				return 0;
			}
		argv[1]++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
