
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Initialize
               (TimeAttackFlagDebriefingNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__);
    cRam_? = '\x01';
  }
  this_01 = (Action__Class *)data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 == (Action__Class *)0x0) {
code_?:
    in_stack_2 = (Delegate *)func_?();
code_?:
    in_stack_3 = &UNK_?;
    in_stack_4 = this_01;
    in_stack_2 = (Delegate *)func_?();
    in_stack_4 = extraout_ECX;
  }
  else {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar6 = (int32_t *)func_?();
    pTVar7 = (this->fields).timeText;
    pSVar8 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (*piVar6,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar7->klass->vtable).set_text.method)(pTVar7,pSVar8);
    pTVar7 = (this->fields).descriptionText;
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (pTVar7 == (Text *)0x0) goto code_?;
    TVar9.m_Index = 0;
    if (TVar5.m_Index != 0) {
      if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
        TVar9 = TVar5;
      }
      if (TVar9.m_Index == 0) goto code_?;
    }
    (*(code *)(pTVar7->klass->vtable).set_text.method)(pTVar7,TVar9.m_Index);
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_Activate(pNVar10,(MethodInfo *)0x0);
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    (pNVar10->fields).pauseAt = 3.0;
    pNVar10 = (this->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    a = (pNVar10->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__,(MethodInfo *)0x0)
    ;
    in_stack_2 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (in_stack_2 == (Delegate *)0x0) {
      in_stack_4 = (Action__Class *)0x0;
      (this_00->fields)._._.method_info = (MethodInfo_1 *)0x0;
      in_stack_2 = (Delegate *)&(this_00->fields)._._.method_info;
      in_stack_3 = &UNK_?;
      func_?();
      return;
    }
    pDVar11 = (Delegate *)0x0;
    if ((Action__Class *)in_stack_2->klass == TypeInfo__System__Action) {
      pDVar11 = in_stack_2;
    }
    in_stack_4 = TypeInfo__System__Action;
    if (pDVar11 != (Delegate *)0x0) {
      (this_00->fields)._._.method_info = (MethodInfo_1 *)pDVar11;
      in_stack_4 = (Action__Class *)(Delegate *)0x0;
      if ((Action__Class *)in_stack_2->klass == TypeInfo__System__Action) {
        in_stack_4 = (Action__Class *)in_stack_2;
      }
      this_01 = TypeInfo__System__Action;
      if (in_stack_4 != (Action__Class *)0x0) {
        in_stack_2 = (Delegate *)&(this_00->fields)._._.method_info;
        in_stack_3 = &UNK_?;
        func_?();
        return;
      }
      goto code_?;
    }
  }
  in_stack_3 = &UNK_?;
  TVar5.m_Index = func_?();
code_?:
  func_?(TVar5.m_Index);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnDestroy
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 == (FlagDebriefingControl *)0x0) {
    uVar3 = func_?();
  }
  else {
    pAVar4 = (pFVar2->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Action,pAVar4);
    if (pAVar4 == (Action *)0x0) {
      (pFVar2->fields).OnFlagDebriefingEnd = (Action *)0x0;
      ppAStack5 = &(pFVar2->fields).OnFlagDebriefingEnd;
      pAStack6 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar4;
    }
    if (pAVar7 != (Action *)0x0) {
      (pFVar2->fields).OnFlagDebriefingEnd = pAVar7;
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar4);
      pAStack6 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAStack6 = pAVar4;
      }
      if (pAStack6 != (Action *)0x0) {
        ppAStack5 = &(pFVar2->fields).OnFlagDebriefingEnd;
        func_?();
        return;
      }
    }
  }
  _ppAStack00000014 = uVar3;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnTimeFlagDebriefingEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnTimeFlagDebriefingEnd
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pNVar2 = (this->fields).debriefingFader;
  if (pNVar2 != (NotificationFade *)0x0) {
    if ((pNVar2->fields).pauseAt != (pNVar2->fields).duration) {
      (pNVar2->fields).currentTime = (pNVar2->fields).pauseAt;
      (pNVar2->fields).pauseAt = (pNVar2->fields).duration;
    }
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Start
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__);
    cRam_? = '\x01';
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 == (FlagDebriefingControl *)0x0) {
    uVar2 = func_?();
  }
  else {
    pAVar3 = (pFVar1->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
    if (pAVar3 == (Action *)0x0) {
      (pFVar1->fields).OnFlagDebriefingEnd = (Action *)0x0;
      ppAStack4 = &(pFVar1->fields).OnFlagDebriefingEnd;
      pAStack5 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar3;
    }
    if (pAVar6 != (Action *)0x0) {
      (pFVar1->fields).OnFlagDebriefingEnd = pAVar6;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack5 = pAVar3;
      }
      if (pAStack5 != (Action *)0x0) {
        ppAStack4 = &(pFVar1->fields).OnFlagDebriefingEnd;
        func_?();
        return;
      }
    }
  }
  _ppAStack00000010 = uVar2;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_StartCountDown
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).countDownFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).countDownFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      pAVar2 = (pNVar1->fields).OnFinished;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      pAStack4 = (Action *)0x0;
      if (pAVar2 == (Action *)0x0) {
        (pNVar1->fields).OnFinished = (Action *)0x0;
code_?:
        ppAStack5 = &(pNVar1->fields).OnFinished;
        func_?();
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
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
  uVar3 = func_?();
code_?:
  _ppAStack00000014 = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Update
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

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

