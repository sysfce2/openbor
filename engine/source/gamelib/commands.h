/*
 * OpenBOR - http://www.LavaLit.com
 * -
 ----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

enum txtCommands {
	CMD_NAME=1, 
	CMD_TYPE, 
	CMD_SUBTYPE, 
	CMD_STATS, 
	CMD_HEALTH, 
	CMD_SCROLL, 
	CMD_MP,
	CMD_NOLIFE, 
	CMD_MAKEINV, 
	CMD_RISEINV, 
	CMD_LOAD, 
	CMD_SCORE, 
	CMD_SMARTBOMB, 
	CMD_BOUNCE,
	CMD_NOQUAKE, 
	CMD_BLOCKBACK, 
	CMD_HITENEMY, 
	CMD_HOSTILE, 
	CMD_CANDAMAGE, 
	CMD_PROJECTILEHIT,
	CMD_AIMOVE, 
	CMD_AIATTACK, 
	CMD_SUBJECT_TO_WALL, 
	CMD_SUBJECT_TO_HOLE, 
	CMD_SUBJECT_TO_PLATFORM,
	CMD_SUBJECT_TO_OBSTACLE, 
	CMD_SUBJECT_TO_GRAVITY, 
	CMD_SUBJECT_TO_SCREEN, 
	CMD_SUBJECT_TO_MINZ,
	CMD_SUBJECT_TO_MAXZ, 
	CMD_NO_ADJUST_BASE, 
	CMD_INSTANTITEMDEATH, 
	CMD_SECRET, 
	CMD_MODELFLAG,
	CMD_WEAPLOSS, 
	CMD_WEAPNUM, 
	CMD_PROJECTS, 
	CMD_WEAPONS, 
	CMD_SHOOTNUM, 
	CMD_RELOAD, 
	CMD_TYPESHOT,
	CMD_COUNTER, 
	CMD_ANIMAL, 
	CMD_RIDER, 
	CMD_KNIFE, 
	CMD_FIREB, 
	CMD_PLAYSHOT, 
	CMD_PLAYSHOTW, 
	CMD_PLAYSHOTNO,
	CMD_PLAYBOMB,
	CMD_STAR, 
	CMD_BOMB, 
	CMD_FLASH, 
	CMD_BFLASH, 
	CMD_DUST, 
	CMD_BRANCH, 
	CMD_CANTGRAB,
	CMD_NOGRAB,
	CMD_NOTGRAB, 
	CMD_ANTIGRAB, 
	CMD_GRABFORCE, 
	CMD_GRABBACK, 
	CMD_OFFSCREENKILL, 
	CMD_FALLDIE,
	CMD_DEATH, 
	CMD_SPEED, 
	CMD_SPEEDF, 
	CMD_JUMPSPEED, 
	CMD_JUMPSPEEDF, 
	CMD_ANTIGRAVITY, 
	CMD_STEALTH,
	CMD_JUGGLEPOINTS, 
	CMD_RISEATTACKTYPE, 
	CMD_GUARDPOINTS, 
	CMD_DEFENSE, 
	CMD_OFFENSE, 
	CMD_HEIGHT,
	CMD_JUMPHEIGHT, 
	CMD_JUMPMOVE, 
	CMD_KNOCKDOWNCOUNT, 
	CMD_GRABDISTANCE, 
	CMD_GRABFINISH,
	CMD_THROWDAMAGE, 
	CMD_SHADOW, 
	CMD_GFXSHADOW, 
	CMD_AIRONLY, 
	CMD_FMAP, 
	CMD_KOMAP, 
	CMD_HMAP, 
	CMD_SETLAYER, 
	CMD_TOFLIP, 
	CMD_NODIEBLINK, 
	CMD_NOATFLASH, 
	CMD_NOMOVE, 
	CMD_NODROP, 
	CMD_THOLD,
	CMD_RUNNING, 
	CMD_BLOCKODDS, 
	CMD_HOLDBLOCK, 
	CMD_BLOCKPAIN, 
	CMD_NOPASSIVEBLOCK, 
	CMD_EDELAY,
	CMD_PAINGRAB, 
	CMD_THROW, 
	CMD_GRABWALK, 
	CMD_GRABTURN, 
	CMD_THROWFRAMEWAIT, 
	CMD_DIESOUND,
	CMD_ICON, 
	CMD_ICONPAIN, 
	CMD_ICONDIE, 
	CMD_ICONGET, 
	CMD_ICONW, 
	CMD_ICONMPHIGH, 
	CMD_ICONMPHALF,
	CMD_ICONMPLOW, 
	CMD_PARROW, 
	CMD_PARROW2, 
	CMD_PARROW3, 
	CMD_PARROW4, 
	CMD_ATCHAIN, 
	CMD_COMBOSTYLE,
	CMD_CREDIT, 
	CMD_NOPAIN, 
	CMD_ESCAPEHITS, 
	CMD_CHARGERATE, 
	CMD_MPRATE, 
	CMD_MPSET, 
	CMD_SLEEPWAIT,
	CMD_GUARDRATE, 
	CMD_AGGRESSION, 	
	CMD_RISETIME, 
	CMD_FACING, 
	CMD_TURNDELAY, 
	CMD_LIFESPAN, 
	CMD_SUMMONKILL, 
	CMD_LIFEPOSITION, 
	CMD_LIFEBARSTATUS, 
	CMD_ICONPOSITION, 
	CMD_NAMEPOSITION,
	CMD_COM, 
	CMD_REMAP, 
	CMD_PALETTE, 
	CMD_ALTERNATEPAL, 
	CMD_GLOBALMAP, 
	CMD_ALPHA, 
	CMD_REMOVE,
	CMD_SCRIPT, 
	CMD_THINKSCRIPT, 
	CMD_TAKEDAMAGESCRIPT, 
	CMD_ONFALLSCRIPT, 
	CMD_ONPAINSCRIPT,
	CMD_ONBLOCKSSCRIPT, 
	CMD_ONBLOCKWSCRIPT, 
	CMD_ONBLOCKOSCRIPT, 
	CMD_ONBLOCKZSCRIPT, 
	CMD_ONBLOCKASCRIPT,
	CMD_ONMOVEXSCRIPT, 
	CMD_ONMOVEZSCRIPT, 
	CMD_ONMOVEASCRIPT, 
	CMD_ONDEATHSCRIPT, 
	CMD_ONKILLSCRIPT,
	CMD_DIDBLOCKSCRIPT, 
	CMD_ONDOATTACKSCRIPT, 
	CMD_DIDHITSCRIPT, 
	CMD_ONSPAWNSCRIPT, 
	CMD_ANIMATIONSCRIPT,
	CMD_KEYSCRIPT, 
	CMD_ANIM, 
	CMD_LOOP, 
	CMD_ANIMHEIGHT, 
	CMD_DELAY, 
	CMD_OFFSET, 
	CMD_SHADOWCOORDS, 
	CMD_ENERGYCOST, 
	CMD_MPONLY, 
	CMD_CHARGETIME, 
	CMD_DIVE, 
	CMD_DIVE1, 
	CMD_DIVE2, 
	CMD_ATTACKONE,
	CMD_COUNTERATTACK, 
	CMD_THROWFRAME, 
	CMD_PSHOTFRAME, 
	CMD_PSHOTFRAMEW, 
	CMD_PSHOTFRAMENO,
	CMD_SHOOTFRAME, 
	CMD_TOSSFRAME, 
	CMD_PBOMBFRAME, 
	CMD_CUSTKNIFE, 
	CMD_CUSTPSHOT, 
	CMD_CUSTPSHOTW,
	CMD_CUSTPSHOTNO, 
	CMD_CUSTBOMB,
	CMD_CUSTPBOMB,
	CMD_CUSTSTAR, 
	CMD_JUMPFRAME, 
	CMD_BOUNCEFACTOR, 
	CMD_LANDFRAME,
	CMD_DROPFRAME, 
	CMD_CANCEL, 
	CMD_SOUND, 
	CMD_HITFX, 
	CMD_HITFLASH, 
	CMD_BLOCKFLASH, 
	CMD_BLOCKFX,
	CMD_FASTATTACK, 
	CMD_BBOX, 
	CMD_BBOXZ, 
	CMD_PLATFORM, 
	CMD_DRAWMETHOD, 
	CMD_NODRAWMETHOD,
	CMD_ATTACK, 
	CMD_ATTACK1, 
	CMD_ATTACK2, 
	CMD_ATTACK3, 
	CMD_ATTACK4, 
	CMD_ATTACK5, 
	CMD_ATTACK6, 
	CMD_ATTACK7, 
	CMD_ATTACK8, 
	CMD_ATTACK9, 
	CMD_ATTACK10, 
	CMD_SHOCK, 
	CMD_BURN, 
	CMD_STEAL, 
	CMD_FREEZE,
	CMD_ITEMBOX, 
	CMD_ATTACKZ, 
	CMD_HITZ,
	CMD_BLAST, 
	CMD_DROPV, 
	CMD_OTG, 
	CMD_JUGGLECOST, 
	CMD_GUARDCOST, 
	CMD_STUN, 
	CMD_GRABIN, 
	CMD_NOREFLECT, 
	CMD_FORCEDIRECTION, 
	CMD_DAMAGEONLANDING, 
	CMD_SEAL,
	CMD_STAYDOWN, 
	CMD_DOT, 
	CMD_FORCEMAP, 
	CMD_IDLE, 
	CMD_MOVE, 
	CMD_MOVEZ, 
	CMD_MOVEA, 
	CMD_SETA,
	CMD_FSHADOW, 
	CMD_RANGE, 
	CMD_RANGEZ, 
	CMD_RANGEA, 
	CMD_RANGEB, 
	CMD_FRAME, 
	CMD_ALPHAMASK, 
	CMD_FLIPFRAME, 
	CMD_FOLLOWANIM, 
	CMD_FOLLOWCOND, 
	CMD_COUNTERFRAME, 
	CMD_COUNTERRANGE, 
	CMD_WEAPONFRAME,
	CMD_QUAKEFRAME, 
	CMD_SUBENTITY, 
	CMD_CUSTENTITY, 
	CMD_SPAWNFRAME, 
	CMD_SUMMONFRAME, 
	CMD_UNSUMMONFRAME,
	CMD_AT_SCRIPT, 
	CMD_AT_CMD,
	CMD_MPCOST,
};
	