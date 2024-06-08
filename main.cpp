/*
File title: main.cpp
Author: Ramisha Chowdhury
Breif Description: Project 2 This program will test Manual, Textbook, Novel class. 
*/

#include <iostream>
#include "Book.hpp"
#include "Manual.hpp"
#include "Textbook.hpp"
#include "Novel.hpp"

using namespace std;

int main(){

//Class Book Test
cout << "Test for Book Class" << endl;
Book book("Hello", "Dr. Smith", 70, false);

//Test for getter and setter of title
string new_book = "Harry Potter";
book.setTitle(new_book);
cout << "Should be Harry Potter" << book.getTitle() << endl;

//Test for setter and getter of author
string new_author = "J.K. Rolling";
book.setAuthor(new_author);
cout << "Should be J.K. Rollong" << book.getAuthor() << endl;

//Test for setter and getter of page count
int new_page_num = 100;
book.setPageCount(new_page_num);
cout <<"Should be 100: " << book.getPageCount() << endl;

//Test for setter and getter of is digital
book.setDigital();
cout << "SHould be true: " << book.isDigital() << endl;

//Class Manual Test
    cout <<"Test for Manual Class" << endl;
    Manual manual("Sunnyside", "Rowan Smith", 130, "iPhone", false, "https://www.something.something", false);

    //Test for setter and getter of device
    string new_device = "HP Laptop";
    manual.setDevice(new_device);
    cout << "Should be HP Laptop: " << manual.getDevice() << endl;

    //Test setter and getter of website
        //Sucessfull case
    string new_website = "https://www.sunnyroad.something";
    manual.setWebsite(new_website);
    cout << "Should be showing the above ulr and true: " << manual.getWebsite() << manual.hasWebsite() << endl;

        //Fail case
    string new_website2 = "Hello, World";
    manual.setWebsite(new_website2);
    cout << "Should be showing Broken Link and true: " << manual.getWebsite() << manual.hasWebsite() << endl;

    //Test setter and getter of visual aid
    bool new_visual_aid = true;
    manual.setVisualAid(new_visual_aid);
    cout << "Shoud be true: " << manual.hasVisualAid() << endl;



//Class Textbook Test
cout << "Test for Textbook Class" << endl;
Textbook textbook("Intro to CSCI", "Alisa Malisa", 330, "Computer Science", false, NONE, false);

//Test of setter and getter of subject
string new_subject = "Math";
textbook.setSubject(new_subject);
cout << "Should be Math: " << textbook.getSubject() << endl;

//Test for setter and getter of grade level
    //Success case
grade_level new_grade = 2;
textbook.setGradeLevel(new_grade);
cout << "Should be JUNIOR HIGH: " << textbook.getGradeLevel() << endl;
    //NONE case
grade_level new_grade2 = 6;
textbook.setGradeLevel(new_grade2);
cout << "Should be NONE: " << textbook.getGradeLevel() << endl;

//Test for review question setter and getter
textbook.setReviewQuestions();
cout << "Should be true: " << textbook.checkReviewQuestions() << endl;





//Class Novel Test
    cout << "Test for Novel Class" << endl;
    Novel novel("Harry Potter", "J.K Rolling", 200, "Fantasy", false, false);

    // Test setter and getter of genre
    string new_genre = "Horror";
    novel.setGenre(new_genre);
    cout << "Should be Horror: " << novel.getGenre() << endl;

    // Test adding a character
    string character_name = "Draco Malfoy";
    novel.addCharacter(character_name);
    cout << "Should include Draco Malfoy: " << novel.getCharacterListString() << endl;

    // Test setter and getter of film adaptation
    novel.setFilmAdaptation();
    cout << "Film adaptation should be true: " << novel.hasFilmAdaptation() << endl;

    // Test adding a review and getter of the average rating
    review new_review = novel.createReview(5, "Life-Changing");
    novel.addReview(new_review);
    novel.calculateAverageRating();
    cout << "Average rating should be 5: " << novel.getAverageRating() << endl;

    
    review new_review_2 = novel.createReview(2, "Not my type");
    novel.addReview(new_review_2);
    novel.calculateAverageRating();
    cout << "Average rating should be 3.5: " << novel.getAverageRating() << endl;
```

}
