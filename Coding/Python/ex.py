username = input("Enter the username : ")
password = input("Enter the password : ")

if username == "admin" and  password == "pass":
    print("you are successfully loggedin")

elif username != "admin":
    print("The username is wrong")

else:
    print("The password is wrong")