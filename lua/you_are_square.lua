local solution = {}

function solution.issquare(n)
    local result = false
    for i = 0, n, 1 do
        if i * i == n
        then
            result = true
        end
    end

    return result
end

return solution
