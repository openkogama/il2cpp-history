
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WaitCountdownNotification::WaitCountdownNotification_Initialize
               (WaitCountdownNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__WaitCountdownNotification__DestroyNotification__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).countDownFader;
  (this->fields)._.timeSinceStart = 0.0;
  if (pNVar1 == (NotificationFade *)0x0) {
code_?:
    func_?();
  }
  else {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).countDownFader;
    if (pNVar1 == (NotificationFade *)0x0) goto code_?;
    pAVar2 = (pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__WaitCountdownNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pNVar1->fields).OnFinished = (Action *)0x0;
code_?:
      func_?();
      pNVar1 = (this->fields).countDownFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        (pNVar1->fields).pauseAt = 2.0;
        return;
      }
      goto code_?;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
    (pNVar1->fields).OnFinished = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaitCountdownNotification::WaitCountdownNotification_Update
               (WaitCountdownNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_GO_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    fVar3 = (float)(pMVar2->fields).timeLeft / _UNK_?;
    pTVar4 = (this->fields).countdownText;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    func_?((double)fVar3);
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      pTVar5 = pTVar4->klass;
      pIVar6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar5->vtable).set_text.method)();
      if (0.0 < (float)pIVar6) {
code_?:
        Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
        (this->fields)._.timeSinceStart = 0.0;
        return;
      }
      pTVar4 = (this->fields).countdownText;
      if (pTVar4 != (Text *)0x0) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
        this_00 = (this->fields).countDownFader;
        if (this_00 != (NotificationFade *)0x0) {
          NotificationFade::NotificationFade_Unpause(this_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

