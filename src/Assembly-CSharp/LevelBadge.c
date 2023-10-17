
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
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?();
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  pAVar4 = (Action_1_Object_ *)func_?();
  if (pAVar4 == (Action_1_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
            (pAVar4,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (iVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar4,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
  if (this_01 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
  SVar5.m_value = (float)this;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,MethodInfo__LevelBadge__UpdateBadge_int_,(MethodInfo *)0x0);
  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)SVar5.m_value,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar6 == (Delegate *)0x0) {
    (pMVar2->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    this_02 = MVLocalPlayer::MVLocalPlayer_get_XPProgressData(pMVar2,(MethodInfo *)0x0);
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
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Can_t_calculate_update_progress_,(MethodInfo *)0x0);
    }
    else {
      iVar3 = XPProgressData::XPProgressData_get_XpRel(this_02,(MethodInfo *)0x0);
      iVar7 = XPProgressData::XPProgressData_get_XpNextRel(this_02,(MethodInfo *)0x0);
      SVar5.m_value = (float)iVar3 / (float)iVar7;
      if (SVar5.m_value < 0.0) {
        pSVar8 = mscorlib.dll::System::Single::Single_ToString
                            ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_ProgressPercentage__,pSVar8,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0);
      }
      this_03.m_value = (float)(this->fields).xpBar;
      if ((ProgressBarAndroid *)this_03.m_value == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)this_03.m_value,SVar5.m_value,(MethodInfo *)0x0);
      this_00 = (this->fields).subscriberXPBar;
      if (this_00 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,this_03.m_value,(MethodInfo *)0x0)
      ;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    pAVar4 = (Action_1_Object_ *)func_?();
    if (pAVar4 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar4,(Object *)this,MethodInfo__LevelBadge__UpdateProgress_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar9 = (XPProgress_OnXPProgressDataDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)this,(Delegate *)pAVar4,(MethodInfo *)0x0);
    if (pXVar9 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
      func_?();
      return;
    }
    pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar9->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
      pXVar10 = pXVar9;
    }
    if (pXVar10 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar2->fields).OnXPProgressData = pXVar10;
      pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar9->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar10 = pXVar9;
      }
      if (pXVar10 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
  }
  else {
    pUVar11 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar11 != (UnityAction_1_System_Int32_ *)0x0) {
      (pMVar2->fields)._.OnLevelChanged = pUVar11;
      iVar12 = func_?();
      if (iVar12 != 0) goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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

