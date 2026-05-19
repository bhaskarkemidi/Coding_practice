'''tuple data type is exactly same as list data type except that it is immutable.i.e we cannot
chage values.
Tuple elements can be represented within parenthesis.
'''
t = (10,20,30,40,50,10)
print (type(t))
print (t)
for i in t : print (i)
t[0]=100 #tuple object does not support item assignment
