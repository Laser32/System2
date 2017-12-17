/**
 * -----------------------------------------------------
 * File        natives.h
 * Authors     David Ordnung
 * License     GPLv3
 * Web         http://dordnung.de
 * -----------------------------------------------------
 *
 * Copyright (C) 2013-2017 David Ordnung
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>
 */

#ifndef _NATIVES_H_
#define _NATIVES_H_

#include "extension.h"


cell_t NativeCopyFile(IPluginContext *pContext, const cell_t *params);

cell_t NativeCompress(IPluginContext *pContext, const cell_t *params);
cell_t NativeExtract(IPluginContext *pContext, const cell_t *params);

cell_t NativeExecuteThreaded(IPluginContext *pContext, const cell_t *params);
cell_t NativeExecuteFormattedThreaded(IPluginContext *pContext, const cell_t *params);
cell_t NativeExecuteOutput_GetOutput(IPluginContext *pContext, const cell_t *params);
cell_t NativeExecuteOutput_GetSize(IPluginContext *pContext, const cell_t *params);

cell_t NativeExecute(IPluginContext *pContext, const cell_t *params);
cell_t NativeExecuteFormatted(IPluginContext *pContext, const cell_t *params);
cell_t NativeExecuteCommand(std::string command, IPluginContext *pContext, const cell_t *params);

cell_t NativeGetGameDir(IPluginContext *pContext, const cell_t *params);
cell_t NativeGetOS(IPluginContext *pContext, const cell_t *params);

cell_t NativeGetStringMD5(IPluginContext *pContext, const cell_t *params);
cell_t NativeGetFileMD5(IPluginContext *pContext, const cell_t *params);
cell_t NativeGetStringCRC32(IPluginContext *pContext, const cell_t *params);
cell_t NativeGetFileCRC32(IPluginContext *pContext, const cell_t *params);

cell_t NativeURLEncode(IPluginContext *pContext, const cell_t *params);
cell_t NativeURLDecode(IPluginContext *pContext, const cell_t *params);

const sp_nativeinfo_t system2_natives[] =
{
    { "System2_CopyFile", NativeCopyFile },

    { "System2_Compress", NativeCompress },
    { "System2_Extract", NativeExtract },

    { "System2_ExecuteThreaded", NativeExecuteThreaded },
    { "System2_ExecuteFormattedThreaded", NativeExecuteFormattedThreaded },
    { "System2ExecuteOutput.GetOutput", NativeExecuteOutput_GetOutput },
    { "System2ExecuteOutput.Size.get", NativeExecuteOutput_GetSize },

    { "System2_Execute", NativeExecute },
    { "System2_ExecuteFormatted", NativeExecuteFormatted },

    { "System2_GetGameDir", NativeGetGameDir },
    { "System2_GetOS", NativeGetOS },

    { "System2_GetStringMD5", NativeGetStringMD5 },
    { "System2_GetFileMD5", NativeGetFileMD5 },
    { "System2_GetStringCRC32", NativeGetStringCRC32 },
    { "System2_GetFileCRC32", NativeGetFileCRC32 },

    { "System2_URLEncode", NativeURLEncode },
    { "System2_URLDecode", NativeURLDecode },
    { NULL, NULL },
};

#endif