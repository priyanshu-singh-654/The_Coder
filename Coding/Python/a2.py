# Input from user
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Swapping using a temporary variable
temp = a
a = b
b = temp

# Output after swapping
print("After swapping:")
print("First number =", a)
print("Second number =", b)
