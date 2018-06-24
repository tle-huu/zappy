/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pie.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:34:18 by tle-huu-          #+#    #+#             */
/*   Updated: 2018/06/21 06:04:09 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zappy.h"

void	notify_end_incantation(t_player *player, int result)
{
	strcpy(g_server.buff, "pie ");
	strcat(g_server.buff, ft_itoa(player->x));
	strcat(g_server.buff, " ");
	strcat(g_server.buff, ft_itoa(player->y));
	strcat(g_server.buff, " ");
	strcat(g_server.buff, ft_itoa(result));
	strcat(g_server.buff, "\n");
	if (notify_graphics(0) == EXIT_FAILURE)
		error(0, "Send [g: pie]", true);
}
