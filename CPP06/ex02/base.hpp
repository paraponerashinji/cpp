/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:10:40 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/11 21:24:07 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class Base
{
public:
    virtual ~Base();
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};


