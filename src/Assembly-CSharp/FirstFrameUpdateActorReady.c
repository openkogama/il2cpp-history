
/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::
     FirstFrameUpdateActorReady_UpdateControllerUpdate
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if (((this->fields).localPlayerIsReady != 0) && ((this->fields).firstFrameCallbackDone == 0)) {
    if ((this->fields).callbacks != (Action *)0x0) {
      pAVar1 = (this->fields).callbacks;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    (this->fields).firstFrameCallbackDone = 1;
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      a = this_00;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__
                 ,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
        ppAStack6 = &(pMVar3->fields).OnLocalPlayerReady;
        pAStack7 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar4;
      }
      if (pAVar8 != (Action *)0x0) {
        (pMVar3->fields).OnLocalPlayerReady = pAVar8;
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
        pAStack7 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAStack7 = pAVar4;
        }
        if (pAStack7 != (Action *)0x0) {
          ppAStack6 = &(pMVar3->fields).OnLocalPlayerReady;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  _ppAStack00000020 = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

