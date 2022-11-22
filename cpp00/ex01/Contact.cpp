/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/22 19:45:57 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

const std::string Contact::getContact(int i) const {
	return _contact[i];
}

void Contact::setContact(int field, const std::string contents) {
	_contact[field] = contents;
}
