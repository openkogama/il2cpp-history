
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
      uVar4 = 0;
      uVar5 = (pIVar3->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (pIVar3->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IAppender) {
            pVVar6 = &(&pIVar3->klass->vtable)[pIVar3->klass->interfaceOffsets[uVar4].offset].Log;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)func_?(pIVar3,TypeInfo__IAppender,0);
code_?:
      (*pVVar6->methodPtr)(pIVar3,item,message,pVVar6->method);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

