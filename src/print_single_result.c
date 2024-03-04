/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_single_result.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:35:05 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/04 22:37:35 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_single_result(
	int res,
	int *local_tests_ran,
	int *local_tests_success
){
	(*local_tests_ran)++;
	if (res)
	{
		(*local_tests_success)++;
		printf("%sOK%s\n", COLOR_GREEN, COLOR_RESET);
	}
	else
	{
		printf("%sOK%s\n", COLOR_RED, COLOR_RESET);
	}
}
