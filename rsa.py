from math import gcd, fmod
# initialize random primes
p = 3
q = 7
n = p*q
# find public key
e = 2
phi = (p-1)*(q-1)
while (e < phi):
    if gcd(e, phi)==1:
            break
    else:
        e+=1
# Private key (d stands for decrypt)
# d*e = 1 + k * totient
k = 2
d = (1 + (k*phi))/e
# Message to be encrypted
msg = int(input("Enter number to encrypt: "))
print(f"Message data = {msg}")
# Encryption c = (msg ^ e) % n
c = pow(msg, e)
c = fmod(c, n)
print(f"\nEncrypted data = {c}");
# Decryption m = (c ^ d) % n
m = pow(c, d)
m = fmod(m, n)
print(f"\nOriginal Message Sent = {m}")
