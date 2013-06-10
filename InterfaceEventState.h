#ifndef IT_EVT_ST
#define IT_EVT_ST
enum IT_EVENT{
	IT_EVT_INTERFACEUP=0,
	IT_EVT_WAITTIMER,
	IT_EVT_BACKUPSEEN,
	IT_EVT_NEIGHBORCHANGE,
	IT_EVT_LOOPIND,
	IT_EVT_UNLOOPIND,
	IT_EVT_INTERFACEDOWN
};

enum It_State{
	IT_ST_DOWN=0,
	IT_ST_WAITING,
	IT_ST_DROTHER,
	IT_ST_BACKUP,
	IT_ST_DR,
};
#endif