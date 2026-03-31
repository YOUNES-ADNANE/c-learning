/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_loop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:01:58 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 13:01:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
=== while loop ====
    while (condition)
    {
         // While condition is (True) This code will excute.
    }
*/
#include <stdio.h>

int main()
{
    int num = 0;
    
    while (num <10)
    {
    printf("CNOS %d \n", num);
    num++; // Initialize second counter variable to 9
    }
    
    // --- Part 2: Decrementing Loop (Countdown 9 to 1) ---
    
    int num1 = 9;
    
    while (num1 >0)
    {
    printf("CNOS %d \n", num1);
    num1--; // Decrement num1 by 1 in each iteration
    }
}