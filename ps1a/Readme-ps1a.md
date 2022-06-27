# PS1A: Linear Feedback Shift Register

## Contact
Name: Aniketh Rai
Section: 011A
Time to Complete: 2 hours


## Description
Explain what the project does.
    The ps1a assignment is an implementation of LFSR(Linear Feedback shift Register) which is the Fibonacci LFSR. This assignment is used for the ps1b i.e PhotoMagic. In this project, there are two main functions i.e, step() and generate(), The step() funtion is used for left shifting the one bit of the given seed, along the lsb is the result of the tap positions. These tap positions use the XOR operations and later it gives the lsb result.
    well the XOR truth table is: 0 xor 1 ~ 1, 0 xor 0 ~ 0 , 1 xor 0 ~ 1, 1 xor 1 ~ 0.
    The generate() generates the states according to the given k inputs.

### Features
Describe the representation you used and why you did things that way.
    I have used string for the seed. Rather than using the xor operator I used the != operator as it works same and I have tried using it. I used simple string functions also.

### Issues
What doesn't work.  Be honest.  You might be penalized if you claim something works and it doesn't.
    
    None

### Changes

- I added two new functions funGetBit(char a) and funXOR(int a, int b)
- I used the != operator rather than the xor operator as it works same
- I have utilized simple string functions
- Added new Test cases

### Tests
Describe what is being tested in your Boost unit tests.
    - At first case it was simple 16 bit seed (given)
    - At second case it is random 20 bit seed
    - At third case it is random 16 bit seed


## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
    Just referred the PS1A.pdf

