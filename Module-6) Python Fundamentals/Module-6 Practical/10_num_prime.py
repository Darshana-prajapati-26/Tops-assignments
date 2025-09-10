#Practical Example 6: Check if a Number is Prime using if_else

# Program to check if a number is prime

num = int(input("Enter a number: "))

if num > 1:  # prime numbers are greater than 1
    is_prime = True
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print(num, "is a Prime Number")
    else:
        print(num, "is NOT a Prime Number")
else:
    print(num, "is NOT a Prime Number")
