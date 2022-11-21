/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:06:42 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/18 17:00:28 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H

#include "iostream"

class Fixed {
private:
	int num;
	const static int bit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //CPP_MODULE_FIXED_H
