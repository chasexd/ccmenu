
#import <Cocoa/Cocoa.h>


@interface CCMProjectWindowController : NSObject 
{
	IBOutlet NSWindow			*window;
	IBOutlet NSTableView		*tableView;
	IBOutlet NSArrayController	*tableViewController;
}

- (NSToolbar *)createToolbar;
- (void)displayProjects:(NSArray *)projects;

- (IBAction)showWindow:(id)sender;
- (IBAction)forceBuild:(id)sender;

@end