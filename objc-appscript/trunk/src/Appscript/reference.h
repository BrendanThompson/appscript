//
//  reference.h
//  appscript
//
//   Copyright (C) 2007-2008 HAS
//

#import "application.h"
#import "constant.h"
#import "specifier.h"


/**********************************************************************/
// Reference base


@interface ASReference : NSObject {
	id AS_appData;
	id AS_aemReference;
}

+ (id)referenceWithAppData:(id)appData aemReference:(id)aemReference;

- (id)initWithAppData:(id)appData aemReference:(id)aemReference;

- (NSAppleEventDescriptor *)AS_packSelf:(id)codecs;

- (id)AS_appData;

- (id)AS_aemReference;

// is target application running?
- (BOOL)isRunning;

// launch the target application without sending it the usual 'run' event;
// equivalent to 'launch' command in AppleScript.
- (BOOL)launchApplicationWithError:(NSError **)error; // may be nil

- (BOOL)launchApplication; // convenience shortcut for the above

// transaction support

- (BOOL)beginTransactionWithError:(NSError **)error;

- (BOOL)beginTransactionWithSession:(id)session error:(NSError **)error;

- (BOOL)endTransactionWithError:(NSError **)error;

- (BOOL)abortTransactionWithError:(NSError **)error;

@end


