//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class APBarButtonItem, APCommonSelectTableViewCell;

@interface APDiscussGroupViewController : APContactBaseViewController
{
    _Bool _viewWillAppear;
    _Bool _isDeleteRecent;
    id <APCommonItemProtocol> _deleteItem;
    APCommonSelectTableViewCell *_deletecell;
    APBarButtonItem *_backBarButtonItem;
}

@property(nonatomic) _Bool isDeleteRecent; // @synthesize isDeleteRecent=_isDeleteRecent;
@property(retain, nonatomic) APBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) APCommonSelectTableViewCell *deletecell; // @synthesize deletecell=_deletecell;
@property(retain, nonatomic) id <APCommonItemProtocol> deleteItem; // @synthesize deleteItem=_deleteItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)registerReloadNotification;
- (void)deleteCellSuccessItem:(id)arg1 cell:(id)arg2;
- (void)deleteRecentContactWithAPRecentContact:(id)arg1;
- (void)deleteRecentContactWithAPRecentContact2:(id)arg1;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (void)commonView:(id)arg1 didClickLeftMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (void)didSelectContactInfo:(id)arg1;
- (void)didSelectRecentContactInfo:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)orgizeRecentContact:(id)arg1;
- (void)reloadChatRoomContacts:(id)arg1;
- (void)reloadRecentContact:(id)arg1;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)setupSelectView;
- (void)loadContact;
- (void)selectContactLog;
- (void)openPageLog;
- (void)judgeToShowDismissBtn;
- (void)refreshTitle;
- (void)updateUnreadCount;
- (void)setupNotify;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configWithDict:(id)arg1;
- (void)configTitles;

@end
