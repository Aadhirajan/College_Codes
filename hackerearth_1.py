def min_len():
    flag=False
    start=0
    end=0
    leng=int(input())
    string1=input().strip()
    string2=input().strip()
    str_arr1=string1.split(" ")
    int_arr1=list(map(int,str_arr1))
    str_arr2=string2.split(" ")
    int_arr2=list(map(int,str_arr2))
    for i in range(leng):
        if int_arr1[i]!=int_arr2[i]:
            if flag!=True:
                start=i
                flag=True
            end=i
    if start >= end:
        return 0
    new_arr1=int_arr1[start:end+1]
    new_arr2=int_arr2[start:end+1]
    new_arr1.sort()
    new_arr2.sort()
    if new_arr1 == new_arr2:
        return len(new_arr1)
#Main
test_case=int(input())
for i in range(test_case):
    result=min_len()
    print(result)
            
