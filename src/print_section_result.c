/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_section_result.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:40:59 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/04 22:43:20 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_section_result(char *name, int tests_ran, int tests_success)
{
	printf(
		"%s : [%s% 2d/% 2d%s]\n",
		name,
		((tests_success == tests_ran) ? COLOR_GREEN : COLOR_RED),
		tests_success,
		tests_ran,
		COLOR_RESET
	);
}
