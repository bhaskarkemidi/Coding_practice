#bytes data type represens a group of byte numbers just like an array.
x = [10,20,30,40]
b = bytes(x)
print (type(b)) # <class 'bytes'>
print ((b[-1]))
for i in b: print(i)
#b[0]=100
# 4) TypeError: 'bytes' object does not support item assignment

c = bytearray(x)
c[0] = 100  #assignment allowed with bytearray
print(c[0])
#bytes must in range (0,256)