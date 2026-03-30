/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 04:53:40 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 04:53:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ==== C Data Types: ====
    --- for integer variables ---
    int x = 5; // range [-32, 767 <==> +32, 767] 
    long

    --- for floating point variables ---
    float x = 1.5; 
    double

    --- for text variables ---
    char x = 'a';       // for signle character
    char x[] = "cnos"; // for a string og character

    --- for boolean variables ---
    bool x = true;  // return 1
    bool x = false; // return 0	
    
*/

#include <stdio.h>

int main()
{
    int age = 18;
    printf("Hi I'm %i years old\n", age);
    return 0;
}