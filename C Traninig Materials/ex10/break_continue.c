/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   break_continue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:11:54 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 17:11:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
=== Break & Continue Statements ===
Used with loops: for, while, do-while.

break    => Exits the loop entirely (stops everything).
continue => Skips the current iteration and jumps to the next turn.
*/

#include <stdio.h>

int main()
{
    // --- Part 1: Testing 'break' ---
    // This loop will stop completely when it hits 6
    printf("--- Testing Break ---\n");
    for (int num = 0; num < 10; num++)
    {
        if (num == 6)
        {
            break; // Stop the loop and exit
        }
        printf("CNOS %d \n", num);
    }

    // --- Part 2: Testing 'continue' ---
    // This loop will only skip the number 6 and continue printing 7, 8, 9
    printf("\n--- Testing Continue ---\n");
    for (int num = 0; num < 10; num++)
    {
        if (num == 6)
        {
            continue; // Skip number 6 and move to the next iteration
        }
        printf("CNOS %d \n", num);
    }

    return 0;
}
