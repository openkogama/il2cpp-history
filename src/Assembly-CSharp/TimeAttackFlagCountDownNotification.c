
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Initialize
               (TimeAttackFlagCountDownNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pNVar1 = (this->fields).countDownFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).countDownFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      pAVar2 = (pNVar1->fields).OnFinished;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__,
                 (MethodInfo *)0x0);
      pAStack3 =
           (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAStack3 == (Action *)0x0) {
code_?:
        (pNVar1->fields).OnFinished = pAVar2;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).countDownStartTime = fVar4;
        return;
      }
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      if (pAVar2 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pAStack3 = extraout_ECX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Update
               (TimeAttackFlagCountDownNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).countDownStartTime + _UNK_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar3 = (this->fields).countdownText;
  fVar1 = fVar1 - fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(fVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&stack0xfffffff8,0);
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3,uVar4);
    if (0.0 <= fVar1) {
code_?:
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar3 = (this->fields).countdownText;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3,StringLiteral_GO_);
      this_00 = (this->fields).countDownFader;
      if (this_00 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Unpause(this_00,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

