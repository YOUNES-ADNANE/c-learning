/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 11:58:19 by marvin            #+#    #+#             */
/*   Updated: 2026/03/31 11:58:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
=== Switch Stetement ===
   Switch (check value)
   {
   case v1:
          //cade
      break;
      
   case v2:
          //cade
      break;
      
   Default:
          //cade
      break;
   }

*/
#include <stdio.h>

int main()
{
   int xx = 26;
   
   switch (xx)
   {
   case 2:
      printf("First case \n");
      break;
      
   case 3:
      printf("Second case \n");
      break;
      
   case 26:
      printf("Third case \n");
      break;
      
   default:
      printf("default case \n");
      break;
   }
   
   return 0;
}