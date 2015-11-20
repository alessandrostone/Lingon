/*
 * Lingon
 *
 * Copyright 2005-2008 Peter Borg
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

#import <Cocoa/Cocoa.h>


@interface LINInterfaceController : NSObject {
	IBOutlet NSTreeController *__weak plistsTreeController;
	IBOutlet NSOutlineView *__weak plistsOutlineView;
	IBOutlet NSWindow *__weak mainWindow;
	IBOutlet NSWindow *__weak whichFolderSheet;
	IBOutlet NSMatrix *__weak whichFolderMatrix;
	IBOutlet NSTextField *__weak labelTextField;
	IBOutlet NSView *__weak basicView;
	IBOutlet NSView *__weak expertView;
	IBOutlet NSSplitView *__weak splitView;
	IBOutlet NSTextView *__unsafe_unretained expertTextView;
	IBOutlet NSImageView *__weak expertValidPlistIcon;
	IBOutlet NSTextField *__weak expertTextField;
	IBOutlet NSButton *__weak modeButton;
	IBOutlet NSPopUpButton *__weak insertParameterPopUp;
	NSImage *__weak validIcon;
	NSImage *__weak notValidIcon;
	NSArray *insertParametersArray;
}

@property (weak, readonly) IBOutlet NSTreeController *plistsTreeController;
@property (weak, readonly) IBOutlet NSOutlineView *plistsOutlineView;
@property (weak, readonly) IBOutlet NSWindow *mainWindow;
@property (weak, readonly) IBOutlet NSWindow *whichFolderSheet;
@property (weak, readonly) IBOutlet NSMatrix *whichFolderMatrix;
@property (weak, readonly) IBOutlet NSTextField *labelTextField;
@property (weak, readonly) IBOutlet NSView *basicView;
@property (weak, readonly) IBOutlet NSView *expertView;
@property (weak, readonly) IBOutlet NSSplitView *splitView;
@property (unsafe_unretained, readonly) IBOutlet NSTextView *expertTextView;
@property (weak, readonly) IBOutlet NSImageView *expertValidPlistIcon;
@property (weak, readonly) IBOutlet NSTextField *expertTextField;
@property (weak, readonly) IBOutlet NSButton *modeButton;
@property (weak, readonly) IBOutlet NSPopUpButton *insertParameterPopUp;
@property (weak) NSImage *validIcon;
@property (weak) NSImage *notValidIcon;
@property  NSArray *insertParametersArray;

+ (LINInterfaceController *)sharedInstance;
- (IBAction)setPathAction:(id)sender;
- (IBAction)cancelWhichFolderAction:(id)sender;
- (IBAction)createWhichFolderAction:(id)sender;
- (IBAction)switchView:(id)sender;
- (void)changeViewWithAnimationForOldView:(NSView *)oldView newView:(NSView *)newView;

@end
