/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:17:02 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/08 19:51:02 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int main (void)
{
   
    void *p;
    p = (void*)58;
    ft_printf("FT_PRINF=Mostaremos todos lo modificadores de printf\
\nModificador c = %c\
\nModificador s = %s\
\nModificador d = %d\
\nModificador i = %i\
\nModificador x = %x\
\nModificador X = %X\
\nModificador %% = %%\
\nModificador u = %u\
\nModificador p = %p"
,'j', "esto es un string", 42, 42, 58, 58, 10, p);


    printf("\n\nPRINTF=Mostaremos todos lo modificadores de printf\
\nModificador c = %c\
\nModificador s = %s\
\nModificador d = %d\
\nModificador i = %i\
\nModificador x = %x\
\nModificador X = %X\
\nModificador %% = %%\
\nModificador u = %u\
\nModificador p = %p"
,'j', "esto es un string", 42, 42, 58, 58, 10, p);


}