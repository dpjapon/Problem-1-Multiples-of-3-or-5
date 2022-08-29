def multiples(val):
    sum = 0
    for i in range(1,val):
        if (i%3 == 0) or (i%5 == 0):
            sum += i
            print(i)
    return sum
print(multiples(1000))
