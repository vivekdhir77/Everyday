def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
 
# Function to return LCM of two numbers
def lcm(a,b):
    return int((a / gcd(a,b))* b)
 
# Driver program to test above function


print("The L.C.M. is", lcm(2, 8))