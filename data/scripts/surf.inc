EventScript_UseSurf:: @ 81A0117
	goto_if_unset FLAG_RECIEVED_HM03, EventScript_EndUseSurf
	bufferpartymonnick 0, 0
	setfieldeffectargument 0, 0
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf: @ 81A014C
	releaseall
EventScript_EndUseSurf: @ 81A014D
	end
