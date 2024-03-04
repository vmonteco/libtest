/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_main_result.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 23:55:07 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/05 00:20:24 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

extern int		tests_success;
extern int		tests_ran;

void	print_main_result(void)
{
	printf(
		"Final result : [%s% 2d/% 2d %s]\n",
		((tests_success == tests_ran) ? COLOR_GREEN : COLOR_RED),
		tests_success,
		tests_ran,
		COLOR_RESET
	);
}
