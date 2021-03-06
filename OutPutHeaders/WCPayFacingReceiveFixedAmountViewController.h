/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"
#import "ILinkEventExt.h"

@class WCBaseTextFieldItem, NSString, WCPayMoneyTextFieldItem, UIButton;
@protocol WCPayFacingReceiveFixedAmountViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <ILinkEventExt> {
	UIButton* m_footerButton;
	id<WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate;
	WCPayMoneyTextFieldItem* m_textFieldItem;
	WCBaseTextFieldItem* m_descTextFieldItem;
	BOOL m_bLoadDescTextField;
	NSString* _remark;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* remark;
-(void).cxx_destruct;
-(void)remarkCancel:(id)cancel;
-(void)remarkConfirm:(id)confirm;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)refreshViewWithData:(id)data;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)onNext;
-(void)viewDidLoad;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)reloadTableView;
-(void)initNavigationBar;
-(void)FillSaveMoneyCancel;
-(void)initFooterView;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(id)init;
@end

