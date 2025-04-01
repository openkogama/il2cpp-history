
/* MVBuildModeAvatarLocal+AvatarBuildModeBase
   BuildModeFactory(MVBuildModeAvatarLocal+AvatarBuildModes) */

MVBuildModeAvatarLocal_AvatarBuildModeBase *
Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_BuildModeFactory
          (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
          MVBuildModeAvatarLocal_AvatarBuildModes__Enum avatarBuildModeRuntimeState,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal__EditMode);
    cRam_? = '\x01';
  }
  if ((avatarBuildModeRuntimeState & 0xff) - MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit < 2)
  {
    pMVar1 = (this->fields).avatar;
    pMVar2 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)
             func_?(TypeInfo__MVBuildModeAvatarLocal__EditMode);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__DoubleTapMovementChecker);
      cRam_? = '\x01';
    }
    *(undefined1 *)&pMVar2[1].klass = 1;
    pMVar2[1].monitor = (MonitorData *)0x3fe00000;
    pMVar2[1].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x40a00000;
    pMVar2[3].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
    this_00 = (DoubleTapMovementChecker *)func_?(TypeInfo__DoubleTapMovementChecker);
    DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)&pMVar2[6].monitor;
    *(DoubleTapMovementChecker **)pMVar3 = this_00;
    func_?(pMVar3,this_00);
    pMVar2[7].monitor = (MonitorData *)0x41a00000;
    pMVar2[7].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
    pMVar2[8].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x40a00000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar2,ExceptionArgument__Enum_obj,pMVar3);
    (pMVar2->fields).buildModeAvatar = pMVar1;
    func_?(&pMVar2->fields,pMVar1);
    pMVar1 = (MVBuildModeAvatarLocal *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    pMVar2[6].fields.buildModeAvatar = pMVar1;
    func_?(&pMVar2[6].fields,pMVar1);
    pMVar2[5].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x3f800000;
    pMVar2[6].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x3f800000;
    return pMVar2;
  }
  uVar4 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar4);
  pMVar3 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Not_implemented);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar3);
  uVar4 = func_?(&
                          MethodInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes__BuildModeFactory_MVBuildModeAvatarLocal__AvatarBuildModes_
                         );
  func_?(this_01,uVar4);
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)(*pcVar5)();
  return pMVar2;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_FixedUpdate
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).__unknown_3.methodPtr;
    pIStack_3 = movementMap;
    (*(code *)(pMStack_2->klass->vtable).__unknown_2.method)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_FrameUpdate
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               InputToInGameAction *interactionMap,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).__unknown_4.methodPtr;
    pIStack_3 = interactionMap;
    (*(code *)(pMStack_2->klass->vtable).__unknown_3.method)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMode(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral______________prevAvatarBuildMode);
    func_?(&StringLiteral______________nextAvatarBuildMode);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentMode;
  pMVar2 = &this->fields;
  if (pMVar1 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
              (pMVar1,mode,(pMVar1->klass->vtable).__unknown_2.methodPtr);
    pMVar1 = pMVar2->currentMode;
    if (pMVar1 == (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) goto code_?;
    (*(code *)(pMVar1->klass->vtable).__unknown_4.method)(pMVar1,pMVar1->klass[1]._0.image);
  }
  EStack_3.klass = (Enum__Class *)TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes;
  EStack_3.monitor = (MonitorData *)0xffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral______________prevAvatarBuildMode,pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                     ((Enum *)&stack0xffffffe0,(MethodInfo *)0xffffffff);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral______________nextAvatarBuildMode,pSVar4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    mode = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum)
           &TypeInfo__MVBuildModeAvatarLocal__EditMode;
    func_?();
    cRam_? = '\x01';
  }
  if ((mode & 0xff) - MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit < 2) {
    value = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum__Class *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    *(undefined1 *)&(value->_0).namespaze = 1;
    (value->_0).byval_arg.data.__klassIndex = 0x3fe00000;
    (value->_0).byval_arg.attrs = 0;
    (value->_0).byval_arg.type = 0xa0;
    (value->_0).byval_arg.field_0x7 = 0x40;
    (value->_0).parent = (Il2CppClass *)0x41200000;
    this_00 = (DoubleTapMovementChecker *)func_?();
    DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&(value->_0).methods;
    *(DoubleTapMovementChecker **)method_00 = this_00;
    func_?();
    value->interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)0x41a00000;
    value->static_fields = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum__StaticFields *)0x41200000
    ;
    value->rgctx_data = (Il2CppRGCTXData *)0x40a00000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,method_00);
    ppcVar5 = &(value->_0).name;
    *ppcVar5 = (char *)this_00;
    func_?();
    EStack_3.monitor = (MonitorData *)&UNK_?;
    pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    EStack_3.monitor = (MonitorData *)&(value->_0).nestedTypes;
    *(Camera **)EStack_3.monitor = pCVar6;
    EStack_3.klass = (Enum__Class *)&UNK_?;
    func_?();
    (value->_0).events = (EventInfo *)0x3f800000;
    (value->_0).properties = (PropertyInfo *)0x3f800000;
    pMVar2->currentMode = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)value;
    EStack_3.klass = (Enum__Class *)value;
    func_?();
    pMVar1 = pMVar2->currentMode;
    if (pMVar1 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).__unknown.method)
                (pMVar1,ppcVar5,(pMVar1->klass->vtable).__unknown_1.methodPtr);
      return;
    }
  }
  else {
    func_?();
    this_01 = (Exception *)func_?();
    pSVar4 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

