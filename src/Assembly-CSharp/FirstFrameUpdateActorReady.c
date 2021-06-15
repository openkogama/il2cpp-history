
/* Void OnLocalPlayerReady() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::FirstFrameUpdateActorReady_OnLocalPlayerReady
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  (this->fields).localPlayerIsReady = 1;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::
     FirstFrameUpdateActorReady_UpdateControllerUpdate
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).localPlayerIsReady != 0) && ((this->fields).firstFrameCallbackDone == 0)) {
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).callbacks;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
    (this->fields).firstFrameCallbackDone = 1;
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  }
  return;
}


/* FirstFrameUpdateActorReady() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::FirstFrameUpdateActorReady__ctor
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 == (MVAvatar *)0x0) ||
     (pMVar1 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     pMVar1 == (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pAStack2 = (Action__Class *)0x0;
    func_?();
    pDStack3 = extraout_ECX;
    pAStack4 = extraout_EDX;
  }
  else {
    pAStack2 = TypeInfo__System__Action;
    pDVar5 = *(Delegate **)&(pMVar1->fields)._._.writeThrough;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__,
               (MethodInfo *)0x0);
    pDStack3 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   (pDVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDStack3 == (Delegate *)0x0) {
      _UNK_? = (Delegate *)0x0;
      return;
    }
    pDVar5 = (Delegate *)0x0;
    if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
      pDVar5 = pDStack3;
    }
    pAStack4 = TypeInfo__System__Action;
    if (pDVar5 != (Delegate *)0x0) {
      _UNK_? = pDVar5;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

