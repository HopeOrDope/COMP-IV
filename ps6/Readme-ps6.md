# PS6 : Random Writer

## Contact
Name: Aniketh Rai   
Section: 011A
Time to Complete: 8 hours (approx.)


## Description
Explain what the project does.

 The Markov Model predicts the next characters in a sequence of k length words called kgrams.
 The RandWriter class takes a string and order k as input and maps each kgram in the string to each
 character following that kgram and it's frequency.
 This class can now generate strings of any given length, using the kgrams that have been seen before.
 The string's characters are based on the probabilities of the k-length strings that were stored in the hashmap

### Features
Describe what your major decisions were and why you did things that way.

RandWriter's constructor takes a string and and the order of the kgrams as input.
It initializes and constructs the hashmap.
The k_Rand function generates a string of length n, using the hashmap that was generated.
The function just iterates through a kgram's character map (the nested, inner map) and appends them in a string.
Then it randomly returns a char from this string.
The freq function returns the frequency of a kgram by searching/traversing the string.
The second overloaded function returns the frequency of a character, which is simple and just looks it up in the hashmap;
> return ktable.at(k_gram).at(c);
The generate function generates a new string by just calling the rand function, until the desired output lenght is reached.

### Testing
What tests did you write?  What exceptions did you use?  Does your code pass the tests?

 I wrote Base test to check the string and Exception test for checking exceptions. (runtime_error).
 Yes My code does pass the tests, as I have seen the outputs of them.

### Lambda
What does your lambda expression do?  What function did you pass it to?

 None.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.
    I had static/global string not permit error while linting, So to overcome that I just used NOLINT in comments.

### Extra Credit
 None. I tried but I got many errors and to correct those I had less time. I apologize for that.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

    I just referred PS6.pdf.
  
