# c-code —— C 语言练习工程

用 Visual Studio 2026 直接打开即可，不需要任何额外配置。

## 怎么用

1. 双击 `c-code.sln`（或 VS 里 `文件 → 打开 → 项目/解决方案`）
2. 按 **Ctrl + F5** = 编译并运行（不调试）
   按 **F5** = 编译并调试（会停断点，鹏哥讲调试时用这个）
3. 结果会弹出一个黑色控制台窗口

## 每节课新增一个文件

`解决方案资源管理器` → 右键 **源文件** → `添加` → `新建项`
→ 选 **C++ 文件(.cpp)** → 文件名写 **`lesson2.c`**（后缀必须是 `.c`）

⚠️ 别写成 `.cpp`，否则按 C++ 规则编译，C语言的一些语法报错会和鹏哥视频里不一致。

## 只想编译单个文件时（命令行）

```powershell
cd D:\仓库\c-code
# 打开 VS 开发者环境
& "C:\Program Files\Microsoft Visual Studio\18\Community\Common7\Tools\Launch-VsDevShell.ps1" -Arch amd64
cl main.c
.\main.exe
```

## 编译产物在哪

`x64\Debug\c-code.exe`，已在 `.gitignore` 里排除，不会误提交。

## 环境信息

- 编译器：MSVC 14.51.36231 (cl 19.51.36260 x64)
- 平台工具集：v145
- Windows SDK：10.0.26100.0
- 配置：Debug / Release，x64
