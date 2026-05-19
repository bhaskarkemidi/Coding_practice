
#Python interview questions

#Palindrome or not
def Pal(st):
    if st == st[::-1]:
        print("palindrome")
    else:
        print("Not")
Pal("racecars")

#sum of the numbers of a given numbers
#method1
def sum_of_num(n):
    rem = 0 
    summ = 0 
    while(n > 0):
        rem = n%10
        summ +=rem
        n//=10
    print(summ)
num = 12346
sum_of_num(num)

#method2
def sum_of_num(st):
    result = 0
    for i in st:
        result+=int(i)
    print(result)
num = "12346"
sum_of_num(num)

#Print odd and even numbers in a given list : lst = [1,2,3,4,5,6]
def fun_even_odd(lst):
    even = []
    odd = []
    for i in lst:
        if i%2 == 0:
            even.append(i)
        else:
            odd.append(i)
    print(even)
    print(odd)
    
lst = [1,2,3,4,5,6]
fun_even_odd(lst)

#read a file and print out number of lines in it

# with open('filename.txt') as fp:
# 	print(len(fp.readlines()))
#remove empty list in list = [5,6,[],3,6,[],[],9]
def remove_empty_list(ls):
    new_ls = []
    for i in ls:
        if i:
            new_ls.append(i)
    return new_ls
input_list = [5,6,[],3,6,[],[],9]
print (input_list)
print(remove_empty_list(input_list))

#even or odd using lambda function
list1 = [1,2,3,4,5,6]
even = list(filter(lambda x:x%2 == 0, list1))
print (even)
odd = list(filter(lambda x:x%2 != 0,list1))
print (odd)

#accessing dict elements
dic = {"1":"Bhaskar","2":"Raju","3":"Mahesh"}
dic["3"]="Reyansh"
print(dic['3'])

#The set is an unordered collection of data types that is iterable, mutable and has no duplicate elements.
#A dictionary in Python is an unordered collection of data values, used to store data values like a map.

#swapping two numbers
num1 = 20
num2 = 30
num1, num2 = num2, num1
print (num1)
print (num2)

#max in two numbers 
a = 30
b = 20
min = a if a < b else b
max = a if a > b else b
print ("min:",min,"max:",max)

def maximum(a, b):
     
    if a >= b:
        return a
    else:
        return b
     
# Driver code
a = 2
b = 4
print(maximum(a, b))

#factorial of a number

def factorial(n):
    return 1 if (n == 1 or n == 0) else n*factorial(n-1)
    
n = 5
print("factorial: ",factorial(n))

#Armstrong number
n = 123
s = n
b = len(str(n))
sum1 = 0 
while n != 0 :
    r = n % 10
    sum1 = sum1+(r**b)
    n = n//10
if s == sum1:
    print ("the given number ",s,"is armstrong")
else:
    print ("Not armstrong")
    
#prime numbers between range
# Python program to print all
# prime number in an interval

def prime(x, y):
	prime_list = []
	for i in range(x, y):
		if i == 0 or i == 1:
			continue
		else:
			for j in range(2, int(i/2)+1):
				if i % j == 0:
					break
			else:
				prime_list.append(i)
	return prime_list

# Driver program
starting_range = 20
ending_range = 100
lst = prime(starting_range, ending_range)
if len(lst) == 0:
	print("There are no prime numbers in this range")
else:
	print("The prime numbers in this range are: ", lst)






