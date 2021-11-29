import string
letters= string.ascii_letters
map = {}
plain_txt = input("Enter the plain text: ")
key = int(input("Enter the shift key: "))
total=len(letters)
for i in range(total):
	map[letters[i]] = letters[(i+key)%total]
cipher=""
for char in plain_txt:
	if char in letters:
		cipher+=map[char]
	else:
		cipher+=char
print("Cipher Text is: ",cipher)

