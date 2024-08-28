
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
  object = (Action_1_IWinningCondition___Class *)this;
  (this->fields)._.timeSinceStart = 0.0;
  this = (HurryUpNotification *)CONCAT13(0x11,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = (Action__Class *)data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    method = (MethodInfo *)this_01;
    in_stack_2 = object;
    func_?();
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    method = (MethodInfo *)this_01;
    in_stack_2 = unaff_EDI;
    pDVar3 = (Delegate *)func_?();
  }
  else {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar6 = (int32_t *)func_?(TVar4.m_Index);
    (((HurryUpNotification *)object)->fields).timeStamp = *piVar6;
    uStack_7 = CONCAT13(4,(undefined3)uStack_7);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_7 + 3);
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar6 = (int32_t *)func_?(TVar4.m_Index);
    (((HurryUpNotification *)object)->fields).timeLeftFromTimeStamp = *piVar6;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    iVar8 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    unaff_EDI = (Action_1_IWinningCondition___Class *)
                (int)((float)(((((HurryUpNotification *)object)->fields).timeStamp - iVar8) +
                             (((HurryUpNotification *)object)->fields).timeLeftFromTimeStamp) /
                     _UNK_?);
    if (10 < (int)unaff_EDI) {
      this_01 = (Action__Class *)(((HurryUpNotification *)object)->fields).fader;
      if (this_01 != (Action__Class *)0x0) {
        (this_01->_0).castClass = (Il2CppClass *)(this_01->_0).this_arg.data;
        pCVar9 = (CanvasGroup *)(this_01->_0).byval_arg.data.typeHandle;
        *(undefined1 *)&(this_01->_0).this_arg.attrs = 1;
        if (pCVar9 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar9,0.0,(MethodInfo *)0x0);
          (this_01->_0).element_class = (Il2CppClass *)0x0;
          goto code_?;
        }
      }
      goto code_?;
    }
    this_01 = (Action__Class *)(((HurryUpNotification *)object)->fields).countdownFader;
    if (this_01 == (Action__Class *)0x0) goto code_?;
    (this_01->_0).castClass = (Il2CppClass *)(this_01->_0).this_arg.data;
    pCVar9 = (CanvasGroup *)(this_01->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(this_01->_0).this_arg.attrs = 1;
    if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar9,0.0,(MethodInfo *)0x0);
    (this_01->_0).element_class = (Il2CppClass *)0x0;
    iVar10 = (*(code *)(((HurryUpNotification *)object)->klass->vtable).get_Lifetime.method)
                      (object,(((HurryUpNotification *)object)->klass->vtable).Initialize.methodPtr)
    ;
    (((HurryUpNotification *)object)->fields)._.timeSinceStart =
         (float)(iVar10 - (int)unaff_EDI) - _UNK_?;
code_?:
    this = (HurryUpNotification *)(((HurryUpNotification *)object)->fields).fader;
    if (this == (HurryUpNotification *)0x0) goto code_?;
    unaff_EDI = (Action_1_IWinningCondition___Class *)(this->fields).timeStamp;
    this_01 = (Action__Class *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)object,
               MethodInfo__HurryUpNotification__DestroyNotification__,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_EDI,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar5 = CONCAT44(TypeInfo__System__Action,pDVar3);
    if (pDVar3 == (Delegate *)0x0) {
      pDVar11 = (Delegate *)0x0;
      (this->fields).timeStamp = 0;
code_?:
      func_?(&(this->fields).timeStamp,pDVar11);
      this = (HurryUpNotification *)
             MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((MVNetworkGame *)this == (MVNetworkGame *)0x0) goto code_?;
      a = (((MVNetworkGame *)this)->fields).OnWinningConditionFulfilled;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)object,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      this_01 = (Action__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      if (this_01 == (Action__Class *)0x0) {
        method = (MethodInfo *)&this[3].fields._.Type;
        *(int32_t *)method = 0;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        in_stack_2 = (Action_1_IWinningCondition___Class *)this_01;
        func_?();
        return;
      }
      in_stack_2 = TypeInfo__System__Action<IWinningCondition>;
      data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      method = (MethodInfo *)this_01;
      iVar10 = func_?();
      if (iVar10 != 0) {
        unaff_EDI = (Action_1_IWinningCondition___Class *)&this[3].fields._.Type;
        *(int *)unaff_EDI = iVar10;
        object = TypeInfo__System__Action<IWinningCondition>;
        in_stack_2 = TypeInfo__System__Action<IWinningCondition>;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        method = (MethodInfo *)this_01;
        in_stack_2 = (Action_1_IWinningCondition___Class *)func_?();
        if (in_stack_2 != (Action_1_IWinningCondition___Class *)0x0) {
          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          method = (MethodInfo *)unaff_EDI;
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pDVar11 = (Delegate *)0x0;
    if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
      pDVar11 = pDVar3;
    }
    if (pDVar11 == (Delegate *)0x0) goto code_?;
    (this->fields).timeStamp = (int32_t)pDVar11;
    pDVar11 = (Delegate *)0x0;
    if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
      pDVar11 = pDVar3;
    }
    this_01 = TypeInfo__System__Action;
    if (pDVar11 != (Delegate *)0x0) goto code_?;
  }
  uVar5 = func_?(pDVar3,this_01);
code_?:
  func_?(uVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if ((bVar1 != 0) &&
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?();
    }
    else {
      pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
      ppAVar4 = &(pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,unaff_EBX,MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_ESI == (Delegate *)0x0) {
        *ppAVar4 = (Action_1_IWinningCondition_ *)0x0;
        pDStack5 = (Delegate *)ppAVar4;
        pAStack6 = (Action_1_IWinningCondition___Class *)unaff_ESI;
        func_?();
        return;
      }
      pAStack6 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAVar3 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar3 != (Action_1_IWinningCondition_ *)0x0) {
        *ppAVar4 = pAVar3;
        unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
        pAStack6 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAStack6 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack6 != (Action_1_IWinningCondition___Class *)0x0) {
          pDStack5 = (Delegate *)ppAVar4;
          func_?();
          return;
        }
      }
    }
    pDStack5 = unaff_ESI;
    pAStack6 = unaff_EDI;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
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

