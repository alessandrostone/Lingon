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


@interface LINMainController : NSObject
{
	BOOL currentPlistHasUnsavedChanges;
	NSTimer *hideNoUpdateAvailableTextFieldTimer;
	NSTimer *checkForUpdateTimer;	
	NSMutableDictionary *plistChangesDictionary;
	BOOL hasInsertedView;
}

@property BOOL currentPlistHasUnsavedChanges;
@property (copy) NSMutableDictionary *plistChangesDictionary;
@property BOOL hasInsertedView;

+ (LINMainController *)sharedInstance;
- (void)basicInitialisation;
- (void)checkForUpdate;
- (void)currentPlistChanged;
- (void)resetCurrentPlistChanged;

@end
