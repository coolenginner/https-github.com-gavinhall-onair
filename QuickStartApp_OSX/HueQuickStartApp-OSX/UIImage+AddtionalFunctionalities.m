#import "UIImage+AddtionalFunctionalities.h"

@implementation NSImage (ImageAdditions)

+(NSImage *)swatchWithColor:(NSColor *)color size:(NSSize)size
{
    NSImage *image = [[NSImage alloc] initWithSize:size];
    [image lockFocus];
    [color drawSwatchInRect:NSMakeRect(0, 0, size.width, size.height)];
    [image unlockFocus];
    return image;
}

@end
