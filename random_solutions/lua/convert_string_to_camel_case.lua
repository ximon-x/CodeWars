return function(str)
	local result = ""

	if str:len() == 0 then
		return result
	end

	local flag = false

	for c in str:gmatch(".") do
		if c == "-" or c == "_" then
			flag = true
		elseif flag == true then
			result = result .. string.upper(c)
			flag = false
		else
			result = result .. c
		end
	end

	return result
end
