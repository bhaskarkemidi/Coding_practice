'''
1. If we want to represent a group of values without duplicates where order is not important
  then we should go for set Data Type.
1. insertion order is not preserved
2. duplicates are not allowed
3. heterogeneous objects are allowed
4. index concept is not applicable
5. It is mutable collection
6. Growable in nature

'''
s = {100,0,10,200,10,'durga'}
print (type(s))
for i in s : print (i)
s.add (60)
s.add ("bhaskar")
print (s)
s.remove (60)
print (s)
#print ('Hello World')
'''
It is exactly same as set except that it is immutable.
Hence we cannot use add or remove functions.
'''
fs = {0,10,5,4,"mum"}
s = frozenset (fs)
print (type (s))
