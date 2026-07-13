m1=[[2,2],[2,2]]
m2=[[1,2],[3,4]]
add=[[0,0],[0,0]]
sub=[[0,0],[0,0]]
tr=[[0,0],[0,0]]
for i in range(len(m1)):
    for j in range(len(m1[0])):
        add[i][j]= m1[i][j] + m2[i][j]
print(add)
for i in range(len(m1)):
    for j in range(len(m1[0])):
        sub[i][j] = m1[i][j] - m2[i][j]
print(sub)
for i in range(len(m1[0])):
    for j in range(len(m1)):
        tr[i][j]=m1[j][i]
print(tr)
m3=[[0,0],[0,0]]
for i in range(len(m1)):
    for j in range(len(m2[0])):
        for k in range(len(m2)):
            m3[i][j]+=m1[i][k]* m2[k][j]
print(m3)
if (tr==m1):
    print("transpose")
else:
    print("not transpose")