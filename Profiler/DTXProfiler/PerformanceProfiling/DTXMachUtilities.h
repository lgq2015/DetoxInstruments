//
//  DTXMachUtilities.h
//  DTXProfiler
//
//  Created by Leo Natan (Wix) on 04/09/2017.
//  Copyright © 2017 Wix. All rights reserved.
//

#import <mach/mach.h>

#define DTXMaxFrames 2048

int DTXCallStackSymbolsForMachThread(thread_act_t thread, void** symbols);
