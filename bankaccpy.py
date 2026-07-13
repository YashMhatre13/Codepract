class bankaccount:
    def __init__(self,acno,on):
        self.__accno=acno
        self.__bal=1000
        self.__owner=on
    def display(self):
        print("ACCOUNT OWNER=",self.__owner)
        print("ACCOUNT NO=",self.__accno)
        print("BALANCE=",self.__bal)
    def deposit(self):
        amt=int(input("ENTER AMOUNT TO DEPOSIT"))
        self.__bal+=amt
        print("MONEY DEPOSITED")
    def withdraw(self):
        amt=int(input("ENTER AMOUNT TO WITHDRAW="))
        if 1000<self.__bal and self.__bal>amt:
            self.__bal-=amt
            print("MONEY WITHDRAWN")
        else:
            print("INSUFFICIENT BALANCE")
b=bankaccount(1313,"ym")
while(1):
    print("2.DEPOSIT 3.WITHDRAW 4.DISPLAY ACC DETAILS 5.EXIT")
    i=int(input("ENTER CHOICE FROM 2-5:"))
    if i==2:
        b.deposit()
    elif i==3:
        b.withdraw()
    elif i==4:
        b.display()
    elif i==5:
        break
    else:
        print("INVALID INPUT")