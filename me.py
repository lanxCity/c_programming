'''
roman_to_int = {
    'I': 1, 'V': 5,
    'X': 10, 'L': 50,
    'C': 100, 'D': 500,
    'M': 1000  
}

user_input = 'MMDCCVII'
input_valid = True
input_len = len(user_input)
total = 0
next_is_removed = False

for i in user_input:
    if i not in roman_to_int:
        input_valid = False
        break

if input_valid:
    for i in range(len(user_input)):
        if user_input:
            if next_is_removed:
                next_is_removed = False
                continue

            curr = user_input[i]
        
            if ((i + 1) < input_len):
                next = user_input[i + 1]
                if roman_to_int[curr] >= roman_to_int[next]:
                    total += roman_to_int[curr]
                else:
                    total += (roman_to_int[next] - roman_to_int[curr])
                    next_is_removed = True
                
            else:
                total += roman_to_int[curr]

if input_valid:
    print(total)
else:
    print("Invalid!!!")



my_num = [11, 22, 32, 84, 15]

n = 4

count = 0


try:
    for i in range(n):
        print(my_num[i], end=", ")
        count += 1
except IndexError:
    pass

print()
return 
    
'''
me = []

me.insert(0, 12)
me.insert(0, 6)
me.insert(0, 10)

total = 1
for i in range(len(me) - 1):
    total *= me[i]

print(me, total)
















