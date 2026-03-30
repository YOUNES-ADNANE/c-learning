/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 06:05:54 by marvin            #+#    #+#             */
/*   Updated: 2026/03/30 06:05:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{ 
// integer scanf

    int age;
    printf("Enter You'r Age: ");
    scanf("%d" , &age); //&age (Memory Location Address)
    printf("You'r Age Is %d\n", age);

// string scanf

    char name[10];
    printf("Please Type You'r Name :");
    scanf("%s" , &name);
    printf("Hi %s\n", name);

    return 0;
}