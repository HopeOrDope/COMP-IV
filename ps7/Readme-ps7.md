# PS7: Kronos Time Clock
## Contact
Name: Aniketh Rai
Section: 011A
Time to Complete: 2 hours (approx)


## Description
Explain what the project does.
    We analyze the Kronos Intouch time clock log by using regular expressions to parse the file.
    Also we verify device boot up timing.
    here we take the given device[1-6]_intouch.log files and give a resultant file which contains the time, date, status and line number of the boot to the .rpt file.

### Features
Describe what your major decisions were and why you did things that way.
    I used the lambda expression for getting the time from first 19 characters i.e substring(0,19).
    I prefer using lambda expression than ordinary method as its more efficient.
    Just utilized the three functions from the regex library to finish my project.

    
### Approach
Describe your overall approach to solving this problem.

    Firstly, I initialize regular expressions to the starting and ending log entries so it can be used to compare the regex to find.
    if there is a match in every line of the file(.log). I create an _outputfile where the data of the result is stored as filename.log.rpt .There is a use of bool exp to keep tracking of the incomplete booting. I utilize the regex_search function to search a match for the starting regular expression(log.c.166). 
    if there is no incomplete booting, I write the date,time,line number and status of the boot to our _outputfile. The else if condn is used to search the line for finding the match for the ending regular expression. if that is found, The calculation of the duration of the time is begun by using posix. Again I write the line_number, date , time and duration it took for the completion of sequence.

### Regex
What regular expressions did you use?  Explain what each one does.

-> boost::regex startMessage("( \\(log.c.166\\)    server started)");
- Stores the first logging message using regex. 

-> boost::regex endMessage("(oejs.AbstractConnector:Started SelectChannelConnector)");
- Stores the log entry that indicates the completion of the boot up sequence. 

-> regex_search(s, startMessage) 
- Compares str of type string extracted from the file to the 
    regular expression startMessage from above.

-> regex_search(s, endMessage)
    - Compares str of type string extracted from the file to the 
    regular expression endMessage from above.

### Issues
What did you have trouble with?  What did you learn?  What doesn't work?  Be honest.  You might be penalized if you claim something works and it doesn't.
  None.
  I learnt how to use regex library more efficiently and also I had fun doing this assignment.


### Extra Credit
Anything special you did.  This is required to earn bonus points.
    Yes, I did Extra credit.
    I can see the tracking of the start and completion of each service with time in the output files.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

    I referred the ps7.pdf.
    Also looked into regex library more. link: https://cplusplus.com/reference/regex/
