
/* Void Log(String) */

void Assembly-CSharp.dll::LoggerManager+Logger::LoggerManager_Logger_Log
               (LoggerManager_Logger *this,String *message,MethodInfo *method)

{
  pLVar1 = (this->fields).manager;
  item = (this->fields).name;
  if (pLVar1 != (LoggerManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IAppender);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pLVar1->fields).appendAll == 0) {
      this_00 = (pLVar1->fields).interestingLoggers;
      if (this_00 == (HashSet_1_System_String_ *)0x0) goto code_?;
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Contains
                        ((HashSet_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                        );
      if (bVar2 == 0) {
        return;
      }
    }
    pIVar3 = (pLVar1->fields).appender;
    if (pIVar3 != (IAppender *)0x0) {
      FUN_?(0,TypeInfo__IAppender,pIVar3,item,message);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

