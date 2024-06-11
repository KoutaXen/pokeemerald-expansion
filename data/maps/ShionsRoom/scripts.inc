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
	checkplayergender
# 20 "data/maps/ShionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 21 "data/maps/ShionsRoom/scripts.pory"
	goto_if_eq FemaleText
# 23 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_1, MSGBOX_NPC
# 25 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_2
# 26 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_3, MSGBOX_NPC
# 27 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_4
# 30 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_5, MSGBOX_NPC
# 31 "data/maps/ShionsRoom/scripts.pory"
	waitmessage
# 32 "data/maps/ShionsRoom/scripts.pory"
	applymovement 1, MaidExit
# 33 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 34 "data/maps/ShionsRoom/scripts.pory"
	clearflag FLAG_MAID
# 35 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 36 "data/maps/ShionsRoom/scripts.pory"
	releaseall
	end


FemaleText::
# 41 "data/maps/ShionsRoom/scripts.pory"
	msgbox FemaleText_Text_0, MSGBOX_NPC
# 43 "data/maps/ShionsRoom/scripts.pory"
	msgbox FemaleText_Text_1
# 44 "data/maps/ShionsRoom/scripts.pory"
	msgbox IntroScene_Text_3, MSGBOX_NPC
# 45 "data/maps/ShionsRoom/scripts.pory"
	msgbox FemaleText_Text_2
# 48 "data/maps/ShionsRoom/scripts.pory"
	msgbox FemaleText_Text_3, MSGBOX_NPC
# 49 "data/maps/ShionsRoom/scripts.pory"
	waitmessage
# 50 "data/maps/ShionsRoom/scripts.pory"
	applymovement 1, MaidExit
# 51 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 52 "data/maps/ShionsRoom/scripts.pory"
	clearflag FLAG_MAID
# 53 "data/maps/ShionsRoom/scripts.pory"
	waitmovement 1
# 54 "data/maps/ShionsRoom/scripts.pory"
	releaseall
	end


# 58 "data/maps/ShionsRoom/scripts.pory"
PlayerFacingUp:
# 59 "data/maps/ShionsRoom/scripts.pory"
	face_up
# 60 "data/maps/ShionsRoom/scripts.pory"
	step_end

# 63 "data/maps/ShionsRoom/scripts.pory"
MaidEntrance:
# 64 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 64 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 64 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 64 "data/maps/ShionsRoom/scripts.pory"
	walk_up
# 65 "data/maps/ShionsRoom/scripts.pory"
	step_end

# 68 "data/maps/ShionsRoom/scripts.pory"
MaidExit:
# 69 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 69 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 69 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 69 "data/maps/ShionsRoom/scripts.pory"
	walk_down
# 70 "data/maps/ShionsRoom/scripts.pory"
	step_end

IntroScene_Text_0:
# 12 "data/maps/ShionsRoom/scripts.pory"
	.string "What do I do...?$"

IntroScene_Text_1:
# 23 "data/maps/ShionsRoom/scripts.pory"
	.string "Young Master, you are awake.\n"
	.string "I've come to give you news.$"

IntroScene_Text_2:
# 25 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, what is it?$"

IntroScene_Text_3:
# 26 "data/maps/ShionsRoom/scripts.pory"
	.string "The Patriarch will be arriving soon.$"

IntroScene_Text_4:
# 27 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, I understand...\n"
	.string "thank you for the information.\l"
	.string "You may leave.$"

IntroScene_Text_5:
# 30 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, Young Master.$"

FemaleText_Text_0:
# 41 "data/maps/ShionsRoom/scripts.pory"
	.string "Young Mistress, you are awake.\n"
	.string "I've come to give you news.$"

FemaleText_Text_1:
# 43 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes?$"

FemaleText_Text_2:
# 45 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, I understand...\n"
	.string "thank you...\l"
	.string "You may go.$"

FemaleText_Text_3:
# 48 "data/maps/ShionsRoom/scripts.pory"
	.string "Yes, Young Mistress.$"
