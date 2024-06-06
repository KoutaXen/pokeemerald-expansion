Blank_MapScripts::
# 2 "data/maps/Blank/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RemovePlayerSprite
# 4 "data/maps/Blank/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Blank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Blank_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Blank/scripts.pory"
	map_script_2 VAR_NEWGAME_START, 0, NewGameIntro
	.2byte 0


NewGameIntro::
# 10 "data/maps/Blank/scripts.pory"
	lockall
# 11 "data/maps/Blank/scripts.pory"
	msgbox NewGameIntro_Text_0, MSGBOX_YESNO
# 12 "data/maps/Blank/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewGameIntro_2
# 24 "data/maps/Blank/scripts.pory"
	msgbox NewGameIntro_Text_2, MSGBOX_YESNO
# 25 "data/maps/Blank/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewGameIntro_5
# 38 "data/maps/Blank/scripts.pory"
	goto NewGameIntro
NewGameIntro_1:
# 41 "data/maps/Blank/scripts.pory"
	releaseall
	end

NewGameIntro_2:
# 13 "data/maps/Blank/scripts.pory"
	msgbox NewGameIntro_Text_1
# 15 "data/maps/Blank/scripts.pory"
	warpwhitefade MAP_SHIONS_ROOM, -1, 3, 3
# 16 "data/maps/Blank/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Blank/scripts.pory"
	waitmessage
# 18 "data/maps/Blank/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerVisible
# 19 "data/maps/Blank/scripts.pory"
	waitmovement 10
# 20 "data/maps/Blank/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FacingUp
# 21 "data/maps/Blank/scripts.pory"
	waitmovement 10
	goto NewGameIntro_1

NewGameIntro_5:
# 26 "data/maps/Blank/scripts.pory"
	specialvar VAR_RESULT, PlayerFemaleGender
# 27 "data/maps/Blank/scripts.pory"
	msgbox NewGameIntro_Text_3
# 29 "data/maps/Blank/scripts.pory"
	warpwhitefade MAP_SHIONS_ROOM, -1, 3, 3
# 30 "data/maps/Blank/scripts.pory"
	waitbuttonpress
# 31 "data/maps/Blank/scripts.pory"
	waitmessage
# 32 "data/maps/Blank/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerVisible
# 33 "data/maps/Blank/scripts.pory"
	waitmovement 10
# 34 "data/maps/Blank/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FacingUp
# 35 "data/maps/Blank/scripts.pory"
	waitmovement 10
	goto NewGameIntro_1


RemovePlayerSprite::
# 46 "data/maps/Blank/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return


# 49 "data/maps/Blank/scripts.pory"
FacingUp:
# 50 "data/maps/Blank/scripts.pory"
	walk_up
# 51 "data/maps/Blank/scripts.pory"
	face_up
# 52 "data/maps/Blank/scripts.pory"
	step_end

# 55 "data/maps/Blank/scripts.pory"
PlayerVisible:
# 56 "data/maps/Blank/scripts.pory"
	set_visible
	step_end

NewGameIntro_Text_0:
# 11 "data/maps/Blank/scripts.pory"
	.string "Will you be playing as a Male?$"

NewGameIntro_Text_1:
# 13 "data/maps/Blank/scripts.pory"
	.string "This is the story of Shion,\n"
	.string "the youngest son.$"

NewGameIntro_Text_2:
# 24 "data/maps/Blank/scripts.pory"
	.string "Will you be playing as a Female?$"

NewGameIntro_Text_3:
# 27 "data/maps/Blank/scripts.pory"
	.string "This is the story of Shion,\n"
	.string "the youngest daughter.$"
