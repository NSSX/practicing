/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:52:11 by avella            #+#    #+#             */
/*   Updated: 2017/06/12 14:52:14 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


Contact::Contact(void){

    return;
}

Contact::~Contact(void){

    return;
}

std::string Contact::getFirstName(void) const{
    return this->_first_name;
}

std::string Contact::getLastName(void) const{
    return this->_last_name;
}

std::string Contact::getNickName(void) const{
    return this->_nickname;
}

std::string Contact::getLogin(void) const{
    return this->_login;
}

std::string Contact::getPostalAdress(void) const{
    return this->_postal_adress;
}

std::string Contact::getEmailAdress(void) const{
    return this->_email_adress;
}

std::string Contact::getPhoneNumber(void) const{
    return this->_phone_number;
}

std::string Contact::getBirthdayDate(void) const{
    return this->_birthday_date;
}

std::string Contact::getFavoriteMeal(void) const{
    return this->_favorite_meal;
}

std::string Contact::getUnderwearColor(void) const{
    return this->_underwear_color;
}

std::string Contact::getDarkestSecret(void) const{
    return this->_darkest_secret;
}

void Contact::setFirstName(std::string newValue){
    this->_first_name = newValue;
    return;
}

void Contact::setLastName(std::string newValue){
    this->_last_name = newValue;
    return;
}

void Contact::setNickName(std::string newValue){
    this->_nickname = newValue;
    return;
}

void Contact::setLogin(std::string newValue){
    this->_login = newValue;
    return;
}

void Contact::setPostalAdress(std::string newValue){
    this->_postal_adress = newValue;
    return;
}

void Contact::setEmailAdress(std::string newValue){
    this->_email_adress = newValue;
    return;
}

void Contact::setPhoneNumber(std::string newValue){
    this->_phone_number = newValue;
    return;
}

void Contact::setBirthdayDate(std::string newValue){
    this->_birthday_date = newValue;
    return;
}

void Contact::setFavoriteMeal(std::string newValue){
    this->_favorite_meal = newValue;
    return;
}

void Contact::setUnderwearColor(std::string newValue){
    this->_underwear_color = newValue;
    return;
}

void Contact::setDarkestSecret(std::string newValue){
    this->_darkest_secret = newValue;
    return;
}
