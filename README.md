# Term-Project-COP3503
Project group 34 - Natural Language Processing
## Hi everyone!
**The program now compliles and builds.** Use the command:  

`g++ -o main -Wall -std=c++11 builder.cpp controller.cpp word.cpp`    

to create a file named "main" and run it with    

`./main`    

This only works on a Unix system.

<h2> Full list of classes:
<ol>
  <li> Builder(main) &#10004</li>
  <li> Controller &#10004</li>
  <li> Word (with WordList and WordBank linked lists) &#10004</li>
  <li> FunctionWord (and following subclasses):
    <ul>
      <li> Conjunction </li>
      <li> Preposition </li>
    </ul>
  </li>
  <li> ContentWord (and following subclasses):
    <ul>
      <li> Noun </li>
      <li> Verb </li>
      <li> Adjective </li>
      <li> Adverb </li>
    </ul>
  </li>
</ol>
</h2>

<h3> All classes should have both .cpp and .h files, with delcarations in the header and implementations in the cpp file. Once all classes have been created, we will schedule a full group meet up to determine how inheritance should be organized and to debug/fix errors (probably friday or saturday). Let's continue to be in discord in case anyone needs help.   
      
      

