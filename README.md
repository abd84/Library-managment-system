
 <h1>
  :open_book: Library-managment-system
  </h1>
<h2>
:small_red_triangle: Structure
  </h2>
  
- class library: Defines the library class, which contains private member variables and public member functions.
- char **nbook: Dynamic array of character pointers to store the book titles.
- char **author: Dynamic array of character pointers to store the author names.
- int *publishno: Dynamic array of integers to store the publication numbers.
- int R: Variable to keep track of the number of books added to the library.
- library(): Constructor of the library class. It initializes the dynamic arrays and sets the initial value of R to 0.
- void addnew(): Member function to add a new book to the library. It prompts the user to enter the book title, author name, and     publication number. The user can continue adding books until they enter 'B' to end the process.
- void edit(): Member function to edit the details of a book. It allows the user to choose between editing the book title or author name. Then, the user is prompted to enter the publication number of the book they want to edit. The corresponding field is cleared, and the user can enter the updated information.
- void showall(): Member function to display all the books in the library. It iterates over the added books and prints their titles, author names, and publication numbers.
- void deletedata(): Member function to delete a book from the library. The user is asked to enter the publication number of the book they want to delete, and the corresponding author name is cleared.
- int main(): The main function where the program execution starts. It creates an instance of the library class, displays a menu to the user, and based on their choice, calls the appropriate member function. The program continues to run until the user enters 'N' to exit.

---

<h2>
 :small_red_triangle_down:  Functioning
  </h2>
  
 A very use full system for library managments, it gives option
 - To add a book
 - To edit credentials of a book
 - To delete a book
 - To Show all books

---

<h2>
  <div class="center-align">
:no_entry: This code is only for trial purposes
  </div> </h2>
 
