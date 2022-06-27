# PS4b: StringSound

## Contact
Name: Aniketh Rai
Section: 011A
Time to Complete: 3 hours (approx.)


## Description
Explain what the project does.
  
   This Project produces sound using the SFML library <Audio>, Where we produces notes by using our keys. We utilize the ps4a CircularBuffer in this project.
   Basic motto of this project is to create a simulation of guitar plucking, but as I wanted to do extra credit, I made a Piano simulation note, It is not accurate but close.
   Main thing in this project is using the Karplus-Strong algorithm.



### Features
Describe what your major decisions were and why you did things that way.
   
   I decided to use vector rather than the list for the samples and also creating a sound buffer and holding the sounds bpm. I used basic switch method for taking the inputs of keys and sending them to calculate the frequency and return with a audio.
   There was much use of new functions and It was an Amazing project to do.
   I even played with the output for a while.

### Testing
What exceptions did you use?  What tests did you write?  Does your code pass the tests?

  Yes, I have implemented the exceptions using <exception>
  those are ~
  1. std::invalid_argument
  2. std::runtime_error
  Yes my code does pass the test.

### Lambda
What does your lambda expression do?  What function did you pass it to?

    Yes, I used it in the CircularBuffer Class, Where I got +0.5 for that.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.

    There is a delay at first, but later the cgot many errors
Anything special you did.  This is required to earn bonus points.
### Extra Credit
Did you make a new instrument?  What is the instrument and how did you make it?  How does the user choose between the guitar or the new instrument?

    Well, I tried creating a User Interface where the user can switch between the differnet instrument but I was unable to get the output which satisfies the user. Thereby I just went with a tune close to the Piano sound. So I guess it is considered as an *Extra Credit* to me.
    Also, Just added a nice background for precise attention.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

Background - Image from Google.
Rest of work was done by referring to SFML Website, PDF-ps4b and Notes: Music Theory, STL , Templates.






