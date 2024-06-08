/*
File title: Novel.cpp
Author: Ramisha Chowdhury
Breif Description: Project 2 This program will implement Novel class. 

This is the implemantaion.
*/

#include <iostream>
#include <string>
#include "Novel.hpp"

using namespace std;



  /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : The genre of the novel (a string)
    @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
    @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
    */

   Novel::Novel(const string title, const string author, const int page_count, string novel_genre, const bool is_digital, const bool is_review)
                :Book(title, author, page_count, is_digital){

                    genre_ = novel_genre;
                    film_adaptation_ = is_review;
                    average_rating_ = 0.0;
            

                }

   /**
    @return   : the value of the genre private member
    **/
    string Novel::getGenre() const{
        return genre_;

    }


    /**
    @param  : a reference to string indicating the genre of the book
    @post   : sets genre_ private member to the
              value of the parameter
    **/
    void Novel::setGenre(const string& genre){
        genre_ = genre;
    }

    /**
    @return   : the vector containing the list of characters for this novel
    **/
    vector<string> Novel::getCharacterList() const{
        return character_list_;
    }

    /**
    @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
    **/
    string Novel::getCharacterListString() const{
        string all_characters;
        for(int i = 0; i < character_list_.size()-1; i++){

            all_characters += character_list_[i];
             all_characters += " ";

        }

        all_characters += character_list_[character_list_.size()-1];
        return all_characters;
             
    }

    /**
    @param  : a reference to string indicating a character
    @post   : inserts the character into the character_list_ vector
    **/
    void Novel::addCharacter(const string& character){
        character_list_.push_back(character);
    }

    /**
    @return   : the value of the film_adaptation_ private member
    **/
    bool Novel::hasFilmAdaptation() const{
        return film_adaptation_;
    }

    
    /**
    @post   : sets has_film_adaptation_ private member to true
    **/
    void Novel::setFilmAdaptation(){
        film_adaptation_ = true;
    }

    /**
    @return   : the value of the average rating private member
    **/
    double Novel::getAverageRating() const{
        return average_rating_;
    }

    /**
    @param    : a reference to floating point number (double) indicating
              the score of the  review
    @param    : a reference to string indicating the rating of the review
    @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
    */
    review Novel::createReview(const double& review_score, const string& rating_review){
        review create_review;
        create_review.score_ = review_score;
        create_review.rating_= rating_review;

        return create_review;

    }

    /**
    @param  : a reference to review object
    @post   : inserts the review argument into the reviews_ vector
    **/
    void Novel::addReview(const review& review_insert){
        reviews_.push_back(review_insert);
    }

    /**
    @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
    **/  
    void Novel::calculateAverageRating(){
        double x = 0.0; //Variable for keeping track of the values
        for(int i = 0; i < reviews_.size(); i++){
            x += reviews_[i].score_;
        }

        if (reviews_.size() > 0){
            average_rating_  = x / reviews_.size();
        }

    }
