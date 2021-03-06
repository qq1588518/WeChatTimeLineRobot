/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class UIButton, MMDelegateProxy, UILabel;
@protocol PublicWifiBrandInoCellDelegate;

@interface PublicWifiBrandInoCell : MMTableViewCell {
	MMDelegateProxy<PublicWifiBrandInoCellDelegate>* _delegate;
	UILabel* _brandNameLbl;
	UILabel* _brandEntryLbl;
	UILabel* _followTextLbl;
	UIButton* _followBtn;
	UIButton* _followExpandBtn;
}
@property(retain, nonatomic) UIButton* followExpandBtn;
@property(retain, nonatomic) UIButton* followBtn;
@property(retain, nonatomic) UILabel* followTextLbl;
@property(retain, nonatomic) UILabel* brandEntryLbl;
@property(retain, nonatomic) UILabel* brandNameLbl;
@property(assign, nonatomic) __weak MMDelegateProxy<PublicWifiBrandInoCellDelegate>* delegate;
-(void).cxx_destruct;
-(void)onFollowBtnClicked:(id)clicked;
-(void)setBrandName:(id)name;
-(void)setIsNeedToFollow:(BOOL)follow;
-(void)setBrandFollowState:(unsigned)state;
-(void)initCell;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

