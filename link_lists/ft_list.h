/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:53:21 by pamashil          #+#    #+#             */
/*   Updated: 2017/09/14 12:40:37 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#ifndef FT_LIST_H
#define FT_LIST_H

/*Link list node*/
struct Node 
{
	int data;
	struct Node* next;
};

#endif

