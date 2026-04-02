/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 08:21:08 by marvin            #+#    #+#             */
/*   Updated: 2026/04/02 08:21:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
==== Password Checker App (v1: Basic) ====
Goal: Compare a stored password with user input.

Steps:
1. Define a variable to store the correct password.
2. Take string input from the user.
3. Compare the strings using strcmp().
4. If true: Access granted.
5. If false: Show error message.
*/

#include <stdio.h>
#include <string.h> // Required for strcmp()

int main()
{
    char password[] = "CNOS";
    
    // Array to store user's input (max 10 characters)
    char user_input[10];

    printf("Enter Your Password: \n");
    scanf("%s", user_input);

    /* 
       strcmp(str1, str2) returns 0 if they are identical.
       Using '!' (NOT) turns 0 into True.
    */
    if (!strcmp(user_input, password))
    {
        printf("Success :) \n");
    }
    else
    {
        printf("Password is not correct. Try again! \n");
    }

    return 0;
}
