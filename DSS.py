import hashlib
from cryptography.fernet import Fernet
key = Fernet.generate_key()
obj=Fernet(key)
msg=input("Enter message: ")
ha=hashlib.sha1(msg.encode()).hexdigest()
ha1=obj.encrypt(ha.encode()).decode("utf-8")
print("\nMessage sent is:")
print(msg+ha1)
print("Receiver side\n")
ha2=obj.decrypt(ha1.encode()).decode("utf-8")
print("hash of message is...\n",ha)
print("decryption of appended hash is\n",ha2)
print("hashes are same...?",ha2 in ha)
