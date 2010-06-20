/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@class Criterion, MFError, MailAccount, NSArray, NSMutableIndexSet, NSString, SafeValueCache;

@interface MailboxUid : NSObject
{
    NSString *uniqueId;
    NSString *_pathComponent;
    MailAccount *_account;
    unsigned long long _attributes;
    id _countsLock;
    unsigned long long _unreadCount;
    struct __CFTree *_tree;
    NSString *pendingNameChange;
    BOOL isSmartMailbox;
    long long _smartMailboxVersion;
    SafeValueCache *_criteriaCache;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    unsigned long long _numberOfVisibleChildren;
    NSMutableIndexSet *_visibleChildrenIndexes;
    NSArray *_sortedChildren;
    BOOL _sortedChildrenAreUpToDate;
    BOOL failedToOpen;
    BOOL _storeIsReadOnly;
    MFError *openFailureError;
    id _displayIndexLock;
    unsigned long long _displayIndex;
    BOOL _isPublicOrShared;
    NSString *syncId;
    unsigned long long _unseenCount;
    BOOL _unseenCountLoaded;
    BOOL _unseenCountIsKnown;
    BOOL _storesUnseenCount;
    id _dontIndexFlagLock;
    BOOL _dontIndexFlagWritten;
    id _typeAndRepresentedAccountLock;
    int _type;
    MailAccount *_representedAccount;
}

+ (void)initialize;
+ (id)smartMailboxUids;
+ (void)setSmartMailboxUids:(id)arg1;
+ (id)smartMailboxPlaceholders;
+ (void)addSmartMailboxPlaceholder:(id)arg1;
+ (void)removeAllSmartMailboxPlaceholders;
+ (id)specialSmartMailboxUids;
+ (void)addSpecialSmartMailboxUid:(id)arg1;
+ (void)removeSpecialSmartMailboxUid:(id)arg1;
+ (void)setSpecialSmartMailboxUids:(id)arg1;
+ (id)_smartMailboxWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)smartMailboxWithIdentifier:(id)arg1;
+ (id)smartMailboxesEnumerator;
+ (BOOL)isSmartMailboxDictionaryCompatible:(id)arg1;
+ (BOOL)allMailboxesAreNoteType:(id)arg1;
+ (BOOL)typeIsGeneric:(int)arg1;
+ (id)descriptionForMailboxType:(int)arg1 plural:(BOOL)arg2;
+ (void)setShouldIndexTrash:(BOOL)arg1;
+ (void)reimportJunk;
+ (void)setShouldIndexJunk:(BOOL)arg1;
@property BOOL isSmartMailbox;
- (BOOL)isSmartMailboxExpressibleInTigerSchema;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3;
- (id)initWithMailboxUid:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)representedMailbox;
- (id)extendedDisplayName;
- (id)displayNameUsingAccountNameIfSpecial:(BOOL)arg1;
- (id)displayName;
- (void)setPendingNameChange:(id)arg1;
- (BOOL)canBeRenamed;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)isPublicOrShared;
- (void)setIsPublicOrShared:(BOOL)arg1;
- (void)notifyForUnreadCount:(unsigned long long)arg1 andOldUnreadCount:(unsigned long long)arg2;
@property unsigned long long unreadCount; // @dynamic unreadCount;
- (void)restoreUnreadCountFromUserInfo;
- (BOOL)changeUnreadCountTo:(unsigned long long)arg1 previousUnreadCount:(unsigned long long *)arg2;
- (unsigned long long)increaseUnreadCountBy:(long long)arg1;
- (unsigned long long)increaseUnreadCountBy:(long long)arg1 previousUnreadCount:(unsigned long long *)arg2;
- (void)_loadUnseenCountsIfNeeded;
- (BOOL)unseenCountIsKnown;
- (unsigned long long)unseenCount;
- (void)setUnseenCount:(unsigned long long)arg1;
- (BOOL)changeUnseenCountTo:(unsigned long long)arg1;
- (BOOL)increaseUnseenCountBy:(long long)arg1;
@property(readonly) BOOL hasMessages;
- (id)children;
- (BOOL)hasChildren;
- (void)_invalidateVisibleChildrenCaches;
@property unsigned long long displayIndex; // @dynamic displayIndex;
- (BOOL)displayIndexCanBeModified;
- (unsigned long long)suggestedDisplayIndexForChildMailbox:(id)arg1;
- (void)_updateSortedChildrenIfNeeded;
- (unsigned long long)numberOfVisibleChildren;
- (unsigned long long)numberOfSortedChildren;
- (id)childEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)depthFirstEnumerator;
- (unsigned long long)numberOfChildren;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)visibleChildAtIndex:(unsigned long long)arg1;
- (id)sortedChildAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)mutableCopyOfChildren;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)arg1;
- (void)_deleteChildrenWithURLsIfInvalid:(id)arg1 fullPaths:(id)arg2;
- (BOOL)setChildren:(id)arg1;
- (void)invalidateChildren;
- (void)sortChildren;
- (id)parent;
- (void)setParent:(id)arg1;
- (BOOL)hasAlternateParent;
- (void)flushCriteria;
- (id)deepCopy;
- (void)setRepresentedAccount:(id)arg1;
- (id)representedAccount;
- (id)account;
- (id)applescriptAccount;
- (BOOL)isValid;
- (void)invalidate;
- (BOOL)isContainer;
- (BOOL)isStore;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isPlainSmartMailbox;
- (BOOL)isSpecialSmartMailbox;
- (id)_stringByAppendingPathComponentsForAccount:(id)arg1 root:(struct __CFTree *)arg2 prefix:(id)arg3 separator:(id)arg4 pathExtension:(id)arg5;
- (id)accountRelativePath;
- (id)fullPathNonNil;
- (id)fullPath;
- (id)realFullPath;
- (id)tildeAbbreviatedPath;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)URL;
- (id)URLStringWithAccount:(id)arg1;
- (id)URLString;
- (long long)compareWithMailboxUid:(id)arg1;
- (long long)indexToInsertChildMailboxUid:(id)arg1;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isStoreConvertibleToFolder;
- (id)description;
@property int type;
- (BOOL)isRSSMailboxOrFolder;
- (BOOL)shouldMaintainMessageTypeUnity;
- (BOOL)preferredMessageType;
- (BOOL)isVisible;
- (BOOL)isIndexable;
- (void)_updateDontIndexFlagFile;
- (id)_loadUserInfo;
- (void)_userInfoDidLoad:(id)arg1;
- (id)userInfoObjectForKey:(id)arg1;
- (BOOL)parentStoresUserInfo;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (void)saveUserInfo;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfo;
- (void)_saveMailboxesWithDirtyUserInfo;
- (void)_saveMailboxesWithDirtyUserInfoWithDelay;
- (BOOL)_userInfoIsDirty;
- (void)_setUserInfoIsDirty:(BOOL)arg1;
- (id)ancestralAccount;
- (id)criteria;
- (id)updatedCriteria:(id)arg1;
@property(readonly) Criterion *criterion;
- (void)setCriteria:(id)arg1;
- (id)abGroupsUsedInCriteria;
- (BOOL)criteriaAreValid:(id *)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)addressBookDidChange:(id)arg1;
- (id)store;
- (id)storeCreateIfNeeded:(BOOL)arg1;
- (BOOL)isStoreReadOnlyCreateIfNeeded:(BOOL)arg1;
- (id)toDoStore;
- (BOOL)failedToOpen;
- (id)openFailureError;
- (void)setFailedToOpen:(BOOL)arg1 error:(id)arg2;
- (id)copyWithZone:(id)arg1;
- (BOOL)allowsMoveDeletedMessagesToTrash;
@property BOOL storeIsReadOnly; // @synthesize storeIsReadOnly=_storeIsReadOnly;
@property(retain) NSString *syncId; // @synthesize syncId;
@property(retain) NSString *uniqueId; // @synthesize uniqueId;
@property long long smartMailboxVersion; // @synthesize smartMailboxVersion=_smartMailboxVersion;
@property unsigned long long attributes; // @synthesize attributes=_attributes;

@end
