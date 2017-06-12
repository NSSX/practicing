/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:52:20 by avella            #+#    #+#             */
/*   Updated: 2017/06/12 14:52:21 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact{

public:

    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickName(void) const;
    std::string getLogin(void) const;
    std::string getPostalAdress(void) const;
    std::string getEmailAdress(void) const;
    std::string getPhoneNumber(void) const;
    std::string getBirthdayDate(void) const;
    std::string getFavoriteMeal(void) const;
    std::string getUnderwearColor(void) const;
    std::string getDarkestSecret(void) const;

    void setFirstName(std::string newValue);
    void setLastName(std::string newValue);
    void setNickName(std::string newValue);
    void setLogin(std::string newValue);
    void setPostalAdress(std::string newValue);
    void setEmailAdress(std::string newValue);
    void setPhoneNumber(std::string newValue);
    void setBirthdayDate(std::string newValue);
    void setFavoriteMeal(std::string newValue);
    void setUnderwearColor(std::string newValue);
    void setDarkestSecret(std::string newValue);



    Contact(void);
    ~Contact(void);

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal_adress;
    std::string _email_adress;
    std::string _phone_number;
    std::string _birthday_date;
    std::string _favorite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;


};
#endif
