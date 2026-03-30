/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 06:47:05 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 06:47:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int width = 10;
    int height = 5;
    int result = width + height;
    printf("width + height = %d\n", result);

    //The second way
    printf("width + height = %d\n", width + height);
    printf("width - height = %d\n", width - height);
    printf("width * height = %d\n", width * height);
    printf("width / height = %d\n", width / height); // this will print integer number
    printf("width %% height = %d\n", width % height); // this will print remainder

    // Multiplication And Division Always Before Addition And Subtraction

    int example = 8 + 4 * 3;
    printf("example = %d \n" , example);

    // Parentheses Are The Only Exception ()

    int example1 = (8 + 4) * 3;
    printf("example1 = %d \n" , example1);

    return 0;
}