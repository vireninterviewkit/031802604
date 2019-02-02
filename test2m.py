f=open("Request.txt","r")
o=open("output.txt","w")
for i in f :
    o.write(i)

f.close()
o.close()