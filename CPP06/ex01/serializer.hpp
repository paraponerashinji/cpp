/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandreharder <alexandreharder@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:57:16 by alexandreha       #+#    #+#             */
/*   Updated: 2025/12/10 14:24:28 by alexandreha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdint.h>

struct Data
{
    int i;
    std::string str;    
};

class serializer
{
private:
    serializer(serializer &copy);
    ~serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data    *deserialize(uintptr_t p);
};