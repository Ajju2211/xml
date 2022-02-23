import hashlib as ha
s=input("Enter the message: ")
result = ha.sha1(s.encode())
print("Hash of message is: \n ",result)
print("The hexadecimal equivalent of hash in SHA1 is: ",result.hexdigest())
