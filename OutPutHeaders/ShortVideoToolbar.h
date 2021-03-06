/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "WeChat-Structs.h"
#import "SightDraftBoxToolbarDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MMUIView.h"

@class UILabel, UIView, SightRecordProgressBar, UIImageView, NSString, UIButton, UIImage, NSMutableArray, SightDraftBoxToolbar;
@protocol SightPreviewView, ShortVideoBarDelegate;

@interface ShortVideoToolbar : MMUIView <IVOIPUILogicMgrExt, UIAlertViewDelegate, SightDraftBoxToolbarDelegate, UITextFieldDelegate> {
	BOOL m_isActive;
	float m_topPositon;
	float m_dragDeltaFix;
	id<ShortVideoBarDelegate> m_delegate;
	UIView<SightPreviewView>* m_view;
	int m_btnState;
	int m_recordState;
	int m_cameraState;
	BOOL m_dragZoomTrigger;
	BOOL m_inCombolMode;
	BOOL m_writerTimeout;
	unsigned long m_currWriterID;
	NSMutableArray* m_recordIDAry;
	UIView* m_contentView;
	UIButton* m_captureBtn;
	UIView* m_toolBar;
	UIButton* m_hideBarBtn;
	UIView* m_kitchenBtn;
	UIImage* m_btnIconImgCancel;
	UIImage* m_btnIconImgNormal;
	UIImageView* m_btnIconImg;
	UIView* m_tipsView;
	UILabel* m_tipsLabel;
	UIImageView* m_tipsLabelBG;
	unsigned long m_tipsCounter;
	UILabel* m_zoomTipsLabel;
	UIView* m_cancelTips;
	UIView* m_topBar;
	UIView* m_topBarIcon;
	UIView* m_topBarIconActive;
	UIImage* m_viewCaptureFrame;
	UIImageView* m_senterAnimView;
	UIView* m_maskWindow;
	SightRecordProgressBar* m_maskCapturerBg;
	UIImageView* m_maskCapturerFg;
	double startTime;
	BOOL m_requestAuthAccess;
	UIView* m_motionTipsView;
	BOOL m_motionDetected;
	BOOL m_lightBoostStat;
	BOOL m_lightBoostOpenStat;
	unsigned long m_validReshowLightBoostCmd;
	unsigned long m_lightDetectorCounter;
	UIButton* m_lightBoostButton;
	UILabel* m_lightBoostHintView;
	SightDraftBoxToolbar* m_draftBar;
	unsigned long m_draftCounter;
	BOOL m_shouldContinueRecording;
	BOOL m_hasRealStartedForPreStartRecording;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int cameraState;
@property(assign, nonatomic) int btnState;
@property(assign, nonatomic) int recordState;
@property(assign, nonatomic) __weak id<ShortVideoBarDelegate> delegate;
@property(assign, nonatomic) BOOL active;
@property(assign, nonatomic) float topPosition;
-(void).cxx_destruct;
-(void)onVideoVoipViewDisappear;
-(void)onVideoVoipViewDidAppear:(id)onVideoVoipView;
-(void)onCloseSight;
-(void)onCloseDraftBox;
-(void)onKitchen;
-(void)onSelectSightDraft:(id)draft;
-(void)deActiveDraftBarWithoutAnim;
-(void)deActiveDraftBar;
-(void)showDraftBar;
-(void)backToCameraState;
-(void)showTopBar;
-(void)hideTopBar;
-(void)showMaskWindow;
-(void)startDeactiveAnimation;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)startActiveAnimation:(BOOL)animation;
-(void)setActive:(BOOL)active fromShake:(BOOL)shake;
-(void)protectHide;
-(void)deActiveWithoutAnimation;
-(void)handlePanPreview:(id)preview;
-(void)handleZoomTap:(id)tap;
-(void)handleFocusTap:(id)tap inView:(id)view;
-(void)focusCenter;
-(void)startLightBoostAnimation;
-(void)closeLightBoots;
-(void)openLightBoots;
-(void)lightNormal;
-(void)lightTooLow;
-(void)showLightBoostHint;
-(void)showLightBoostButton:(BOOL)button withAnim:(BOOL)anim;
-(void)showLightBoostButton:(BOOL)button;
-(void)reshowLightBoostButton:(BOOL)button;
-(void)styleLightBoostButton:(BOOL)button;
-(void)onShaky;
-(void)resetMotionTipsView;
-(void)setupMotionDetector;
-(void)onDragEnd:(float)end;
-(void)onDrag:(CGPoint)drag;
-(void)onBtnClick:(id)click;
-(void)onCaptureFrameAfterMovieSent:(id)sent;
-(void)onMovieCompressFinished:(id)finished;
-(void)onWriterResign;
-(void)onWriterFailed:(id)failed;
-(id)getSubImage:(CGRect)image inImage:(id)image2;
-(void)onTakenPicture:(id)picture;
-(void)btnRelease;
-(void)btnDragging:(id)dragging;
-(void)btnDragInside;
-(void)btnDragOutSide;
-(void)btnPress;
-(void)tryCancelPreStartRecording;
-(void)prepareRecord;
-(void)cancelWriter;
-(void)finishWriter;
-(void)startWriter;
-(id)getShineAnim;
-(void)turnBarNormalize;
-(void)turnBarCanceling;
-(void)turnBarRecording:(BOOL)recording;
-(void)turnBarRecording;
-(void)turnBarRecordingLongAnim;
-(void)logicCheckState:(int)state;
-(void)hideCancelTips;
-(void)showCancelTips;
-(void)hideTips;
-(void)fadeInTips;
-(void)showTips:(id)tips ofColor:(id)color animType:(unsigned long)type fontSize:(float)size;
-(void)showTips:(id)tips ofColor:(id)color animType:(unsigned long)type;
-(void)hideRightZoomTips;
-(void)showRightZoomTips;
-(id)blurryImage:(id)image withBlurLevel:(float)blurLevel;
-(void)pauseCamera;
-(void)resumeCamera;
-(void)onCameraStop;
-(void)onCameraAudioOK;
-(void)onCameraPreviewOK;
-(void)releasePreview;
-(void)tryCreatePreview;
-(void)dealloc;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)initTipsLabel;
-(void)initMaskView;
-(void)initToolBar;
-(void)initPreView;
-(void)initTopBar;
-(void)updateBlurImage;
-(id)makeBGMaskView;
-(void)initBackgroundView;
-(void)initView;
-(id)initWithFrame:(CGRect)frame;
@end

