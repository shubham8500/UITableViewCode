//
//  ViewController.h
//  TableView
//
//  Created by newput on 16/03/17.
//  Copyright © 2017 newput. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
  
    
}
@property (strong, nonatomic) NSMutableArray *data;

@property (strong, nonatomic)IBOutlet UITableView *tableview;

@end;

