
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
  pAVar1 = (Action_1_IWinningCondition___Class *)this;
  (this->fields)._.timeSinceStart = 0.0;
  this = (HurryUpNotification *)CONCAT13(0x11,this._0_3_);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  pAVar3 = (Action__Class *)data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar4.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar5 = (int32_t *)func_?(TVar4.m_Index);
    (((HurryUpNotification *)pAVar1)->fields).timeStamp = *piVar5;
    uStack_6 = CONCAT13(4,(undefined3)uStack_6);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_6 + 3);
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pAVar3,pOVar2
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?(TVar4.m_Index);
    (((HurryUpNotification *)pAVar1)->fields).timeLeftFromTimeStamp = *piVar5;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    iVar7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    iVar8 = (int)((float)(((((HurryUpNotification *)pAVar1)->fields).timeLeftFromTimeStamp +
                           (((HurryUpNotification *)pAVar1)->fields).timeStamp) - iVar7) /
                  _UNK_?);
    if (iVar8 < 0xb) {
      pNVar9 = (((HurryUpNotification *)pAVar1)->fields).countdownFader;
      if (pNVar9 == (NotificationFade *)0x0) goto code_?;
      (pNVar9->fields).pauseAt = (pNVar9->fields).duration;
      pCVar10 = (pNVar9->fields).group;
      (pNVar9->fields).playing = 1;
      if (pCVar10 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar10,0.0,(MethodInfo *)0x0);
      (pNVar9->fields).currentTime = 0.0;
      iVar11 = (*(code *)(((HurryUpNotification *)pAVar1)->klass->vtable).get_Lifetime.method)
                        (pAVar1,(((HurryUpNotification *)pAVar1)->klass->vtable).Initialize.
                                 methodPtr);
      (((HurryUpNotification *)pAVar1)->fields)._.timeSinceStart =
           (float)(iVar11 - iVar8) - _UNK_?;
    }
    else {
      pNVar9 = (((HurryUpNotification *)pAVar1)->fields).fader;
      if (pNVar9 == (NotificationFade *)0x0) goto code_?;
      (pNVar9->fields).pauseAt = (pNVar9->fields).duration;
      pCVar10 = (pNVar9->fields).group;
      (pNVar9->fields).playing = 1;
      if (pCVar10 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar10,0.0,(MethodInfo *)0x0);
      (pNVar9->fields).currentTime = 0.0;
    }
    this = (HurryUpNotification *)(((HurryUpNotification *)pAVar1)->fields).fader;
    if (this == (HurryUpNotification *)0x0) goto code_?;
    a = (Action *)(this->fields).timeStamp;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pAVar1,MethodInfo__HurryUpNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    method = (MethodInfo *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    in_stack_12 = (Action__Class *)0x0;
    if ((Action__Class *)method == (Action__Class *)0x0) {
      (this->fields).timeStamp = 0;
code_?:
      method = (MethodInfo *)&(this->fields).timeStamp;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      func_?();
      this = (HurryUpNotification *)
             MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((MVNetworkGame *)this == (MVNetworkGame *)0x0) goto code_?;
      a_00 = (((MVNetworkGame *)this)->fields).OnWinningConditionFulfilled;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)pAVar1,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      pAVar3 = (Action__Class *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a_00,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar1 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar3 == (Action__Class *)0x0) {
        this[3].fields._.timeSinceStart = 0.0;
        in_stack_12 = (Action__Class *)0x0;
        unaff_EDI = (Action_1_IWinningCondition___Class *)this;
code_?:
        method = (MethodInfo *)
                 &(((HurryUpNotification *)((int)unaff_EDI + 0xa8))->fields)._.timeSinceStart;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        func_?();
        return;
      }
      in_stack_12 = (Action__Class *)TypeInfo__System__Action<IWinningCondition>;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      method = (MethodInfo *)pAVar3;
      fVar13 = (float)func_?();
      unaff_EDI = (Action_1_IWinningCondition___Class *)this;
      in_stack_12 = (Action__Class *)pAVar1;
      if (fVar13 != 0.0) {
        this[3].fields._.timeSinceStart = fVar13;
        pAVar1 = TypeInfo__System__Action<IWinningCondition>;
        in_stack_12 = (Action__Class *)TypeInfo__System__Action<IWinningCondition>;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        method = (MethodInfo *)pAVar3;
        in_stack_12 = (Action__Class *)func_?();
        if (in_stack_12 != (Action__Class *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pAVar3 = in_stack_12;
    if ((Action__Class *)(((Action__Class *)method)->_0).image == TypeInfo__System__Action) {
      pAVar3 = (Action__Class *)method;
    }
    in_stack_12 = TypeInfo__System__Action;
    if (pAVar3 != (Action__Class *)0x0) {
      (this->fields).timeStamp = (int32_t)pAVar3;
      in_stack_12 = (Action__Class *)0x0;
      if ((Action__Class *)(((Action__Class *)method)->_0).image == TypeInfo__System__Action) {
        in_stack_12 = (Action__Class *)method;
      }
      pAVar3 = TypeInfo__System__Action;
      if (in_stack_12 != (Action__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
code_?:
    func_?(TVar4.m_Index,TypeInfo__System__Int32);
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    method = (MethodInfo *)pAVar3;
    in_stack_12 = (Action__Class *)pAVar1;
    func_?();
    in_stack_12 = (Action__Class *)unaff_EDI;
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    method = (MethodInfo *)pAVar3;
    method = (MethodInfo *)func_?();
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    in_stack_12 = pAVar3;
    method = (MethodInfo *)func_?();
    in_stack_12 = extraout_ECX;
  }
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  func_?();
code_?:
  func_?();
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

