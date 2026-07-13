filename="studentym.txt"
while(1):
    print("1.enter 2.display 3.search 4.exit")
    i=int(input("enter choice="))
    if i==1:
        roll=int(input("ENTER ROLL="))
        name=input("ENTER name=")
        marks=int(input("ENTER ROLmarksL="))
        with open(filename,'w') as f:
            f.write(f"{roll},{name},{marks}")
    elif i==2:
        with open(filename,'r') as f:
            data=f.readlines()
            if not data:
                print("no data found")
            else:
                for line in data:
                    roll,name,marks=line.strip().split(",")
                    print(f"{roll},{name},{marks}")
    elif i==3 :
        s=input("enter roll to serach=")
        with open(filename,'r') as f:
            for line in data:
                roll,name,marks=line.strip().split(",")  
                if roll==s:
                    print("found")
                    print(f"{roll},{name},{marks}")
                else:
                    print("not found")
    elif i==4:
        break
                
