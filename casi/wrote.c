static int	flush(char *buffer, size_t *len)
{
	int	wrote;

	wrote = write(1, buffer, *len);
	buffer[0] = '\0';
	*len = 0;
	return (wrote);
}

void	print_n_char(char c, int n, int sup_zero)
{
	int	i;

	i = 0;
	while (i < n - sup_zero)
	{
		write_buf(&c, 1);
		i++;
	}
	i = 0;
	while (i < sup_zero)
	{
		write_buf("0", 1);
		i++;
	}


void	print_u(unsigned int u, t_flags *flags)
{
	int		i;
	size_t	len;

	if (!u && flags->dot == 0)
	{
		print_n_char(' ', flags->size, 0);
		return ;
	}
	len = ui_len(u, 10);
	reg_dot(flags, len);
	i = 0;
	print_before(flags, len);
	print_ui_base(u, BASE_10);
	if (flags->minus)
		print_n_char(' ', flags->size - flags->dot, 0);
}
