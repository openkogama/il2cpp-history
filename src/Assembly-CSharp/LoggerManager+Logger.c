
/* Void Log(String) */

void Assembly-CSharp.dll::LoggerManager+Logger::LoggerManager_Logger_Log
               (LoggerManager_Logger *this,String *message,MethodInfo *method)

{
  pLVar1 = (this->fields).manager;
  item = (this->fields).name;
  if (pLVar1 != (LoggerManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                     );
      func_?(&TypeInfo__IAppender);
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
      pIVar4 = pIVar3->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IAppender) {
            ppMVar7 = &(&pIVar3->klass->vtable)[pIVar3->klass->interfaceOffsets[uVar5].offset].Log.
                       method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)func_?(pIVar3,TypeInfo__IAppender,0);
code_?:
      (*(code *)*ppMVar7)(pIVar3,item,message,ppMVar7[1]);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

