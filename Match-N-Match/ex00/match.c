/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:47:28 by mhally            #+#    #+#             */
/*   Updated: 2018/09/01 18:47:31 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int s2_only_star(char *s2)
{
	while (s1[i] != '\0')
	{
		if (s2[j] != '*')
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int	match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j] && (s2[j] != '*'))
		{
			i++;
			j++;
		}
		else if (s2[j] == '*')
		{
			while (s2[j] == '*')
			{
				j++
			}
			while (s1[i] == s2[j] && s1[i + 1] == s2[j])
			{
				i++;
			}
			while (s1[i] != s2[j])
			{
				if (s1[i] == '\0')
				{
					return (0);
				}
				i++;
			}

		}
		else if (s1[i] != s2[j])
		{
			return (0);
		}
	}
	return (1);
}

int main (void)
{
	char str1[] = "";
	char str2[] = "";
	match(str1, str2);
	return (0);
}