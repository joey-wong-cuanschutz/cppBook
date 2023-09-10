#include "Book.h"
#include <iostream>

Book::Book(std::string titleValue, int pubYearValue, int numOfPagesValue)
{
    title = titleValue;
    pubYear = pubYearValue;
    numOfPages = numOfPagesValue;
}

// setter functions 
void Book::setTitle(std::string titleValue){
    title = titleValue;
}
void Book::setPubYear(int pubYearValue){
    pubYear = pubYearValue;
}
void Book::setNumOfPages(int numOfPagesValue){
    numOfPages = numOfPagesValue;
}


// getter functions 
std::string Book::getTitle(){
    return title;
}
int Book::getPubYear(){
    return pubYear;
}
int Book::getNumOfPages(){
    return numOfPages;
}


// calculate the book weight function 
float Book::estimatedBookWeight(){
    
    return (numOfPages * 0.176);
}
