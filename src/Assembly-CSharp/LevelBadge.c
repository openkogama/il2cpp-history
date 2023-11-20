
/* Void Awake() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_Awake(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LevelBadge__OnLevelingInitialized__);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelBadge;
  if (this_00 == (RawImage *)0x0) {
code_?:
    func_?();
    pUStack1 = extraout_ECX;
    pUStack2 = extraout_EDX;
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pPVar3 = (this->fields).xpBar;
    if (pPVar3 == (ProgressBarAndroid *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar3,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pPVar3 = (this->fields).subscriberXPBar;
    if (pPVar3 == (ProgressBarAndroid *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar3,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
      LevelBadge_OnLevelingInitialized(this,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar5 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__LevelBadge__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pUStack1 =
         (UnityAction *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUStack1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      pUStack2 = (UnityAction__Class *)0x0;
      pUStack1 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
      func_?();
      return;
    }
    pUVar5 = (UnityAction *)0x0;
    if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUStack1;
    }
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar5 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar5;
    pUVar5 = (UnityAction *)0x0;
    if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUStack1;
    }
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar5 != (UnityAction *)0x0) {
      pUStack1 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
      pUStack2 = (UnityAction__Class *)pUVar5;
      func_?();
      return;
    }
  }
  pUStack2 = (UnityAction__Class *)func_?();
  pUStack1 = extraout_ECX_00;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnDestroy(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).badgeTextureAsset);
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnLevelingInitialized
               (LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LevelBadge__UpdateBadge_int_);
    func_?(&MethodInfo__LevelBadge__UpdateProgress_XPProgressData_);
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  iVar3 = (pMVar2->fields)._.level;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (iVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  pUVar4 = (pMVar2->fields)._.OnLevelChanged;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,MethodInfo__LevelBadge__UpdateBadge_int_,(MethodInfo *)0x0);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar5 == (Delegate *)0x0) {
    (pMVar2->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    this_02 = (XPProgressData *)
              DayNightCycle::DayNightCycle_get__skyParamsList
                        ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&StringLiteral_ProgressPercentage__);
      cRam_? = '\x01';
    }
    if (this_02 == (XPProgressData *)0x0) goto code_?;
    iVar3 = XPProgressData::XPProgressData_get_XpNextRel(this_02,(MethodInfo *)0x0);
    if (iVar3 < 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        this = (LevelBadge *)&UNK_?;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Can_t_calculate_update_progress_,(MethodInfo *)0x0);
    }
    else {
      iVar3 = XPProgressData::XPProgressData_get_XpRel(this_02,(MethodInfo *)0x0);
      iVar6 = XPProgressData::XPProgressData_get_XpNextRel(this_02,(MethodInfo *)0x0);
      value.m_value = (float)iVar3 / (float)iVar6;
      if (value.m_value < 0.0) {
        pSVar7 = mscorlib.dll::System::Single::Single_ToString
                           ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_ProgressPercentage__,pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0);
      }
      this_04.m_value = (float)(this_02->fields).memberCount;
      if ((ProgressBarAndroid *)this_04.m_value == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)this_04.m_value,value.m_value,(MethodInfo *)0x0);
      this = (LevelBadge *)(this_02->fields).xpDelta;
      if (this == (LevelBadge *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)this,this_04.m_value,(MethodInfo *)0x0);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    pXVar8 = (pMVar2->fields).OnXPProgressData;
    this_03 = (UnityAction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,MethodInfo__LevelBadge__UpdateProgress_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar8 = (XPProgress_OnXPProgressDataDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pXVar8,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pXVar8 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
      func_?();
      return;
    }
    pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
      pXVar9 = pXVar8;
    }
    if (pXVar9 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar2->fields).OnXPProgressData = pXVar9;
      pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar9 = pXVar8;
      }
      if (pXVar9 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
  }
  else {
    pUVar4 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar4 != (UnityAction_1_System_Int32_ *)0x0) {
      (pMVar2->fields)._.OnLevelChanged = pUVar4;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_StreamingAssetCallback
               (LevelBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = pTVar1;
  func_?(&(this->fields).badgeTextureAsset,pTVar1);
  pTVar1 = (this->fields).badgeTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields).levelBadge;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pRVar3 = (this->fields).levelBadge;
      if (pRVar3 != (RawImage *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar3,1,(MethodInfo *)0x0);
        pRVar3 = (this->fields).levelBadge;
        if (pRVar3 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (pRVar3,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
            return;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_00 != (MVNetworkGame *)0x0) &&
             (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
             this_01 != (MVLocalPlayer *)0x0)) {
            bVar2 = MVPlayer::MVPlayer_get_IsSubscriber((MVPlayer *)this_01,(MethodInfo *)0x0);
            pPVar4 = (this->fields).xpBar;
            if ((pPVar4 != (ProgressBarAndroid *)0x0) &&
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pPVar4,(MethodInfo *)0x0),
               pGVar5 != (GameObject *)0x0)) {
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar5,(MethodInfo *)0x0);
              if (bVar6 == bVar2) {
                pPVar4 = (this->fields).xpBar;
                if ((pPVar4 == (ProgressBarAndroid *)0x0) ||
                   (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pPVar4,(MethodInfo *)0x0),
                   pGVar5 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,bVar2 == 0,(MethodInfo *)0x0);
              }
              pPVar4 = (this->fields).subscriberXPBar;
              if ((pPVar4 != (ProgressBarAndroid *)0x0) &&
                 (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pPVar4,(MethodInfo *)0x0),
                 pGVar5 != (GameObject *)0x0)) {
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar5,(MethodInfo *)0x0);
                if (bVar6 == bVar2) {
                  return;
                }
                pPVar4 = (this->fields).subscriberXPBar;
                if ((pPVar4 != (ProgressBarAndroid *)0x0) &&
                   (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pPVar4,(MethodInfo *)0x0),
                   pGVar5 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar5,bVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* Void UpdateBadge(Int32) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_UpdateBadge
               (LevelBadge *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void UpdateProgress(XPProgressData) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_UpdateProgress
               (LevelBadge *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Can_t_calculate_update_progress_);
    func_?(&StringLiteral_processPercentage_invalid_);
    func_?(&StringLiteral_ProgressPercentage__);
    cRam_? = '\x01';
  }
  if (xpProgress != (XPProgressData *)0x0) {
    iVar1 = XPProgressData::XPProgressData_get_XpNextRel(xpProgress,(MethodInfo *)0x0);
    if (iVar1 < 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Can_t_calculate_update_progress_,(MethodInfo *)0x0);
      return;
    }
    iVar1 = XPProgressData::XPProgressData_get_XpRel(xpProgress,(MethodInfo *)0x0);
    iVar2 = XPProgressData::XPProgressData_get_XpNextRel(xpProgress,(MethodInfo *)0x0);
    value.m_value = (float)iVar1 / (float)iVar2;
    if (value.m_value < 0.0) {
      pSVar3 = mscorlib.dll::System::Single::Single_ToString
                         ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
      this = (LevelBadge *)0x0;
      value.m_value = (float)&UNK_?;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_ProgressPercentage__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0);
    }
    pPVar4 = (this->fields).xpBar;
    if (pPVar4 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar4,value.m_value,(MethodInfo *)0x0);
      pPVar4 = (this->fields).subscriberXPBar;
      if (pPVar4 != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar4,value.m_value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

