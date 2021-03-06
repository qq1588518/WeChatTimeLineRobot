/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "FBSDKCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSSecureCoding.h"

@class NSSet, NSDate, NSString;

@interface FBSDKAccessToken : XXUnknownSuperclass <FBSDKCopying, NSSecureCoding> {
	NSString* _appID;
	NSSet* _declinedPermissions;
	NSDate* _expirationDate;
	NSSet* _permissions;
	NSDate* _refreshDate;
	NSString* _tokenString;
	NSString* _userID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy, nonatomic) NSString* userID;
@property(readonly, copy, nonatomic) NSString* tokenString;
@property(readonly, copy, nonatomic) NSDate* refreshDate;
@property(readonly, copy, nonatomic) NSSet* permissions;
@property(readonly, copy, nonatomic) NSDate* expirationDate;
@property(readonly, copy, nonatomic) NSSet* declinedPermissions;
@property(readonly, copy, nonatomic) NSString* appID;
+(BOOL)supportsSecureCoding;
+(void)refreshCurrentAccessToken:(id)token;
+(void)setCurrentAccessToken:(id)token;
+(id)currentAccessToken;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToAccessToken:(id)accessToken;
-(BOOL)isEqual:(id)equal;
-(BOOL)hasGranted:(id)granted;
-(id)initWithTokenString:(id)tokenString permissions:(id)permissions declinedPermissions:(id)permissions3 appID:(id)anId userID:(id)anId5 expirationDate:(id)date refreshDate:(id)date7;
@end

