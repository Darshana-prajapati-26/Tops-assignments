#Write a Python program that uses a custom iterator to iterate over a list of integers.

# Custom iterator class
class MyIterator:
    def __init__(self, data):
        self.data = data
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.data):
            value = self.data[self.index]
            self.index += 1
            return value
        else:
            raise StopIteration  # No more elements

# Using the custom iterator
numbers = [10, 20, 30, 40, 50]
iterator = MyIterator(numbers)

for num in iterator:
    print(num)
