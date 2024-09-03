
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
  pEVar4 = (Enum__Class *)
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
  uVar8._0_1_ = (pIVar6->_1).rank;
  uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        ppMVar9 = &(&pIVar1->klass->vtable)[pIVar1->klass->interfaceOffsets[uVar7].offset].Log.
                   method;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  EStack_2.monitor = (MonitorData *)0x0;
  EStack_2.klass = (Enum__Class *)TypeInfo__ILogger;
  ppMVar9 = (MethodInfo **)func_?(pIVar1);
code_?:
  EStack_2.monitor = (MonitorData *)ppMVar9[1];
  EStack_2.klass = pEVar4;
  (*(code *)*ppMVar9)(pIVar1);
  return;
}

