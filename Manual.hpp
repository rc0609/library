/*
File title: Manual.hpp
Author: Ramisha Chowdhury
Breif Description: Project 2 This program will implement Manual class. 

This is the interface.
*/

#ifndef MANUAL_HPP_
#define MANUAL_HPP_

#include <iostream>
#include <string>
#include "Book.hpp"

using namespace std;

class Manual: public Book{

    public:

    /**
    Default constructor.
    Default-initializes all private members.
    */
    Manual()=default;

    /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : The name of the device (a string)
    @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
    @param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty string (a string)
    @param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
    @post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty string and the website flag is set to False.
    */

    Manual(string title, string author, int page_count, 
            string manual_device_name, bool is_digital = false, string manual_url = "", bool manual_visual_aid = false);


    /**
    @param  : a reference to a string representing the device
    @post   : sets the private member variable to the value of the parameter
    **/

   void setDevice(const string& device_name); //Mutator


   /**
    @return  : the variable indicating the device the manual is for
    **/
   string getDevice() const; //Accessor


   /**
    @pre : link needs to be in this format; 'https://www.something.something'
             or 'http://www.something.something'
             with the last 'something' being at least 2 characters
    @param   : a reference to a website link (string) 
    @return  : has_website_ flag (a boolean)
    @post    : If the link is not correctly formatted,
             store "Broken Link" in the link member variable (see <regex>)
             and either way set the has website flag to True
    **/
    bool setWebsite(const string& url); // Mutator

    /**
    @return  : the url for the website
    **/
    string getWebsite() const; // Accessor


    /**
    @param  : a reference to boolean
    @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
    **/
    void setVisualAid(const bool& visual_aid);

    /**
    @return  : the visual aid flag
    **/
    bool hasVisualAid() const;

    /**
    @return  : the has website flag
    **/
    bool hasWebsite() const;


    private:
    string url_;
    string device_name_;
    bool visual_aid_;
    bool website_;

};

#endif
