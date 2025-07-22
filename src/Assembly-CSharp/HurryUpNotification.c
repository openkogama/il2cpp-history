
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
  pAVar1 = (Action__Class *)data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x11,data._0_3_);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (pAVar1 == (Action__Class *)0x0) goto code_?;
  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pAVar1,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar3.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar4 = (int32_t *)func_?();
    (this->fields).timeStamp = *piVar4;
    pOVar2 = (Object *)func_?(CONCAT13(4,(int3)TypeInfo__System__Byte));
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pAVar1,
                       pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar4 = (int32_t *)func_?();
    (this->fields).timeLeftFromTimeStamp = *piVar4;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    iVar6 = (int)((float)(((this->fields).timeLeftFromTimeStamp + (this->fields).timeStamp) - iVar5
                          ) / _UNK_?);
    if (iVar6 < 0xb) {
      pNVar7 = (this->fields).countdownFader;
      if (pNVar7 == (NotificationFade *)0x0) goto code_?;
      (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
      pCVar8 = (pNVar7->fields).group;
      (pNVar7->fields).playing = 1;
      if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar8,0.0,(MethodInfo *)0x0);
      (pNVar7->fields).currentTime = 0.0;
      iVar9 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                        (this,(this->klass->vtable).Initialize.methodPtr);
      (this->fields)._.timeSinceStart = (float)(iVar9 - iVar6) - _UNK_?;
    }
    else {
      pNVar7 = (this->fields).fader;
      if (pNVar7 == (NotificationFade *)0x0) goto code_?;
      (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
      pCVar8 = (pNVar7->fields).group;
      (pNVar7->fields).playing = 1;
      if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar8,0.0,(MethodInfo *)0x0);
      (pNVar7->fields).currentTime = 0.0;
    }
    data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).fader;
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    a = (Action *)(data->fields)._syncRoot;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__HurryUpNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    in_stack_10 =
         (Action__Class *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    in_stack_11 = (Action__Class *)0x0;
    if (in_stack_10 == (Action__Class *)0x0) {
      (data->fields)._syncRoot = (Object *)0x0;
code_?:
      in_stack_10 = (Action__Class *)&(data->fields)._syncRoot;
      in_stack_12 = &UNK_?;
      func_?();
      data = (Dictionary_2_System_Object_System_Object_ *)
             MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((MVNetworkGame *)data == (MVNetworkGame *)0x0) goto code_?;
      a_00 = (((MVNetworkGame *)data)->fields).OnWinningConditionFulfilled;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)this,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      pAVar1 = (Action__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a_00,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar13 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar1 == (Action__Class *)0x0) {
        data[4].klass = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        in_stack_11 = (Action__Class *)0x0;
        unaff_EDI = (Action_1_IWinningCondition___Class *)data;
code_?:
        in_stack_10 = (Action__Class *)((int)unaff_EDI + 0xc0);
        in_stack_12 = &UNK_?;
        func_?();
        return;
      }
      in_stack_11 = (Action__Class *)TypeInfo__System__Action<IWinningCondition>;
      in_stack_12 = &UNK_?;
      in_stack_10 = pAVar1;
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      unaff_EDI = (Action_1_IWinningCondition___Class *)data;
      in_stack_11 = (Action__Class *)pAVar13;
      if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        data[4].klass = pDVar14;
        this = (HurryUpNotification *)TypeInfo__System__Action<IWinningCondition>;
        in_stack_11 = (Action__Class *)TypeInfo__System__Action<IWinningCondition>;
        in_stack_12 = &UNK_?;
        in_stack_10 = pAVar1;
        in_stack_11 = (Action__Class *)func_?();
        if (in_stack_11 != (Action__Class *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pAVar1 = in_stack_11;
    if ((Action__Class *)(in_stack_10->_0).image == TypeInfo__System__Action) {
      pAVar1 = in_stack_10;
    }
    in_stack_11 = TypeInfo__System__Action;
    if (pAVar1 != (Action__Class *)0x0) {
      (data->fields)._syncRoot = (Object *)pAVar1;
      in_stack_11 = (Action__Class *)0x0;
      if ((Action__Class *)(in_stack_10->_0).image == TypeInfo__System__Action) {
        in_stack_11 = in_stack_10;
      }
      pAVar1 = TypeInfo__System__Action;
      if (in_stack_11 != (Action__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
code_?:
    func_?();
code_?:
    in_stack_12 = &UNK_?;
    in_stack_10 = pAVar1;
    in_stack_11 = (Action__Class *)this;
    func_?();
    in_stack_11 = (Action__Class *)unaff_EDI;
code_?:
    in_stack_12 = &UNK_?;
    in_stack_10 = pAVar1;
    in_stack_10 = (Action__Class *)func_?();
code_?:
    in_stack_12 = &UNK_?;
    in_stack_11 = pAVar1;
    in_stack_10 = (Action__Class *)func_?();
    in_stack_11 = extraout_ECX;
  }
  in_stack_12 = &UNK_?;
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        goto code_?;
      }
      pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_ESI == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack4 = (Action_1_IWinningCondition___Class *)0x0;
      }
      else {
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAVar3 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
          pDStack5 = unaff_ESI;
          pAStack4 = unaff_EDI;
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
        unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack4 == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      pDStack5 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
      func_?();
    }
  }
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
      (*(code *)(pTVar5->klass->vtable).set_text.method)
                (pTVar5,uStack_3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                );
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

