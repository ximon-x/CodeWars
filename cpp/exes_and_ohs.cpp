bool XO(const std::string& str) 
{
	int x_count = 0;
	int o_count = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'x' || str[i] == 'X') 
		{
			x_count++;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			o_count++;
		}
	}
	
	if (x_count == o_count)  
	{
		return true;
	}
	else
	{
		return false;
	}
}
