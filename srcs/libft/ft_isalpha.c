/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomatsu <kkomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:25:41 by kkomatsu          #+#    #+#             */
/*   Updated: 2024/06/02 19:19:42 by kkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}