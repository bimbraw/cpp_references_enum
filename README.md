# cpp_references_enum (2 and 3)
Some code exercises for references and enum in C++

1. Declare a string variable called "name", containing a name of your choice. For example "Cassandra". Next declare three reference variables to "name" variable and name them using the short version of the name you have chosen. Print out in the console all four variables (name and its references) and their addresses.
2. Write a function called "setValue" which takes one integer argument. The function should ask the user to input a value and set the value of the sent argument. Write a simple program in which you should declare an integer variable and send it to the setValue function. Then print out the value of the variable in the console.
3. Write a function called "checkIfTheSame" that will take two integer arguments. Then the function checks the sent arguments for:
   a) equality
   b) if the two arguments are completely the same (values and addresses are the same)
   c) if the values are the same but the addresses are different
   d) if they are completely different. 
Each condition if satisfied should print out in the screen the info about the variables. Declare 4 variables a, b, c and d. Variables a and b should have different values, c should be equal to a and d should be a reference to 'a'. Then sent those variables in different combinations to the "checkIfTheSame" function (a and b, a and c, a and d).
