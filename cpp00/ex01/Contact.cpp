/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:05:53 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

const std::string Contact::getContact(int i) const {
	return _contact[i];
}

void Contact::setContact(int field, const std::string contents) {
	_contact[field] = contents;
}
