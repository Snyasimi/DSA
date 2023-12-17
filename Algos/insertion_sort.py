
arr = [20,5,14,21,7,9,2,25]

for i in range(len(arr)):

        temp = arr[i]

        j = i - 1

        while j>= 0 and arr[j] > temp :

            arr[j+1] = arr[j]
            j-=1

        arr[j+1] = temp 

for l in arr:
    print(l)

