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
    