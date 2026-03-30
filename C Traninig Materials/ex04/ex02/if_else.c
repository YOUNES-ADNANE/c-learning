/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_else.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:25:18 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 09:25:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
=== if / else Statement ===
    if (condition A){
        excute this code if condition A is (True)
    }
    else if (condition B){
        excute this code if condition B is (True)
        }
    else if (condition C){
        excute this code if condition C is (True)
        }
    else{
        excute this code if condition are (Falses)
    
    }
*/
#include <stdio.h>

int main()
{
    int num = 17;
    if (num == 12)
    {
        printf("number is 12 \n");
    }

    else if (num == 6)
    {
        printf("number is 6 \n");
    }

    else if (num == 1)
    {
        printf("number is 1 \n");
    }

    else 
    {
        printf("No Condition is True \n");
    }

    return 0;
} 
