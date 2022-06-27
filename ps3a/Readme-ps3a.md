# PS3a: N-Body Simulation

## Contact
Name:  Aniketh Rai 
Section: 011A
Time to Complete: 7 Hours


## Description
Explain what the project does.

   ### Answer
    The assignment asks us to load and display static images of the planets.
    We are using two classes Universe and CelestialBody classes. The class CelestialBody is used to show any planet rendered in the universe, example: Our planet Earth. Universe class has a vector of CelestialBody and has a function to create the entire universe by accessing the vector.

### Features
Describe what your major decisions were and why you did things that way.
     
      ### Answer
      I used istream to read the data from planets.txt and ostream as output.Displays the planets in an SFML window.
       Reads input of file using < operator.  
       I did not use any smart pointers. Just used General Pointers.
       Simply added (space) key to exit from the window.


### Memory
Describe how you managed the lifetimes of your objects, including if you used smart pointers.

     ### Answer 
     I used vectors to manage the values.
     used &-operator for managing the addresses of variables and also the objects.
     I have not used any smart pointers.



### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.

   ### trouble
         I was unable to use smart pointers and few algorithm classes, so I kind of felt a difficulty in that.
   ### learnt
         I was able to learn how to use unitary methods and also vectors in a good level.
         I was able to learn more about ostream and istream.
         Honestly, I was weak in operator overloading but by doing this project I am able to grip on it.
   ### Doesn't Work
         To be honest, I tried using smart pointers but was unable to execute in it.
       

### Extra Credit
Anything special you did.  This is required to earn bonus points.
      
       *Yes* , I have completed the extra credits by adding background image to solar system.
       I simply used the Image, Texture & Sprite. Then just used the window.draw(). Thats it.



## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
If you used images or other resources than the ones provided, list them here.
    
    ### Links
    https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php
    https://icarus.cs.weber.edu/~dab/cs1410/textbook/11.Operators/io_overload.html
    https://www.cplusplus.com/reference/vector/vector/
    https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Drawable.php
    https://stackoverflow.com/questions/34458791/making-custom-types-drawable-with-sfml
    
    ### Friend_help
    I took help of my school friend regarding this Math Formula.
        ###Formula
                rx = ((x/univRadius) * (screenw / 2)) + (screenw/2)
                ry = ((y/univRadius) * (screenh / 2)) + (screenh/2)
    
    ### Images
    All my images are 
    