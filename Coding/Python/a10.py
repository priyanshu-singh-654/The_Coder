username = input("enter your username : ")
password = input("enter the password : ")

if (username == "admin" and password == "pass"):
    print("you are successfully logged inn")
elif (username != "admin"):
    print("the username you entered is not matching with the details .. please enter the correct username")
else:
    print("the password you entered is wrong")