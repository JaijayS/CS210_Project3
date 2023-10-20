# CS210_Project3
Springer_CS210_Poject3 files:
- CS210_Project_Three_Input_File.txt // Input file given for the assignment. This is utilzed in the program to determine the number of items. 
- Frequency_List.dat // Example of output file for Option 2
- Histogram_List.dat// Example of output file for Option 3
- Input_Item.dat // Example of output file for Option 1
- Springer_CS210_Project3.cpp // Source code


1. Summarize the project and what problem it was solving.
   
Scenario

You are doing a fantastic job at Chada Tech in your new role as a junior developer, and you exceeded expectations in your last assignment for Airgead Banking. Since your team is impressed with your work, they have given you another, more complex assignment. Your task is to build an item-tracking program for the Corner Grocer, which should incorporate all of their requested functionality.

The Corner Grocer needs a program that analyzes the text records they generate throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They are interested in rearranging their produce section and need to know how often items are purchased so they can create the most effective layout for their customers.
Directions

As you work, check your code’s syntax to ensure that your code will run. Note that when you compile your code, you will be able to tell if this is successful overall because it will produce an error message for any issues regarding syntax. Some common syntax errors are missing a semicolon, calling a function that does not exist, not closing an open bracket, or using double quotes and not closing them in a string, among others.

The program that the Corner Grocer is asking you to create should address the following functional requirements:

Menu Option One:

    Prompt a user to input the item, or word, they wish to look for.
    Return a numeric value for the frequency of the specific word.

Menu Option Two:

    Print the list with numbers that represent the frequency of all items purchased.
    The screen output should include every item (represented by a word) paired with the number of times that item appears in the input file, CS210_Project_Three_Input_File.txt. For example, the file might read as follows:

Potatoes 4
Pumpkins 5
Onions 3

Menu Option Three:

    Print the same frequency information for all the items in the form of a histogram.
    Then print the name, followed by asterisks or another special character to represent the numeric amount.
    The number of asterisks should equal the frequency read from the CS210_Project_Three_Input_File.txt file. For example, if the file includes 4 potatoes, 5 pumpkins, and 3 onions, then your text-based histogram may appear as represented below. However, you can alter the appearance or color of the histogram in any way you choose:

Potatoes ****
Pumpkins *****
Onions ***

Menu Option Four:

    Exit the program.

Data File Creation:
Create a data file, with the naming convention frequency.dat, for backing up your accumulated data. The frequency.dat file should include every item (represented by a word) paired with the number of times that item appears in the input file.

2. What did you do particularly well?
  The program itself turned out successful. The console application met all of the project requirements. It implements object-oriented programming, reads from input file, writes to new output files. 

3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

  Even though the code does work as the assignment required, I do believe I could utilize the class in a more effecient manner. 
  
  Secondly, I would like to utilize pointers and dynamic memory allocation for the program. With small files, the program works fine. If this were a program for a larger coorperation, 
  the runtime would be very slow when searching thru thousands, if not hundreds of thousands of items and transactions. Each time the program runs, it must make a copy of the items in order to develop the       respective option list. Utilzing pointers and allocating memory would clean up the memory usage and make the program run much more efficiently. 

  Lastly, 3 of the 4 functions, excluding the "exit" method, open/ close the same file, "CS210_Project_Three_Input_File.txt. I think I could have added another method that does this particular function and simply invoke that function into each of the options. This would minimize the code in option 1, 2, and 3, making the program much easier to debug if there were to be issues with the file management. 
   
4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

  Utilizing a map was very difficult. It was my first time implementing this into a program and I found it very difficult to find resources that supported what I was trying to do. Maps are a key element that I plan on learning more of in my own time, as well as pointers and classes. 
   
5. What skills from this project will be particularly transferable to other projects or course work?
  Object-oriented programming was what the key component that I found most helpful transferable into future projects. This project helped me greatly in understand private/ public members and the structure of classes. Also, incorperating files, both input and output, was key to the success of this project. I enjoyed working through that problemset and gaining a better of file management. 

   
6. How did you make this program maintainable, readable, and adaptable?

  The utlization of the class greatly improved the readability of the code. I dont know if I could have utilized the class different, but I do think that the program is easy to follow by using each option as a member function to the menu class. 




