/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:08:48 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/08 22:42:59 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// C02
// ex00 copy string 
char *ft_strcpy(char *dest, char *src);
//ex01

//ex02
int	ft_str_is_alpha(char *str);



//ex07
char	*ft_strupcase(char *str);
//ex08
int main ()
{
	{
		char str1[] = {};
		char str2[] = "2string";
		char str3[] = "3string";
		ft_strcpy(str3, str1);
		printf("%s // %s\n", str3, str1);
		ft_strcpy(str1, str2);
		printf("%s // \n", str1);
		return 0;
	}
//ex01 strncpy 

	{	
		char str1[] = "123456";
		char str2[] = "AAAAAA";

		ft_strncpy(str1, str2, 4);
		printf("%s\n", str1);
		return (0);

 //ex02 if its alphabetic
	{
		char a[] = "1235456789";
		char b[] = "     ";
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha(a));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha(b));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_alpha("AAAAAA"));
	}
//ex03
	
	{
			char a[] = "1235456789";
			printf("-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric(a));
			printf("-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("1254478785"));
			printf("-> 1 true -> 0 false = [ %d ]\n", ft_str_is_numeric("ndk1jsk"));
			return (0);
	}

}
//ex04
{
				char a[] = "1235456789";
				char b[] = "andreiii";
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(a));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(b));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("AAAAAA"));
	}
//ex05

//ex06
{
		char a[] = "1235456789";
		char b[] = "     ";
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable(a));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable(b));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("125447AS8█85"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_printable("AAAAAA"));
//ex07
int main()
{
			char a[] = "AAAAmmmmm";
			char b[] = "bbbbbbbbb";
			printf("Original String[ %s ]\n", a);
			printf("Original String[ %s ]\n", b);
			printf("With strupcase [ %s ]\n", ft_strupcase(a));
			printf("With strupcase [ %s ]\n", ft_strupcase(b));
			return(0);
}

}
//ex08
{
			char a[] = "AAAAmmmmm";
			char b[] = "bbbbbbbbb";
			printf("Original String[ %s ]\n", a);
			printf("Original String[ %s ]\n", b);
			printf("With strupcase [ %s ]\n", ft_strlowcase(a));
			printf("With strupcase [ %s ]\n", ft_strlowcase(b));
			return(0);
}
//ex09
{
		char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		printf("%s\n", ft_strcapitalize(a));
}	
