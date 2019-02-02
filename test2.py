f=open("Request.txt","r")

res=dict()
out=[]

for a in f :
    b,c=a.split(" Bob ")
    if(b in out):
        continue #在实际中应该一探测到有问题就停止该用户的访问（这里也确实如此），但在这里先假定无停止用户访问，所以用这个判定做一次拦截。防止出现一人出现多次。
    if(b in res):
        res[b]+=int(c)
    else:
        res[b]=int(c)
    if(res[b]>=1500):
        out.append(b)

f.close()
f = open("output.txt","w")
i=len(out)
f.write(str(i)+"\n")
for i in out:
    f.write(i+"\n")
f.close()