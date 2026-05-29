#Write a generator function that generates the first 10 even numbers.
# Generator function to generate first 10 even numbers

def even_numbers():
    
    count = 0

    for i in range (1,25):
        if i % 2 == 0:
            yield i
            count += 1


            if count == 10:
                break

for even in even_numbers():
    print (even)
