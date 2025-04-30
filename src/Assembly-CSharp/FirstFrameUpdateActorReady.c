
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
    pAVar1 = (this->fields).callbacks;
    if (pAVar1 != (Action *)0x0) {
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
code_?:
    pDStack3 = (Delegate *)func_?();
    pAStack4 = unaff_ESI;
  }
  else {
    pMVar5 = (pMVar2->fields).playerContainer;
    if (pMVar5 == (MVPlayerContainer *)0x0) goto code_?;
    a = (pMVar5->fields).OnLocalPlayerReady;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__,
               (MethodInfo *)0x0);
    pDStack3 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    _pDStack00000018 = CONCAT44(TypeInfo__System__Action,pDStack3);
    if (pDStack3 == (Delegate *)0x0) {
      pDStack3 = (Delegate *)&(this_00->fields)._._.extra_arg;
      pAStack4 = (Action__Class *)0x0;
      *(void **)pDStack3 = (void *)0x0;
      func_?();
      return;
    }
    pDVar6 = (Delegate *)0x0;
    if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
      pDVar6 = pDStack3;
    }
    if (pDVar6 == (Delegate *)0x0) goto code_?;
    ppvVar7 = &(this_00->fields)._._.extra_arg;
    *ppvVar7 = pDVar6;
    pDVar6 = (Delegate *)0x0;
    if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
      pDVar6 = pDStack3;
    }
    pAStack4 = TypeInfo__System__Action;
    if (pDVar6 != (Delegate *)0x0) {
      pDStack3 = (Delegate *)ppvVar7;
      pAStack4 = (Action__Class *)pDVar6;
      func_?();
      return;
    }
  }
  _pDStack00000018 = func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

