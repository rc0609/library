/*
File title: Textbook.hpp
Author: Ramisha Chowdhury
Breif Description: Project 2 This program will implement Textbook class. 

This is the interface.
*/

#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_

#include <iostream>
#include <string>
#include "Book.hpp"

using namespace std;

enum grade_level{NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book {
    public:
    /**
    Default constructor.
    Default-initializes all private members.
    */

   Textbook()=default;

   /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : The subject of the book (a string)
    @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
    @param     : The grade level of the book (of type grade_level)
                with DEFAULT VALUE NONE
    @param     : A boolean to indicate whether the book has review
                questions with DEFAULT VALUE False
    @post      : The private members are set to the values of the
                corresponding parameters.
    */

   Textbook(const string title, const string author, const int page_count, const string textbook_subject, const bool is_digital = false, 
            const grade_level textbook_grade_level = NONE, const bool is_review = false);

    
    /**
    @param  : a reference to a string representing the the subject of the book
    @post   : sets the private member variable to the value of the parameter
    **/
    void setSubject(const string& subject); // Mutator

    /**
    @return  : the subject of the textbook
    **/
    string getSubject() const; //Accessor

    /**
    @param  : a reference to a grade_level
    @post   : sets the private member variable to the value of the parameter
    **/
    void setGradeLevel(const grade_level& gradelevel); //Mutator

    /**
    @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
    **/
    string getGradeLevel() const;

    /**
    @post   : sets the review question flag to True
    **/
    void setReviewQuestions();


    /**
    @return  : the flag indicating if the texbook has review questions
    **/
    bool checkReviewQuestions() const;



    private:
    string subject_;
    grade_level grade_level_;
    bool review_;


};

















#endif