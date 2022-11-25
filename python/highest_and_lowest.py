def high_and_low(numbers):
    nums = numbers.split(" ")
    
    for i in range(len(nums)):
        nums[i] = int(nums[i])

    result = str(max(nums)) + " " + str(min(nums))
    return result
