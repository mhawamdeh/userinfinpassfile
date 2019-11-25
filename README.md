# userinfinpassfile
This Repo includes the library that allow you to get any user information from the /etc/passwd file

To Do So:

1- Copy the files (readingandstrippinglines.h, libreadinguserinfo.a, hash256.h) to your project's folder

2- In the main.cpp file you need to include the header files that were copied before
    #include "readingandstrippinglines.h"
    #include "hash256.h"
    
3- In the main function:
- create an object of the class user_info. e.x. : 
    user_info passfile;
- call the user_infor function and pass the /etc/passwd file along with the username of the needed user. e.x. :
  passfile.user_infor("/etc/passwd", "root");  
    
    
5- On terminal write the following commands
    
      //to compile your main.cpp file
    a)  g++ -c main.cpp 
      
      //to create the executable userInfo of the main.cpp file
    b)  g++ -o userInfo main.cpp -L. -l readinguserinfo 
      
      // to run the executable
    c)  ./userInfo 
