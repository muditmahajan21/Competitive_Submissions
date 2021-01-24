try:
    test = int(input())
    for _ in range(test):
        n, k = [int(x) for x in input().split()]
        bin_str = input()
        while k > 1  and '0' in bin_str:
            arr_1 = []
            for item in range(len(bin_str)):
                if bin_str[item] == '1':
                    arr_1.append(item)
            max_diff = 0 
            first_index = 0
            last_index = 0
            diff = 0
            for index in range(len(arr_1) - 1):
                diff = arr_1[index + 1] - arr_1[index]
                if diff > max_diff:
                    max_diff = diff
                    first_index = arr_1[index]
                    last_index = arr_1[index + 1]
            bin_str = bin_str[0:first_index + 1:] + bin_str[last_index::]
            k -= 2
        count = 0
        for item in bin_str:
            if item == '0':
                count += 1
        print(count)
except:
    pass