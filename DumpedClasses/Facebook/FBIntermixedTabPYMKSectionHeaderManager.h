//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntermixedTabComponentDataSourceAdapterAppearanceListener-Protocol.h"
#import "FBIntermixedTabComponentDataSourceAdapterRowCountListener-Protocol.h"
#import "FBIntermixedTabSectionHeaderProviding-Protocol.h"

@class FBUserSession, NSString;
@protocol FBIntentHandler, FBIntermixedTabRowCountAnnouncingAdapterProtocol, FBIntermixedTabRowCountAnnouncingAdapterProtocol><FBIntermixedTabComponentDataSourceAdapterProtocol, FBIntermixedTabSectionHeaderProviderDelegate;

@interface FBIntermixedTabPYMKSectionHeaderManager : NSObject <FBIntermixedTabComponentDataSourceAdapterAppearanceListener, FBIntermixedTabComponentDataSourceAdapterRowCountListener, FBIntermixedTabSectionHeaderProviding>
{
    FBUserSession *_session;
    id <FBIntermixedTabRowCountAnnouncingAdapterProtocol><FBIntermixedTabComponentDataSourceAdapterProtocol> _pymkAdapter;
    id <FBIntermixedTabRowCountAnnouncingAdapterProtocol> _friendRequestAdapter;
    id <FBIntentHandler> _intentHandler;
    id <FBIntermixedTabSectionHeaderProviderDelegate> _delegate;
    _Bool _removeFriendRequestSectionIfEmpty;
    _Bool _pymkSectionInitiallyAppeared;
    _Bool _friendRequestSectionIsEmpty;
    _Bool _pymkSectionIsEmpty;
}

- (void).cxx_destruct;
- (void)_openFindFriendsFromPYMKSectionHeader;
- (SEL)headerRightSideAction;
- (id)headerRightSideText;
- (id)headerTitle;
- (void)_updateSectionHeader;
- (void)intermixedTabComponentDataSourceAdapterComponentsWillInitiallyAppear:(id)arg1;
- (void)intermixedTabComponentDataSourceAdapter:(id)arg1 didUpdateRowCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 pymkAdapter:(id)arg2 friendRequestAdapter:(id)arg3 intentHandler:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

