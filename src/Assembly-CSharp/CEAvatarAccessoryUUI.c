
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
  EStack_1.klass = (Enum__Class *)TypeInfo__EditorEvent;
  pIStack_2 = (ILogger *)(this->fields)._.stateType;
  pIVar3 = (this->fields)._.logger;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(StringLiteral_Enter_,str1,(MethodInfo *)0x0);
  if (pIVar3 != (ILogger *)0x0) {
    EStack_1.monitor = (MonitorData *)TypeInfo__ILogger;
    EStack_1.klass = (Enum__Class *)0x0;
    pIStack_2 = pIVar3;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

