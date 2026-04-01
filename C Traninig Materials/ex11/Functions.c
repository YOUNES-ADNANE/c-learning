/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:45:43 by marvin            #+#    #+#             */
/*   Updated: 2026/04/01 14:45:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 
   Function: add
   -------------------
   Takes two integers (nb1 and nb2), adds them together, 
   and returns the total sum.
*/
int add(int nb1 , int nb2)
{
    int Result = nb1 + nb2; // Calculate the sum
    return Result;          // Send the result back to where it was called
}

int main()
{
    // Call the function 'add' with arguments 12 and 5
    // The returned value (17) will be stored in 'num'
    int num = add(12 , 5);
    
    printf("Result = %d \n", num);
    
    return 0;
}
