
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
  pAVar1 = (Action__Class *)(this->fields).countDownFader;
  (this->fields)._.timeSinceStart = 0.0;
  if (pAVar1 == (Action__Class *)0x0) {
code_?:
    pAStack2 = (Action *)func_?();
  }
  else {
    (pAVar1->_0).castClass = (Il2CppClass *)(pAVar1->_0).this_arg.data;
    this_00 = (CanvasGroup *)(pAVar1->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(pAVar1->_0).this_arg.attrs = 1;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (pAVar1->_0).element_class = (Il2CppClass *)0x0;
    pNVar3 = (this->fields).countDownFader;
    if (pNVar3 == (NotificationFade *)0x0) goto code_?;
    pAVar4 = (pNVar3->fields).OnFinished;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    pAStack5 = (Action__Class *)0x0;
    if (pAStack2 == (Action *)0x0) {
      (pNVar3->fields).OnFinished = (Action *)0x0;
code_?:
      pAStack2 = (Action *)&(pNVar3->fields).OnFinished;
      func_?();
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).countDownStartTime = fVar6;
      return;
    }
    pAVar4 = (Action *)pAStack5;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
    pAStack5 = TypeInfo__System__Action;
    if (pAVar4 == (Action *)0x0) goto code_?;
    (pNVar3->fields).OnFinished = pAVar4;
    pAStack5 = (Action__Class *)(Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAStack5 = (Action__Class *)pAStack2;
    }
    pAVar1 = TypeInfo__System__Action;
    if (pAStack5 != (Action__Class *)0x0) goto code_?;
  }
  pAStack5 = pAVar1;
  pAStack2 = (Action *)func_?();
  pAStack5 = extraout_ECX;
code_?:
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
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    if (0.0 <= fVar1) {
code_?:
      dStack_4 = (double)((ulonglong)(uint)IStack_6.m_value << 0x20);
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar3 = (this->fields).countdownText;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)();
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

