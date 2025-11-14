/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:15:20 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 13:31:46 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory != NULL)
	{
		ft_memset(memory, 0, nmemb * size);
	}
	return (memory);
}

// int	main(void)
// {
// 	int	*arr1;
// 	int	*arr2;
// 	int n = 6;
// 	arr1 = (int *)ft_calloc(n, sizeof(int));
// 	arr2 = (int *)calloc(n, sizeof(int));
// 	if (arr1 == NULL)
// 	{
//     	printf("ft_calloc Memory allocation failed!\n");
// 	}
// 	printf("Array elements after ft_calloc: ");
// 	for (int i = 0; i < 10; i++) {
// 		printf("%d ", arr1[i]);
// 	}
// 	printf("\n");
// 	free(arr1);
// 	if (arr2 == NULL)
// 	{
//     	printf("calloc Memory allocation failed!\n");
// 	}
// 	printf("Array elements after calloc: ");
// 	for (int i = 0; i < 10; i++) {
// 		printf("%d ", arr2[i]);
// 	}
// 	printf("\n");
// 	free(arr2);
// }
