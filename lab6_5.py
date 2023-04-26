list1=[1,2,3,4]
list2=[3,4,5,6]
def function1(list1,list2):
    list3 = []
    list1.extend(list2)
    for x in list1:
        if(list1.count(x)>1 and list3.__contains__(x)==False):
            list3.append(x)
    return list3

print(function1(list1,list2))

list=["mom","nun","car","pencil","madam","door"]
def function2(list):
    plist=[]
    for x in list:
        if(x==x[::-1]):
            plist.append(x)
    return plist

print(function2(list))

primelist=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
def function3(primelist):
    newlist=[]
    length=len(primelist)
    prime = [True for i in range(length + 1)]
    p = 2
    while (p * p <= length):
        if (prime[p] == True):
            for i in range(p * p, length + 1, p):
                prime[i] = False
        p += 1
    for p in range(2, length + 1):
        if prime[p]:
            newlist.append(p)
    return newlist

print(function3(primelist))

word="cinema"
word_list=["car","iceman","pencil","door","nemaci","macine"]
def anagrams(word,word_list):
    wList=[]
    wList2 = []
    outputList=[]
    for x in word:
        wList.append(x)
    wList.sort()
    for x in word_list:
        for y in x:
            wList2.append(y)
        wList2.sort()
        if(wList==wList2):
            outputList.append(x)
        wList2=[]
    return outputList

print(anagrams(word,word_list))