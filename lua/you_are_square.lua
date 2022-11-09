local solution = {}

function solution.issquare(n)
    local result = false
	
	local sqrt = n ^ 0.5

	if sqrt == math.floor(sqrt)
	then 
		result = true
	end

	return result
end

return solution
