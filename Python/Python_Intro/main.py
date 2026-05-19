'''
Features of Python
1. Simple and Easy to learn
2. Freeware and OpenSource
3. High Level Programming language
4. Platform independent
5. Portability
6. Dynamically typed.
7. Both Procedure and Object oriented prgrming language
8. Interpreted
9. Extensible.
10. Embedded
11. Extensive Library.

// Types of Python
1. Cpython
2. Jpython.
3. IronPython
4. Pypy
5. RubyPython
6. AnacondaPython

//Current Versions
Python 3.6.1
Python 2.7.13

//RESERVED WORDS
True, False, None,
and, or, not, is,
if, elif, else
while, break, continue, return, in, yield
try, except, finally, raise, assert
import, from, as, class, def, pass, global, nonlocal, lambda, det, with

//DATA TYPES 
int, float, complex, bool, str, bytes, bytearray, 
range, list, tuple, set, frozenset, dict, None.

//
1.type()
to check the type of variable
2. id()
to get address of object

//
Dynamically typed 
Typing refers to type-checking in Programming language. In a strongly typed language(Python), 
"1"+2 will give type error since these languages dont allow for "type-coercion" 
(implicit conversion of data types).
on the other hand, a weakly-typed languages, such as Javascript, will simply output "12" as result.
Type checking can be done in two ways:
1> static - Data types checked before execution.
2> dynamic - data types are checked during execution.
Python is an Interpreted language, executes each statement line by line thus type checking is done
on the fly, during execution. Hence, Python is a Dynamically Typed language.

//
Interpreted language:
An Interpreted language executes its statements line by line. language such as Python, Javascript, 
R, PHP, and Ruby are prime examples of interpreted languages. 
Programs written in an interpreted language runs directly from the source code, with no intermediatary 
compilation step.

//
PEP 8
Python Enhancement Proposal is an official design document providing information to the python community,
or describing a new feature for Python or its processes.

//
Scope in Python
Every object in python fucntions within a scope 
A scope is block of code where an object in python remains relevant.

//Common built in data types
None type -> represents NULL values in Python.
Numeric types -> integers, float-point numbers and complex (boolens are sub-type of integers)
Sequence types -> list(mutable), tuple(immutable), range(immutable), str(immutable).
Mapping types -> dict (mutable), stores comma-separated list of key:value pairs.
Set types -> set(mutable unordered collection of distinct hashable objects), frozenset(same as set, but immutable),
Modules 

//
pass keyword:
the pass keyword represents a null operation in python. it is generally used for the purpose of 
filling up empty blocks of code which may execute lduring runtime but has yet to be written.

Sometimes in the parent class we have to declare a function with empty body and child
class responsible to provide proper implementation. Such type of empty body we can
define by using pass keyword. (It is something like abstract method in java)
Eg:
def m1(): pass

//
self
self is used to represnt the instance of the class. with this, you can access the attributes and
methods of the class in python.
self is not keyword in pyhthon.

//_init_
it is a contructor method in python and is automatically called to allocate memory when a new object/instance
is created. 
all classes have a _init_ method associated with them. it helps in distinguishing methods and attributes
of a class from loacl variables.

//docstring
Documentation string or docstring is a multiline string used to document a specific code segment.
The docstring should describe what the function or method does.

//slicing 
as the name suggests, slicing is taking parts of.
syntax -> [start:stop:step]
ex:x= [1,2,3,4,5,6,7,8,9,10]
print (x[1::2]) //2,4,6,8,10

//pyhthon script 
script file must begin with 
#!/usr/bin/env/python 

//Arrays vs List in python
1> Arrays contains homogeneous(same data types) elements, but lists contains heterogeneous(different data types)
2> Arrays consumes less memmory, but lists consumes more memory.

//memory management in Python
Memory management in Python is handled by the Python Memory Manager.
The Memory allocated by the manager is form of Private Heap psace dedicated to Python.
All python objects are stored in this heap and being private, it is in accessible.

//
Returning multiple values from a function
In other languages like C,C++ and Java, function can return atmost one value. But in
Python, a function can return any number of values.
def sum_sub(a,b):
  sum=a+b
  sub=a-b
 return sum,sub
x,y=sum_sub(100,50)

//
types of arguments
1. positional arguments
ex:
def sub(a,b):
print(a-b)
sub(100,200)
sub(200,100)

2. keyword arguments
ex:
def wish(name,msg):
    print("Hello",name,msg)
wish(name="Durga",msg="Good Morning")
wish(msg="Good Morning",name="Durga")

Here the order of arguments is not important but number of arguments must be matched
We can use both positional and keyword arguments simultaneously. But first we have to
take positional arguments and then keyword arguments,otherwise we will get
syntaxerror.

3. default arguments
Sometimes we can provide default values for our positional arguments.
def wish(name="Guest"):
    print("Hello",name,"Good Morning")
wish("Durga")  #Hello Durga Good Morning
wish()         #Hello Guest Good Morning

SyntaxError: non-default argument follows default argument

4. Variable length arguments

Sometimes we can pass variable number of arguments to our function,such type of
arguments are called variable length arguments.
def sum(*n):
    total=0
    for n1 in n:
    total=total+n1
    print("The Sum=",total)
sum()            #0
sum(10)          #10
sum(10,20)       #30
sum(10,20,30,40) #100

//
Note: Function vs Module vs Library:
1. A group of lines with some name is called a function
2. A group of functions saved to a file , is called Module
3. A group of Modules is nothing but Library

//
anonymous functions or lambda functions
Sometimes we can declare a function without any name,such type of nameless functions
are called anonymous functions or lambda functions.
The main purpose of anonymous function is just for instant use(i.e for one time usage)

Ex:
s=lambda n:n*n
print("The Square of 4 is :",s(4))
print("The Square of 5 is :",s(5))

s=lambda a,b:a+b  // to add two numbers
s=lambda a,b:a if a>b else b //to find the biggest in two numbers

//
Garbage collection
1. the process of automatic deletion of unwanted or unused objects 
to free the memory is called garbage collection in Python.
2. The main aim of garbage collection in Python is to reduce memory leaks

//
It is a string’s function that converts all uppercase characters into lowercase and vice versa. It is used to alter the existing case of the string. This method creates a copy of the string which contains all the characters in the swap case. For Example:

string = "GeeksforGeeks"
string.swapcase() ---> "gEEKSFORgEEKS"

//
Is Indentation Required in Python?
Yes, indentation is required in Python. A Python interpreter can be informed that a group of statements belongs 
to a specific block of code by using Python indentation. Indentations make the code easy to read for developers
in all programming languages but in Python,
it is very important to indent the code in a specific order.

//
How is memory management done in Python?
Python uses its private heap space to manage the memory. Basically, all the objects and data structures are stored
in the private heap space. Even the programmer can not access this private space as the interpreter takes care of
this space. Python also has an inbuilt garbage collector, which recycles all the unused memory and frees the
memory and makes it available to the heap space.

39. How to delete a file using Python?
We can delete a file using Python by following approaches:

os.remove()
os.unlink()

//
What is PIP?
PIP is an acronym for Python Installer Package which provides a seamless interface to install various
Python modules. It is a command-line tool that can search for packages over the internet and install them 
without any user interaction.

//
What are Pickling and Unpickling?
The Pickle module accepts any Python object and converts it into a string representation and dumps it into a file 
by using the dump function, this process is called pickling. While the process of retrieving original Python objects
from the stored string representation is called unpickling.

//
What is __init__() in Python?
Equivalent to constructors in OOP terminology, __init__ is a reserved method in Python classes.
The __init__ method is called automatically whenever a new object is initiated. This method allocates memory 
to the new object as soon as it is created. This method can also be used to initialize variables.

//
From version 3.10 upward, Python has implemented a switch case feature called “structural pattern matching”. 
You can implement this feature with the match and case keywords. Note that the underscore symbol is what you use
to define a default case for the switch statement in Python.

Note: Before Python 3.10 Python doesn’t support match Statements

//
In today’s world, when technology plays an increasingly vital part in all aspects of our lives, it’s critical that
we choose a programming language that can efficiently address real-world problems. Python is one such programming
language. Python’s popularity has skyrocketed in recent years, thanks to its use in a wide range of industries
such as software engineering, machine learning, and data science, among others. The multitude of libraries that 
Python has to offer is the reason for its popularity. A lot of budding talents of today are being attracted to
Python as their primary choice of programming language because of this reason and therefore, through this article
, we would like to impart knowledge to our readers about the most famous Python Libraries and their usage in today’s
modern world

//
List of Libraries in Python
1. Pandas
2. Numpy (Numerical Python)
3. Keras (neural networks)
4. Tensorflow (Numerical caliculation)
5. Scikit Learn (for machine learning)
6. Eli5 ()
7.Scipy
8.Pytorch
9. lightBGM
10. Theano (mathematical operations libraries)

//
How do I list all libraries in Python?
help("modules")

//
quit() function is used to quit the code.

answer = input ("Enetr your name").lower() //will convert input into lower case, (whatever you give)


'''
a =20
print ('Hello World')
print (id(a))
print (bin(15))
print (oct(56))
print (hex(867))

s=lambda n:n*n
print("The Square of 4 is :",s(4))
print("The Square of 5 is :",s(5))

k = lambda n:n*n*n
print("cube of 4 is :",k(4))






