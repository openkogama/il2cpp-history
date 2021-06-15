
/* Void Command_AssetBundleCacheTest(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_AssetBundleCacheTest
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  version = 0;
  if ((command == (TextCommand_Command *)0x0) ||
     (pSVar1 = (command->fields).commandComponents, pSVar1 == (String__Array *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1->max_length != 2) {
      if (pSVar1 == (String__Array *)0x0) goto code_?;
      if (pSVar1->max_length != 0) {
        pSVar3 = pSVar1->vector[0];
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar3 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_Command_failed___0__expects_exac,(Object *)pSVar3,
                            (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      pSVar1 = (command->fields).commandComponents;
      cRam_? = '\x01';
    }
    if (pSVar1 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar1->max_length < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
code_?:
      bVar4 = mscorlib.dll::System::Int32::Int32_TryParse
                        (pSVar3,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        AssetBundleCacheTest::AssetBundleCacheTest_Run(version,(MethodInfo *)0x0);
        return;
      }
      pSVar1 = (command->fields).commandComponents;
      if (pSVar1 != (String__Array *)0x0) {
        if (pSVar1->max_length != 0) {
          arg1 = pSVar1->vector[0];
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral__0__is_not_a_valid_version_numbe,(Object *)pSVar3,
                              (Object *)arg1,(MethodInfo *)0x0);
          TextCommand_NotifyUser(pSVar3,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (1 < pSVar1->max_length) {
      pSVar3 = pSVar1->vector[1];
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Command_Invalid(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_Invalid
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((command == (TextCommand_Command *)0x0) ||
     (pSVar1 = (command->fields).commandComponents, pSVar1 == (String__Array *)0x0)) {
    func_?(0);
  }
  else if (pSVar1->max_length != 0) {
    pSVar2 = pSVar1->vector[0];
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Format
                       (StringLiteral__0__is_not_a_valid_command_,(Object *)pSVar2,(MethodInfo *)0x0
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void NotifyUser(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_NotifyUser(String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,msg,(MethodInfo *)0x0);
  return;
}


/* Void Resolve(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Resolve(String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length == 0) {
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    separator->vector[0] = 0x20;
    if (commandLine == (String *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    pSVar2 = mscorlib.dll::System::String::String_Split(commandLine,separator,(MethodInfo *)0x0);
    this = (ScaleAnimationBase *)func_?(TypeInfo__TextCommand__Command);
    ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,in_stack_3);
    (this->fields)._._._._.m_CachedPtr = pSVar2;
    if (pSVar2 == (String__Array *)0x0) goto code_?;
    if (pSVar2->max_length != 0) {
      if (pSVar2->vector[0] != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar2->vector[0],(MethodInfo *)0x0);
        if (pSVar4 != (String *)0x0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar4,StringLiteral__abctest,(MethodInfo *)0x0);
          if (bVar5 != 0) {
code_?:
            TextCommand_Command_AssetBundleCacheTest((TextCommand_Command *)this,(MethodInfo *)0x0);
            return;
          }
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar4,StringLiteral__assetbundlecachetest,(MethodInfo *)0x0);
          if (bVar5 != 0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pvVar6 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar6 != (void *)0x0) {
          if (*(int *)((int)pvVar6 + 0xc) != 0) {
            arg0 = *(Object **)((int)pvVar6 + 0x10);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar4 = mscorlib.dll::System::String::String_Format
                               (StringLiteral__0__is_not_a_valid_command_,arg0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

