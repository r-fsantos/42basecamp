char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_addr_start;
	unsigned int	byte_copied;

	byte_copied = 0;
	dest_addr_start = dest;
	while (byte_copied < n && *src != '\0')
	{
		*dest++ = *src++;
		byte_copied++;
	}
	while (byte_copied < n)
	{
		*dest++ = '\0';
		byte_copied++;
	}
	return (dest_addr_start);
}
