def split_len(seq, key_len):
    return [seq[i:i + key_len] for i in range(0, len(seq), key_len)]
def encode(key, plaintext):
    order = {
        int(val): ind for ind, val in enumerate(key)
    }
    ciphertext = ''
    rows=split_len(plaintext, len(key))
    for index in sorted(order.keys()):
        for part in rows:
            try:
                ciphertext += part[order[index]]
            except IndexError:
                continue
    return ciphertext
text=input("Enter the plain text: ") # hello
key=input("Enter the numeric key: ") #3214
print("Columnar Transposition cipher : ",encode(key, text)) # lehol
