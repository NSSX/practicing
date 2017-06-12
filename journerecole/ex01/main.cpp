/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:52:25 by avella            #+#    #+#             */
/*   Updated: 2017/06/12 14:52:27 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void addInformation(Contact *myContact, std::string type, int myCase){
    std::string input;

    std::cout << "Field : " << type << " -> ";
    std::getline(std::cin, input);

    if(myCase == 0){
        myContact->setFirstName(input);
    }
    else if(myCase == 1){
        myContact->setLastName(input);
    }
    else if(myCase == 2){
        myContact->setNickName(input);
    }
    else if(myCase == 3){
        myContact->setLogin(input);
    }
    else if(myCase == 4){
        myContact->setPostalAdress(input);
    }
    else if(myCase == 5){
        myContact->setEmailAdress(input);
    }
    else if(myCase == 6){
        myContact->setPhoneNumber(input);
    }
    else if(myCase == 7){
        myContact->setBirthdayDate(input);
    }
    else if(myCase == 8){
        myContact->setFavoriteMeal(input);
    }
    else if(myCase == 9){
        myContact->setUnderwearColor(input);
    }
    else if(myCase == 10){
        myContact->setDarkestSecret(input);
    }

    return;
}

void addContact(Contact *myContact){

    addInformation(myContact, "First Name", 0);
    addInformation(myContact, "Last Name", 1);
    addInformation(myContact, "NickName", 2);
    addInformation(myContact, "Login", 3);
    addInformation(myContact, "Postal Adress", 4);
    addInformation(myContact, "Email Adress", 5);
    addInformation(myContact, "Phone Number", 6);
    addInformation(myContact, "Birthday Date", 7);
    addInformation(myContact, "Favorite meal", 8);
    addInformation(myContact, "Underwear Color", 9);
    addInformation(myContact, "Darkest Secret", 10);

    return;
}


std::string resizeChaine(std::string chaine){

    if(chaine.length() > 10){
        chaine.resize(10);
        chaine[chaine.length() - 1] = '.';
    }
    return (chaine);
}


std::string addBlank(std::string chaine){

    chaine = resizeChaine(chaine);
    if(chaine.length() < 10){
        int nbBlank = 10 - chaine.length();
        int index = 0;
        while(index < nbBlank){
            chaine = " " + chaine;
            index++;
        }

    }
    return (chaine);
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}


void printContact(Contact allContact[8], int indexContact){
    std::cout << "First Name -> " << allContact[indexContact - 1].getFirstName() << std::endl;
    std::cout << "Last Name  -> " << allContact[indexContact - 1].getLastName() << std::endl;
    std::cout << "Nickmame -> " << allContact[indexContact - 1].getNickName() << std::endl;
    std::cout << "Login -> " << allContact[indexContact - 1].getLogin() << std::endl;
    std::cout << "Postal Address -> " << allContact[indexContact - 1].getPostalAdress() << std::endl;
    std::cout << "Email Address -> " << allContact[indexContact - 1].getEmailAdress() << std::endl;
    std::cout << "Phone Number -> " << allContact[indexContact - 1].getPhoneNumber() << std::endl;
    std::cout << "Birthday Date -> " << allContact[indexContact - 1].getBirthdayDate() << std::endl;
    std::cout << "Favorite Meal -> " << allContact[indexContact - 1].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color -> " << allContact[indexContact - 1].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret -> " << allContact[indexContact - 1].getDarkestSecret() << std::endl;
    return ;
}

void searchContact(Contact allContact[8], int nbContact){

    int index = 0;
    std::string input;

    while(index < nbContact){
        std::cout << addBlank(std::to_string(index + 1)) << "|" << addBlank(allContact[index].getFirstName()) << "|"  << addBlank(allContact[index].getLastName()) << "|" << addBlank(allContact[index].getNickName()) << std::endl;
        index++;
    }

    std::cout << "Index : ";
    std::getline(std::cin, input);
    std::cout << "You choose index : " << input << std::endl;
    if(is_number(input)){
        int myIndex = std::stoi(input);
        if(myIndex <= 0 || myIndex > nbContact){
                std::cout << "This index is not available" << std::endl;
        }else{
            std::cout << "Valid Index" << std::endl;
            printContact(allContact, myIndex);
        }
    }
    else{
        std::cout << "Not a valid index(Only Number)" << std::endl;
    }
}

int main(void){

    Contact allContact[8];
    std::string myOutput;
    int nbContact = 0;

    while (42){
        std::cout << "Home(ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, myOutput);
        std::cout << "Command choose : " << myOutput << std::endl;
        if (myOutput == "ADD"){
            if(nbContact < 8){
                addContact(&allContact[nbContact]);
                nbContact++;
            } else{
                std::cout << "Too Many Contact..." << std::endl;
            }
        }
        else if (myOutput == "SEARCH"){
            if(nbContact == 0){
                std::cout << "No Contact(Use ADD)" << std::endl;
            }else{
                searchContact(allContact, nbContact);
            }

        }
        else if (myOutput == "EXIT"){
            std::cout << "GoodBye" << std::endl;
            return (0);
        }
        else{
            std::cout << "Wrong Order" << std::endl;
        }

    }
    return (0);
}
