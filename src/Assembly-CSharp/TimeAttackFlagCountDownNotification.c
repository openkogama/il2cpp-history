
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Initialize
               (TimeAttackFlagCountDownNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__);
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
                     MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__,
                     (MethodInfo *)0x0);
          pAVar2 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
          uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
          pAStack4 = (Action *)0x0;
          if (pAVar2 == (Action *)0x0) {
            (pNVar1->fields).OnFinished = (Action *)0x0;
code_?:
            ppAStack5 = &(pNVar1->fields).OnFinished;
            func_?();
            fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).countDownStartTime = fVar6;
            return;
          }
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAStack4 = pAVar2;
          }
          if (pAStack4 != (Action *)0x0) {
            (pNVar1->fields).OnFinished = pAStack4;
            uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
            pAStack4 = (Action *)0x0;
            if (pAVar2->klass == TypeInfo__System__Action) {
              pAStack4 = pAVar2;
            }
            if (pAStack4 != (Action *)0x0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack00000018 = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Update
               (TimeAttackFlagCountDownNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_GO_);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).countDownStartTime + _UNK_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar3 = (this->fields).countdownText;
  fVar1 = fVar1 - fVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_4 = (double)fVar1;
  fVar5 = (float10)func_?(dStack_4);
  IStack_6.m_value = (int)fVar5 + 1;
  mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(pTVar3->klass->vtable).set_text.methodPtr)();
    if (0.0 <= fVar1) {
code_?:
      dStack_4 = (double)((ulonglong)(uint)IStack_6.m_value << 0x20);
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar3 = (this->fields).countdownText;
    if (pTVar3 != (Text *)0x0) {
      (*(pTVar3->klass->vtable).set_text.methodPtr)();
      pNVar7 = (this->fields).countDownFader;
      if (pNVar7 != (NotificationFade *)0x0) {
        if ((pNVar7->fields).pauseAt != (pNVar7->fields).duration) {
          (pNVar7->fields).currentTime = (pNVar7->fields).pauseAt;
          (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
        }
        goto code_?;
      }
    }
  }
  dStack_4 = (double)CONCAT44(IStack_6.m_value,&UNK_?);
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

