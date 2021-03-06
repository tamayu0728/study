/*** Copyright: OGIHARA Takeshi, Sept. 2011 ***/

#import <Foundation/Foundation.h>
#import <stdio.h>
#import <stdlib.h>
#import "speed.h"

id buf[ARRAYSIZE];

@interface Cell : NSObject {
    id next;
    char mass[MASS];
}
+ (Cell *)cellWithNext:(id)obj;
@end

@implementation Cell

- (id)initWithNext:(id)obj {
    self = [super init];
    next = obj;
    return self;
}

+ (Cell *)cellWithNext:(id)obj {
    return [[self alloc] initWithNext:obj];
}

@end

int main(void)
{
    int i, j;
    NSGarbageCollector *gc = [NSGarbageCollector defaultCollector];

    srandom(SEED);
    for (i = 0; i < LOOP; i++) {
        for (j = 0; j < LOOP; j++) {
            int idx = random() & ARRAYMASK;
            if (buf[idx] != nil && (random() & ACCIDENT) == 0) {
                buf[idx] = nil;
            }else {
                id t = buf[idx];
                buf[idx] = [Cell cellWithNext: t];
            }
        }
        [gc collectIfNeeded];
    }
    return 0;
}
