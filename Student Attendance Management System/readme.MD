<h1>Introduction</h1><br>
Student Attendance Management System helps us in keeping a record of students on a particular day and make it easily accessible for the authority for further use.​<br>
The goal of this project is to mimic a physical version of a student attendance record digitally using basic concepts of C language such as Arrays, Functions, File handling.<br>

<h1>Theory</h1><br>
<li>The code used for the project revolves around the idea/concepts of Arrays, Loops, File Handling and basic Input/Output.​</li>
<li>Firstly, we input ID and PASSWORD which authenticates whether the right authority is trying to use the program if the ID and PASSWORD &emsp; entered by the user does not match the database it prints "Bad Credentials".​</li>
<li>If the user gets authenticated, they will be shown a menu in which they can mark attendance, view attendance or logout of the program​</li>
<li>If the user selects mark attendance the program goes to the mark function where you enter the date and then a file is created if it does not &emsp; exist and using a for loop we enter whether a student is present or not and after the loop ends the file closes.​</li>
<li>If the user selects view attendance the program goes to the view function in which the file in which the attendance was stored is opened &emsp; and using a while loop the contents of the file are printed till the pointer of the file reaches the end and when it reaches the file is closed.​</li>
<li>If the user selects Logout the program prints "You have been logged out" and the program ends.
