/**
 *  @file: idplatform.hpp
 *
 * \copyright
 *  Copyright (C) 2022	Joe Turner <joe.turner@io-industrial.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once
#include <stdio.h>

// _WIN32 should trigger for 32 and 64bit windows versions
#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(__NT__)
	#define PLATFORM_NAME "windows"		//windows
#endif

#if defined(__APPLE__) || defined(__MACH__)
#include<TargetConditionals.h>
#if defined(TARGET_IPHONE_SIMULATOR) || defined(TARGET_OS_MACCATALYST) || defined(TARGET_OS_IPHONE)
#define PLATFORM_NAME "iOS simulator"
#elif TARGET_OS_MAC
#define PLATFORM_NAME "Apple Mac"
#else
#define PLATFORM_NAME "unknown apple platform"
#endif
#endif

#if defined(__linux__)
#define PLATFORM_NAME  "Linux"
#endif