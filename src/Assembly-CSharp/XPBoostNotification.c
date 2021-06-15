
/* Void ChangeState(XPBoostNotification+XPBoostStateType) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_ChangeState
               (XPBoostNotification *this,XPBoostNotification_XPBoostStateType__Enum newState,
               MethodInfo *method)

{
  (this->fields).currentState = (undefined1)newState;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  return;
}


/* Void CloseNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification
               (XPBoostNotification *this,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._.pool;
    if (this_00 != (NotificationObjectPool *)0x0) {
      NotificationObjectPool::NotificationObjectPool_Return
                (this_00,(Notification *)this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloseNotification(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification_1
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).closeShrinkXEffectCurve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,stateProgress,(MethodInfo *)0x0);
    pAVar1 = (this->fields).closeShrinkYEffectCurve;
    fVar2 = (this->fields).backgroundOriginalWidth * fVar2 - (this->fields).backgroundOriginalWidth;
    if (pAVar1 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar1,stateProgress,(MethodInfo *)0x0);
      fVar4 = (this->fields).backgroundOriginalHeigt * fVar3 -
              (this->fields).backgroundOriginalHeigt;
      fVar3 = (this->fields).backgroundOriginalSizeDelta.x;
      puVar5 = (undefined *)(this->fields).backgroundOriginalSizeDelta.y;
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        puVar5 = &UNK_?;
        func_?(TypeInfo__UnityEngine__Vector2);
      }
      VVar6.y = fVar4;
      VVar6.x = fVar2;
      b.y = (float)puVar5;
      b.x = fVar3;
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                        (VVar6,b,(MethodInfo *)0x0);
      this_00 = (this->fields).backGround;
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,VVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FadeOut(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_FadeOut
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).backgroundCanvasGroup;
  this_01 = (this->fields).fadeOutCurve;
  if (this_01 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,stateProgress,(MethodInfo *)0x0);
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleClosingDownState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleClosingDownState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,currentStateTime,(MethodInfo *)0x0);
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
      if (_UNK_? < 3.5358912e-29) {
        XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleHighlightState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleHighlightState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  if (0 < (this->fields).currentMemberBeingHighlighted) {
    XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
    XPBoostNotification_SwapMemberName(this,currentStateTime,(MethodInfo *)0x0);
  }
  if (_UNK_? < currentStateTime) {
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleStartState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleStartState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime - _UNK_?,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,_UNK_? - currentStateTime,
                       (MethodInfo *)(_UNK_? - currentStateTime));
    if (this_01 != (CanvasGroup *)0x0) {
      stateProgress = &UNK_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      XPBoostNotification_CloseNotification_1(this,(float)stateProgress,(MethodInfo *)0x0);
      if (_UNK_? < (float)this) {
        XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void HandleState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleState
               (XPBoostNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  fVar2 = fVar1;
  switch((this->fields).currentState) {
  default:
    goto code_?;
  case 1:
    pGVar3 = (this->fields).content;
    bVar4 = pGVar3 == (GameObject *)0x0;
    if (!bVar4) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pGVar3 = (this->fields).content;
        bVar4 = true;
        if (pGVar3 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      if (fVar1 <= _UNK_?) {
        return;
      }
      (this->fields).currentState = 2;
      unaff_EBP = (MethodInfo *)&UNK_?;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar3 = (this->fields).content;
      (this->fields).stateStartTime = fVar2;
      bVar4 = pGVar3 == (GameObject *)0x0;
      fVar2 = fVar1;
      if (!bVar4) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
    break;
  case 2:
    fVar2 = fVar1 - _UNK_?;
    XPBoostNotification_UpdateBoostTextEffect(this,fVar2,(MethodInfo *)0x0);
    pAVar6 = (this->fields).fadeOutCurve;
    pCVar7 = (this->fields).backgroundCanvasGroup;
    bVar4 = pAVar6 == (AnimationCurve *)0x0;
    if (!bVar4) {
      fVar1 = _UNK_? - fVar1;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar6,fVar1,(MethodInfo *)0x0);
      bVar4 = pCVar7 == (CanvasGroup *)0x0;
      if (!bVar4) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar8,(MethodInfo *)0x0);
        XPBoostNotification_CloseNotification_1(this,fVar1,(MethodInfo *)0x0);
        bVar4 = _UNK_? == 3.5360823e-29;
        bVar9 = 3.5360823e-29 < _UNK_?;
        goto code_?;
      }
    }
    break;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
      XPBoostNotification_SwapMemberName(this,fVar1,(MethodInfo *)0x0);
    }
    bVar4 = fVar1 == _UNK_?;
    bVar9 = fVar1 < _UNK_?;
code_?:
    if (!bVar9 && !bVar4) {
      XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
      return;
    }
code_?:
    return;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar6 = (this->fields).fadeOutCurve;
    pCVar7 = (this->fields).backgroundCanvasGroup;
    bVar4 = pAVar6 == (AnimationCurve *)0x0;
    if (!bVar4) {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar6,fVar1,(MethodInfo *)0x0);
      bVar4 = pCVar7 == (CanvasGroup *)0x0;
      fVar2 = fVar1;
      if (!bVar4) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar8,(MethodInfo *)0x0);
        XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
        if (3.5361407e-29 <= _UNK_?) {
          return;
        }
        XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar10 = func_?();
  puVar11 = (uint *)uVar10;
  if (bVar4) {
    if ((POPCOUNT(((uint)((ulonglong)uVar10 >> 0x20) ^ *puVar11 ^ *puVar11) & 0xff) & 1U) != 0)
    goto code_?;
    fVar12 = extraout_ST0;
    if (method == (MethodInfo *)*puVar11) {
      pGVar3 = (in_stack_13->fields).content;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      this = in_stack_13;
      fVar2 = in_stack_14;
      if (bVar5 != 0) {
        pGVar3 = (in_stack_13->fields).content;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  else {
code_?:
    if (fVar2 <= _UNK_?) {
      return;
    }
    unaff_EBP = (MethodInfo *)0x0;
code_?:
    (this->fields).currentState = 2;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time(unaff_EBP);
    fVar12 = (float10)fVar2;
  }
  pGVar3 = (this->fields).content;
  (this->fields).stateStartTime = (float)fVar12;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).Update.method)();
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleWaitBeforeStart(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleWaitBeforeStart
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  pGVar1 = (this->fields).content;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = (this->fields).content;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < currentStateTime) {
      (this->fields).currentState = 2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar1 = (this->fields).content;
      (this->fields).stateStartTime = fVar3;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).Update.method)(this);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Initialize
               (XPBoostNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff68;
  puVar5 = &stack0xffffff68;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pPStack_6 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0;
  SStack_7.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_7.monitor = (MonitorData *)0x0;
  SStack_7.fields.value = 0.0;
  SStack_7.fields.OnChange = (Action_1_Single_ *)0x0;
  auStack_8._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = (String *)0x0;
  auStack_8._12_4_ = 0.0;
  func_?();
  puStack_4 = &stack0xffffff68;
  puStack_9 = (undefined4 *)&stack0xffffff68;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_4 = &stack0xffffff68, puStack_9 = (undefined4 *)&stack0xffffff68,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_4 = &stack0xffffff68;
    puStack_9 = (undefined4 *)&stack0xffffff68;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    pSStack_10 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                 NamedThemeAttribute_1_UnityEngine_Color__get_Name
                           ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
    this_02 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_02 != (MVAvatar *)0x0) &&
       ((this_03 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0),
        this_03 != (MVRuntimeDataVariableClampedFloat *)0x0 &&
        (this_04 = MVPlayerContainer::MVPlayerContainer_get_Values
                             ((MVPlayerContainer *)this_03,(MethodInfo *)0x0),
        this_04 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                           *)&stack0xffffff74,
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)this_04,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      method_00 = (pDVar11->host_enumerator).dictionary;
      pMVar12 = (MethodInfo *)(pDVar11->host_enumerator).stamp;
      uStack_1 = 0;
      while (cVar13 = func_?(&stack0xffffff88,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                    ), cVar13 != '\0') {
        unaff_EDI = (Text *)func_?(&stack0xffffff88,
                                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                                           );
        if ((unaff_EDI != (Text *)0x0) &&
           (pSVar14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                     NamedThemeAttribute_1_UnityEngine_Color__get_Name
                               ((NamedThemeAttribute_1_UnityEngine_Color_ *)unaff_EDI,
                                (MethodInfo *)0x0), pSVar14 != pSStack_10)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_05 = (MVAvatar *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_05 == (MVAvatar *)0x0) goto code_?;
          pMStack_15 = MVAvatar::MVAvatar_get_Shield(this_05,(MethodInfo *)0x0);
          pSVar14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)unaff_EDI,
                              (MethodInfo *)0x0);
          if (pMStack_15 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
          bVar16 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                            ((MVPlayerContainer *)pMStack_15,(int32_t)pSVar14,
                             (MVPlayer **)&pPStack_6,(MethodInfo *)this_02);
          if (bVar16 != 0) {
            if ((pPStack_6 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) ||
               (method_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
                            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                      (pPStack_6,(MethodInfo *)method_00),
               method_00 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0))
            goto code_?;
            bVar16 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                    SubscriptionRulesWrapper_HasBenefit
                              ((SubscriptionRulesWrapper *)method_00,
                               SubscriptionBenefit__Enum_XPBoost,pMVar12);
            if (bVar16 != 0) {
              pLVar17 = (this->fields).memberList;
              if (pLVar17 == (List_1_MVPlayer_ *)0x0) goto code_?;
              pMVar12 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar17,(UIPushOption__Enum)pPStack_6,
                         MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
            }
          }
        }
      }
      unaff_EDI = (Text *)0x0;
      *puStack_9 = 0xa6;
      uStack_1 = 0xffffffff;
      pMVar12 = (MethodInfo *)&UNK_?;
      func_?(&stack0xffffff88,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     );
      pLVar17 = (this->fields).memberList;
      if (pLVar17 != (List_1_MVPlayer_ *)0x0) {
        pOVar18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar17,
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        if ((int)pOVar18 < 1) {
          XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pLVar17 = (this->fields).memberList;
        (this->fields).currentMemberBeingHighlighted = 0;
        unaff_EDI = (this->fields).UserNameText1;
        if ((((pLVar17 != (List_1_MVPlayer_ *)0x0) &&
             (this_06 = (GamePointGainEffect *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar17,0,
                                   MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                                  ), this_06 != (GamePointGainEffect *)0x0)) &&
            (iVar19 = GamePointGainEffect::GamePointGainEffect_get_ID(this_06,pMVar12), iVar19 != 0)
            ) && (unaff_EDI != (Text *)0x0)) {
          (*(code *)(unaff_EDI->klass->vtable).set_text.method)
                    (unaff_EDI,*(undefined4 *)(iVar19 + 0xc),
                     (unaff_EDI->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          puStack_9 = (undefined4 *)(this->fields)._.timeSinceStart;
          pLVar17 = (this->fields).memberList;
          if (pLVar17 != (List_1_MVPlayer_ *)0x0) {
            pOVar18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar17,
                                MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__
                               );
            pRVar20 = (this->fields).backGround;
            (this->fields)._.timeSinceStart =
                 (float)puStack_9 -
                 ((float)(int)pOVar18 + (float)(int)pOVar18 + _UNK_? + _UNK_?);
            if (pRVar20 != (RectTransform *)0x0) {
              pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect((Rect *)auStack_22,pRVar20,in_stack_23);
              SStack_7.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar21->m_XMin;
              SStack_7.monitor = (MonitorData *)pRVar21->m_YMin;
              SStack_7.fields.value = pRVar21->m_Width;
              SStack_7.fields.OnChange = (Action_1_Single_ *)pRVar21->m_Height;
              fVar24 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 (&SStack_7,(MethodInfo *)0x0);
              pRVar20 = (this->fields).backGround;
              (this->fields).backgroundOriginalWidth = fVar24;
              if (pRVar20 != (RectTransform *)0x0) {
                pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_rect((Rect *)&stack0xffffff9c,pRVar20,in_stack_25);
                auStack_8._0_4_ = pRVar21->m_XMin;
                auStack_8._4_4_ = pRVar21->m_YMin;
                auStack_8._8_4_ = pRVar21->m_Width;
                auStack_8._12_4_ = pRVar21->m_Height;
                fVar24 = UnityStandardAssets::CrossPlatformInput::
                         CrossPlatformInputManager+VirtualAxis::
                         CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                   ((CrossPlatformInputManager_VirtualAxis *)auStack_8,
                                    (MethodInfo *)0x0);
                pRVar20 = (this->fields).backGround;
                (this->fields).backgroundOriginalHeigt = fVar24;
                if (pRVar20 != (RectTransform *)0x0) {
                  VVar26 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                           RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
                  (this->fields).backgroundOriginalSizeDelta.x = (float)auStack_22._8_4_;
                  puStack_9 = (undefined4 *)VVar26.y;
                  (this->fields).backgroundOriginalSizeDelta.y = (float)puStack_9;
                  unique0x1000071c = VVar26;
                  XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
                  (this->fields).currentState = 1;
                  fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                     ((MethodInfo *)0x0);
                  (this->fields).stateStartTime = fVar24;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean IsMemberHighlightingDone() */

bool Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_IsMemberHighlightingDone
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).memberList;
  if (this_00 != (List_1_MVPlayer_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    return pOVar1 == (Object *)((this->fields).currentMemberBeingHighlighted + 1);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SlideInName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideInName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText1;
  }
  else {
    pTVar1 = (this->fields).UserNameText2;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      this_00 = (this->fields).slideUserNameInCurve;
      if (this_00 != (AnimationCurve *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
        uVar6._4_4_ = stateProgress;
        uVar6._0_4_ = fVar5;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText1;
        }
        else {
          pTVar1 = (this->fields).UserNameText2;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar6;
            value.y = SUB84(uVar6,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SlideOutName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideOutName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText2;
  }
  else {
    pTVar1 = (this->fields).UserNameText1;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      this_00 = (this->fields).slideUserNameOutCurve;
      if (this_00 != (AnimationCurve *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
        uVar6._4_4_ = stateProgress;
        uVar6._0_4_ = fVar5;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText2;
        }
        else {
          pTVar1 = (this->fields).UserNameText1;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar6;
            value.y = SUB84(uVar6,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartNewMemberHighlight() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNewMemberHighlight
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).currentMemberBeingHighlighted;
  *piVar1 = *piVar1 + 1;
  index = (this->fields).currentMemberBeingHighlighted;
  this_00 = (this->fields).memberList;
  if ((index & 1) == 0) {
    pTVar2 = (this->fields).UserNameText1;
  }
  else {
    pTVar2 = (this->fields).UserNameText2;
  }
  if (this_00 != (List_1_MVPlayer_ *)0x0) {
    this_01 = (GamePointGainEffect *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                         MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    if (this_01 != (GamePointGainEffect *)0x0) {
      iVar3 = GamePointGainEffect::GamePointGainEffect_get_ID(this_01,(MethodInfo *)0x0);
      if ((iVar3 != 0) && (pTVar2 != (Text *)0x0)) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
        XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartNextState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNextState
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).memberList;
  if (pLVar1 != (List_1_MVPlayer_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    if (pOVar2 == (Object *)((this->fields).currentMemberBeingHighlighted + 1)) {
      (this->fields).currentState = 4;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar3;
      return;
    }
    (this->fields).currentState = 3;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar4 = cRam_? == '\0';
    (this->fields).stateStartTime = fVar3;
    if (bVar4) {
      func_?();
      cRam_? = '\x01';
    }
    piVar5 = &(this->fields).currentMemberBeingHighlighted;
    *piVar5 = *piVar5 + 1;
    index = (this->fields).currentMemberBeingHighlighted;
    pLVar1 = (this->fields).memberList;
    if ((index & 1) == 0) {
      pTVar6 = (this->fields).UserNameText1;
    }
    else {
      pTVar6 = (this->fields).UserNameText2;
    }
    if (pLVar1 != (List_1_MVPlayer_ *)0x0) {
      this_00 = (GamePointGainEffect *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
      if (this_00 != (GamePointGainEffect *)0x0) {
        iVar7 = GamePointGainEffect::GamePointGainEffect_get_ID(this_00,(MethodInfo *)0x0);
        if ((iVar7 != 0) && (pTVar6 != (Text *)0x0)) {
          (*(code *)(pTVar6->klass->vtable).set_text.method)();
          XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SwapMemberName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SwapMemberName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText2;
  }
  else {
    pTVar1 = (this->fields).UserNameText1;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      pAVar5 = (this->fields).slideUserNameOutCurve;
      if (pAVar5 != (AnimationCurve *)0x0) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar5,stateProgress,(MethodInfo *)0x0);
        uVar7._4_4_ = stateProgress;
        uVar7._0_4_ = fVar6;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText2;
        }
        else {
          pTVar1 = (this->fields).UserNameText1;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar7;
            value.y = SUB84(uVar7,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
              pTVar1 = (this->fields).UserNameText1;
            }
            else {
              pTVar1 = (this->fields).UserNameText2;
            }
            if (pTVar1 != (Text *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pTVar1,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
                fVar8 = pVVar3->z;
                fVar6 = pVVar3->y;
                pAVar5 = (this->fields).slideUserNameInCurve;
                if (pAVar5 != (AnimationCurve *)0x0) {
                  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_Evaluate(pAVar5,fVar4,(MethodInfo *)0x0);
                  uVar9._4_4_ = fVar6;
                  uVar9._0_4_ = fVar4;
                  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
                    pTVar1 = (this->fields).UserNameText1;
                  }
                  else {
                    pTVar1 = (this->fields).UserNameText2;
                  }
                  if (pTVar1 != (Text *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)pTVar1,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      value_00.z = fVar8;
                      value_00.x = (float)uVar9;
                      value_00.y = SUB84(uVar9,4);
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(pTVar2,value_00,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void Update() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Update
               (XPBoostNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  fVar2 = fVar1;
  switch((this->fields).currentState) {
  default:
    goto code_?;
  case 1:
    pGVar3 = (this->fields).content;
    bVar4 = pGVar3 == (GameObject *)0x0;
    if (!bVar4) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pGVar3 = (this->fields).content;
        bVar4 = true;
        if (pGVar3 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      if (fVar1 <= _UNK_?) {
        return;
      }
      (this->fields).currentState = 2;
      unaff_EBP = (MethodInfo *)&UNK_?;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar3 = (this->fields).content;
      (this->fields).stateStartTime = fVar2;
      bVar4 = pGVar3 == (GameObject *)0x0;
      fVar2 = fVar1;
      if (!bVar4) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
    break;
  case 2:
    fVar2 = fVar1 - _UNK_?;
    XPBoostNotification_UpdateBoostTextEffect(this,fVar2,(MethodInfo *)0x0);
    pAVar6 = (this->fields).fadeOutCurve;
    pCVar7 = (this->fields).backgroundCanvasGroup;
    bVar4 = pAVar6 == (AnimationCurve *)0x0;
    if (!bVar4) {
      fVar1 = _UNK_? - fVar1;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar6,fVar1,(MethodInfo *)0x0);
      bVar4 = pCVar7 == (CanvasGroup *)0x0;
      if (!bVar4) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar8,(MethodInfo *)0x0);
        XPBoostNotification_CloseNotification_1(this,fVar1,(MethodInfo *)0x0);
        bVar4 = _UNK_? == 3.5360823e-29;
        bVar9 = 3.5360823e-29 < _UNK_?;
        goto code_?;
      }
    }
    break;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
      XPBoostNotification_SwapMemberName(this,fVar1,(MethodInfo *)0x0);
    }
    bVar4 = fVar1 == _UNK_?;
    bVar9 = fVar1 < _UNK_?;
code_?:
    if (!bVar9 && !bVar4) {
      XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
      return;
    }
code_?:
    return;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar6 = (this->fields).fadeOutCurve;
    pCVar7 = (this->fields).backgroundCanvasGroup;
    bVar4 = pAVar6 == (AnimationCurve *)0x0;
    if (!bVar4) {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar6,fVar1,(MethodInfo *)0x0);
      bVar4 = pCVar7 == (CanvasGroup *)0x0;
      fVar2 = fVar1;
      if (!bVar4) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,fVar8,(MethodInfo *)0x0);
        XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
        if (3.5361407e-29 <= _UNK_?) {
          return;
        }
        XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar10 = func_?();
  puVar11 = (uint *)uVar10;
  if (bVar4) {
    if ((POPCOUNT(((uint)((ulonglong)uVar10 >> 0x20) ^ *puVar11 ^ *puVar11) & 0xff) & 1U) != 0)
    goto code_?;
    fVar12 = extraout_ST0;
    if (*puVar11 == 0) {
      pGVar3 = (in_stack_13->fields).content;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      this = in_stack_13;
      fVar2 = in_stack_14;
      if (bVar5 != 0) {
        pGVar3 = (in_stack_13->fields).content;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  else {
code_?:
    if (fVar2 <= _UNK_?) {
      return;
    }
    unaff_EBP = (MethodInfo *)0x0;
code_?:
    (this->fields).currentState = 2;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time(unaff_EBP);
    fVar12 = (float10)fVar2;
  }
  pGVar3 = (this->fields).content;
  (this->fields).stateStartTime = (float)fVar12;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).Update.method)();
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateBoostAmount() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostAmount
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      this_02 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (SubscriptionRulesWrapper *)0x0) {
        this_03 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule_2
                            (this_02,SubscriptionBenefit__Enum_XPBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            );
        if (this_03 != (XpBooster *)0x0) {
          MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
          XpBooster_GetTotalXPBoost(this_03,iRam_? + 1,(MethodInfo *)0x0);
          piVar1 = piRam_?;
          str1 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::String::String_Concat_3
                    (::StringLiteral__,str1,StringLiteral____XP,(MethodInfo *)0x0);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x308))();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostTextEffect
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).updateBoostTextEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,stateProgress,(MethodInfo *)0x0);
    pTVar1 = (this->fields).boostAmountText;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                  ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
        func_?();
        pTVar1 = (this->fields).boostAmountText;
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar2,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* XPBoostNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification__ctor
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  (this->fields).memberList = (List_1_MVPlayer_ *)this_00;
  (this->fields).currentMemberBeingHighlighted = -1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

