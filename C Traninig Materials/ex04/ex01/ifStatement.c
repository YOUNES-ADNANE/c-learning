/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_else.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 08:41:20 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 08:41:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
=== if Statement ===
    if (condition){
        excute this code if condition is (True)
    }

--- Conditions ---  
    >
    <
    >=
    <=
    ==
    !=  
*/
#include <stdio.h>

int main()
{
    //==
    int number = 5;
    if (number == 5)
    {
        printf("Condition is True \n");
    }

    //!=
        int number1 = 5;
    if (number1 != 4)
    {
        printf("Condition is True \n");
    }
}