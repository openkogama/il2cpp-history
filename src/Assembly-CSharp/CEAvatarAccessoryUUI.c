
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEAvatarAccessoryUUI::CEAvatarAccessoryUUI_Enter
               (CEAvatarAccessoryUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogger);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enter_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.logger;
  EStack_2.klass = (Enum__Class *)TypeInfo__EditorEvent;
  iStack_3 = (this->fields)._.stateType;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Enter_,pSVar4,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = 0;
  pIVar7 = pIVar1->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        pIVar9 = &pIVar7->vtable + pIVar7->interfaceOffsets[uVar6].offset;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pIVar9 = (ILogger__VTable *)FUN_?(pIVar1);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar9->Log).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,pSVar4,(pIVar9->Log).method,UNRECOVERED_JUMPTABLE);
  return;
}

