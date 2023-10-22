def sortedArray(a: [int], b: [int]) -> [int]:
    # Write your code here
    n=len(a)
    m=len(b)
    i=0
    j=0
    c=set()
    while i<n:
        c.add(a[i])
        i+=1
    while j<m:
        c.add(b[j])
        j+=1
    d=[]
    for i in c:
        d.append(i)
    d.sort()
    return d
