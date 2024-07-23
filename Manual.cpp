/*
File title: Manual.cpp
Author: Ramisha Chowdhury
Breif Description: Project 2 This program will implement Manual class. 

This is the implementation.
*/

#include "Manual.hpp"
#include <regex>

using namespace std;


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

    Manual::Manual(string title, string author, int page_count, 
            string manual_device_name, bool is_digital, string manual_url, bool manual_visual_aid)
            :Book(title, author, page_count, is_digital), device_name_{manual_device_name}, url_{manual_url}, visual_aid_{manual_visual_aid}{

                regex url_regex("(http|https)://www\\.[^.]+\\.[^\\s.]{2,}");
                if(regex_match(manual_url, url_regex)){
                    url_ = manual_url;
                    website_ = true;
                }

                else {
                    url_ = "";
                    website_ = false;
                }




            }
                    


/**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
**/
void Manual::setDevice(const string& device_name){ //Mutator
    device_name_ = device_name;
}

/**
  @return  : the variable indicating the device the manual is for
**/
string Manual::getDevice() const{
    return device_name_;
}

/**
  @param   : a reference to a website link (string) that is in the format
             'https://www.something.something'
             or 'http://www.something.something'
             with the last 'something' being at least 2 characters
  @return  : has_website_ flag (a boolean)
  @post    : If the link is not correctly formatted,
             store "Broken Link" in the link member variable (see <regex>)
             and either way set the has website flag to True
**/
bool Manual::setWebsite(const string& url){

    regex url_regex("(http|https)://www\\.[^.]+\\.[^\\s.]{2,}");
                if(regex_match(url, url_regex)){
                    url_ = url;
                    website_ = true;
                }

                else {
                    url_ = "Broken Link";
                    website_ = true;
                }

                return website_;
}

/**
  @return  : the url for the website
**/
string Manual::getWebsite() const {
    return url_;
}

/**
  @param  : a reference to boolean
  @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool& visual_aid){
    visual_aid_ = visual_aid;
}

/**
  @return  : the visual aid flag
**/
bool Manual::hasVisualAid() const{
    return visual_aid_;
}

    /**
    @return  : the has website flag
    **/
    bool Manual::hasWebsite() const{
        return website_;
    }





