
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((undefined1)avatarBuildModeRuntimeState == MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit)
  {
    pMVar1 = (this->fields).avatar;
    this_00 = (ScaleAnimationBase *)func_?(TypeInfo__MVBuildModeAvatarLocal__EditMode);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    *(undefined1 *)&(this_00->fields).state = 1;
    (this_00->fields).originalScale.x = 1.75;
    (this_00->fields).originalScale.y = 5.0;
    this_00[1].monitor = (MonitorData *)0x41200000;
    method_00 = TypeInfo__DoubleTapMovementChecker;
    this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)func_?();
    DoubleTapMovementChecker::DoubleTapMovementChecker__ctor
              ((DoubleTapMovementChecker *)this_01,(MethodInfo *)0x0);
    this_00[1].fields.OnScaleAnimationStopped = this_01;
    this_00[2].fields._._._._.m_CachedPtr = (void *)0x41a00000;
    this_00[2].fields.state = 0x41200000;
    this_00[2].fields.originalScale.x = 5.0;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields)._._._._.m_CachedPtr = pMVar1;
    pSVar2 = (ScaleAnimationBase__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    this_00[2].klass = pSVar2;
    this_00[1].fields.target = (Transform *)0x3f800000;
    this_00[1].fields.testState = 0x3f800000;
    return (MVBuildModeAvatarLocal_AvatarBuildModeBase *)this_00;
  }
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,StringLiteral_Not_implemented,(MethodInfo *)0x0);
  func_?(this_02,0,
                  MethodInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes__BuildModeFactory_MVBuildModeAvatarLocal__AvatarBuildModes_
                 );
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)(*pcVar3)();
  return pMVar4;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_FixedUpdate
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
              (pMVar1,movementMap,(pMVar1->klass->vtable).__unknown_3.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes_FrameUpdate
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               InputToInGameAction *interactionMap,MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_3.method)
              (pMVar1,interactionMap,(pMVar1->klass->vtable).__unknown_4.methodPtr);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  uVar2 = 0;
  pMVar3 = (this->fields).currentMode;
  if (pMVar3 != (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) {
    (*(code *)(pMVar3->klass->vtable).__unknown_1.method)
              (pMVar3,mode,(pMVar3->klass->vtable).__unknown_2.methodPtr);
    pMVar3 = (pMVar1->fields).currentMode;
    if (pMVar3 == (MVBuildModeAvatarLocal_AvatarBuildModeBase *)0x0) goto code_?;
    uVar2 = (*(code *)(pMVar3->klass->vtable).__unknown_4.method)(pMVar3,pMVar3->klass[1]._0.image);
  }
  this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)CONCAT13(uVar2,this._0_3_);
  pOVar4 = (Object *)
           func_?(TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral______________prevAvatarBuildMode,pOVar4,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar5,(MethodInfo *)0x0);
  uStack_6 = (undefined1)mode;
  pOVar4 = (Object *)func_?(TypeInfo__MVBuildModeAvatarLocal__AvatarBuildModes,&uStack_6);
  pSVar5 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral______________nextAvatarBuildMode,pOVar4,
                      (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    mode = _UNK_?;
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((undefined1)mode == MVBuildModeAvatarLocal_AvatarBuildModes__Enum_Edit) {
    pMVar7 = (pMVar1->fields).avatar;
    mode = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum)TypeInfo__MVBuildModeAvatarLocal__EditMode
    ;
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)&UNK_?;
    this_00 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      mode = _UNK_?;
      this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    *(undefined1 *)&(this_00->fields).state = 1;
    (this_00->fields).originalScale.x = 1.75;
    (this_00->fields).originalScale.y = 5.0;
    this_00[1].monitor = (MonitorData *)0x41200000;
    mode = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum)TypeInfo__DoubleTapMovementChecker;
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)&UNK_?;
    this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)func_?();
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0;
    DoubleTapMovementChecker::DoubleTapMovementChecker__ctor
              ((DoubleTapMovementChecker *)this_01,(MethodInfo *)0x0);
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0;
    this_00[1].fields.OnScaleAnimationStopped = this_01;
    this_00[2].fields._._._._.m_CachedPtr = (void *)0x41a00000;
    this_00[2].fields.state = 0x41200000;
    this_00[2].fields.originalScale.x = 5.0;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)mode);
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0;
    (this_00->fields)._._._._.m_CachedPtr = pMVar7;
    pSVar8 = (ScaleAnimationBase__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    this_00[2].klass = pSVar8;
    this_00[1].fields.target = (Transform *)0x3f800000;
    this_00[1].fields.testState = 0x3f800000;
    (pMVar1->fields).currentMode = (MVBuildModeAvatarLocal_AvatarBuildModeBase *)this_00;
    this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)this_00->klass[1]._0.image;
    uStack_6 = 0x10;
    (*(code *)(this_00->klass->vtable).Play.method)();
    return;
  }
  mode = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum)TypeInfo__System__Exception;
  this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)&UNK_?;
  this_02 = (IsolatedStorageException *)func_?();
  this = (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *)0x0;
  uStack_6 = 0x10;
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,StringLiteral_Not_implemented,(MethodInfo *)0x0);
  in_stack_9 =
       MethodInfo__MVBuildModeAvatarLocal__BuildModeAvatarLocalModes__BuildModeFactory_MVBuildModeAvatarLocal__AvatarBuildModes_
  ;
  in_stack_10 = 0;
  mode = (MVBuildModeAvatarLocal_AvatarBuildModes__Enum)&UNK_?;
  method = (MethodInfo *)this_02;
  func_?();
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVBuildModeAvatarLocal+BuildModeAvatarLocalModes(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+BuildModeAvatarLocalModes::
     MVBuildModeAvatarLocal_BuildModeAvatarLocalModes__ctor
               (MVBuildModeAvatarLocal_BuildModeAvatarLocalModes *this,
               MVBuildModeAvatarLocal *avatar,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).avatar = avatar;
  return;
}

