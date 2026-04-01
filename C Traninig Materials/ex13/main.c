/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:57:31 by marvin            #+#    #+#             */
/*   Updated: 2026/04/01 18:57:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NOTE:
  main(), printf(), scanf(), ...
  These are functions from the standard libraries or custom files.
  main() => The entry point (start point) of the program.
*/

#include <stdio.h>
#include "My_Functions.c" // Including the custom functions file

// Function Prototypes (Optional when including the full .c file)
int add(int num1, int num2);
int mul(int num3, int num4);

int main()
{
    add(3, 4); 

    mul(4, 3); 

    return 0;
}
