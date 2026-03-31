/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:27:34 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 13:27:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{

 // --- First Loop: Standard Incremental Counting ---
 
 // Initialize 'num' to 0; run while 'num' <= 10; increment 'num' by 1
 
    for (int num = 0;num <=10; num++) // It groups: (initialization; condition; increment) in one line.
    {
        printf("CNOS %d \n", num);
    }
    
    // --- Second Loop: Identical Sequence ---

    for (int num1 = 0;num1 <=10; num1++)
    {
        printf("CNOS %d \n", num1);
    }
    
    return 0;
}