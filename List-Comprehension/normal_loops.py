# The lambda extracted to its own function
def is_prime(num):
    # List comprehension makes sense here, would get long otherwise
	return all([num % factor != 0 for factor in range(2, num)])	

# Outer list
for i in range(0, 10):
    row = ""
    # Inner list
    for j in range(1, 11):
        # Ternary converted to normal if
        if is_prime(10*i+j):
            row += "{:2d} ".format(10*i+j)
        else:
            row += "XX "
    print(row)