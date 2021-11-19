# C-IPL
Implementation of the analysis part (or front end) of a compiler, based on the C-IPL language. It consists of a lexical analyzer, syntax analyzer, semantic analyzer and intermediate code generator.

The C-IPL language was designed to ease the handling of lists in programs written in C. For that, a subset of the C language was chosen and a new primitive of data for lists and operations was introduced. All other C primitives and commands have standard semantics. 

This was the project implemented throughout the course of Compilers (Tradutores), lectured in the semester of 1/2021 and one of the final subjects taught in the Computer Science degree at the University of Brasília.

# Compile and Execute
- compile and execute:
```
  $ make
```
- compile:
```
  $ make compile
```
- execute:
```
  $ make run
```
- valgrind:
```
  $ make debug
```
# Full Specification

- The language data types are int, float and list. The int and float types are simple. The declaration of a variable of type list is done by defining the basic type of the list (see examples below). As a restriction on the usual C syntax, the declaration of variables cannot be followed by assignment.

- The language contains numeric constants (for integers and floats (yes, that includes negative numbers)) and the constant NIL (for lists); string constants are used only for printing.

- Arithmetic binary operations are addition, subtraction, multiplication and division, with usual precedence and semantics rules.

- The logical operations are negation, disjunction and conjunction, with arity, precedence rules and usual semantics. There is no boolean type in the language: just like in C, nonzero values ​​and NIL are treated as true.

- Relational binary operations are the usual ones in arithmetic: less, less or equal, greater, greater than or equal, equal and different, with the usual rules of precedence and semantics. The only exception is for equal and not equal comparators to compare a list with the NIL constant. 

- Implicit conversions between arithmetic expressions must be handled in the usual way, allowing both amplification (in the case of arithmetic calculation and comparison, parameter passing by copy and function return) and type reduction (in the case of assignment, passing parameters by copy and function return). There is no type conversion between lists and other types (or vice versa). If it is possible to identify the attempt to perform operations between operands that do not admit conversion between them, the translator must issue a warning that the operation is undefined. The conversion from float to int is done by discarding the decimal part (not by rounding; overflow, as usual, corresponds to undefined behavior).

- A program consists of a sequence of variable and function declarations, where each declared function is followed by its definition (ie, a command block, containing variable declarations and command blocks). Every function has a declared return type that can be any of the new language's primitive types (int, float, list). Unlike C, any function can have zero arguments (note that there is no VOID type in the language; but this must be specified as an empty parameter list).

- Necessarily, the program must contain a "main" function.

- The scope rules are the same as in C. A variable or function can only be used after being declared and in their respective scopes.

- The assignment command has the usual syntax. In case the variable is integer or float, the semantics is the usual one. For listings, see below.

- The language commands for flow control are restricted to the following: conditionals (if, if-else), iteration (for), function call and return. All commands have the usual semantics for the C language fragment.

- Language commands for input and output are: read, write, writeln. The read command parameter is a simple type variable; the write command parameter (write, writeln) is a simple type expression or a constant. The writeln command is equivalent to the write command followed by a newline writing. 

- In calling functions, integer and float types are passed by copy; the list type is passed by reference.

- Every function returns an expression of the declared return type.

- Operations on lists are described below:

- declaration: int list, float list.

- assignment: assignment is done by reference.
- constructors (right associative): the constant NIL has already been mentioned; the operator : is the infix binary list constructor: the left operand is an expression (rvalue) and the right operand is a list (lvalue). The element is always added to the beginning of the list.

- operators (right associative)

- header: ? is the unary operator that returns the value of the first element of a list; the list remains unchanged; using the operator on an empty list has undefined behavior.

- tail: ! is unary operator that returns the tail of a list; the list remains unchanged; using the operator on an empty list has undefined behavior.

- destructor (right associative)

- tail: % is unary operator that returns the tail of the list; the list has its first element removed; using the operator on an empty list has undefined behavior.

- functions (associative on the right):

- map: >> is the infix binary operator that has a unary function as its first argument and a list as its second argument; returns a list with the function applied to the elements of the second element; does not change the list passed as an argument.

- filter: << is the infix binary operator that has a unary function as its first argument and a list as its second argument; returns the list of elements of the second argument for which the function given as the first argument returns a nonzero value; does not change the list passed as an argument. 
