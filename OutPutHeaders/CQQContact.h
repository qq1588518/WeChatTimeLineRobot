/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CBaseContact.h"

@class NSString;

@interface CQQContact : CBaseContact {
	unsigned long m_uiAge;
	unsigned long m_uiUin;
	NSString* m_nsSign;
	NSString* m_nsAddress;
	NSString* m_nsBirthday;
}
@property(retain, nonatomic) NSString* m_nsBirthday;
@property(retain, nonatomic) NSString* m_nsAddress;
@property(retain, nonatomic, setter=setNsSignature:) NSString* m_nsSign;
@property(assign, nonatomic) unsigned long m_uiUin;
@property(assign, nonatomic) unsigned long m_uiAge;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isMyQQ;
-(BOOL)copyFrom:(id)from;
-(id)init;
@end

