
/* Boolean CanStartEmote(AvatarLimbManager+EmoteData) */

bool Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_EmoteData *emoteData,
               MethodInfo *method)

{
  if ((this->fields).isActive == 0) {
    return 0;
  }
  pAVar1 = (this->fields).currentRunningEmoteData;
  if (pAVar1 == (AvatarLimbManager_EmoteData *)0x0) {
    return 1;
  }
  if (emoteData != (AvatarLimbManager_EmoteData *)0x0) {
    if ((emoteData->fields).priority <= (pAVar1->fields).priority) {
      return 0;
    }
    pAVar2 = (pAVar1->fields).emote;
    if (pAVar2 != (AvatarLimbManager_AvatarEmote *)0x0) {
      (*(code *)(pAVar2->klass->vtable).StopEmote.method)(pAVar2,pAVar2->klass[1]._0.image);
      return 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* AvatarLimbManager+EmoteData CreateEmoteData(AvatarLimbManager+AvatarEmote,
   AvatarLimbManager+LimbRotator, Single, Int16) */

AvatarLimbManager_EmoteData *
Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
          (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_AvatarEmote *emote,
          AvatarLimbManager_LimbRotator *limbRotator,float lifeTime,int16_t priority,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (emote != (AvatarLimbManager_AvatarEmote *)0x0) {
    (*(code *)(emote->klass->vtable).Initialize.method)
              (emote,limbRotator,lifeTime,(emote->klass->vtable).StartEmote.methodPtr);
    pAVar1 = (emote->fields).OnEmoteEnd;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<EmoteTypes>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEmoteEnd_EmoteTypes_,
               MethodInfo__System__Action<EmoteTypes>__Action_System__Object__void__);
    pAVar2 = (Action_1_EmoteTypes_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_EmoteTypes_ *)0x0;
    if (pAVar2 != (Action_1_EmoteTypes_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<EmoteTypes>) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action_1_EmoteTypes_ *)0x0) goto code_?;
    }
    (emote->fields).OnEmoteEnd = pAVar1;
    this_01 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)lifeTime);
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = emote;
      *(int16_t *)&(this_01->fields).state = priority;
      return (AvatarLimbManager_EmoteData *)this_01;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pAVar4 = (AvatarLimbManager_EmoteData *)(*pcVar3)();
  return pAVar4;
}


/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_02 = TypeInfo__AvatarLimbManager__AvatarShakeEmote;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_02);
  pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                     (this,(AvatarLimbManager_AvatarEmote *)pSVar1,limbRotator,2.0,1,
                      (MethodInfo *)0x0);
  this_00 = TypeInfo__System__Action<EmoteTypes>;
  if (pSVar1 != (ScaleAnimationBase *)0x0) {
    pDVar3 = (pSVar1->fields)._._._._.m_CachedPtr;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    method_01 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)headRotationHandler,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_,
               MethodInfo__System__Action<EmoteTypes>__Action_System__Object__void__);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar5 != (Delegate *)0x0) {
      if ((Action_1_EmoteTypes___Class *)pDVar5->klass == TypeInfo__System__Action<EmoteTypes>) {
        pDVar3 = pDVar5;
      }
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    (pSVar1->fields)._._._._.m_CachedPtr = pDVar3;
    pDVar6 = (Dictionary_2_EmoteTypes_System_Object_ *)(this_00->_0).namespaze;
    if (pDVar6 != (Dictionary_2_EmoteTypes_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
      Dictionary_2_EmoteTypes_System_Object__Add
                (pDVar6,EmoteTypes__Enum_Shake,(Object *)pAVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                );
      this_01 = (MethodInfo *)func_?();
      method_00 = this_01;
      ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this_01,0.0,method_01);
      pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                         ((AvatarLimbManager_AvatarEmoteHandler *)this_00,
                          (AvatarLimbManager_AvatarEmote *)this_01,limbRotator,2.0,1,
                          (MethodInfo *)0x0);
      if (this_01 != (MethodInfo *)0x0) {
        pDVar3 = (((ScaleAnimationBase__Fields *)&this_01->invoker_method)->_)._._._.m_CachedPtr;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)headRotationHandler,
                   MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                   ,MethodInfo__System__Action<EmoteTypes>__Action_System__Object__void__);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pDVar3 = (Delegate *)0x0;
        if (pDVar5 != (Delegate *)0x0) {
          if ((Action_1_EmoteTypes___Class *)pDVar5->klass == TypeInfo__System__Action<EmoteTypes>)
          {
            pDVar3 = pDVar5;
          }
          if (pDVar3 == (Delegate *)0x0) goto code_?;
        }
        (((ScaleAnimationBase__Fields *)&this_01->invoker_method)->_)._._._.m_CachedPtr = pDVar3;
        pDVar6 = (Dictionary_2_EmoteTypes_System_Object_ *)(this_00->_0).namespaze;
        if (pDVar6 != (Dictionary_2_EmoteTypes_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
          Dictionary_2_EmoteTypes_System_Object__Add
                    (pDVar6,EmoteTypes__Enum_Nod,(Object *)pAVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                    );
          pSVar1 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,method_00);
          pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                             ((AvatarLimbManager_AvatarEmoteHandler *)this_00,
                              (AvatarLimbManager_AvatarEmote *)pSVar1,limbRotator,1.5,2,
                              (MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_EmoteTypes_System_Object_ *)(this_00->_0).namespaze;
          if (pDVar6 != (Dictionary_2_EmoteTypes_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
            Dictionary_2_EmoteTypes_System_Object__Add
                      (pDVar6,EmoteTypes__Enum_Wave,(Object *)pAVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_Initialize
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).limbManager = limbManager;
  (*(code *)(this->klass->vtable).CreateLimbEvents.method)
            (this,limbManager,lookDirectionHandler,pointingHandler,headRotationHandler,limbRotator,
             (this->klass->vtable).UpdateEmotes.methodPtr);
  if (enableChangeHandler != (AvatarEnabledChangeHandler *)0x0) {
    pAVar1 = (enableChangeHandler->fields).OnEnabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnEnabled = pAVar1;
    pAVar1 = (enableChangeHandler->fields).OnDisabled;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,
               MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar3;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (enableChangeHandler->fields).OnDisabled = pAVar1;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnDisable
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  iStack_1 = -1;
  pOStack_2 = (Object__Array *)&DAT_?;
  pWStack_3 = (WinningConditionType__Enum__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pWStack_3;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  pLVar5 = (Link__Array *)&stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pLVar5 = pLStack_4;
  }
  pLStack_4 = pLVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).emoteDatas;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pLStack_4 = (Link__Array *)&stack0xffffffac;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar8->dictionary;
    auStack_6._4_4_ = pDVar8->next;
    auStack_6._8_4_ = pDVar8->stamp;
    auStack_6._12_4_ = (pDVar8->current).key;
    auStack_6._16_4_ = (pDVar8->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pWStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                            );
      DStack_9.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_9.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
      ;
      iVar11 = func_?();
      if ((iVar11 == 0) || (piVar12 = *(int **)(iVar11 + 8), piVar12 == (int *)0x0)) break;
      (**(code **)(*piVar12 + 0xf8))(piVar12,*(undefined4 *)(*piVar12 + 0xfc));
    }
  }
  func_?(0);
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnEmoteEnd(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnEmoteEnd
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).emoteDatas;
  pAVar1 = (this->fields).currentRunningEmoteData;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pAVar2 = (AvatarLimbManager_EmoteData *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)this_00,emoteType,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if (pAVar1 == pAVar2) {
      this_01 = (Action_1_UIPushOption_ *)(this->fields).OnEmoteUpdate;
      (this->fields).currentRunningEmoteData = (AvatarLimbManager_EmoteData *)0x0;
      if (this_01 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_01,UIPushOption__Enum_None,MethodInfo__System__Action<int>__Invoke_int_);
      }
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
            Dictionary_2_EmoteTypes_System_Object__ContainsKey
                      ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,emoteType,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (this->fields).emoteDatas;
    if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
        (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::
                  Object]::Dictionary_2_EmoteTypes_System_Object__get_Item
                            ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,emoteType,
                             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                            ), pOVar3 != (Object *)0x0)) &&
       (emoteType = (EmoteTypes__Enum)pOVar3[1].klass,
       (Object__Class *)emoteType != (Object__Class *)0x0)) {
      (*(code *)(((Object__Class *)emoteType)->_0).image[5].typeCount)();
      pDVar1 = (this->fields).emoteDatas;
      if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        pAVar4 = (AvatarLimbManager_EmoteData *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]
                 ::Dictionary_2_EmoteTypes_System_Object__get_Item
                           ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,emoteType,
                            MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                           );
        this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  (this->fields).OnEmoteStart;
        (this->fields).currentRunningEmoteData = pAVar4;
        if (this_00 ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
          this_01 = (Action_1_UIPushOption_ *)(this->fields).OnEmoteUpdate;
          if (this_01 == (Action_1_UIPushOption_ *)0x0) {
            return;
          }
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_01,emoteType & 0xff,MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
        piVar5 = (int *)func_?();
        if (piVar5 != (int *)0x0) {
          emoteType = (**(code **)(*piVar5 + 0xd8))();
          func_?();
          if (this_00 !=
              (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
          {
            mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
            String,System::Object]]::
            Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                      (this_00,(Dictionary_2_System_String_System_Object_ *)emoteType,
                       MethodInfo__System__Action<System::String>__Invoke_System__String_);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StopAllEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StopAllEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  iStack_1 = -1;
  pOStack_2 = (Object__Array *)&DAT_?;
  pWStack_3 = (WinningConditionType__Enum__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pWStack_3;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  pLVar5 = (Link__Array *)&stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pLVar5 = pLStack_4;
  }
  pLStack_4 = pLVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).emoteDatas;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pLStack_4 = (Link__Array *)&stack0xffffffac;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar8->dictionary;
    auStack_6._4_4_ = pDVar8->next;
    auStack_6._8_4_ = pDVar8->stamp;
    auStack_6._12_4_ = (pDVar8->current).key;
    auStack_6._16_4_ = (pDVar8->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pWStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                            );
      DStack_9.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_9.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
      ;
      iVar11 = func_?();
      if ((iVar11 == 0) || (piVar12 = *(int **)(iVar11 + 8), piVar12 == (int *)0x0)) break;
      (**(code **)(*piVar12 + 0xf8))(piVar12,*(undefined4 *)(*piVar12 + 0xfc));
    }
  }
  func_?(0);
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void TryStartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_TryStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)emoteType != '\0') {
    this_00 = (this->fields).emoteDatas;
    if (this_00 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)this_00,emoteType,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields).isActive == 0) {
      return;
    }
    pAVar2 = (this->fields).currentRunningEmoteData;
    if (pAVar2 != (AvatarLimbManager_EmoteData *)0x0) {
      if (pOVar1 == (Object *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(short *)&pOVar1[1].monitor <= (pAVar2->fields).priority) {
        return;
      }
      pAVar4 = (pAVar2->fields).emote;
      if (pAVar4 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      (*(code *)(pAVar4->klass->vtable).StopEmote.method)(pAVar4,pAVar4->klass[1]._0.image);
    }
    AvatarLimbManager_AvatarEmoteHandler_StartEmote(this,emoteType,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  iStack_1 = -1;
  pOStack_2 = (Object__Array *)&DAT_?;
  pWStack_3 = (WinningConditionType__Enum__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pWStack_3;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  pLVar5 = (Link__Array *)&stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pLVar5 = pLStack_4;
  }
  pLStack_4 = pLVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).emoteDatas;
  pLStack_4 = (Link__Array *)&stack0xffffffac;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pLStack_4 = (Link__Array *)&stack0xffffffac;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar8->dictionary;
    auStack_6._4_4_ = pDVar8->next;
    auStack_6._8_4_ = pDVar8->stamp;
    auStack_6._12_4_ = (pDVar8->current).key;
    auStack_6._16_4_ = (pDVar8->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pWStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                            );
      DStack_9.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_9.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
      ;
      iVar11 = func_?();
      if ((iVar11 == 0) || (piVar12 = *(int **)(iVar11 + 8), piVar12 == (int *)0x0)) break;
      (**(code **)(*piVar12 + 0xf0))(piVar12,*(undefined4 *)(*piVar12 + 0xf4));
    }
  }
  func_?(0);
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* AvatarLimbManager+AvatarEmoteHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler__ctor
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
            );
  (this->fields).emoteDatas = this_00;
  (this->fields).isActive = 1;
  return;
}

