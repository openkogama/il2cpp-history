
/* Void Command_AssetBundleCacheTest(TextCommand+Command) */

void Assembly-CSharp.dll::TextCommand::TextCommand_Command_AssetBundleCacheTest
               (TextCommand_Command *command,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Command_failed___0__expects_exac);
    func_?(&StringLiteral__0__is_not_a_valid_version_numbe);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if ((command != (TextCommand_Command *)0x0) &&
     (pSVar2 = (command->fields).commandComponents, pSVar2 != (String__Array *)0x0)) {
    if (pSVar2->max_length != 2) {
      if (pSVar2->max_length != 0) {
        pSVar3 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_Command_failed___0__expects_exac,
                            (Object *)pSVar2->vector[0],(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    pSVar2 = (command->fields).commandComponents;
    if (pSVar2 != (String__Array *)0x0) {
      pSVar3 = ::StringLiteral__;
      if (1 < (int)pSVar2->max_length) {
        if (pSVar2->max_length < 2) goto code_?;
        pSVar3 = pSVar2->vector[1];
      }
      bVar4 = mscorlib.dll::System::Int32::Int32_TryParse
                        (pSVar3,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pSVar2 = (command->fields).commandComponents;
        if (pSVar2 != (String__Array *)0x0) {
          if (pSVar2->max_length != 0) {
            pSVar3 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral__0__is_not_a_valid_version_numbe,(Object *)pSVar3,
                                (Object *)pSVar2->vector[0],(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          func_?(&
                          MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                         );
          cRam_? = '\x01';
        }
        pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
        if (pKVar5 != (KoGaMaSettingsContainer *)0x0) {
          currentStreamingAssetVersion = (pKVar5->fields).streamingAssetVersion;
          pKVar5 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
          if (pKVar5 != (KoGaMaSettingsContainer *)0x0) {
            (pKVar5->fields).streamingAssetVersion = currentStreamingAssetVersion + iVar1;
            this = (Action_3_Object_Single_Int32_ *)func_?();
            mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
                      (this,(Object *)0x0,
                       MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                       ,(MethodInfo *)0x0);
            AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
                      ((Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *)this,
                       currentStreamingAssetVersion,(MethodInfo *)0x0);
            return;
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
    pSVar1 = mscorlib.dll::System::String::String_Split
                       (commandLine,0x20,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    method_00 = TypeInfo__TextCommand__Command;
    command = (TextCommand_Command *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)command,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (command->fields).commandComponents = pSVar1;
    func_?(&command->fields,pSVar1);
    pSVar1 = (command->fields).commandComponents;
    if (pSVar1 != (String__Array *)0x0) {
      if (pSVar1->max_length == 0) goto code_?;
      if (pSVar1->vector[0] != (String *)0x0) {
        pSVar2 = mscorlib.dll::System::String::String_ToLower(pSVar1->vector[0],(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar2,StringLiteral__abctest,(MethodInfo *)0x0);
        if (bVar3 != 0) {
code_?:
          TextCommand_Command_AssetBundleCacheTest(command,(MethodInfo *)0x0);
          return;
        }
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar2,StringLiteral__assetbundlecachetest,(MethodInfo *)0x0);
        if (bVar3 != 0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&StringLiteral__0__is_not_a_valid_command_);
          cRam_? = '\x01';
        }
        pSVar1 = (command->fields).commandComponents;
        if (pSVar1 != (String__Array *)0x0) {
          if (pSVar1->max_length != 0) {
            pSVar2 = mscorlib.dll::System::String::String_Format
                               (StringLiteral__0__is_not_a_valid_command_,
                                (Object *)pSVar1->vector[0],(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
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

