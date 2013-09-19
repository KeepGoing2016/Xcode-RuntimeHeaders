/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXProjectModule.h>

#import "PBXImageGestureObserver-Protocol.h"
#import "PBXSelectionTarget-Protocol.h"
#import "XCSelectionSource-Protocol.h"

@class NSArray, NSBox, NSButton, NSImage, NSMutableArray, NSObject<PBXFileNavigatorHistoryDelegateProtocol>, NSPopUpButtonCell, NSString, PBXBookmark, PBXFileEditor, PBXHeaderBox, PBXImageGestureView, PBXLineBrowser, PBXNavigatorGroup, PBXTitleBannerView, XCBorderView, XCBuildAnalyzerResultsNavigator, XCClassNavigator, XCDebuggerControlView, XCIncrementalFinder, _PBXFileNavigatorProgressView;

@interface PBXFileNavigator : PBXProjectModule <PBXImageGestureObserver, PBXSelectionTarget, XCSelectionSource>
{
    NSBox *_navigationBar;
    NSButton *_gutterCap;
    NSButton *_prevButton;
    NSButton *_nextButton;
    XCBorderView *_editorViewBox;
    NSButton *_endCap;
    NSButton *_counterpartSwitchButton;
    NSButton *_classNavigatorButton;
    NSButton *_includedHeadersButton;
    NSButton *_bookmarksButton;
    NSButton *_breakpointsButton;
    NSButton *_cornerView;
    PBXLineBrowser *_lineBrowser;
    PBXImageGestureView *_scrollbarToggleSplitButton;
    NSMutableArray *_historyBookmarks;
    long long _historyCapacity;
    PBXBookmark *_bookmark;
    PBXFileEditor *_fileEditor;
    NSMutableArray *_previousBookmarksStack;
    NSMutableArray *_nextBookmarksStack;
    struct {
        unsigned int settingBookmark:1;
        unsigned int barHidden:1;
        unsigned int invalidated:1;
        unsigned int hasCounterpart:2;
        unsigned int hasCounterpartSymbolLabel:1;
        unsigned int hasExplicitProjectDocument:1;
        unsigned int selectedFilePopUpIndexIsInvalid:1;
        unsigned int reverseSymbolSortPref:1;
        unsigned int showAllOpenFiles:1;
        unsigned int hasBookmarks:1;
        unsigned int hasBreakpoints:1;
        unsigned int previousNavigationMenuIsInvalid:1;
        unsigned int nextNavigationMenuIsInvalid:1;
        unsigned int restoreSelectionForPendingBookmark:1;
        unsigned int windowHasUpdated:1;
        unsigned int showsNavigationButtons:1;
        unsigned int showsFilesPopUp:1;
        unsigned int showsTopLevelSymbolsPopUp:1;
        unsigned int showsBookmarksButton:1;
        unsigned int showsBreakpointsButton:1;
        unsigned int showsCounterpartButton:1;
        unsigned int showsClassNavigatorButton:1;
        unsigned int showsIncludedHeadersButton:1;
        unsigned int showsCornerView:1;
        unsigned int _reserved:7;
    } _navFlags;
    PBXNavigatorGroup *_navigatorGroup;
    NSMutableArray *_temporaryFileDocList;
    long long _selectedFilePopUpIndex;
    long long _selectedTopLevelSymbolsPopUpIndex;
    NSArray *_importedFiles;
    NSArray *_dependentFiles;
    long long _importsPopUpSelectedIndex;
    long long _classNavigatorPopUpSelectedIndex;
    Class _classNavigatorClass;
    XCClassNavigator *_classNavigator;
    NSString *_currentSymbolForClassNavigator;
    NSPopUpButtonCell *_symbolPopUpCell;
    PBXBookmark *_pendingBookmark;
    PBXTitleBannerView *_debugInfoTitleBanner;
    PBXHeaderBox *_headerSplitControl;
    BOOL _isHeaderSplitControlVisible;
    PBXHeaderBox *_navControlSplitBar;
    NSImage *_cachedSymbolImage;
    long long _cachedSymbolImageRow;
    _PBXFileNavigatorProgressView *_progress;
    XCDebuggerControlView *_debuggerControlBar;
    BOOL _isDebuggerControlBarVisible;
    XCIncrementalFinder *_incrementalFinder;
    BOOL _isIncrementalFinderBarVisible;
    XCBuildAnalyzerResultsNavigator *_buildAnalyzerResultsNavigator;
    BOOL _buildAnalyzerResultsNavigatorBarVisible;
    NSObject<PBXFileNavigatorHistoryDelegateProtocol> *_historyDelegate;
}

+ (id)toolbarLineBrowserIdentifier;
+ (id)_findProperlyCasedFile:(id)arg1 inDirectory:(id)arg2;
+ (id)_counterpartExtensionsForFile:(id)arg1;
+ (void)_keyBindingsChanged:(id)arg1;
+ (id)fileNavigator;
+ (id)fileNavigatorWithFileDocument:(id)arg1;
+ (id)fileNavigatorWithBookmark:(id)arg1;
+ (void)showHelpFile:(id)arg1;
+ (void)_showHelpFile:(id)arg1 inFileNavigator:(id)arg2 temp:(BOOL)arg3;
+ (id)appropriateFileNavigatorWithFileDocument:(id)arg1;
+ (id)appropriateFileNavigatorWithFileDocument:(id)arg1 projectDocument:(id)arg2 knownHelp:(BOOL)arg3;
+ (id)appropriateFileNavigatorWithBookmark:(id)arg1;
+ (id)appropriateFileNavigatorWithBookmark:(id)arg1 projectDocument:(id)arg2 knownHelp:(BOOL)arg3;
+ (id)allNavigatorsWithFileDocument:(id)arg1;
+ (id)allNavigatorsEditingFileDocument:(id)arg1;
+ (id)allNavigators;
+ (BOOL)navBarIsHidden;
+ (void)setNavBarIsHidden:(BOOL)arg1;
+ (void)setShowColumnPositionInLineBrowser:(BOOL)arg1;
+ (BOOL)showColumnPositionInLineBrowser;
+ (void)setAlwaysLoadCounterpartsInSameNavigator:(BOOL)arg1;
+ (BOOL)alwaysLoadCounterpartsInSameNavigator;
+ (void)setSortMethodsPopup:(BOOL)arg1;
+ (BOOL)sortMethodsPopup;
+ (BOOL)useIconsInMethodsPopup;
+ (BOOL)useFontFacesInMethodsPopup;
+ (BOOL)showUndoPastSaveWarning;
+ (void)_methodsListChanged:(id)arg1;
+ (void)_indexingDidUpdateFiles:(id)arg1;
+ (void)_indexWasRemoved:(id)arg1;
+ (void)_indexingDidReloadPersistentIndex:(id)arg1;
+ (void)_reloadUIForNavs:(id)arg1 inProject:(id)arg2;
+ (BOOL)useOldGoBackBehavior;
+ (void)initialize;
@property(nonatomic, getter=isBuildAnalyzerResultsNavigatorBarVisible) BOOL buildAnalyzerResultsNavigatorBarVisible; // @synthesize buildAnalyzerResultsNavigatorBarVisible=_buildAnalyzerResultsNavigatorBarVisible;
- (void)toggleBuildAnalyzerResultsNavigatorBarVisible:(BOOL)arg1;
@property(readonly, nonatomic) XCBuildAnalyzerResultsNavigator *buildAnalyzerResultsNavigator;
- (void)hideIncrementalFindBar:(id)arg1;
- (void)showIncrementalFindAndReplaceBar:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (BOOL)isIncrementalFinderBarVisible;
- (void)setIncrementalFinderBarVisible:(BOOL)arg1 withReplace:(BOOL)arg2;
- (id)incrementalFinder;
- (void)debuggerBarVisibilityChanged:(id)arg1;
- (void)debuggerStopped:(id)arg1;
- (void)debuggerStarted:(id)arg1;
- (void)setDebuggerControlBarVisible:(BOOL)arg1;
- (BOOL)debuggerControlBarVisible;
- (void)connectWithToolbarLineBrowser;
- (id)toolbarLineBrowser;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)eventSent:(id)arg1 toView:(id)arg2;
- (id)performAction:(id)arg1 withSelection:(id)arg2;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)fileReference;
- (void)_saveEditedDocumentIfNeeded;
- (void)saveUserDefaultConfiguration;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (void)_populateBookmarkArray:(id)arg1 withGUIDStringArray:(id)arg2;
- (id)contentConfigurationDictionary;
- (void)_addBookmarksFromArray:(id)arg1 toConfigurationDictionary:(id)arg2 forKey:(id)arg3;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)findDocumentationForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)findDeclarationsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)findDefinitionsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)jumpToSelectionDefinition:(id)arg1;
- (void)_findSymbolsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2 preferDeclarations:(BOOL)arg3 forDocumentation:(BOOL)arg4;
- (void)_presentSymbolArray:(id)arg1 atScreenPoint:(struct CGPoint)arg2 batchFinder:(id)arg3;
- (void)_symbolPopUpAction:(id)arg1;
- (void)_gotoDocumentationForSymbol:(id)arg1;
- (void)_gotoSymbol:(id)arg1;
- (unsigned long long)_indexOfSymbol:(id)arg1 inArray:(id)arg2;
- (unsigned long long)_indexOfCounterpartForSymbol:(id)arg1 inArray:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (void)_cleanUpDragIndication;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (void)editorSelectionDidChange;
- (void)selectMethod:(id)arg1;
- (void)_selectTopLevelSymbolAtIndex:(long long)arg1;
- (void)breakpointsPopUpAction:(id)arg1;
- (void)bookmarksPopUpAction:(id)arg1;
- (void)importsPopUpAction:(id)arg1;
- (void)classNavigatorPopUpAction:(id)arg1;
- (id)slideOutTabIconImage;
- (void)lineBrowser:(id)arg1 willUseMenu:(id)arg2 forColumn:(long long)arg3;
- (void)lineBrowser:(id)arg1 didDismissMenuForColumn:(long long)arg2;
- (void)lineBrowser:(id)arg1 willPopMenuForColumn:(long long)arg2;
- (void)lineBrowser:(id)arg1 itemWasSelectedAtRow:(long long)arg2 inColumn:(long long)arg3;
- (long long)lineBrowser:(id)arg1 indexOfSelectedRowInColumn:(long long)arg2;
- (id)lineBrowser:(id)arg1 imageAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (id)lineBrowser:(id)arg1 attributedTitleAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (id)lineBrowser:(id)arg1 titleAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (id)lineBrowser:(id)arg1 toolTipForColumn:(long long)arg2;
- (long long)lineBrowser:(id)arg1 numberOfRowsInColumn:(long long)arg2;
- (id)_methodsList;
- (void)_reloadBreakpointsUI;
- (void)_reloadBookmarksUI;
- (void)_reloadIndexingUI;
- (void)_reloadIndexingUIIfProject:(BOOL)arg1;
- (void)_reloadIndexingUIIfProject:(BOOL)arg1 project:(id)arg2;
- (void)updateClassNavigatorForProject:(id)arg1;
- (BOOL)enableClassNavigatorPopUp;
- (id)classNavigatorButton;
- (id)classNavigator;
- (void)setClassNavigatorClass:(Class)arg1;
- (void)_resetClassNavigatorSelection;
- (long long)_indexOfSelectedSymbolInClassNavigator;
- (void)_rebuildClassNavigatorData;
- (id)_containerSymbolForCursorLocation;
- (id)_containerSymbolForCursorLocationPreferringClassNameMatchingCurrentFilename:(BOOL)arg1;
- (void)_reloadMethodsList;
- (void)_reloadNavigationMenus;
- (void)menuNeedsUpdate:(id)arg1;
- (void)invalidateFileNavigator;
- (id)localModuleActions;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)addBreakpointTemplate:(id)arg1;
- (void)toggleEnableBreakpoint:(id)arg1;
- (void)toggleAddToBreakpoints:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (void)_addBookmarkSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)openInSeparateNavigator:(id)arg1;
- (void)popBreakpointsPopUp:(id)arg1;
- (void)popBookmarksPopUp:(id)arg1;
- (void)popIncludedHeadersPopUp:(id)arg1;
- (void)popNavigatorPopUp:(id)arg1;
- (void)popSymbolsPopUp:(id)arg1;
- (void)popLoadedFilesPopUp:(id)arg1;
- (void)closeCurrentFile:(id)arg1;
- (void)_fileDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)_confirmUndoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)printDocument:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)setNavigatorGroup:(id)arg1;
- (id)navigatorGroup;
- (void)setProjectDocument:(id)arg1;
- (void)_windowUpdated:(id)arg1;
- (id)projectDocument;
- (id)mainEditor;
- (void)makeEditorActive;
- (void)becomeActive;
- (id)fileEditor;
- (void)disassembleCurrentFile:(id)arg1;
- (void)preprocessCurrentFile:(id)arg1;
- (void)compileCurrentFile:(id)arg1;
- (void)syntaxCheckCurrentFile:(id)arg1;
- (void)toggleFileLock:(id)arg1;
- (void)switchToFileOrSymbolicCounterpartOfCurrentFile:(id)arg1;
- (void)switchToCounterpartOfCurrentFile:(id)arg1;
- (void)switchToSymbolicCounterpartOfCurrentFile:(id)arg1;
- (BOOL)_documentIsManipulatable;
- (id)_bookmarkForCounterpartOfCurrentSymbol;
- (id)referenceForCounterpartOfCurrentFile;
- (void)revealInClassBrowser:(id)arg1;
- (id)_containerSymbolForSymbol:(id)arg1;
- (id)_symbolForCursorLocation;
- (id)_symbolForCursorLocationPreferringClassNameMatchingFilename:(id)arg1;
- (id)_containerSymbolPrefixedNameForSymbol:(id)arg1;
- (void)takeCurrentBookmarkFrom:(id)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)handleMagnifyWithDeltaZ:(double)arg1 magnification:(double)arg2;
- (void)swipeWithEvent:(id)arg1;
- (void)handleSwipeWithDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)clearBookmarks:(id)arg1;
- (void)_clearBookmarksLater:(id)arg1;
- (BOOL)_historyDelegateClearBookmarks;
- (void)showHistoryForDocBookmark:(id)arg1;
- (id)nextBookmarksContent;
- (id)previousBookmarksContent;
- (void)nextFile:(id)arg1;
- (void)previousFile:(id)arg1;
- (unsigned long long)rIndexOfBestBookmarkOfDifferentFileInStack:(id)arg1;
- (unsigned long long)indexOfDifferentFileInStack:(id)arg1;
- (void)nextBookmarkButtonAction:(id)arg1;
- (void)previousBookmarkButtonAction:(id)arg1;
- (BOOL)_modifiersMeanNavigateByFile;
- (void)nextBookmark:(id)arg1;
- (void)previousBookmark:(id)arg1;
- (void)nextPopUpAction:(id)arg1;
- (void)prevPopUpAction:(id)arg1;
- (void)_navigateBookmarkStack:(id)arg1 intoStack:(id)arg2 index:(long long)arg3;
- (void)replaceFileDocument:(id)arg1 becomeActive:(BOOL)arg2;
- (void)replaceFileDocument:(id)arg1;
- (void)replaceBookmark:(id)arg1 restoreSelection:(BOOL)arg2;
- (void)replaceBookmark:(id)arg1 becomeActive:(BOOL)arg2;
- (void)replaceBookmark:(id)arg1;
- (BOOL)shouldEnablePreviousFileButton;
- (BOOL)shouldEnableNextFileButton;
- (BOOL)shouldEnablePreviousBookmarkButton;
- (BOOL)shouldEnableNextBookmarkButton;
- (id)historyDelegate;
- (void)setHistoryDelegate:(id)arg1;
- (void)invalidateNextPreviousAndHistoryBookmarkCaches;
- (void)_trimHistory;
- (void)_setHistoryCapacity:(id)arg1;
- (long long)historyCapacity;
- (void)_addHistoryBookmark:(id)arg1;
- (id)_historyBookmarks;
- (id)historyBookmarks;
- (id)_pendingBookmark;
- (id)bookmark;
- (void)rememberCurrentSelectionBookmark;
- (void)_replaceBookmark:(id)arg1 restoreSelection:(BOOL)arg2 updatePrevStack:(BOOL)arg3;
- (void)_replaceBookmark:(id)arg1;
- (void)pushCurrentBookmark;
- (id)_bestBookmarkForSimpleBookmark:(id)arg1;
- (void)_reconfigureSplitControls:(id)arg1;
- (void)moduleWasDisplayed;
- (void)_updateEditorWithCurrentBookmark;
- (void)_removeCurrentEditor;
- (void)update;
- (void)updateDebugInfoTitleBanner;
- (void)closeCurrentNavigator:(id)arg1;
- (void)splitCurrentNavigatorHorizontally:(id)arg1;
- (void)splitCurrentNavigator:(id)arg1;
- (void)_validateBar;
- (void)_validateIncludedHeadersButton;
- (void)_validateClassNavigatorButton;
- (void)setSupermodule:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)keyTabView;
- (void)_textViewGainedFirstResponder:(id)arg1;
- (void)viewDidLoad;
- (BOOL)showsCornerView;
- (void)setShowsCornerView:(BOOL)arg1;
- (BOOL)showsIncludedHeadersButton;
- (void)setShowsIncludedHeadersButton:(BOOL)arg1;
- (BOOL)showsClassNavigatorButton;
- (void)setShowsClassNavigatorButton:(BOOL)arg1;
- (BOOL)showsCounterpartButton;
- (void)setShowsCounterpartButton:(BOOL)arg1;
- (BOOL)showsBreakpointsButton;
- (void)setShowsBreakpointsButton:(BOOL)arg1;
- (BOOL)showsBookmarksButton;
- (void)setShowsBookmarksButton:(BOOL)arg1;
- (BOOL)showsTopLevelSymbolsPopUp;
- (void)setShowsTopLevelSymbolsPopUp:(BOOL)arg1;
- (BOOL)showsFilesPopUp;
- (void)setShowsFilesPopUp:(BOOL)arg1;
- (BOOL)showsNavigationButtons;
- (void)setShowsNavigationButtons:(BOOL)arg1;
- (id)_acceptableDragTypes;
- (void)_itemsChangedInProject:(id)arg1;
- (void)_showColumnPositionInLineBrowserDidChange:(id)arg1;
- (void)_viewFrameDidChange:(id)arg1;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (BOOL)revealReferencesInGroupTree:(id)arg1;
- (void)addCurrentFileToProject:(id)arg1;
- (void)updateHeader;
- (BOOL)isHeaderSplitControlVisible;
- (void)setHeaderSplitControlVisible:(BOOL)arg1;
- (void)toggleNavigationBarVisible:(id)arg1;
- (BOOL)isNavigationBarVisible;
- (void)setNavigationBarVisible:(BOOL)arg1;
- (void)tile;
- (void)_removeBuildAnalyzerResultsNavigatorBar;
- (void)_removeIncrementalFindBar;
- (void)_tileNavBarContents;
- (BOOL)isDebugInfoBarVisible;
- (void)_documentDidSave:(id)arg1;
- (void)_documentDidChangeDirtyState:(id)arg1;
- (void)_documentDidChangeAttributes:(id)arg1;
- (void)_documentDidOpen:(id)arg1;
- (void)_documentDidClose:(id)arg1;
- (void)_documentWillClose:(id)arg1;
- (BOOL)_purgeBookmarksEqualToBookmark:(id)arg1;
- (void)rebuildBookmarksPopup;
- (void)_invalidateSelectedFilePopUpIndex;
- (long long)_selectedFilePopUpIndex;
- (long long)_topLevelSymbolsPopUpColumn;
- (long long)_filesPopUpColumn;
- (void)setProgressPercent:(double)arg1;
- (void)setProgressIndicatorVisible:(BOOL)arg1;
- (id)description;
- (void)closeModule;
- (void)_removeDebuggerBar;
- (void)dealloc;
- (id)init;
- (id)initWithBookmark:(id)arg1;
- (id)selectedProjectItems;
- (BOOL)_shouldCloseDocIfReceiverCloses:(id)arg1 groupIsClosing:(BOOL)arg2;
- (BOOL)hasShownFileDocument:(id)arg1;

@end

