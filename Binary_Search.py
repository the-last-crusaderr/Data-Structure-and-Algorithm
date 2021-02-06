arr = []
ln = int(input("How many elements do you want?:"))

for i in range(ln):
    arr.append(int(input("Enter Elements:")))


def binary_search(arr, element):
    low = 0
    high = len(arr) - 1

    while low < high:

        mid = int((low + high) / 2)
        if arr[mid] == element:
            return mid
        elif arr[mid] > element:
            high = mid - 1
        else:
            low = mid + 1


element = int(input("Which element do you want to search:"))
print(binary_search(arr, element))
