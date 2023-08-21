def is_palindrome(number):
    return str(number) == str(number)[::-1]


def largest_palindrome_product():
    largest_palindrome = 0
    factors = (0, 0)

    for num1 in range(999, 99, -1):
        for num2 in range(num1, 99, -1):
            product = num1 * num2
            if piroduct > largest_palindrome and is_palindrome(product):
                largest_palindrome = product
                factors = (num1, num2)

    return largest_palindrome, factors


result, factors = largest_palindrome_product()
print("The largest palindrome product of two 3-digit numbers is:", result)
print("The two numbers that create this palindrome are:", factors)
