// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the Ruby's license or the GPL2.

#import <Cocoa/Cocoa.h>


typedef enum {
	KEYWORD_MATCH_PARTIAL,
	KEYWORD_MATCH_EXACT,
} KeywordMatchType;


@interface NewPreferences : NSObject

+ (int)dccAction;
+ (int)dccAddressDetectionMethod;
+ (NSString*)dccMyaddress;
+ (BOOL)autoRejoin;
+ (BOOL)confirmQuit;
+ (BOOL)connectOnDoubleclick;
+ (BOOL)disconnectOnDoubleclick;
+ (BOOL)joinOnDoubleclick;
+ (BOOL)leaveOnDoubleclick;
+ (BOOL)logTranscript;
+ (int)mainWindowLayout;
+ (BOOL)openBrowserInBackground;
+ (NSString*)pasteCommand;
+ (NSString*)pasteSyntax;
+ (BOOL)showInlineImages;
+ (BOOL)showJoinLeave;
+ (BOOL)stopGrowlOnActive;
+ (int)tabAction;
+ (BOOL)useGrowl;
+ (BOOL)useHotkey;
+ (BOOL)keywordCurrentNick;
+ (int)keywordMatchingMethod;
+ (BOOL)keywordWholeLine;
+ (NSString*)themeLogFontName;
+ (double)themeLogFontSize;
+ (NSString*)themeName;
+ (NSString*)themeNickFormat;
+ (BOOL)themeOverrideLogFont;
+ (BOOL)themeOverrideNickFormat;
+ (BOOL)themeOverrideTimestampFormat;
+ (NSString*)themeTimestampFormat;
+ (double)themeTransparency;

+ (int)dccFirstPort;
+ (void)setDccFirstPort:(int)value;
+ (int)dccLastPort;
+ (void)setDccLastPort:(int)value;

+ (int)maxLogLines;
+ (void)setMaxLogLines:(int)value;

+ (NSString*)transcriptFolder;
+ (void)setTranscriptFolder:(NSString*)value;

+ (NSString*)soundChanneltext;
+ (void)setSoundChanneltext:(NSString*)value;
+ (NSString*)soundDisconnect;
+ (void)setSoundDisconnect:(NSString*)value;
+ (NSString*)soundFileReceiveFailure;
+ (void)setSoundFileReceiveFailure:(NSString*)value;
+ (NSString*)soundFileReceiveRequest;
+ (void)setSoundFileReceiveRequest:(NSString*)value;
+ (NSString*)soundFileReceiveSuccess;
+ (void)setSoundFileReceiveSuccess:(NSString*)value;
+ (NSString*)soundFileSendFailure;
+ (void)setSoundFileSendFailure:(NSString*)value;
+ (NSString*)soundFileSendSuccess;
+ (void)setSoundFileSendSuccess:(NSString*)value;
+ (NSString*)soundHighlight;
+ (void)setSoundHighlight:(NSString*)value;
+ (NSString*)soundInvited;
+ (void)setSoundInvited:(NSString*)value;
+ (NSString*)soundKicked;
+ (void)setSoundKicked:(NSString*)value;
+ (NSString*)soundLogin;
+ (void)setSoundLogin:(NSString*)value;
+ (NSString*)soundNewtalk;
+ (void)setSoundNewtalk:(NSString*)value;
+ (NSString*)soundTalktext;
+ (void)setSoundTalktext:(NSString*)value;

+ (NSDictionary*)loadWorld;

+ (int)hotKeyKeyCode;
+ (void)setHotKeyKeyCode:(int)value;
+ (NSUInteger)hotKeyModifierFlags;
+ (void)setHotKeyModifierFlags:(NSUInteger)value;

+ (NSArray*)keywords;
+ (NSArray*)excludeWords;
+ (NSArray*)ignoreWords;

+ (void)initPreferences;
+ (void)migrate;

@end