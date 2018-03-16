/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:10:37 by egreen            #+#    #+#             */
/*   Updated: 2017/10/27 16:29:24 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# define TET1 "####"
# define TET2 "#...#...#...#"
# define TET3 "##..##"
# define TET4 "##...##"
# define TET5 "#..##..#"
# define TET6 "#...##...#"
# define TET7 "##.##"
# define TET8 "###..#"
# define TET9 "##...#...#"
# define TET10 "#..##...#"
# define TET11 "#...##..#"
# define TET12 "#..###"
# define TET13 "###.#"
# define TET14 "###...#"
# define TET15 "#...#...##"
# define TET16 "#...#..##"
# define TET17 "#...###"
# define TET18 "#.###"
# define TET19 ""
# define TET20 "################"
# define TET21 "##..#...#"
# define ALPH "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define MINGRID 2
# define MAXTETS 26

typedef struct	s_tet_frag
{
	int			count;
	int			size;
	char		**array;
}				t_tet_frag;
int				validswitch(char *buf, t_tet_frag *tetromino);
int				ft_ismod(int a, int b);
char			*ft_remove_newline(char *str);
char			**ft_split(char *str);
char			*ft_strndup(const char *src, size_t n);
char			*ft_trimdots(char const *s);
int				dothashthing(char *str);
int				ft_checktets(char *s);
char			**new_grid(int size);
void			print_grid(char **grid_to_print, int size);
int				ft_checktet1(char **g, int *yx);
int				ft_placetet1(char **g, int *yx, char c);
void			ft_cleartet1(char **g, int x, int y);
int				ft_checktet2(char **g, int *yx);
int				ft_placetet2(char **g, int *yx, char c);
void			ft_cleartet2(char **g, int x, int y);
int				ft_checktet3(char **g, int *yx);
int				ft_placetet3(char **g, int *yx, char c);
void			ft_cleartet3(char **g, int x, int y);
int				ft_checktet4(char **g, int *yx);
int				ft_placetet4(char **g, int *yx, char c);
void			ft_cleartet4(char **g, int x, int y);
int				ft_checktet5(char **g, int *yx);
int				ft_placetet5(char **g, int *yx, char c);
void			ft_cleartet5(char **g, int x, int y);
int				ft_checktet6(char **g, int *yx);
int				ft_placetet6(char **g, int *yx, char c);
void			ft_cleartet6(char **g, int x, int y);
int				ft_checktet7(char **g, int *yx);
int				ft_placetet7(char **g, int *yx, char c);
void			ft_cleartet7(char **g, int x, int y);
int				ft_checktet8(char **g, int *yx);
int				ft_placetet8(char **g, int *yx, char c);
void			ft_cleartet8(char **g, int x, int y);
int				ft_checktet9(char **g, int *yx);
int				ft_placetet9(char **g, int *yx, char c);
void			ft_cleartet9(char **g, int x, int y);
int				ft_checktet10(char **g, int *yx);
int				ft_placetet10(char **g, int *yx, char c);
void			ft_cleartet10(char **g, int x, int y);
int				ft_checktet11(char **g, int *yx);
int				ft_placetet11(char **g, int *yx, char c);
void			ft_cleartet11(char **g, int x, int y);
int				ft_checktet12(char **g, int *yx);
int				ft_placetet12(char **g, int *yx, char c);
void			ft_cleartet12(char **g, int x, int y);
int				ft_checktet13(char **g, int *yx);
int				ft_placetet13(char **g, int *yx, char c);
void			ft_cleartet13(char **g, int x, int y);
int				ft_checktet14(char **g, int *yx);
int				ft_placetet14(char **g, int *yx, char c);
void			ft_cleartet14(char **g, int x, int y);
int				ft_checktet15(char **g, int *yx);
int				ft_placetet15(char **g, int *yx, char c);
void			ft_cleartet15(char **g, int x, int y);
int				ft_checktet16(char **g, int *yx);
int				ft_placetet16(char **g, int *yx, char c);
void			ft_cleartet16(char **g, int x, int y);
int				ft_checktet17(char **g, int *yx);
int				ft_placetet17(char **g, int *yx, char c);
void			ft_cleartet17(char **g, int x, int y);
int				ft_checktet18(char **g, int *yx);
int				ft_placetet18(char **g, int *yx, char c);
void			ft_cleartet18(char **g, int x, int y);
int				ft_checktet19(char **g, int *yx);
int				ft_placetet19(char **g, int *yx, char c);
void			ft_cleartet19(char **g, int x, int y);
int				tet_length(char *str);
int				tet_all(char *str, t_tet_frag *tetromino);
int				solver(char **grid, t_tet_frag *tetromino,
				int tetcount, int size);
int				which_tet(char *tet, char **new_g, int *yx, char c);
int				which_tet2(char *tet, char **new_g, int *yx, char c);
int				which_clear_tet(char *tet, char **new_g, int *yx);
int				which_clear_tet2(char *tet, char **new_g, int *yx, int y);
void			free_grid(char **grid, int size);

#endif
