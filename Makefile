##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC		=	gcc

CFLAGS		=

PATH_CONFIG_LIB =	./extern_libs/libconfig-1.7.2/lib/.libs
PATH_CONFIG	=	./extern_libs/libconfig-1.7.2/

LDFLAGS		=	-Wl,--start-group -L ./lib/my_stdc/ -L./lib/llist/ -L $(PATH_CONFIG_LIB) -Wl,-rpath=$(PATH_CONFIG_LIB),--end-group
LDLIBS		=	-l my_stdc -l config -l llist

CPPFLAGS	=	-I./include -I./lib/my_stdc -I$(PATH_CONFIG)lib -Wextra -Wall

GRAPH_FLAG	=	-l c_graph_prog
MATH_FLAG	=	-l m

RM		=	rm -f

SRCS		=	src/main_rpg.c								\
			src/core/launch_graphical_window.c					\
			src/core/window.c							\
			src/core/mouse.c							\
			src/core/destroy_program.c						\
			./src/core/create_program.c						\
			./src/core/particule_mouse.c						\
			src/save_and_load/autosave_main.c					\
			src/save_and_load/load_main.c						\
			src/save_and_load/erase_save.c						\
			./src/save_and_load/my_libconfig_get_var.c				\
			./src/save_and_load/load_inventory.c					\
			./src/save_and_load/practical_libconfig.c				\
			./src/save_and_load/save_inventory.c					\
			src/events/event_main.c							\
			src/events/menu/event_menu_main.c					\
			src/events/pause/event_pause_main.c					\
			src/events/pause/handle_escape_key.c					\
			src/events/char_select/events_char_select.c				\
			src/events/char_select/handle_events_char_select_confirm.c		\
			./src/events/world/event_world_main.c					\
			./src/events/event_debug.c						\
			./src/events/dialogue/dialogue_event_main.c				\
			./src/events/fight/event_fight.c					\
			./src/events/world/event_world_fem_mvmt.c				\
			./src/events/world/is_future_collision.c				\
			./src/events/world/event_world_fem_arrows_mvmt.c			\
			./src/events/world/event_world_male_mvmt.c				\
			./src/events/world/event_world_male_arrows_mvmt.c			\
			./src/events/world/event_how_to_play.c					\
			./src/events/world/detect_anti_spam_mvmt.c				\
			src/menu/menu_main.c							\
			src/menu/create_menu.c							\
			src/menu/create_menu_bg.c						\
			src/menu/create_menu_objs.c						\
			src/menu/destroy_menu.c							\
			src/char_select/char_select_main.c					\
			src/char_select/create_char_select.c					\
			src/char_select/create_char_select_confirm.c				\
			src/char_select/destroy_char_select.c					\
			src/button/button.c							\
			src/button/button_getters.c						\
			src/button/button_set_sound.c						\
			src/button/button_setters.c						\
			src/button/button_center_pos.c						\
			src/button/button_destroy.c						\
			src/button/button_display.c						\
			./src/button/button_try_to_detect_hover.c				\
			./src/button/button_try_to_detect_clicked.c				\
			src/csfml_practical/create_sprite_from_path.c				\
			src/csfml_practical/set_area.c						\
			src/csfml_practical/set_pos.c						\
			src/csfml_practical/text.c						\
			./src/csfml_practical/get_random_color.c				\
			./src/csfml_practical/set_int_rect.c					\
			src/pause/pause_main.c							\
			./src/pause/pause_destroy.c						\
			src/pause/get_functions.c						\
			src/pause/setting_buttons.c						\
			./src/pause/create_pause.c						\
			src/intro/intro_create.c						\
			src/intro/intro_destroy.c						\
			src/intro/intro_launch.c						\
			src/intro/intro_events.c						\
			src/music/music.c							\
			./src/music/destroy_music.c						\
			./src/world/world_main.c						\
			./src/world/display_inventory.c						\
			./src/world/display_character.c						\
			./src/world/create_character.c						\
			./src/world/create_world.c						\
			./src/world/create_character_fem.c					\
			./src/world/create_character_male.c					\
			./src/world/create_location_indicator.c					\
			./src/world/display_location_indicator.c				\
			./src/world/create_surround_hud.c					\
			./src/world/create_inventory.c						\
			./src/world/create_inventory_button.c					\
			./src/world/create_locations.c						\
			./src/world/destroy_world.c						\
			./src/world/display_tile_map.c						\
			./src/world/create_tile_map.c						\
			./src/world/create_map_decoration.c					\
			./src/world/display_map_decoration.c					\
			./src/world/create_earth_decoration.c					\
			./src/world/tex_coord.c							\
			./src/world/display_pnj_chest.c						\
			./src/world/create_spirits.c						\
			./src/world/modif_terrain_events.c					\
			./src/world/create_fire_decoration.c					\
			./src/world/create_water_decoration.c					\
			./src/world/create_air_decoration.c					\
			./src/world/create_background_world.c					\
			./src/world/set_pos_char.c						\
			./src/world/create_dialogues.c						\
			./src/world/create_how_to_play_button.c					\
			./src/world/display_how_to_play.c					\
			./src/world/display_dialogue_pos.c					\
			./src/world/display_pos_match_cond_male.c				\
			./src/world/destroy_how_to_play.c					\
			./src/world/display_location_text.c					\
			./src/world/check_button_x_to_trigger.c					\
			./src/dialogue/to_sprite.c						\
			./src/dialogue/to_texture.c						\
			./src/dialogue/font.c							\
			./src/dialogue/draw_sprite.c						\
			./src/dialogue/dialogue_sub.c						\
			./src/dialogue/dialogue.c						\
			./src/dialogue/call_dialogue_initialisation.c				\
			./src/dialogue/call_dialogue_init_15_to_54.c				\
			./src/dialogue/call_dialogue_13_to_54.c					\
			./src/dialogue/init_set_font_pot.c					\
			./src/dialogue/init_set_font_boss.c					\
			./src/dialogue/init_set_font_boss_sea_wind.c				\
			./src/dialogue/init_set_font_chest_color.c				\
			./src/dialogue/text_story_forest.c					\
			./src/dialogue/text_story_desert.c					\
			./src/dialogue/text_story.c						\
			./src/dialogue/text_story_spirit.c					\
			./src/dialogue/text_story_magus.c					\
			./src/dialogue/init_set_font_sub_10.c					\
			./src/dialogue/init_set_font_sub_4_to_8.c				\
			./src/dialogue/draw_sprite_text_chest.c					\
			./src/dialogue/draw_sprite_text_boss.c					\
			./src/dialogue/draw_sprite_text_men.c					\
			./src/dialogue/draw_sprite_grandpa.c					\
			./src/dialogue/draw_sprite_villager.c					\
			./src/dialogue/draw_sprite_spirit.c					\
			./src/dialogue/draw_sprite_chest.c					\
			./src/dialogue/draw_gugus.c						\
			./src/dialogue/draw_sprite_sub.c					\
			./src/dialogue/set_font_boss.c						\
			./src/dialogue/set_sprite_pos.c						\
			./src/dialogue/init_five.c						\
			./src/dialogue/init_texture_boss_potion.c				\
			./src/dialogue/init_tex_sub.c						\
			./src/fight/battle_mode_source/battle_mode.c				\
			./src/fight/battle_mode_source/to_animation_battle_below_below.c	\
			./src/fight/battle_mode_source/to_animation_battle_below.c		\
			./src/fight/battle_mode_source/to_animation_battle.c			\
			./src/fight/battle_mode_source/to_clock_battle.c			\
			./src/fight/battle_mode_source/to_sprite_battle_background.c		\
			./src/fight/battle_mode_source/to_sprite_battle_boss.c			\
			./src/fight/battle_mode_source/to_sprite_battle_hero.c			\
			./src/fight/battle_mode_source/to_sprite_battle_hero_below.c		\
			./src/fight/battle_mode_source/to_sprite_battle_intro_outro.c		\
			./src/fight/battle_mode_source/to_texture_battle_background.c		\
			./src/fight/battle_mode_source/to_texture_battle_boss.c			\
			./src/fight/battle_mode_source/to_texture_battle_hero.c			\
			./src/fight/battle_mode_source/to_texture_battle_intro_outro.c		\
			./src/fight/battle_mode_source/init_structures_to_zero.c		\
			./src/fight/battle_mode_source/to_attack_animation.c			\
			./src/fight/battle_mode_source/draw_attack_animation.c			\
			./src/fight/spell_fight_sources/to_fill_array_structure_spell_fight.c	\
			./src/fight/spell_fight_sources/to_sprite_spell_fight_hero.c		\
			./src/fight/spell_fight_sources/to_draw_sprite_spell_fight_hero.c	\
			./src/fight/spell_fight_sources/to_draw_sprite_spell_fight_boss.c	\
			./src/fight/spell_fight_sources/to_draw_sprite_spell_fight_hero_below.c \
			./src/fight/spell_fight_sources/to_destroy_spell_fight.c		\
			./src/fight/spell_fight_sources/to_texture_spell_fight.c		\
			./src/fight/spell_fight_sources/to_position_spell_fight.c		\
			./src/fight/spell_fight_sources/to_animation_create_spell_fight.c	\
			./src/fight/spell_fight_sources/to_animation_draw_spell_fight.c		\
			./src/fight/spell_fight_sources/to_clock_spell_fight.c			\
			./src/fight/launch_fight.c						\
			./src/fight/fight_turns.c						\
			./src/fight/end_fight.c							\
			./src/fight/end_fight_resets.c						\
			./src/fight/create_fight.c						\
			./src/fight/update_fight_hp.c						\
			./src/fight/create_spell_button.c					\
			./src/fight/draw_spell_buttons.c					\
			./src/fight/destroy_fight.c						\
			./src/fight/handle_buttons_spell_clicks.c				\
			./src/fight/conditions_spells_clicks.c					\
			./src/fight/condition_back_no_idea.c					\
			./src/fight/get_hitted_by_boss.c					\
			./src/credit/create_credit.c						\
			./src/credit/launch_credit.c						\
			./src/credit/create_infos_about_circles.c				\
			./src/credit/rotate_balls.c						\
			./src/credit/change_radius.c						\
			./src/credit/slowly_move_the_gravity_center.c				\
			./src/credit/draw_the_end_gif.c						\
			./src/credit/destroy_credit.c

OBJS		=	$(SRCS:.c=.o)

NAME		=	my_rpg

TAR		=	libconfig-1.7.2.tar.lzma

export

all		: decompress $(NAME)
		@./extern_programs/echolor.sh --rainbow "Successful Compilation"

compil_libconfig:
ifneq ($(shell test -e $(PATH_CONFIG)Makefile && echo -n yes), yes)
	cd $(PATH_CONFIG) && ./configure LDFLAGS='' && $(MAKE)
else
	cd $(PATH_CONFIG) && $(MAKE)
endif

$(NAME)		:	$(OBJS)
		$(MAKE) -C./lib/my_stdc/
		$(MAKE) -C./lib/llist/
		$(MAKE) compil_libconfig
		$(CC) $(OBJS) -o $(NAME) $(GRAPH_FLAG) $(MATH_FLAG) $(LDFLAGS) $(LDLIBS)

tests_run	:
		$(MAKE) -C ./tests/

debug		:	CFLAGS += -g3
debug		:	fclean all

compress_libconfig :
		tar cvJf ./extern_libs/$(TAR) ./extern_libs/libconfig-1.7.2

compress_saves	:
		tar cvJf ./autosave/saves.tar.lzma ./autosave/autosave.cfg ./autosave/newsave.cfg

decompress	:
		tar xJf ./extern_libs/$(TAR)
		tar xJf ./autosave/saves.tar.lzma

main_clean	:
		$(RM) $(OBJS)
ifeq ($(shell test -e $(PATH_CONFIG)Makefile && echo -n yes), yes)
		$(MAKE) -C ./extern_libs/libconfig-1.7.2/ clean
endif

clean		:
		$(RM) $(OBJS)
		$(MAKE) -C ./lib/my_stdc/ clean
		$(MAKE) -C./lib/llist/ clean
		$(MAKE) -C ./tests/ clean
ifeq ($(shell test -e $(PATH_CONFIG)Makefile && echo -n yes), yes)
		$(MAKE) -C ./extern_libs/libconfig-1.7.2/ clean
endif


fclean		:	main_clean
		$(RM) -r ./extern_libs/libconfig-1.7.2
		$(RM) ./autosave/autosave.cfg ./autosave/newsave.cfg
		$(RM) $(NAME)
		$(MAKE) -C ./lib/my_stdc/ fclean
		$(MAKE) -C./lib/llist/ fclean
		$(MAKE) -C ./tests/ fclean

re		:
		$(MAKE) fclean
		$(MAKE) all

.PHONY: all clean fclean re debug
