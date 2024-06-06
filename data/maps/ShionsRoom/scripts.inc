ShionsRoom_MapScripts::
# 3 "data/maps/ShionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/ShionsRoom/scripts.pory"
	map_script_2 VAR_NEWGAME_START, 0, IntroScene
	.2byte 0


IntroScene::
# 9 "data/maps/ShionsRoom/scripts.pory"
	lockall
# 10 "data/maps/ShionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFacingUp
# 11 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 10
# 12 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/ShionsRoom/scripts.pory"
	setflag FLAG_MAID
# 14 "data/maps/ShionsRoom/scripts.pory"
	playse SE_DOOR
# 15 "data/maps/ShionsRoom/scripts.pory"
	waitse
# 16 "data/maps/ShionsRoom/scripts.pory"
	applymovement 1, MaidEntrance
# 17 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 18 "data/maps/ShionsRoom/scripts.pory"
	delay 40
# 19 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_1, MSGBOX_NPC
# 21 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_2
# 22 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_3, MSGBOX_NPC
# 23 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_4
# 26 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_5, MSGBOX_NPC
# 27 "data/maps/ShionsRoom/scripts.pory"
	waitmessage
# 28 "data/maps/ShionsRoom/scripts.pory"
	applymovement 1, MaidExit
# 29 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 30 "data/maps/ShionsRoom/scripts.pory"
	clearflag FLAG_MAID
# 31 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 32 "data/maps/ShionsRoom/scripts.pory"
	releaseall
	end


# 36 "data/maps/ShionsRoom/scripts.pory"
PlayerFacingUp:
# 37 "data/maps/ShionsRoom/scripts.pory"
	face_up
# 38 "data/maps/ShionsRoom/scripts.pory"
	step_end

# 41 "data/maps/ShionsRoom/scripts.pory"
MaidEntrance:
# 42 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 42 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 42 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 42 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 43 "data/maps/ShionsRoom/scripts.pory"
	step_end

# 46 "data/maps/ShionsRoom/scripts.pory"
MaidExit:
# 47 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 47 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 47 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 47 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 48 "data/maps/ShionsRoom/scripts.pory"
	step_end

IntroScene_Text_0:
# 12 "data/maps/ShionsRoom/scripts.pory"
	.string "What do I do...?$"

IntroScene_Text_1:
# 19 "data/maps/ShionsRoom/scripts.pory"
	.string "My liege, you are awake.\n"
	.string "I've come to give you news.$"

IntroScene_Text_2:
# 21 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, what is it?$"

IntroScene_Text_3:
# 22 "data/maps/ShionsRoom/scripts.pory"
	.string "The Patriarch will be arriving soon.$"

IntroScene_Text_4:
# 23 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, I understand...\n"
	.string "thank you for the information.\l"
	.string "You may leave.$"

IntroScene_Text_5:
# 26 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, my liege.$"
