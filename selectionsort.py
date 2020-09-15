#program using selection sort
a=[2,4,7,11,8,6]
for i in range(0,len(a)-1):
    min=i
    for j in range(i+1,len(a)):
        if(a[j]<a[min]):
            min=j

    temp=a[min]
    a[min]=a[i]
    a[i]=temp

print(a)

