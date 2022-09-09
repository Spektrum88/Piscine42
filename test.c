/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amealha- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:40:13 by amealha-          #+#    #+#             */
/*   Updated: 2022/09/09 13:40:17 by amealha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	char a[] = "1235456789";
				char b[] = "andreiii";
				char c[] = {};
		printf("just numbers -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(a));
		printf("lower case` -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(b));
		printf("Empty line -> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase(c));
		printf("uppercase with numbers-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajh125"));
		printf("numbers with caps-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("125447AS8785"));
		printf("special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("#$#@!!@#"));
		printf("uppers with special char-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("jha#$hakh"));
		printf("uppers with caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("ajhaDDDhakh"));
		printf("just caps chars-> 1 true -> 0 false = [ %d ]\n", ft_str_is_lowercase("AAAAAA"));
