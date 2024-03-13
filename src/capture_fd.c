/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capture_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:13:50 by vmonteco          #+#    #+#             */
/*   Updated: 2024/03/05 00:23:30 by vmonteco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"



char	*capture_fd(int fd, )
{
  char		*result;
  char		*tmp;
  char		buffer[BUFFER_SIZE + 1];
  ssize_t	chars_read;

  /* Set buffer */
  buffer[BUFFER_SIZE] = 0;
  
  /* Set result */
  if ((result = malloc(1)) == NULL){
    printf("[libtest>capture_fd]: Error while initial allocation for result str :\n%s (errno: %d)\n", strerror(errno), errno);
    return NULL;
  }
  result[0] = 0;

  while ((chars_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
      if ((result = realloc(strlen(result) + chars_read + 1)) == NULL){
	free(result);
	printf("[libtest>capture_fd]: Error while reallocation for result str:\n%s (errno: %d)\n", strerror(errno), errno);
	return NULL;
      }
      /* Merge result and buffer */
      strcat(result, buffer);
      if (chars_read != BUFFER_SIZE) /* We finished the read but still have new chars */
	{
	  return 
	}
    }
  if (chars_read == -1){ /* Error case */
    /* Write error to output? */
    printf("[libtest>capture_fd]: Error while reading:\n%s (errno: %d)\n", strerror(errno), errno);
    if (result){
      free(result);
    }
    return NULL;
  }  
  return result;
}
