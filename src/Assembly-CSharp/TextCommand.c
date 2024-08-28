
/* Void Command_AssetBundleCacheTest(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_AssetBundleCacheTest
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Command_failed___0__expects_exac);
    func_?(&StringLiteral__0__is_not_a_valid_version_numbe);
    cRam_? = '\x01';
  }
  if ((command != (TextCommand_Command *)0x0) &&
     (pSVar1 = (command->fields).commandComponents, pSVar1 != (String__Array *)0x0)) {
    if (pSVar1->max_length != 2) {
      if (pSVar1->max_length != 0) {
        pSVar2 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_Command_failed___0__expects_exac,
                            (Object *)pSVar1->vector[0],(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    pSVar1 = (command->fields).commandComponents;
    if (pSVar1 != (String__Array *)0x0) {
      pSVar2 = ::StringLiteral__;
      if (1 < (int)pSVar1->max_length) {
        if (pSVar1->max_length < 2) goto code_?;
        pSVar2 = pSVar1->vector[1];
      }
      bVar3 = mscorlib.dll::System::Int32::Int32_TryParse
                        (pSVar2,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        AssetBundleCacheTest::AssetBundleCacheTest_Run(0,(MethodInfo *)0x0);
        return;
      }
      pSVar1 = (command->fields).commandComponents;
      if (pSVar1 != (String__Array *)0x0) {
        if (pSVar1->max_length != 0) {
          pSVar2 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral__0__is_not_a_valid_version_numbe,(Object *)pSVar2,
                              (Object *)pSVar1->vector[0],(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Command_Invalid(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_Invalid
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((command != (TextCommand_Command *)0x0) &&
     (pSVar1 = (command->fields).commandComponents, pSVar1 != (String__Array *)0x0)) {
    if (pSVar1->max_length != 0) {
      message = mscorlib.dll::System::String::String_Format
                          (StringLiteral__0__is_not_a_valid_command_,(Object *)pSVar1->vector[0],
                           (MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
      return;
    }
    func_?();
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void NotifyUser(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_NotifyUser(String *msg,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,msg,(MethodInfo *)0x0);
  return;
}


/* Void Resolve(String) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Resolve(String *commandLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__abctest);
    func_?(&StringLiteral__assetbundlecachetest);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextCommand__Command);
    cRam_? = '\x01';
  }
  if (commandLine != (String *)0x0) {
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::String::String_Split
                       (commandLine,0x20,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    method_00 = TypeInfo__TextCommand__Command;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pOVar2 = pOVar2 + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    pOVar1 = pOVar2->klass;
    if (pOVar1 != (Object__Class *)0x0) {
      if ((pOVar1->_0).namespaze == (char *)0x0) goto code_?;
      pSVar3 = (String *)(pOVar1->_0).byval_arg.data.typeHandle;
      if (pSVar3 != (String *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar3,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar3,StringLiteral__abctest,(MethodInfo *)0x0);
        if ((bVar4 == 0) &&
           (bVar4 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar3,StringLiteral__assetbundlecachetest,(MethodInfo *)0x0),
           bVar4 == 0)) {
          if (cRam_? == '\0') {
            func_?(&StringLiteral__0__is_not_a_valid_command_);
            cRam_? = '\x01';
          }
          pOVar1 = pOVar2->klass;
          if (pOVar1 != (Object__Class *)0x0) {
            if ((pOVar1->_0).namespaze != (char *)0x0) {
              pOVar2 = (Object *)(pOVar1->_0).byval_arg.data.typeHandle;
              pSVar3 = StringLiteral__0__is_not_a_valid_command_;
code_?:
              pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,pOVar2,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?(&StringLiteral_Command_failed___0__expects_exac);
            func_?(&StringLiteral__0__is_not_a_valid_version_numbe);
            cRam_? = '\x01';
          }
          pOVar1 = pOVar2->klass;
          commandLine = (String *)0x0;
          if (pOVar1 != (Object__Class *)0x0) {
            if ((pOVar1->_0).namespaze != (char *)0x2) {
              if ((pOVar1->_0).namespaze != (char *)0x0) {
                pOVar2 = (Object *)(pOVar1->_0).byval_arg.data.typeHandle;
                pSVar3 = StringLiteral_Command_failed___0__expects_exac;
                goto code_?;
              }
              goto code_?;
            }
            if (cRam_? == '\0') {
              func_?(&::StringLiteral__);
              cRam_? = '\x01';
            }
            pOVar1 = pOVar2->klass;
            if (pOVar1 != (Object__Class *)0x0) {
              pcVar5 = (pOVar1->_0).namespaze;
              pSVar3 = ::StringLiteral__;
              if (1 < (int)pcVar5) {
                if (pcVar5 < (char *)0x2) goto code_?;
                pSVar3 = *(String **)&(pOVar1->_0).byval_arg.attrs;
              }
              bVar4 = mscorlib.dll::System::Int32::Int32_TryParse
                                (pSVar3,(int32_t *)&commandLine,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                AssetBundleCacheTest::AssetBundleCacheTest_Run
                          ((int32_t)commandLine,(MethodInfo *)0x0);
                return;
              }
              pOVar1 = pOVar2->klass;
              if (pOVar1 != (Object__Class *)0x0) {
                if ((pOVar1->_0).namespaze != (char *)0x0) {
                  pSVar3 = mscorlib.dll::System::String::String_Format_1
                                     (StringLiteral__0__is_not_a_valid_version_numbe,
                                      (Object *)pSVar3,
                                      (Object *)(pOVar1->_0).byval_arg.data.typeHandle,
                                      (MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

