def descending_order(num):
    str_num = str(num)

    letters = list(str_num)
    letters.sort(reverse=True)

    answer = ""
    for letter in letters:
        answer += letter

    return int(answer)
