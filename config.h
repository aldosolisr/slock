/* user and group to drop privileges to */
static const char *user  = "aldosolisr";
static const char *group = "nobody";
static const char *message = "Suckless: software that sucks less.";
static const char *distro= "Arch Linux";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/aldosolisr/Wallpapers/current.wal";
