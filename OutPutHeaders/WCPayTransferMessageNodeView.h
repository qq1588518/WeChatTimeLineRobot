/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"

@class UILabel;

@interface WCPayTransferMessageNodeView : BaseMessageNodeView {
	UILabel* moneyLable;
	UILabel* descLabel;
	UILabel* titleLabel;
	UILabel* detailLabel;
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onFavoriteAdd:(id)add;
-(void)onForward:(id)forward;
-(void)onMoreOperate:(id)operate;
-(void)OnRetrySendMsg;
-(void)showOpearation;
-(void)onClick;
-(void)updateThumbImage;
-(id)genCenterImage:(id)image;
-(void)updateBkgImage:(BOOL)image;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
@end

