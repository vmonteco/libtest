/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:45:20 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/04 23:22:32 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

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
void	print_main_result(char *name);
char	*capture_fd();
void	inject_to_fd();

#endif
