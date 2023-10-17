
/* Void Initialize() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Initialize
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    func_?(&
                    MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
    }
    else {
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
      (this->fields).badgeLevel = (pMVar3->fields)._.level;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
      xpProgressData = MVLocalPlayer::MVLocalPlayer_get_XPProgressData(pMVar3,(MethodInfo *)0x0);
      LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
      pXVar4 = (pMVar3->fields).OnXPProgressData;
      pAVar5 = (Action_1_Object_ *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      if (pAVar5 == (Action_1_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (pAVar5,(Object *)this,
                 MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                 (MethodInfo *)0x0);
      pXVar4 = (XPProgress_OnXPProgressDataDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pXVar4,(Delegate *)pAVar5,(MethodInfo *)0x0);
      if (pXVar4 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar3->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
        func_?();
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 != (MVNetworkGame *)0x0) {
          pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
          if (pMVar3 != (MVLocalPlayer *)0x0) {
            level = (pMVar3->fields)._.level;
            pAVar5 = (Action_1_Object_ *)
                     func_?(
                                    TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                    );
            if (pAVar5 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (pAVar5,(Object *)this,
                         MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              BadgeManager::BadgeManager_GetBadgeTexture
                        (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar5,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar4->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar6 = pXVar4;
      }
      if (pXVar6 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar3->fields).OnXPProgressData = pXVar6;
        pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar4->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar6 = pXVar4;
        }
        if (pXVar6 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
    }
    func_?();
  }
  else {
    pUVar7 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar1;
    }
    if (pUVar7 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar7;
    pUVar7 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar1;
    }
    if (pUVar7 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnDestroy
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    func_?(&
                    MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
    }
    else {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
      pXVar3 = (pMVar2->fields).OnXPProgressData;
      pAVar4 = (Action_1_Object_ *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      if (pAVar4 == (Action_1_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (pAVar4,(Object *)this,
                 MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                 (MethodInfo *)0x0);
      pXVar3 = (XPProgress_OnXPProgressDataDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pXVar3,(Delegate *)pAVar4,(MethodInfo *)0x0);
      if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
        func_?();
        pAVar4 = (Action_1_Object_ *)
                 func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
        ;
        if (pAVar4 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (pAVar4,(Object *)this,
                     MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BadgeManager);
          }
          BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                    ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar4,(MethodInfo *)0x0);
          (this->fields).badgeTextureAsset = (Texture2D *)0x0;
          func_?(&(this->fields).badgeTextureAsset,0);
          return;
        }
        goto code_?;
      }
      pXVar5 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar5 = pXVar3;
      }
      if (pXVar5 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar2->fields).OnXPProgressData = pXVar5;
        pXVar5 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar5 = pXVar3;
        }
        if (pXVar5 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
    }
    func_?();
  }
  else {
    pUVar6 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar1;
    }
    if (pUVar6 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar6;
    pUVar6 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar1;
    }
    if (pUVar6 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnLevelingBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::
     LevelProgressAccessoryShop_OnLevelingBadgeLoaded
               (LevelProgressAccessoryShop *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Texture_not_loaded__);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTRam00000018 =
           UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      func_?();
      if (pRRam00000014 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRRam00000014,(Texture *)pTRam00000018,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Texture_not_loaded__,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPUpdate(XPProgressData) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnXPUpdate
               (LevelProgressAccessoryShop *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&StringLiteral_XP___0_____1_);
    cRam_? = '\x01';
  }
  if (xpProgressData != (XPProgressData *)0x0) {
    iVar1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
            SparselyPopulatedArrayFragment_1_System_Object__get_Length
                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)xpProgressData,
                       (MethodInfo *)0x0);
    iVar2 = (xpProgressData->fields).playerCurrentXP;
    iStack_3 = mscorlib.dll::System::Text::EncoderReplacementFallback::
               EncoderReplacementFallback_get_MaxCharCount
                         ((EncoderReplacementFallback *)xpProgressData,(MethodInfo *)0x0);
    pTVar4 = (this->fields).progressText;
    iStack_5 = iVar2 - iStack_3;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    iStack_6 = iVar1 - iStack_3;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    pSVar7 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_XP___0_____1_,arg0,arg1,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar7,(pTVar4->klass->vtable).set_text.method);
      this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
      if (this_00 != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  (this_00,(float)(iVar2 - iStack_3) / (float)(iVar1 - iStack_3),(MethodInfo *)0x0);
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar8 != (MVNetworkGame *)0x0) &&
           (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
           pMVar9 != (MVLocalPlayer *)0x0)) {
          if ((pMVar9->fields)._.level == (this->fields).badgeLevel) {
            return;
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 != (MVNetworkGame *)0x0) &&
             (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
             pMVar9 != (MVLocalPlayer *)0x0)) {
            (this->fields).badgeLevel = (pMVar9->fields)._.level;
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar8 != (MVNetworkGame *)0x0) &&
               (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
               pMVar9 != (MVLocalPlayer *)0x0)) {
              iVar1 = (pMVar9->fields)._.level;
              this_01 = (Action_1_Object_ *)
                        func_?(
                                       TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                       );
              if (this_01 != (Action_1_Object_ *)0x0) {
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (this_01,(Object *)this,
                           MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__BadgeManager);
                }
                BadgeManager::BadgeManager_GetBadgeTexture
                          (iVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                           (MethodInfo *)0x0);
                return;
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


/* Void Start() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Start
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
      func_?();
      pUStack3 = extraout_ECX;
      pUStack4 = extraout_EDX;
    }
    else {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
                 (MethodInfo *)0x0);
      pUStack3 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
      if (pUStack3 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        pUStack4 = (UnityAction__Class *)0x0;
        pUStack3 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
        func_?();
        return;
      }
      pUVar1 = (UnityAction *)0x0;
      if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar1 = pUStack3;
      }
      pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar1 == (UnityAction *)0x0) goto code_?;
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
      pUVar1 = (UnityAction *)0x0;
      if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar1 = pUStack3;
      }
      pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar1 != (UnityAction *)0x0) {
        pUStack3 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
        pUStack4 = (UnityAction__Class *)pUVar1;
        func_?();
        return;
      }
    }
    pUStack4 = (UnityAction__Class *)func_?();
    pUStack3 = extraout_ECX_00;
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,
                    TypeInfo__LevelingManager,unaff_EBP);
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    func_?(&
                    MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__UnityEngine__Events__UnityAction)
  ;
  if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
    }
    else {
      pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
      if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
      (this->fields).badgeLevel = (pMVar7->fields)._.level;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
      pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
      if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
      xpProgressData = MVLocalPlayer::MVLocalPlayer_get_XPProgressData(pMVar7,(MethodInfo *)0x0);
      LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
      pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
      if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
      pXVar8 = (pMVar7->fields).OnXPProgressData;
      pAVar9 = (Action_1_Object_ *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
      if (pAVar9 == (Action_1_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (pAVar9,(Object *)this,
                 MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                 (MethodInfo *)0x0);
      pXVar8 = (XPProgress_OnXPProgressDataDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pXVar8,(Delegate *)pAVar9,(MethodInfo *)0x0);
      if (pXVar8 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar7->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
        func_?();
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkGame *)0x0) {
          pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
          if (pMVar7 != (MVLocalPlayer *)0x0) {
            level = (pMVar7->fields)._.level;
            pAVar9 = (Action_1_Object_ *)
                     func_?(
                                    TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                    );
            if (pAVar9 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (pAVar9,(Object *)this,
                         MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              BadgeManager::BadgeManager_GetBadgeTexture
                        (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar9,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar10 = pXVar8;
      }
      if (pXVar10 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar7->fields).OnXPProgressData = pXVar10;
        pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar10 = pXVar8;
        }
        if (pXVar10 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
    }
    func_?();
  }
  else {
    pUVar11 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar11 = pUVar1;
    }
    if (pUVar11 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar11;
    pUVar11 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar11 = pUVar1;
    }
    if (pUVar11 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LevelProgressAccessoryShop() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop__ctor
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  (this->fields).badgeLevel = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

