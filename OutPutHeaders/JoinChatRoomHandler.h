/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ShareConfirmViewDelegate.h"
#import "BaseOpenSDKHandler.h"
#import "MMWebViewDelegate.h"

@class ShareConfirmView, NSString;

@interface JoinChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, ShareConfirmViewDelegate> {
	NSString* _groupId;
	NSString* _openId;
	NSString* _chatRoomNickName;
	NSString* _extMsg;
	ShareConfirmView* _confirmView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnStayAtWeChat:(id)weChat;
-(void)OnBackToApp:(id)app;
-(void)onLeaveWebviewAndJumpToViewConroller;
-(void)backTo3rdApp:(int)a3rdApp;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)showSucessView;
-(void)openJoinChatRoomH5:(id)a5;
-(void)realHandleReqAfterermissionValidation;
-(void)dealloc;
@end

