
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
  if ((undefined1)avatarBuildModeRuntimeState == MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit)
  {
    pMVar1 = (this->fields).avatar;
    pMVar2 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)
             func_?(TypeInfo__MVBuildModeAvatarLocal__EditMode);
    if (pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__DoubleTapMovementChecker);
        cRam_? = '\x01';
      }
      *(undefined1 *)&pMVar2[1].klass = 1;
      pMVar2[1].monitor = (MonitorData *)0x3fe00000;
      pMVar2[1].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x40a00000;
      pMVar2[3].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
      this_00 = (DoubleTapMovementChecker *)func_?(TypeInfo__DoubleTapMovementChecker);
      if (this_00 != (DoubleTapMovementChecker *)0x0) {
        DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)&pMVar2[6].monitor;
        pMVar2[6].monitor = (MonitorData *)this_00;
        func_?(pMVar3,this_00);
        pMVar2[7].monitor = (MonitorData *)0x41a00000;
        pMVar2[7].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
        pMVar2[8].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x40a00000;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pMVar2,ExceptionArgument__Enum_obj,pMVar3);
        (pMVar2->fields).buildModeAvatar = pMVar1;
        func_?(&pMVar2->fields,pMVar1);
        pMVar1 = (MVBuildModeAvatarLocal *)
                 UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0)
        ;
        pMVar2[6].fields.buildModeAvatar = pMVar1;
        func_?(&pMVar2[6].fields,pMVar1);
        pMVar2[5].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x3f800000;
        pMVar2[6].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x3f800000;
        return pMVar2;
      }
    }
    func_?();
  }
  uVar4 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar4);
  func_?(this_01);
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_2.method;
    pIStack_3 = movementMap;
    (*(pMStack_2->klass->vtable).__unknown_2.methodPtr)();
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_3.method;
    pIStack_3 = interactionMap;
    (*(pMStack_2->klass->vtable).__unknown_3.methodPtr)();
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
  uVar1 = 0;
  uStack_2 = uStack_2 & 0xffffff00;
  if ((this->fields).currentMode != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pMVar3 = (this->fields).currentMode;
    pMVar4 = pMVar3->klass;
    (*(pMVar4->vtable).__unknown_1.methodPtr)(pMVar3,mode,(pMVar4->vtable).__unknown_1.method);
    pMVar3 = (this->fields).currentMode;
    if (pMVar3 == (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) goto code_?;
    uVar1 = (*(pMVar3->klass->vtable).__unknown_4.methodPtr)
                      (pMVar3,(pMVar3->klass->vtable).__unknown_4.method);
    uStack_2 = CONCAT31(uStack_2._1_3_,uVar1);
  }
  EStack_5.klass = (Enum__Class *)TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes;
  EStack_5.monitor = (MonitorData *)0xffffffff;
  uStack_6 = uVar1;
  pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral______________prevAvatarBuildMode,pSVar7,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar7,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                     ((Enum *)&stack0xffffffe0,(MethodInfo *)0xffffffff);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral______________nextAvatarBuildMode,pSVar7,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar7,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((char)mode == '\x01') {
    pMVar3 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)func_?();
    if (pMVar3 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__DoubleTapMovementChecker);
        cRam_? = '\x01';
      }
      *(undefined1 *)&pMVar3[1].klass = 1;
      pMVar3[1].monitor = (MonitorData *)0x3fe00000;
      pMVar3[1].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x40a00000;
      pMVar3[3].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
      this_00 = (DoubleTapMovementChecker *)func_?(TypeInfo__DoubleTapMovementChecker);
      if (this_00 != (DoubleTapMovementChecker *)0x0) {
        DoubleTapMovementChecker::DoubleTapMovementChecker__ctor(this_00,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&pMVar3[6].monitor;
        pMVar3[6].monitor = (MonitorData *)this_00;
        func_?(method_00,this_00);
        pMVar3[7].monitor = (MonitorData *)0x41a00000;
        pMVar3[7].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x41200000;
        pMVar3[8].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x40a00000;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pMVar3,ExceptionArgument__Enum_obj,method_00);
        (pMVar3->fields).buildModeAvatar = (MVBuildModeAvatarLocal *)&UNK_?;
        func_?(&pMVar3->fields,&UNK_?);
        pMVar8 = (MVBuildModeAvatarLocal *)
                 UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0)
        ;
        pMVar3[6].fields.buildModeAvatar = pMVar8;
        func_?(&pMVar3[6].fields,pMVar8);
        pMVar3[5].fields.buildModeAvatar = (MVBuildModeAvatarLocal *)0x3f800000;
        pMVar3[6].klass = (MVBuildModeAvatarLocal_AvatarBuildModeBase__Class *)0x3f800000;
        (this->fields).currentMode = pMVar3;
        func_?(&this->fields,pMVar3);
        pMVar3 = (this->fields).currentMode;
        if (pMVar3 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
          (*(pMVar3->klass->vtable).__unknown.methodPtr)
                    (pMVar3,uStack_2,(pMVar3->klass->vtable).__unknown.method);
          return;
        }
      }
    }
  }
  else {
    func_?();
    this_01 = (Exception *)func_?();
    func_?();
    pSVar7 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar7,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

