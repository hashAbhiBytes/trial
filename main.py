import random

def str_xor(secret, key):
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)        
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])

flag_enc = "".join([chr(int(hex_char, 16)) for hex_char in ["6", "6", "6", "6", "9", "7", "7", "7", "6", "3", "6", "6", "6", "9", "0"]])

num = random.choice(range(10,101))

print('If ' + str(num) + ' is in decimal base, what is it in binary base?')

ans = input('Answer: ')

try:
    ans_num = int(ans, base=2)
  
    if ans_num == num:
        flag = str_xor(flag_enc, 'enkidu')
        print('That is correct! Here\'s your flag: ' + flag)
    else:
        print(str(ans_num) + ' and ' + str(num) + ' are not equal.')
  
except ValueError:
    print('That isn\'t a binary number. Binary numbers contain only 1\'s and 0\'s')
