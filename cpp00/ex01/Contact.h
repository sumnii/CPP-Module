/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:05:53 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include "iostream"

class Contact {
private:
	std::string _contact[5];

public:
	const std::string getContact(int field) const;
	void setContact(int field, const std::string contents);
};

#endif //CPP_MODULE_CONTACT_H
