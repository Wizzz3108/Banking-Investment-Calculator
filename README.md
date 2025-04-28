# -Cplusplus-Program
1. Summarize the project and what problem it was solving.
This project created a banking investment calculator to help users predict their future account balance with and without monthly deposits. It solved the problem of calculating compounded interest over a number of years based on user-provided inputs. The program outputs two clear reports, allowing users to make informed financial decisions.

2. What did you do particularly well?
I structured the project by separating functionality into different classes like Calculate, Display, and YearEndBalance. This made the program organized and easy to debug or expand if needed. I also handled user input carefully and formatted the output in a professional, easy-to-read table.

3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I could enhance the code by adding input validation to handle invalid or negative values. This would make the program more secure and prevent logical errors if the user inputs incorrect data. Additionally, I could improve memory efficiency by avoiding unnecessary pass-by-reference where it's not needed.

4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The hardest part was ensuring proper scope resolution between classes and correctly structuring the relationships between them. I overcame this by carefully reviewing how to use headers, include guards, and the correct syntax for class methods defined outside the class. To strengthen my skills, I’m adding more practice with multi-file C++ projects and studying examples of clean class organization.

5. What skills from this project will be particularly transferable to other projects or course work?
Designing classes with clear responsibilities will help me in larger object-oriented programming projects. Handling user input and formatting output are valuable skills for any project that interacts with users. Lastly, setting up separate header and implementation files improves code organization and is a standard practice in professional software development.

6. How did you make this program maintainable, readable, and adaptable?
I used meaningful class, method, and variable names so others could easily understand what the code is doing. I organized code into small, single-responsibility functions and separated files logically by class. This makes the program easy to maintain, debug, and extend if new features like additional interest calculation types are needed later.
