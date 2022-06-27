# PS3b: N-Body Simulation

## Contact
Name: Aniketh Rai       
Section: 011A
Time to Complete: 5 hours


## Description
Explain what the project does.
  ### Answer
    In this project we are simulating the created solar system in ps3a by using physics in it. Basic physics such as net force, Acceleration , Pair-wise forces and their formulas.
    According to the given simulating time and time step the Planets Revolve around the sun.
    By default the detail code.
    ~Code:
     ./NBody 157788000.0 25000.0 < planets.txt

### Features
Describe what your major decisions were and why you did things that way.
  ### Answer
     I have Learnt to use the smart pointers and have implemented in this project and improved the previous ps3a code.
     I have studied the notes of class as well as few physics site to actaully get the correct physics formula to run.

### Memory
Describe how you managed the lifetimes of your objects, including if you used smart pointers.
 ### Answer
            I used smart pointers to mange the memory locations of variables as well as objects in CelestialBody and Universe classes. I also used the classic vector for the memory management in the project.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.
  ### Trouble with a glitch sound
       At starting of the simulation i have a glitch in my sound, I Guess that the convertion of mp3 to wav was not good enough, or may be other reason.
  ### Trouble in Universe creation
      At first when I used my own values I had problems in creating universe later on I referred the NBody file and managed to create a universe.
  ### I have trouble in linting file
      I tried various methods to lint my file but was unable in doing it.
      I tried lint: cpplint *.cpp *.hpp and failed.
      Can you please mail me a possible way to lint files for further projects.


### Extra Credit
Anything special you did.  This is required to earn bonus points.
If you created your own universe file.  Describe it here and explain why it is interesting.
  
   ### Yes, Extra credit done.
      I have added the Background as well as sound to my Simulation.
      Also Created my own unique universe.
      The new universe is just a graphic design by variable change where I used two of each planet.
      use the same code to run.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
If you used images or other resources than the ones provided, list them here.

  ### Reference
   I referred NBody file and the data present in it to create my universe.
  ### Link
  ~UML Notes,PDF's,PPT's
  * https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170
  * https://www.geeksforgeeks.org/vector-in-cpp-stl/
  * https://study.com/learn/lesson/net-force-formula-examples-how-find.html
  * https://www.sfml-dev.org/tutorials/2.5/audio-sounds.php
  * https://www.physicsclassroom.com/Physics-Interactives/Circular-and-Satellite-Motion/The-Value-of-g-on-Other-Planets/The-Value-of-g-on-Other-Planets-Interactive