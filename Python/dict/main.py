'''

1. If we want to represent a group of values as key-value pairs then we should go for dict
    data type.
2. Duplicate keys are not allowed but values can be duplicated. If we are trying to insert an
    entry with duplicate key then old value will be replaced with new value.

'''

d = {101:'durga',102:'ravi',103:'shiva'}
print(type (d))

#We can create empty dictionary as follows
d={ }
# We can add key-value pairs as follows
d['a'] = 'apple'
d['b'] = 'banana'
print(d)
#Note: dict is mutable and the order wont be preserved.