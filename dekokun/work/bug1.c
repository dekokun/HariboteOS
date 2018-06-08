void api_putchar(int c);
void api_end(void);

void HariMain(void)
{
	char a[100];
	a[10] = 'A';		/* これはもちろんいい */
	api_putchar(a[10]);
	a[102] = 'B';		/* これはまずいよね */
	api_putchar(a[102]);
    char b = 1/0;
	api_putchar(b);
	api_end();
}
