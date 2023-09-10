#include <iostream>
#include <string>

class Book{

    public:

        // construtor 
        explicit Book(std::string titleValue, int pubYearValue, int numOfPagesValue);

        // getter functions 
        std::string getTitle();
        int getPubYear();
        int getNumOfPages();

        // setter functions 
        void setTitle(std::string titleValue);
        void setPubYear(int pubYearValue);
        void setNumOfPages(int numOfPagesValue);

        // calculate the book weight function 
        float estimatedBookWeight();

    private:

        std::string title;
        int pubYear;
        int numOfPages;


};