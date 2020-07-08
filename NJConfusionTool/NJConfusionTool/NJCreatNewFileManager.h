////
//  NJConfusionTool
//
//  Created by NingJzzz on 2020/7/8.
//Copyright © 2020年 NingJzzz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NJCreatNewFileManager : NSObject

//创建文件夹路径
- (BOOL)creatNewFileRootDirectory:(NSString *)rootPath path:(NSString *)path;


//是否重命名工程
@property (nonatomic, assign) BOOL isNeedRenameProjectName;
//重命名工程名
@property (nonatomic, copy) NSString *novelProjectName;
//Assets路径
@property (nonatomic, copy) NSString *selectAssetsPath;
@property (nonatomic, copy) NSString *selectClassFilePath;
//选择的渠道
@property (nonatomic, assign) NSUInteger selectChannel;
//自动生成的类名前缀
@property (nonatomic, copy)  NSString *classNamePrefix;
//每个文件下生成类的包含方法的数量
@property (nonatomic, assign) NSUInteger  methodMinCount;
@property (nonatomic, assign) NSUInteger  methodMaxCount;
//每个文件下生成的类数量范围
@property (nonatomic, assign) NSUInteger  classMinCount;
@property (nonatomic, assign) NSUInteger  classMaxCount;

@end

NS_ASSUME_NONNULL_END
