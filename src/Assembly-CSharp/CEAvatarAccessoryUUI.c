
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEAvatarAccessoryUUI::CEAvatarAccessoryUUI_Enter
               (CEAvatarAccessoryUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__ILogger);
    func_?(&StringLiteral_Enter_);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.logger;
  EStack_2.klass = (Enum__Class *)TypeInfo__EditorEvent;
  iStack_3 = (this->fields)._.stateType;
  EStack_2.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pEStack_4 = (Enum__Class *)
              mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_Enter_,str1,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger *)0x0) {
    EStack_2.monitor = (MonitorData *)&UNK_?;
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar6 = pIVar1->klass;
  uVar7 = 0;
  uVar8 = (pIVar6->_1).interface_offsets_count;
  if (uVar8 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        pIVar9 = &pIVar6->vtable + pIVar6->interfaceOffsets[uVar7].offset;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  EStack_2.monitor = (MonitorData *)0x0;
  EStack_2.klass = (Enum__Class *)TypeInfo__ILogger;
  pIVar9 = (ILogger__VTable *)func_?(pIVar1);
code_?:
  EStack_2.monitor = (MonitorData *)(pIVar9->Log).method;
  EStack_2.klass = pEStack_4;
  (*(pIVar9->Log).methodPtr)(pIVar1);
  return;
}

