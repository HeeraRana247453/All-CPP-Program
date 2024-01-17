/* Polymorphism:-
There are two types of polymorphism:
-------------------------------------
    1)Compile-time polymorphism
    2)Run time polymorphism

1)Compile Time Polymorphism
-----------------------------
    In compile-time polymorphism, it is already known which function will run. Compile-time polymorphism is also called early binding, which means that
    you are already bound to the function call and you know that this function is going to run. There are two types of compile-time polymorphism:

    i)Function Overloading:
        This is a feature that lets us create more than one function and the functions have the same names but their parameters need to be different.
        If function overloading is done in the program and function calls are made the compiler already knows that which functions to execute.

    ii)Operator Overloading:
        This is a feature that lets us define operators working for some specific tasks. For example, we can overload the operator “+” and define its
        functionality to add two strings. Operator loading is also an example of compile-time polymorphism because the compiler already knows at the compile
        time which operator has to perform the task.

2)Run Time Polymorphism
--------------------------
    In the run-time polymorphism, the compiler doesn’t know already what will happen at run time. Run time polymorphism is also called late binding. The run
     time polymorphism is considered slow because function calls are decided at run time. Run time polymorphism can be achieved from the virtual function.

    i)Virtual Function:
        A function that is in the parent class but redefined in the child class is called a virtual function. “virtual” keyword is used to declare a virtual function.
        
        Function Overriding:-


Note:- Binding means linking, for each variables and function.
       Binding refers to the process of converting identifiers into addresses.
*/