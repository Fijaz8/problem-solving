def count_digit(num):
    val = num
    count=0
    #looping til its less than 0

    while(val>0):
        #counting the digit
        count+=1
        #cutting the last digit
        val=val//10

    print("the count in the digit is:",count)


count_digit(456132)

