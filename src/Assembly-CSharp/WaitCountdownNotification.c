
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
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      pNVar1 = (this->fields).countDownFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        pAVar2 = (pNVar1->fields).OnFinished;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__WaitCountdownNotification__DestroyNotification__,(MethodInfo *)0x0)
          ;
          pAVar2 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pAVar2 == (Action *)0x0) {
            (pNVar1->fields).OnFinished = (Action *)0x0;
          }
          else {
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
            if (pAVar3 == (Action *)0x0) goto code_?;
          }
          func_?();
          pNVar1 = (this->fields).countDownFader;
          if (pNVar1 != (NotificationFade *)0x0) {
            (pNVar1->fields).pauseAt = 2.0;
            return;
          }
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
    fStack_3 = (float)(pMVar2->fields).timeLeft / _UNK_?;
    pTVar4 = (this->fields).countdownText;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uStack_5 = (double)fStack_3;
    fVar6 = (float10)func_?(uStack_5);
    uStack_5 = (double)CONCAT44((int)fVar6 + 1,SUB84((double)fVar6,0));
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)((int)&uStack_5 + 4),(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      pTVar7 = pTVar4->klass;
      pMVar8 = (pTVar7->vtable).set_text.method;
      (*(pTVar7->vtable).set_text.methodPtr)();
      if (0.0 < (float)pMVar8) {
code_?:
        Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
        (this->fields)._.timeSinceStart = 0.0;
        return;
      }
      pTVar4 = (this->fields).countdownText;
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)();
        pNVar9 = (this->fields).countDownFader;
        if (pNVar9 != (NotificationFade *)0x0) {
          if ((pNVar9->fields).pauseAt != (pNVar9->fields).duration) {
            (pNVar9->fields).currentTime = (pNVar9->fields).pauseAt;
            (pNVar9->fields).pauseAt = (pNVar9->fields).duration;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

