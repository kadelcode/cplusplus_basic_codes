# Functions
-   A function is a block of code that accepts parameters(arguments)
-   They are used to perform certain actions
-   Functions enable code reuseability and optimization
-   We can track a large C++ program easily, when divided into multiple functions

# Function Declaration and Definition
-   Declaration includes the return type, name of function, and the parameters
-   Definition is the main body of the function(the code to be executed)

# Types of Functions
-   Library Functions: Functions that are declared in C++ header files.
-   User Defined Functions: Functions which are created by the programmer.

# Inline Functions
-   An inline function is a function that is expanded in line when it is called.
-   It saves time for the execution of the function
-   The compiler substitutes the function code for the function call, reducing the overhead for function calls.
-   They can be used to reduce the function call overhead

# Syntax to define an inline function
- Syntax:
    inline return_type function_name(arguments) {
        // function code
    }