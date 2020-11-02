

// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class
class MyBook : Book
{   
    private:
        int price;
    public:
        MyBook(string title_,string author_,int price_) : Book(title_,author_) ,price(price_){}
        void display()
        {
            cout << "Title: " << Book::title << "\nAuthor: " << Book::author << "\nPrice: " << price << endl;
        }
};

