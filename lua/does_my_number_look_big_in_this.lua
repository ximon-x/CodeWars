local solution = {}

function solution.narcissistic(value)
    value = tostring(value)
    local answer = 0

    for c in value:gmatch "." do
        answer = answer + (tonumber(c) ^ string.len(value))
    end

    return (answer == tonumber(value))
end

return solution
