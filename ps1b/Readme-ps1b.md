# PS1b: Photo Magic

## Contact
Name: Aniketh Rai   
Section: 011A
Time to Complete: 4 Hours


## Description
The project takes the input image i.e, Cat.png and Encrypts using the LFSR Randomizer and encrypts each and every pixel
of the image and saves to the cat-out.png file.
   For Encryption I used Common Example i.e;
    _./PhotoMagic cat.png cat-out.png 0011001100000 8_
If we want to decrypt the encrypted image we write it as follows.
    _./PhotoMagic cat-out.png cat.png 0011001100000 8_

### Features
I used The Vector STL in the LFSR as it is much easier to use and I felt flexible in it. Also Improvised the sample code to the Final code to get the perfect output. I used Image and its funtions and letter sent to TExture then to Sprite to draw on the window I used Two windows and two sprites for showing the difference between the normal cat image and the encoded and decoded image.                                                                                                                           

### Issues
The code works perfectly fine.

### Extra Credit
I did the extra credit to allow for alphanumeric passwords by taking 
the user’s input password, then padding the password either up to 16 characters by repeating 
the password characters until reaching the length of 16, or cutting off the password if it is 
longer than 16 characters. Then I took the ascii value of each character in this padded 
password and performed mod 2 on them to get either a 1 or 0, I put all of the 1’s and 0’s into 
a string and had successfully turned the alphanumeric password into a usable format for the  
seed of the program.


## Acknowledgements
https://www.sfml-dev.org/tutorials/2.5/
https://docs.microsoft.com/en-us/windows/win32/seccrypto/data-encryption-and-decryption
### IMAGE SOURCE:
https://uml.umassonline.net/bbcswebdav/pid-1312714-dt-content-rid-11794775_1/xid-11794775_1

