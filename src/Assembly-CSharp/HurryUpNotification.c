
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Initialize
               (HurryUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__HurryUpNotification__DestroyNotification__);
    func_?(&MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  object = (Delegate *)this;
  this = (HurryUpNotification *)CONCAT13(0x11,this._0_3_);
  (((HurryUpNotification *)object)->fields)._.timeSinceStart = 0.0;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?(pOVar1);
    (((HurryUpNotification *)object)->fields).timeStamp = *piVar3;
    uStack_4 = CONCAT13(4,(undefined3)uStack_4);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_4 + 3);
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?(pOVar1);
    (((HurryUpNotification *)object)->fields).timeLeftFromTimeStamp = *piVar3;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    iVar6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar5,(MethodInfo *)0x0);
    unaff_EBX = (Action_1_IWinningCondition___Class *)
                (int)((float)(((((HurryUpNotification *)object)->fields).timeLeftFromTimeStamp +
                              (((HurryUpNotification *)object)->fields).timeStamp) - iVar6) /
                     _UNK_?);
    if (10 < (int)unaff_EBX) {
      pNVar7 = (((HurryUpNotification *)object)->fields).fader;
      if (pNVar7 != (NotificationFade *)0x0) {
        (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
        pCVar8 = (pNVar7->fields).group;
        (pNVar7->fields).playing = 1;
        if (pCVar8 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar8,0.0,(MethodInfo *)0x0);
          (pNVar7->fields).currentTime = 0.0;
          goto code_?;
        }
      }
      goto code_?;
    }
    pNVar7 = (((HurryUpNotification *)object)->fields).countdownFader;
    if (pNVar7 == (NotificationFade *)0x0) goto code_?;
    (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
    pCVar8 = (pNVar7->fields).group;
    (pNVar7->fields).playing = 1;
    if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar8,0.0,(MethodInfo *)0x0);
    (pNVar7->fields).currentTime = 0.0;
    iVar9 = (*(((HurryUpNotification *)object)->klass->vtable).get_Lifetime.methodPtr)
                      (object,(((HurryUpNotification *)object)->klass->vtable).get_Lifetime.method);
    (((HurryUpNotification *)object)->fields)._.timeSinceStart =
         (float)(iVar9 - (int)unaff_EBX) - _UNK_?;
code_?:
    pNVar7 = (((HurryUpNotification *)object)->fields).fader;
    if (pNVar7 == (NotificationFade *)0x0) goto code_?;
    this = (HurryUpNotification *)(pNVar7->fields).OnFinished;
    unaff_EBX = (Action_1_IWinningCondition___Class *)func_?(TypeInfo__System__Action);
    if (unaff_EBX == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)unaff_EBX,(Object *)object,
               MethodInfo__HurryUpNotification__DestroyNotification__,(MethodInfo *)0x0);
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)this,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar10);
    pAVar11 = (Action *)0x0;
    if (pAVar10 == (Action *)0x0) {
      (pNVar7->fields).OnFinished = (Action *)0x0;
    }
    else {
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar10;
      }
      if (pAVar11 == (Action *)0x0) goto code_?;
      (pNVar7->fields).OnFinished = pAVar11;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar10);
      pAVar11 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar10;
      }
      if (pAVar11 == (Action *)0x0) goto code_?;
    }
    func_?(&(pNVar7->fields).OnFinished,pAVar11);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    this = (HurryUpNotification *)(pMVar5->fields).OnWinningConditionFulfilled;
    this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    unaff_EBX = (Action_1_IWinningCondition___Class *)0x0;
    if (this_01 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)object,
               MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
    object = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)this,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
    if (object == (Delegate *)0x0) {
      (pMVar5->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      in_stack_12 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
      method = (MethodInfo *)&(pMVar5->fields).OnWinningConditionFulfilled;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      func_?();
      return;
    }
    in_stack_12 = TypeInfo__System__Action<IWinningCondition>;
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    method = (MethodInfo *)object;
    pAVar13 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar13 != (Action_1_IWinningCondition_ *)0x0) {
      (pMVar5->fields).OnWinningConditionFulfilled = pAVar13;
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      in_stack_12 = TypeInfo__System__Action<IWinningCondition>;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      method = (MethodInfo *)object;
      in_stack_12 = (Action_1_IWinningCondition___Class *)func_?();
      if (in_stack_12 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    }
  }
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  method = (MethodInfo *)object;
  in_stack_12 = unaff_EBX;
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_OnDestroy
               (HurryUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_1_IWinningCondition___Class *)(pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    unaff_EDI = (Delegate *)0x0;
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_EDI == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
        pDStack4 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<IWinningCondition>;
      pDStack4 = unaff_EDI;
      pAVar5 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar5;
        unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = TypeInfo__System__Action<IWinningCondition>;
        pDStack4 = unaff_EDI;
        pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pDStack4 = unaff_EDI;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Update
               (HurryUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Sound___CountDown);
    func_?(&StringLiteral__00_00_00);
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    score = ((this->fields).timeLeftFromTimeStamp + (this->fields).timeStamp) - iVar1;
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (score,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    fVar2 = (float)score / _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uStack_3 = SUB84((double)fVar2,0);
    fVar4 = (float10)func_?();
    pTVar5 = (this->fields).timeText;
    iVar6 = (int)fVar4;
    if (pTVar5 != (Text *)0x0) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,uStack_3,(pTVar5->klass->vtable).set_text.method);
      if ((((float)score <= _UNK_?) && (iVar6 != (this->fields).previousSecondCount)) &&
         (900 < score + iVar6 * -1000)) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        audioSource = (this->fields).countDownSound;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if ((this_02 == (Transform *)0x0) ||
           (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0),
           this_01 == (AudioManager *)0x0)) goto code_?;
        AudioManager::AudioManager_Play_2
                  (this_01,StringLiteral_Sound___CountDown,audioSource,*pVVar7,(MethodInfo *)0x0);
      }
      if (-1 < score) {
code_?:
        (this->fields).previousSecondCount = iVar6;
        return;
      }
      pNVar8 = (this->fields).fader;
      if (pNVar8 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_OnDisable(pNVar8,(MethodInfo *)0x0);
        pNVar8 = (this->fields).countdownFader;
        if (pNVar8 != (NotificationFade *)0x0) {
          NotificationFade::NotificationFade_OnDisable(pNVar8,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

