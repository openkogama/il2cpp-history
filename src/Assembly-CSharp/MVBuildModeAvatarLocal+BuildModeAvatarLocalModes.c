
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
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__EditMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((avatarBuildModeRuntimeState & 0xff) - MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit < 2)
  {
    buildModeAvatar = (this->fields).avatar;
    this_00 = (MVBuildModeAvatarLocal_EditMode *)
              FUN_?(TypeInfo__MVBuildModeAvatarLocal__EditMode);
    MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode__ctor
              (this_00,buildModeAvatar,(MethodInfo *)0x0);
    return (MVBuildModeAvatarLocal_AvatarBuildModeBase *)this_00;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Not_implemented);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes__BuildModeFactory_MVBuildModeAvatarLocal__AvatarBuildModes_
                             );
  FUN_?(this_01,uVar1);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)(*pcVar2)();
  return pMVar3;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_FrameUpdate
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).__unknown_3.methodPtr)
              (pMVar1,interactionMap,(pMVar1->klass->vtable).__unknown_3.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMode(MVBuildModeAvatarLocal+AvatarBuildModes) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_SetMode
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               MVBuildModeAvatarLocal_AvatarBuildModes__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral______________prevAvatarBuildMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral______________nextAvatarBuildMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).currentMode != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    pMVar2 = (this->fields).currentMode;
    (*(pMVar2->klass->vtable).__unknown_1.methodPtr)(pMVar2,(ulonglong)(byte)mode);
    pMVar2 = (this->fields).currentMode;
    if (pMVar2 == (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) goto code_?;
    bVar1 = (*(pMVar2->klass->vtable).__unknown_4.methodPtr)();
  }
  EStack_3.klass = (Enum__Class *)TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes;
  EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
  bStack_4 = bVar1;
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral______________prevAvatarBuildMode,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  EStack_3.klass = (Enum__Class *)TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes;
  EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
  bStack_4 = (byte)mode;
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral______________nextAvatarBuildMode,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal__EditMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (1 < (mode & 0xff) - MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit) {
    uVar6 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar6);
    pSVar5 = (String *)func_?(&StringLiteral_Not_implemented);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                MethodInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes__BuildModeFactory_MVBuildModeAvatarLocal__AvatarBuildModes_
                               );
    FUN_?(this_01,uVar6);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  buildModeAvatar = (this->fields).avatar;
  this_00 = (MVBuildModeAvatarLocal_EditMode *)
            FUN_?(TypeInfo__MVBuildModeAvatarLocal__EditMode);
  MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode__ctor
            (this_00,buildModeAvatar,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (this->fields).currentMode = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)this_00;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  pMVar2 = (this->fields).currentMode;
  if (pMVar2 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar2->klass->vtable).__unknown.methodPtr)
              (pMVar2,(ulonglong)bVar1,(pMVar2->klass->vtable).__unknown.method);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

