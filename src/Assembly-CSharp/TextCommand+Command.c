
/* String Arg(Int32) */

String * Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_Arg
                   (TextCommand_Command *this,int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).commandComponents;
  if (pSVar1 == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if ((int)pSVar1->max_length <= i + 1) {
    return ::StringLiteral__;
  }
  if (i + 1U < (uint)pSVar1->max_length) {
    return pSVar1->vector[(longlong)i + 1];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Int32 get_ArgCount() */

int32_t Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_get_ArgCount
                  (TextCommand_Command *this,MethodInfo *method)

{
  pSVar1 = (this->fields).commandComponents;
  if (pSVar1 != (String__Array *)0x0) {
    return (int)pSVar1->max_length + -1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* String get_Name() */

String * Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_get_Name
                   (TextCommand_Command *this,MethodInfo *method)

{
  pSVar1 = (this->fields).commandComponents;
  if (pSVar1 == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if ((int)pSVar1->max_length != 0) {
    return pSVar1->vector[0];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* TextCommand+Command op_Implicit(String) */

TextCommand_Command *
Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_op_Implicit
          (String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (commandLine == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (TextCommand_Command *)(*pcVar1)();
    return pTVar2;
  }
  auStackX_8[0] = 0x20;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_3._pointer._value = auStackX_8;
  RStack_3._length = 1;
  RStack_3._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::String::String_SplitInternal
                     (commandLine,&RStack_3,0x7fffffff,StringSplitOptions__Enum_None,
                      (MethodInfo *)0x0);
  pTVar2 = (TextCommand_Command *)FUN_?(TypeInfo__TextCommand__Command);
  bVar5 = iRam_? != 0;
  (pTVar2->fields).commandComponents = pSVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&pTVar2->fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return pTVar2;
}

