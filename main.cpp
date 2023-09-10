#include <iostream>
#include "Book.h"
#include <string>

int main(){

    // declare variables to hold user responses
    std::string bookTitle;
    int bookPubDate = 0;
    int bookPageNum = 0;

    // show prompt and get user input 
    std::cout << "Please input the title of the book: " << std::endl;
    std::getline(std::cin, bookTitle);

    std::cout << "Input the publication year of the book: " << std::endl;
    std::cin >> bookPubDate;

    std::cout << "Input the number of pages in the book: " << std::endl;
    std::cin >> bookPageNum;

    Book bookObject1(bookTitle, bookPubDate, bookPageNum);

    std::cout << bookObject1.getTitle() << " is about " << bookObject1.estimatedBookWeight() << " ounces.\n" << std::endl;



    return 0;
};