# PSXa::PS2: TFRACTAL TRIANGLE

## Contact
Name: Aniketh Rai   
Section: 011A
Time to Complete: 5 hours


## Description
Explain what the project does.
 In this project, I have created Tfractal tree using recursive method.
 I made use of sfml library to draw the Triangle.
 Code to run Is:
 """ ./TFractal 260 5 """

### Features
Describe what your major decisions were and why you did things that way.
    I added Escape key to close the window as It was convenient.
    I made use of VertexArray to draw individual triangles themselves.
    The Triangle is completely draw until the depth value becomes zero.
    I added colors to the triangle.
    I Used cmath for the math functions.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.
    When you use ./TFractal value1 value2 where if value1 is > than 260 it exceeded the window.
    I tried to autosize but was unable to do so.
    
    I learn how to use math functions and formulas to create those triangle.
    Overall It was fun to this assignment.

### Changes
 * I made use of VertexArray for individual triangle.
 * Implemented different Mathematic formulas.
 * Added Background to the Traingle.
 * Added Cpplint to target file.
 * Used rand_r() rather than rand()


### Extra Credit
Anything special you did.  This is required to earn bonus points.
# Yes, Extra Credit done.
   I tried using <random> but I was not familiar with its functions. So end up using rand_r() to generate random colors for each triangle.


## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
    Got help for Linting from Tutor:
                                     Tejaswi G
    for rand_r(): https://stackoverflow.com/questions/29465758/correct-way-to-use-rand-r-for-multithreaded-programs-in-c-c
    I also looked into Serphenski Triangle.
    Background image: https://www.peakpx.com/en/hd-wallpaper-desktop-vghhk
    Rest- I referred to provided notes and PDf.

