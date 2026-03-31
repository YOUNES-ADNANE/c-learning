/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 11:03:54 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 11:03:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
=== Calculator App With C Lang ===
   num1 + num2 = rseult

   What we nedd from the user ?
   #num1
   #num2
   #operation ("+" "-" "*" "/" "%" )
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter num1 :");
    scanf("%d", &num1);

    printf("Enter Operation :");
    scanf("%s", &op);

    printf("Enter num2 :");
    scanf("%d", &num2);

    if(op == '+')
    {
        printf("Result = %d", num1 + num2);
    }

    else if(op == '-')
    {
        printf("Result = %d", num1 - num2);
    }

    else if(op == '*')
    {
        printf("Result = %d", num1 * num2);
    }

    else if(op == '/')
    {
        printf("Result = %d", num1 / num2);
    }

    else if(op == '%')
    {
        printf("Result = %d", num1 % num2);
    }

    else
    {
        printf("Check you'r operation!");
    }

    return 0;

}
