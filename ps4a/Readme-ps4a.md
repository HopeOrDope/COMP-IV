# PS4a: CircularBuffer

## Contact
Name: Aniketh Rai	
Section: 011A
Time to Complete: 2hours


## Description
Explain what the project does.
 The ps4a assignment creates a circular buffer which will be used for the follow up assignment ps4b. In this assignment, we create basically a circular queue, where the head and tail will be connected and follows the same mechanism as queue i.e, FIFO (First In First Out) Mechanism. 

### Features
Describe what your major decisions were and why you did things that way.
 I make use of Vectors in standard manner rather than the functions as I found it amuzing and easy to understand theoratically, Where I used basic rules such as init head, tail.
 I used the default format of the pdf to create the template version and also added few functions such as print etc.
 I used exceptions to inform the provided arised exceptions.


### Testing
What exceptions did you use?  What tests did you write?  Does your code pass the tests?
  I used std::runtime_error, std::invalid_argument and std::exception.
  Yes it passed the test.

### Complexity
Discuss the time and space complexity of your CircularBuffer.  Do all of the functions require the same amount of time, or do some of them require more then others?
    The Time complexity depends on the capacity of the buffer, where it will be O(n) for printing.
    The Time complexity for entering will be O(1)
    The Time complexity for deleting will be O(1)
    The Time complexity for other functions is O(1)


### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.
 At first I got alot of Issues while implementing templates then later I managed to debug them. So no Issues.


### Extra Credit
Anything special you did.  This is required to earn bonus points.
Did you write a lambda expression?  What does it do and what function did you pass it to?
  Well I did use lamba expression in function, but I dont think I met Your requirements.
  """auto lamda = [](int len){ return len == 0;  };
return lamda(len); """

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
 Just referred the provided pdf and notes of Comp-4.
