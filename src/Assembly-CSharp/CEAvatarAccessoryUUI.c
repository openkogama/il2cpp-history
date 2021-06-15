
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEAvatarAccessoryUUI::CEAvatarAccessoryUUI_Enter
               (CEAvatarAccessoryUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.logger;
  this = (CEAvatarAccessoryUUI *)(this->fields)._.stateType;
  arg1 = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Enter_,arg1,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger_1 *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = pIVar1->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        ppMVar7 = &(&pIVar1->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].Log.method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?(pIVar1,TypeInfo__ILogger,0);
code_?:
  (*(code *)*ppMVar7)(pIVar1,pSVar2,ppMVar7[1]);
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEAvatarAccessoryUUI::CEAvatarAccessoryUUI_Exit
               (CEAvatarAccessoryUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  return;
}

