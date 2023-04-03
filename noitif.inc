// by aim don't rescripted

// Define constants for notification textdraw properties

#define NOTIFICATION_FONT 1
#define NOTIFICATION_LETTER_SIZE_X 0.3
#define NOTIFICATION_LETTER_SIZE_Y 1.0
#define NOTIFICATION_COLOR 0xFFFFFFFF
#define NOTIFICATION_BG_COLOR 0x000000AA
#define NOTIFICATION_PROPORTIONAL true
#define NOTIFICATION_ALIGNMENT 1 // Center-aligned
#define NOTIFICATION_BORDER_SIZE 1
#define NOTIFICATION_BORDER_COLOR 0xFFFFFFFF
#define NOTIFICATION_SHADOW_SIZE 0

// Create a function to show a notification textdraw with custom message

stock Notification_Show(playerid, const message[], duration = 5000)
{
    new textdraw = CreatePlayerTextDraw(playerid, 320.0, 50.0, message);
    PlayerTextDrawFont(playerid, textdraw, NOTIFICATION_FONT);
    PlayerTextDrawLetterSize(playerid, textdraw, NOTIFICATION_LETTER_SIZE_X, NOTIFICATION_LETTER_SIZE_Y);
    PlayerTextDrawColor(playerid, textdraw, NOTIFICATION_COLOR);
    PlayerTextDrawBackgroundColor(playerid, textdraw, NOTIFICATION_BG_COLOR);
    PlayerTextDrawSetProportional(playerid, textdraw, NOTIFICATION_PROPORTIONAL);
    PlayerTextDrawAlignment(playerid, textdraw, NOTIFICATION_ALIGNMENT);
    PlayerTextDrawSetOutline(playerid, textdraw, NOTIFICATION_BORDER_SIZE);
    PlayerTextDrawBoxColor(playerid, textdraw, NOTIFICATION_BORDER_COLOR);
    PlayerTextDrawSetShadow(playerid, textdraw NOTIFICATION_SHADOW_SIZE);
}