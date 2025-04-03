
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
  object = this;
  (this->fields)._.timeSinceStart = 0.0;
  this = (TimeAttackFlagDebriefingNotification *)CONCAT13(4,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_02 = (Action__Class *)data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pDVar2 = (Delegate *)func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?(TVar3.m_Index);
    pTVar6 = (object->fields).timeText;
    pSVar7 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (*piVar5,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (pTVar6 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar6->klass->vtable).set_text.method)
              (pTVar6,pSVar7,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar6 = (object->fields).descriptionText;
    uStack_8 = CONCAT13(1,(undefined3)uStack_8);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_8 + 3);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__String,TVar3.m_Index);
    if (pTVar6 == (Text *)0x0) goto code_?;
    TVar9.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar9 = TVar3;
      }
      if (TVar9.m_Index == 0) goto code_?;
    }
    (*(code *)(pTVar6->klass->vtable).set_text.method)
              (pTVar6,TVar9.m_Index,
               (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_02 = (Action__Class *)(object->fields).debriefingFader;
    if (this_02 == (Action__Class *)0x0) goto code_?;
    (this_02->_0).castClass = (Il2CppClass *)(this_02->_0).this_arg.data;
    this_00 = (CanvasGroup *)(this_02->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(this_02->_0).this_arg.attrs = 1;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this_02->_0).element_class = (Il2CppClass *)0x0;
    pNVar10 = (object->fields).debriefingFader;
    if (pNVar10 == (NotificationFade *)0x0) goto code_?;
    (pNVar10->fields).pauseAt = 3.0;
    data = (Dictionary_2_System_Object_System_Object_ *)(object->fields).debriefingFader;
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    a = (Action *)(data->fields)._syncRoot;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,
               MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__,(MethodInfo *)0x0)
    ;
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pDVar2);
    if (pDVar2 == (Delegate *)0x0) {
      ppOVar11 = &(data->fields)._syncRoot;
      *ppOVar11 = (Object *)0x0;
      func_?(ppOVar11,0);
      return;
    }
    pDVar12 = (Delegate *)0x0;
    if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
      pDVar12 = pDVar2;
    }
    if (pDVar12 == (Delegate *)0x0) goto code_?;
    ppOVar11 = &(data->fields)._syncRoot;
    *ppOVar11 = (Object *)pDVar12;
    pDVar12 = (Delegate *)0x0;
    if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
      pDVar12 = pDVar2;
    }
    this_02 = TypeInfo__System__Action;
    if (pDVar12 != (Delegate *)0x0) {
      func_?(ppOVar11,pDVar12);
      return;
    }
  }
  uVar4 = func_?(pDVar2,this_02);
code_?:
  func_?(uVar4);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    ppAVar5 = &(pFVar2->fields).OnFlagDebriefingEnd;
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
    ppAStack6 = ppAVar5;
    if (pAVar4 == (Action *)0x0) {
      pAStack7 = (Action *)0x0;
      *ppAVar5 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar4;
    }
    if (pAVar8 != (Action *)0x0) {
      *ppAVar5 = pAVar8;
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar4);
      pAStack7 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar4;
      }
      if (pAStack7 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack0000000c = uVar3;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    fVar3 = (pNVar2->fields).pauseAt;
    fVar4 = (pNVar2->fields).duration;
    if (fVar3 != fVar4) {
      (pNVar2->fields).currentTime = fVar3;
      (pNVar2->fields).pauseAt = fVar4;
    }
    return;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?();
    pAStack2 = extraout_EDX;
  }
  else {
    pAVar3 = (pFVar1->fields).OnFlagDebriefingEnd;
    ppAVar4 = &(pFVar1->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      pAStack2 = (Action__Class *)0x0;
      *ppAVar4 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar3;
    }
    pAStack2 = TypeInfo__System__Action;
    if (pAVar5 != (Action *)0x0) {
      *ppAVar4 = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      pAStack2 = TypeInfo__System__Action;
      if (pAVar5 != (Action *)0x0) {
        pAStack2 = (Action__Class *)pAVar5;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pAVar1 = (Action__Class *)(this->fields).countDownFader;
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
               MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    _pAStack00000014 = CONCAT44(TypeInfo__System__Action,pAStack2);
    if (pAStack2 == (Action *)0x0) {
      pAStack5 = (Action__Class *)0x0;
      (pNVar3->fields).OnFinished = (Action *)0x0;
code_?:
      pAStack2 = (Action *)&(pNVar3->fields).OnFinished;
      func_?();
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).countDownStartTime = fVar6;
      return;
    }
    pAVar4 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar4 = pAStack2;
    }
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
  _pAStack00000014 = func_?();
code_?:
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
        fVar1 = (pNVar7->fields).pauseAt;
        fVar2 = (pNVar7->fields).duration;
        if (fVar1 != fVar2) {
          (pNVar7->fields).currentTime = fVar1;
          (pNVar7->fields).pauseAt = fVar2;
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

