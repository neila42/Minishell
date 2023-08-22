/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Probook <Probook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:10:31 by nmuminov          #+#    #+#             */
/*   Updated: 2023/08/21 14:19:09 by Probook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_pwd(void)
{
	char	*cwd;

	cwd = malloc(PATH_MAX);
	if (cwd == NULL)
		return (NULL);
	getcwd(cwd, PATH_MAX);
	printf("%s\n", cwd);
	free(cwd);
	return (0);
}

// int main()
// {
//     ft_pwd();
//     return 0;
// }