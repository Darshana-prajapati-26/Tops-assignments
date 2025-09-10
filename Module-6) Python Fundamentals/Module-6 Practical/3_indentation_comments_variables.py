# q3 Write a Python program that demonstrates the correct use of indentation, comments, 
# and variables following PEP 8 guidelines.

# python 3_indentation_comments_variables.py
def user():
    """
    Function to greet the user.
    Shows proper indentation, comments, and variables as per PEP 8.
    """

    # Variable declaration (snake_case naming convention)
    user_name = "Darshana"
    user_age = 20  

    # Proper indentation (4 spaces)
    if user_age >= 18:
        print(f"Hello {user_name}, you are an adult.")
    else:
        print(f"Hello {user_name}, you are a minor.")


# Calling the function
user()


