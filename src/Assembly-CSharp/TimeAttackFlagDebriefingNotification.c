
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Initialize
               (TimeAttackFlagDebriefingNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    in_stack_2 = extraout_ECX;
    in_stack_3 = extraout_EDX;
  }
  else {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar6 = (int32_t *)func_?(pPVar4);
    pTVar7 = (this->fields).timeText;
    pSVar8 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (*piVar6,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,pSVar8,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar7 = (this->fields).descriptionText;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__String,pPVar4);
    if (pTVar7 == (Text *)0x0) goto code_?;
    pPVar9 = (Pool *)0x0;
    if (pPVar4 != (Pool *)0x0) {
      if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
        pPVar9 = pPVar4;
      }
      if (pPVar9 == (Pool *)0x0) goto code_?;
    }
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,pPVar9,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_Activate(pNVar10,(MethodInfo *)0x0);
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_PauseAt(pNVar10,3.0,(MethodInfo *)0x0);
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    a = (pNVar10->fields).OnFinished;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__,(MethodInfo *)0x0)
    ;
    iVar11 = 0;
    in_stack_2 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pDVar12 = (Delegate *)0x0;
    if (in_stack_2 == (Delegate *)0x0) {
code_?:
      *(Delegate **)(iVar11 + 0x28) = pDVar12;
      return;
    }
    if ((Action__Class *)in_stack_2->klass == TypeInfo__System__Action) {
      pDVar12 = in_stack_2;
    }
    in_stack_3 = TypeInfo__System__Action;
    if (pDVar12 != (Delegate *)0x0) goto code_?;
  }
  in_stack_13 = &UNK_?;
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnDestroy
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 == (FlagDebriefingControl *)0x0) {
      func_?(0);
      pAStack3 = extraout_ECX;
      pAStack4 = extraout_EDX;
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = (pFVar2->fields).OnFlagDebriefingEnd;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar6 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar6 == (Action *)0x0) goto code_?;
    }
    (pFVar2->fields).OnFlagDebriefingEnd = pAVar6;
  }
  return;
}


/* Void OnTimeFlagDebriefingEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnTimeFlagDebriefingEnd
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  pNVar1 = (this->fields).debriefingFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    fVar2 = (pNVar1->fields).pauseAt;
    fVar3 = (pNVar1->fields).duration;
    if (fVar2 != fVar3) {
      (pNVar1->fields).currentTime = fVar2;
      (pNVar1->fields).pauseAt = fVar3;
    }
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Start
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 != (FlagDebriefingControl *)0x0) {
    pAVar2 = (pFVar1->fields).OnFlagDebriefingEnd;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pFVar1->fields).OnFlagDebriefingEnd = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_StartCountDown
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
                 MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__,
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
  func_?(0);
  pAStack3 = extraout_ECX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Update
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

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

