bool XO(const std::string& str) 
{
	int x_count = 0;
	int o_count = 0;

	for (auto c : str)
	{
		if (c == 'x' || c == 'X') 
		{
      std::cout << c << std::endl;
			x_count++;
		}
		else if (c == 'o' || c == 'O')
		{
			o_count++;
		}
	}
	
	if ((x_count == o_count) || (x_count == 0 && o_count == 0)) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
