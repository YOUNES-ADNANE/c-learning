/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_pro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:07:19 by marvin            #+#    #+#             */
/*   Updated: 2026/04/02 10:07:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
==== Password Checker App (v2: Pro) ====
Goal: Loop until the user enters the correct password.

Logic:
1. Use a 'do-while' loop to ensure the code runs at least once.
2. Store the correct password in a variable.
3. Compare user input with the password using strcmp().
4. If correct: Print success message and BREAK the loop.
5. If wrong: Print error message and REPEAT the loop (while 1).
*/

#include <stdio.h>
#include <string.h> // Required for strcmp()

int main()
{
    char password[] = "CNOS";
    
    char user_input[10];

    // Start an infinite loop that only stops when password is correct
    do {
        printf("Enter Your Password: \n");
        scanf("%s", user_input);

        // Check if the input matches the password
        if (!strcmp(user_input, password))
        {
            printf("Success :) \n");
            break; // Exit the loop because password is correct
        }
        else
        {
            // If the code reaches here, the loop will repeat
            printf("Password is not correct. Try again! \n");
        }  
    } while (1); // '1' means true, creating an infinite loop

    return 0;
}
