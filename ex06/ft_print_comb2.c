
// ^^^^ где заголовочный файл? Программа не скомпилировалась 
void ft_putchar(char c) {
    write(1, &c, 1);
}

// вывод функции не соответствует примеру из задания. У тебя последние две цифры 98 89 и 98 99, а в примере 97 99 и 98 99

void ft_print_comb(void) {
//   ft_printf_comb2 - функция названа неверно, ошибка в вызове.     
    char one = '0';
    char two = '0';
    char one_1 = '0';
    char two_2 = '1';
    while(one<='9') {
        while(two<='9') {
            while(one_1<='9') {
                two_2=two+1;
                while(two_2<='9') {
                    ft_putchar(one);
                    ft_putchar(two);
                    ft_putchar(' ');
                    ft_putchar(one_1);
                    ft_putchar(two_2);
                    if(one=='9' && two=='8' && one_1=='9' && two_2=='9') {
                        return ;
                    }
                    ft_putchar(',');
                    ft_putchar(' ');
                    two_2++;
                }
                one_1++;
            }
            one_1=one;
            two++;
        }
        two=one;
        one++;
    }
}