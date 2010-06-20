/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@class MFError, MailboxUid, NSString, NSTimer;

@interface MailAccount : NSObject
{
    id _mailAccountLock;
    id _backgroundActivityFlagsLock;
    id _mailboxUidLock;
    NSString *_path;
    MailboxUid *_rootMailboxUid;
    MailboxUid *_inboxMailboxUid;
    MailboxUid *_draftsMailboxUid;
    MailboxUid *_sentMessagesMailboxUid;
    MailboxUid *_trashMailboxUid;
    MailboxUid *_junkMailboxUid;
    MailboxUid *_notesMailboxUid;
    MailboxUid *_notesSmartMailboxUid;
    MailboxUid *_todosMailboxUid;
    MailboxUid *_outboxMailboxUid;
    MFError *_lastConnectionError;
    id _cacheChangeLock;
    NSTimer *_cacheWriteTimer;
    BOOL _cacheHasBeenRead;
    BOOL _backgroundFetchInProgress;
    BOOL _synchronizationThreadIsRunning;
    BOOL _mailboxListInitializationInProgress;
}

+ (void)initialize;
+ (BOOL)haveAccountsBeenConfigured;
+ (void)completeDeferredAccountInitialization;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (id)defaultToDoAccount;
+ (id)defaultNoteAccount;
+ (BOOL)isValidAccount:(id)arg1 messageType:(BOOL)arg2;
+ (id)singleRemoteNoteAccount;
+ (id)noteAccountForMailboxUid:(id)arg1;
+ (id)accountForNote:(id)arg1 referringMessage:(id)arg2 messageType:(BOOL)arg3;
+ (id)todoAccountFromNoteAccount:(id)arg1;
+ (id)noteAccountForNote:(id)arg1 referringMessage:(id)arg2;
+ (id)todoAccountForNote:(id)arg1 referringMessage:(id)arg2;
+ (id)_mailAccountsIncludingUnknownTypes;
+ (id)mailAccounts;
+ (id)syncableMailAccounts;
+ (id)allCalDAVAccounts;
+ (void)setMailAccounts:(id)arg1;
+ (void)setMailAccounts:(id)arg1 calledFromSync:(BOOL)arg2;
+ (void)addMailAccountToMail:(id)arg1;
+ (void)accountsWereSynced;
+ (BOOL)newMailBeenReceived;
+ (void)setNewMailBeenReceived:(BOOL)arg1;
+ (id)syncManagedAccountWithMCXCreateIfAbsent:(BOOL)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (id)_activeAccountsFromArray:(id)arg1;
+ (id)activeAccounts;
+ (id)mailAccountsExcludingCalDAVAccounts;
+ (id)activeAccountsExcludingCalDAVAccounts;
+ (id)remoteAccounts;
+ (void)saveAccountInfoToDefaults;
+ (void)clearIsSyncableForHTTPMailAccounts;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)existingAccountFromMailWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)_accountFromArray:(id)arg1 withType:(id)arg2 hostname:(id)arg3 username:(id)arg4;
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)arg1;
+ (void)_updateAccountExistsForSigning;
+ (BOOL)accountExistsForSigning;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id *)arg2 fullUserName:(id *)arg3;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)accountThatReceivedMessage:(id)arg1 matchingEmailAddress:(id *)arg2 fullUserName:(id *)arg3;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (id)specialMailboxUids;
+ (id)_specialMailboxUidsUsingSelector:(SEL)arg1;
+ (id)inboxMailboxUids;
+ (id)trashMailboxUids;
+ (id)outboxMailboxUids;
+ (id)sentMessagesMailboxUids;
+ (id)draftMailboxUids;
+ (id)junkMailboxUids;
+ (id)noteMailboxUids;
+ (id)todosMailboxUids;
+ (id)allMailboxUids;
+ (id)accountWithPath:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)createAccountWithDictionary:(id)arg1;
+ (id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultAccountDirectory;
+ (id)defaultPathNameForAccount;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultDeliveryAccount;
+ (BOOL)isAnyAccountOffline;
+ (BOOL)isAnyAccountOnline;
+ (void)_setOnlineStateOfAllAccountsTo:(BOOL)arg1;
+ (void)disconnectAllAccounts;
+ (void)connectAllAccounts;
+ (id)accountsInitializingMailboxList;
+ (void)_clearAllAccountBackgroundFetchInProgress;
+ (long long)numberOfDaysToKeepLocalTrash;
+ (BOOL)allAccountsDeleteInPlace;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)resetAllSpecialMailboxes;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (void)deleteMailboxUidIfEmpty:(id)arg1;
+ (id)_accountForURL:(id)arg1 includeInactiveAccounts:(BOOL)arg2;
+ (id)_accountForURL:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (id)URLForInfo:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)accountWithURLString:(id)arg1 includeInactiveAccounts:(BOOL)arg2;
+ (id)mailboxUidForURL:(id)arg1 forceCreation:(BOOL)arg2;
+ (id)mailboxUidForURL:(id)arg1;
+ (id)mailboxUidForMailboxID:(unsigned long long)arg1;
- (BOOL)isValidAccountWithError:(id)arg1 accountBeingEdited:(id)arg2 userCanOverride:(char *)arg3;
- (BOOL)cheapStoreAtPathIsEmpty:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)completeDeferredInitialization;
- (void)dealloc;
- (void)heal;
- (BOOL)isValid;
- (void)finalize;
- (void)_updateSpecialMailboxForType:(int)arg1 fromSyncedDictionary:(id)arg2;
- (void)updateFromSyncedDictionary:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)applescriptFullUserName;
- (void)setApplescriptFullUserName:(id)arg1;
- (id)fullUserName;
- (void)setFullUserName:(id)arg1;
- (id)localizedDeliveryAccount;
- (id)smtpIdentifier;
- (void)setSMTPIdentifier:(id)arg1;
- (id)deliveryAccount;
- (void)setDeliveryAccount:(id)arg1;
- (id)dynamicDeliveryAccount;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (BOOL)deliveryAccountIsLocked;
- (void)setDeliveryAccountIsLocked:(BOOL)arg1;
- (BOOL)isDotMacAccount;
- (id)firstEmailAddress;
- (id)rawEmailAddresses;
- (id)emailAddresses;
- (id)applescriptEmailAddresses;
- (void)setApplescriptEmailAddresses:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAliases;
- (BOOL)shouldAutoFetch;
- (void)setShouldAutoFetch:(BOOL)arg1;
@property(readonly) BOOL supportsRichTextNotes;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (void)_synchronouslyInvalidateAndDelete:(BOOL)arg1;
- (void)deleteAccount;
- (void)_setCacheWriteTimer:(id)arg1;
- (void)saveCacheInBackground;
- (void)saveCache;
- (void)doRoutineCleanup;
- (void)setCacheIsDirty:(BOOL)arg1;
- (void)releaseAllConnections;
- (void)setIsOffline:(BOOL)arg1;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (BOOL)canFetch;
- (id)defaultsDictionary;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (BOOL)canAppendMessages;
- (BOOL)canBeSynchronized;
- (void)synchronizeAllMailboxes;
- (BOOL)_supportsMailboxListInitialization;
- (BOOL)isInitializingMailboxList;
- (void)willInitializeMailboxList;
- (void)didInitializeMailboxList;
- (void)fetchAsynchronouslyIsAuto:(BOOL)arg1;
- (void)fetchAsynchronously;
- (void)fetchSynchronously;
- (void)fetchSynchronouslyIsAuto:(id)arg1;
- (BOOL)isFetching;
- (void)newMailHasBeenReceived;
- (id)primaryMailboxUid;
- (id)rootMailboxUid;
- (BOOL)rootChildrenCanBePromoted;
- (id)draftsMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)junkMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)sentMessagesMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)trashMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)outboxMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)notesMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)notesMailboxUidCreateIfNeeded:(BOOL)arg1 useLocalIfNeeded:(BOOL)arg2;
- (id)todosMailboxUidCreateIfNeeded:(BOOL)arg1;
- (id)todosMailboxUidUnlessUsingLocal;
- (id)allMailboxUids;
- (void)setDraftsMailboxUid:(id)arg1;
- (void)setTrashMailboxUid:(id)arg1;
- (void)setJunkMailboxUid:(id)arg1;
- (void)setSentMessagesMailboxUid:(id)arg1;
- (void)setNotesMailboxUid:(id)arg1;
- (void)setToDosMailboxUid:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned long long)arg2;
- (void)_setEmptyFrequency:(long long)arg1 forKey:(id)arg2;
- (long long)_emptyFrequencyForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)emptySentMessagesFrequency;
- (void)setEmptySentMessagesFrequency:(long long)arg1;
- (long long)emptyJunkFrequency;
- (void)setEmptyJunkFrequency:(long long)arg1;
- (id)lastToDoCalendar;
- (void)setLastToDoCalendar:(id)arg1;
- (void)todoCalendarGroupTitle:(id *)arg1 groupID:(id *)arg2;
- (void)setToDoCalendarGroupTitle:(id)arg1 groupID:(id)arg2;
- (void)deleteToDoCalendarGroup;
- (long long)emptyTrashFrequency;
- (void)setEmptyTrashFrequency:(long long)arg1;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (void)setShouldMoveDeletedMessagesToTrash:(BOOL)arg1;
- (BOOL)canMoveDeletedMessagesToTrash;
- (BOOL)defaultShouldShowNotesInInbox;
@property BOOL shouldShowNotesInInbox;
- (void)emptySpecialMailboxesThatNeedToBeEmptiedAtQuit;
- (id)displayName;
- (id)displayNameForMailboxUid:(id)arg1;
- (BOOL)containsMailboxes;
- (BOOL)_resetSpecialMailboxes;
- (void)resetSpecialMailboxes;
- (id)mailboxPathExtension;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canMoveMailboxes;
- (BOOL)supportsSlashesInMailboxName;
- (id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id *)arg3;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)deleteConvertsStoreToFolder;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2 displayName:(id)arg3;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (void)invalidateChildrenOfMailbox:(id)arg1;
- (void)_resetAllMailboxURLs;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)accountInfoDidChange;
- (void)postUserInfoHasChangedForMailboxUid:(id)arg1 userInfo:(id)arg2;
- (void)setConnectionError:(id)arg1;
- (id)connectionError;
- (id)_ispDomain;
- (id)storeForMailboxUid:(id)arg1;
- (id)storeForMailboxUid:(id)arg1 createIfNeeded:(BOOL)arg2;
- (Class)storeClass;
- (Class)todoStoreClass;
- (void)_unreadCountChangedForMailbox:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)setUnreadCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)increaseUnreadCountBy:(long long)arg1 forMailbox:(id)arg2;
- (void)setUnseenCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)increaseUnseenCountBy:(long long)arg1 forMailbox:(id)arg2;
- (BOOL)hasUnreadMail;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)objectSpecifierForMessageStore:(id)arg1;
- (id)objectSpecifierForMailboxUid:(id)arg1;
- (id)objectSpecifier;
- (id)URLString;
- (BOOL)synchronizesDataWithServer;
- (Class)reconciliationAgentClass;
@property(readonly) BOOL supportsNotes;
@property(readonly) BOOL supportsToDos;
- (id)todoCalendarsAccount;
- (BOOL)allowsCalendarCreation;
- (BOOL)allowsToDoCreation;
- (BOOL)allowsToDoCalendarCreation;
- (BOOL)isEditableByUser;
- (BOOL)canParticipateInRules;
- (BOOL)providesAccountInformation;
- (BOOL)isZeroConfiguration;
- (BOOL)isRemoteAccount;
- (BOOL)hasTrashMailbox;
- (BOOL)supportsAppleScript;
- (BOOL)isSourceOfToDosTruth;
- (BOOL)storesUnseenCount;
- (id)currentToDosMailboxName;
- (void)setCurrentToDosMailboxName:(id)arg1;

@end
