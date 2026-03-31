/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:48:51 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 15:48:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int num = 2; // Initial value is 2
    
    do
    {
        // The 'do-while' loop executes the code block AT LEAST ONCE 
        // before checking the condition.
        
        printf("CNOS %d \n", num);
        num++;
    } while (num < 2); // Condition is false (2 is not < 2), but it ran once!

    return 0;
}

