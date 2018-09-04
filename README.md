# Posist1
The code has been implemented in c++
To run the cod ejust foolow the following steps:
1)Paste code in an IDE(Code has been created in DevC++)
2)click on compile and run under execute tab in DEvC++
3)Click on compile and run


Details About he implementation
A)
The code implemented does the following :-
1)It create the genesis node named as root in the program
->It has been done in the code
2)You can create child nodes
->Just run the program and type 1 it would create node which would be child node of our previous node 
3)Encrypt andDecrypt Data
->This has been implemented in the fuction "insert()
->When the owner types its details (value,name,id) the corresponding values are decrypted and decrypted value is saved
NOTE-REST OF THE STEPS HAVE NOT BEEN IMPLEMENTED DUE TO LACK OF TIME AT THE MOMENT
B)
Implementation Logic
For inserting
We create a new node and calculates the corresponding hashes and write all the structure values in it
A parent genesis node is created and is named as root
If root points to null at present then we point root to present created node
Else we go parsing the list till a node with child Node of value NULL is not found 
Then we insert our node as child of that node

For hashing
1)Converting string to int 
we calculate the char value of int at each point nad form a no by using no=no*10+value_we_got
2)Convert int to string
we calculate the cooresponding ascii value of the char and place it in string

