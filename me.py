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
        
