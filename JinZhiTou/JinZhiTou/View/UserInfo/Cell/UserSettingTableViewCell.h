//
//  UserSettingTableViewCell.h
//  JinZhiTou
//
//  Created by air on 15/8/7.
//  Copyright (c) 2015年 金指投. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserSettingTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UISwitch *switchView;
@property(assign,nonatomic)BOOL isEnabled;
@end
