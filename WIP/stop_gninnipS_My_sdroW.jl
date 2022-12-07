module Solution
export spinwords

function spinwords(s::String)
    words = Base::split(s)
    result = ""

    for word in words
        if length(word) >= 5
            result = string(result, reverse(word), " ")

        else
            result = string(result, word, " ")
        end

    end

    return result[:length(result)]
end
end