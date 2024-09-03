
/* String Arg(Int32) */

String * Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_Arg
                   (TextCommand_Command *this,int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppSStack_1 = &::StringLiteral__;
    func_?();
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields).commandComponents;
  if (pSVar2 == (String__Array *)0x0) {
    ppSStack_1 = (String **)&stack0xfffffffc;
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pSVar6 = (String *)(*pcVar5)();
    return pSVar6;
  }
  if ((int)pSVar2->max_length <= (int)(i + 1U)) {
    return ::StringLiteral__;
  }
  if (i + 1U < pSVar2->max_length) {
    return pSVar2->vector[i + 1];
  }
  ppSStack_1 = (String **)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Int32 get_ArgCount() */

int32_t Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_get_ArgCount
                  (TextCommand_Command *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).commandComponents;
  if (pSVar2 != (String__Array *)0x0) {
    return pSVar2->max_length - 1;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* String get_Name() */

String * Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_get_Name
                   (TextCommand_Command *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).commandComponents;
  if (pSVar2 == (String__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pSVar6 = (String *)(*pcVar5)();
    return pSVar6;
  }
  if (pSVar2->max_length != 0) {
    return pSVar2->vector[0];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* TextCommand+Command op_Implicit(String) */

TextCommand_Command *
Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_op_Implicit
          (String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextCommand__Command);
    cRam_? = '\x01';
  }
  if (commandLine != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Split
                       (commandLine,0x20,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    method_00 = TypeInfo__TextCommand__Command;
    pTVar2 = (TextCommand_Command *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pTVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pTVar2->fields).commandComponents = pSVar1;
    func_?(&pTVar2->fields,pSVar1);
    return pTVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (TextCommand_Command *)(*pcVar3)();
  return pTVar2;
}

