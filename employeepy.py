class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
class employee(person):
    def __init__(self,name,age,empid,dep):
        super().__init__(name,age)
        self.empid=empid
        self.dep=dep
class manager(employee):
    def __init__(self,name,age,empid,dep,teamsize):
        super().__init__(name,age,empid,dep)
        self.ts=teamsize
    def display(self):
        print(f"NAME={self.name},AGE={self.age},EMP ID={self.empid}, DEPARTMENT={self.dep},TEAM SIZE={self.ts}")
m=manager('ym',18,1313,'cs',5)
m.display()
