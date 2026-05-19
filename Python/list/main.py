'''
1. insertion order is preserved
2. heterogeneous objects are allowed
3. duplicates are allowed
4. Growable in nature
5. values should be enclosed within square brackets

'''
list = [10,10.5,"Bhaskar",True,10]
print(list)
for i in list: print (i)
list.append("nkdfk")
list.remove(10)
for i in list: print (i)
#Note: An ordered, mutable, heterogenous collection of eleemnts is nothing but list, where
#duplicates also allowed.
#list is growable in nature. i.e based on our requirement we can increase or decrease the size.
