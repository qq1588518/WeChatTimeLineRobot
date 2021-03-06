/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CardTicketItem : MMObject <PBCoding, NSCopying> {
	NSString* fromUserName;
	unsigned long fromScene;
	unsigned long cardType;
	NSString* cardTypeName;
	NSString* cardId;
	NSString* color;
	NSString* brandName;
	NSString* cardExt;
	unsigned long cardShareFrom;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long cardShareFrom;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* brandName;
@property(retain, nonatomic) NSString* color;
@property(retain, nonatomic) NSString* cardId;
@property(retain, nonatomic) NSString* cardTypeName;
@property(assign, nonatomic) unsigned long cardType;
@property(assign, nonatomic) unsigned long fromScene;
@property(retain, nonatomic) NSString* fromUserName;
+(void)initialize;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(id)toXML;
-(BOOL)fromXML:(XmlReaderNode_t*)xml;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

