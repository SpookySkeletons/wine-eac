#include "psapi.h"

//#include "windef.h"
//#include "winbase.h"
//#include "winreg.h"
//#include "winnt.h"
//#include "winternl.h"
//#include "winnls.h"
#include <windows.h>

BOOL  WINAPI EnumProcesses(DWORD* one, DWORD two, DWORD* three)
{
  return K32EnumProcesses(one, two, three);
}


BOOL  WINAPI EnumProcessModules(HANDLE one, HMODULE* two, DWORD three, LPDWORD four)
{
  return K32EnumProcessModules(one, two, three, four);
}


BOOL  WINAPI EnumProcessModulesEx(HANDLE one, HMODULE* two, DWORD three, LPDWORD four, DWORD five)
{
  return K32EnumProcessModulesEx(one, two, three, four, five);
}


DWORD WINAPI GetModuleBaseNameA(HANDLE one, HMODULE two, LPSTR three, DWORD four)
{
  return K32GetModuleBaseNameA(one, two, three, four);
}


DWORD WINAPI GetModuleBaseNameW(HANDLE one, HMODULE two, LPWSTR three, DWORD four)
{
  return K32GetModuleBaseNameW(one, two, three, four);
}


DWORD WINAPI GetModuleFileNameExA(HANDLE one, HMODULE two, LPSTR three, DWORD four)
{
  return K32GetModuleFileNameExA(one, two, three, four);
}


DWORD WINAPI GetModuleFileNameExW(HANDLE one, HMODULE two, LPWSTR three, DWORD four)
{
  return K32GetModuleFileNameExW(one, two, three, four);
}


BOOL  WINAPI GetModuleInformation(HANDLE one, HMODULE two, LPMODULEINFO three, DWORD four)
{
  return K32GetModuleInformation(one, two, three, four);
}


BOOL  WINAPI EmptyWorkingSet(HANDLE one)
{
  return K32EmptyWorkingSet(one);
}


BOOL  WINAPI QueryWorkingSet(HANDLE one, PVOID two, DWORD three)
{
  return K32QueryWorkingSet(one, two, three);
}


BOOL  WINAPI QueryWorkingSetEx(HANDLE one, PVOID two, DWORD three)
{
  return K32QueryWorkingSetEx(one, two, three);
}


BOOL  WINAPI InitializeProcessForWsWatch(HANDLE one)
{
  return K32InitializeProcessForWsWatch(one);
}


BOOL  WINAPI GetWsChanges(HANDLE one, PPSAPI_WS_WATCH_INFORMATION two, DWORD three)
{
  return K32GetWsChanges(one, two, three);
}


DWORD WINAPI GetMappedFileNameW(HANDLE one, LPVOID two, LPWSTR three, DWORD four)
{
  return K32GetMappedFileNameW(one, two, three, four);
}


DWORD WINAPI GetMappedFileNameA(HANDLE one, LPVOID two, LPSTR three, DWORD four)
{
  return K32GetMappedFileNameA(one, two, three, four);
}


BOOL  WINAPI EnumDeviceDrivers(LPVOID* one, DWORD two, LPDWORD three)
{
  return K32EnumDeviceDrivers(one, two, three);
}


DWORD WINAPI GetDeviceDriverBaseNameA(LPVOID one, LPSTR two, DWORD three)
{
  return K32GetDeviceDriverBaseNameA(one, two, three);
}


DWORD WINAPI GetDeviceDriverBaseNameW(LPVOID one, LPWSTR two, DWORD three)
{
  return K32GetDeviceDriverBaseNameW(one, two, three);
}


DWORD WINAPI GetDeviceDriverFileNameA(LPVOID one, LPSTR two, DWORD three)
{
  return K32GetDeviceDriverFileNameA(one, two, three);
}


DWORD WINAPI GetDeviceDriverFileNameW(LPVOID one, LPWSTR two, DWORD three)
{
  return K32GetDeviceDriverFileNameW(one, two, three);
}


BOOL  WINAPI GetProcessMemoryInfo(HANDLE one, PPROCESS_MEMORY_COUNTERS two, DWORD three)
{
  return K32GetProcessMemoryInfo(one, two, three);
}


BOOL  WINAPI GetPerformanceInfo(PPERFORMANCE_INFORMATION one, DWORD two)
{
  return K32GetPerformanceInfo(one, two);
}


BOOL  WINAPI EnumPageFilesA(PENUM_PAGE_FILE_CALLBACKA one, LPVOID two)
{
  return K32EnumPageFilesA(one, two);
}


BOOL  WINAPI EnumPageFilesW(PENUM_PAGE_FILE_CALLBACKW one, LPVOID two)
{
  return K32EnumPageFilesW(one, two);
}


DWORD WINAPI GetProcessImageFileNameA(HANDLE one, LPSTR two, DWORD three)
{
  return K32GetProcessImageFileNameA(one, two, three);
}


DWORD WINAPI GetProcessImageFileNameW(HANDLE one, LPWSTR two, DWORD three)
{
  return K32GetProcessImageFileNameW(one, two, three);
}


