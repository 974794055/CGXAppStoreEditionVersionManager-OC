Pod::Spec.new do |s|
s.name         = "CGXAppStoreEditionVersionManager"    #存储库名称
s.version      = "1.1.0"      #版本号，与tag值一致
s.summary      = "AppStore版本管理器"  #简介
s.description  = "AppStore版本管理器封装，快捷使用"  #描述
s.homepage     = "https://github.com/974794055/CGXAppStoreEditionVersionManager-OC"      #项目主页，不是git地址
s.license      = { :type => "MIT", :file => "LICENSE" }   #开源协议
s.author             = { "974794055" => "974794055@qq.com" }  #作者
s.platform     = :ios, "8.0"                  #支持的平台和版本号
s.source       = { :git => "https://github.com/974794055/CGXAppStoreEditionVersionManager-OC.git", :tag => s.version }         #存储库的git地址，以及tag值
s.requires_arc = true #是否支持ARC
s.frameworks = 'UIKit'

s.source_files = "CGXAppStoreEditionVersionManager", "CGXAppStoreEditionVersionManager/**/*.{h,m}" #需要托管的源代码路径

end




