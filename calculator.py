print("Created by akash")
print("1 - Add")
print("2 - Subtract")
print("3 - Multiply")
print("4 - Division")
option = int(input("Choose An Operator : "))
result = 0
if(option in [1, 2, 3, 4]):
    num1 = int(input("Enter First Number : "))
    num2 = int(input("Enter Second Number: "))

    if(option == 1):
        result = num1 + num2
    elif(option == 2):
        result = num1 - num2   
    elif(option == 3):
        result = num1 * num2
    elif(option == 4):
        result = num1 / num2    

else:
    print("Invalid Operation Entered")

print("The Result Of The Operation is {}".format(result)) 
