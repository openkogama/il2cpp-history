
/* String Arg(Int32) */

String * Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_Arg
                   (TextCommand_Command *this,int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).commandComponents;
  if (pSVar1 != (String__Array *)0x0) {
    if ((int)pSVar1->max_length <= (int)(i + 1U)) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      return TypeInfo__System__String->static_fields->Empty;
    }
    if (pSVar1 != (String__Array *)0x0) {
      if (i + 1U < pSVar1->max_length) {
        return pSVar1->vector[i + 1];
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* TextCommand+Command(String[]) */

void Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
               (TextCommand_Command *this,String__Array *commandComponents,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).commandComponents = commandComponents;
  return;
}


/* Int32 get_ArgCount() */

int32_t Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_get_ArgCount
                  (TextCommand_Command *this,MethodInfo *method)

{
  pSVar1 = (this->fields).commandComponents;
  if (pSVar1 != (String__Array *)0x0) {
    return pSVar1->max_length - 1;
  }
  func_?(0);
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
    func_?(0);
  }
  else if (pSVar1->max_length != 0) {
    return pSVar1->vector[0];
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* TextCommand+Command op_Implicit(String) */

TextCommand_Command *
Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command_op_Implicit
          (String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator != (Char__Array *)0x0) {
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = 0x20;
    if (commandLine != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Split(commandLine,separator,(MethodInfo *)0x0);
      method_00 = TypeInfo__TextCommand__Command;
      this = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
      (this->fields)._._._._.m_CachedPtr = pSVar1;
      return (TextCommand_Command *)this;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pTVar4 = (TextCommand_Command *)(*pcVar3)();
  return pTVar4;
}

