
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
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pNVar1 = (this->fields).countDownFader;
  if (pNVar1 == (NotificationFade *)0x0) {
code_?:
    pAStack2 = (Action *)func_?();
    pAStack3 = unaff_ESI;
  }
  else {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).countDownFader;
    if (pNVar1 == (NotificationFade *)0x0) goto code_?;
    pAVar4 = (pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAStack2 == (Action *)0x0) {
      (pNVar1->fields).OnFinished = (Action *)0x0;
code_?:
      pAStack2 = (Action *)&(pNVar1->fields).OnFinished;
      pAStack3 = (Action__Class *)pAVar4;
      func_?();
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).countDownStartTime = fVar5;
      return;
    }
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar4 == (Action *)0x0) goto code_?;
    (pNVar1->fields).OnFinished = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  pAStack2 = (Action *)func_?();
  pAStack3 = extraout_ECX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  func_?((double)fVar1);
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    if (0.0 <= fVar1) {
code_?:
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar3 = (this->fields).countdownText;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)();
      this_00 = (this->fields).countDownFader;
      if (this_00 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Unpause(this_00,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

