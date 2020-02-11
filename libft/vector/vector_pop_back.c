/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:33:11 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/11 20:16:04 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	*vector_pop_back(t_vector *vector)
{
	if (!vector)
		return (NULL);
	return (vector_get_element(vector, vector->size--));
}
