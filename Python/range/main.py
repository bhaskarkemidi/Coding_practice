'''
1. range Data Type represents a sequence of numbers.
2. The elements present in range Data type are not modifiable. i.e range Data type is
  immutable.

'''
#r = range (0,10)
for i in range(0,10) : print (i)

r = range (0,10)
for i in r : print (i)

k = range (10, 20, 2)
for i in k: print (i)

#r[0] = 100 #error