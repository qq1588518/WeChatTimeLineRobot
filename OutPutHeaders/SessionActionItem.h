/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSString;

@interface SessionActionItem : MMObject <PBCoding> {
	BOOL bNotifyOpen;
	unsigned long uiEnterTime;
	unsigned long uiStayTime;
	unsigned long uiSessionType;
	unsigned long uiMemberCount;
	unsigned long uiUnreadCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long uiUnreadCount;
@property(assign, nonatomic) BOOL bNotifyOpen;
@property(assign, nonatomic) unsigned long uiMemberCount;
@property(assign, nonatomic) unsigned long uiSessionType;
@property(assign, nonatomic) unsigned long uiStayTime;
@property(assign, nonatomic) unsigned long uiEnterTime;
+(void)initialize;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

