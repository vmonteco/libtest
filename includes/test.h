/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:45:20 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/05 00:23:05 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

/*
 *		Includes :
 */

#include <stdio.h>
#include <stddef.h>

/*
 *		Colors :
 */

# define COLOR_RESET "\033[0m"
# define COLOR_GREEN "\033[1;32m"
# define COLOR_RED "\033[1;31m"

/*
 *		Globals :
 */

int		tests_ran = 0;
int		tests_success = 0;

/*
 *		Functions :
 */

void	print_single_result(int res, int *local_tests_ran, int *local_tests_success);
void	print_section_result(char *name, int tests_ran, int tests_success);
void	print_main_result(void);
char	*capture_fd(void);
void	inject_to_fd(void);

#endif
