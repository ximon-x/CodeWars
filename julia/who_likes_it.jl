module Kata
export likes

function likes(names::Vector{String})::String
    if (length(names) == 0)
        return "no one likes this"

    elseif (length(names) == 1)
        return "$(names[1]) likes this"

    elseif (length(names) == 2)
        return "$(names[1]) and $(names[2]) like this"

    elseif (length(names) == 3)
        return "$(names[1]), $(names[2]) and $(names[3]) like this"

    else
        return "$(names[1]), $(names[2]) and $(length(names) - 2) others like this"
    end
end
println(likes(["Peter", "Paul", "Parrot"]))
end

