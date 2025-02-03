
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
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 != (UnityAction *)0x0) {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
      pUVar2 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar1;
      }
      if (pUVar2 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
    goto code_?;
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
  func_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar3 != (MVNetworkGame *)0x0) {
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      (this->fields).badgeLevel = (pMVar4->fields)._.level;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          xpProgressData =
               (XPProgressData *)
               DayNightCycle::DayNightCycle_get__skyParamsList
                         ((DayNightCycle *)pMVar4,(MethodInfo *)0x0);
          LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar3 != (MVNetworkGame *)0x0) {
            pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
            if (pMVar4 != (MVLocalPlayer *)0x0) {
              pXVar5 = (pMVar4->fields).OnXPProgressData;
              this_01 = (UnityAction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_01,(Object *)&UNK_?,
                         MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                         (MethodInfo *)0x0);
              pXVar5 = (XPProgress_OnXPProgressDataDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pXVar5,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pXVar5 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
                (pMVar4->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
                func_?();
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar3 != (MVNetworkGame *)0x0) {
                  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
                  if (pMVar4 != (MVLocalPlayer *)0x0) {
                    level = (pMVar4->fields)._.level;
                    this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
                    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                              (this_02,(Object *)&UNK_?,
                               MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                               ,(MethodInfo *)0x0);
                    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    BadgeManager::BadgeManager_GetBadgeTexture
                              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                  pXVar6 = pXVar5;
                }
                if (pXVar6 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
                  (pMVar4->fields).OnXPProgressData = pXVar6;
                  pXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                  if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                    pXVar6 = pXVar5;
                  }
                  if (pXVar6 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
                }
code_?:
                func_?();
              }
            }
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
    if (this_01 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        pXVar3 = (pMVar2->fields).OnXPProgressData;
        this_02 = (UnityAction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)&UNK_?,
                   MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                   (MethodInfo *)0x0);
        pXVar3 = (XPProgress_OnXPProgressDataDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pXVar3,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
          func_?();
          this_03 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
          SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                    (this_03,(Object *)&UNK_?,
                     MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                    ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,(MethodInfo *)0x0);
          func_?();
          return;
        }
        pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar4 = pXVar3;
        }
        if (pXVar4 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar2->fields).OnXPProgressData = pXVar4;
          pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
          if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar4 = pXVar3;
          }
          if (pXVar4 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  else {
    pUVar5 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar1;
    }
    if (pUVar5 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar5;
      pUVar5 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar1;
      }
      if (pUVar5 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      pTRam0000001c =
           UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      func_?();
      if (pRRam00000018 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRRam00000018,(Texture *)pTRam0000001c,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
    pTStack_3 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                WebCompletionSource_1_System_Object__get_Task
                          ((WebCompletionSource_1_System_Object_ *)xpProgressData,(MethodInfo *)0x0)
    ;
    pTVar4 = (this->fields).progressText;
    iStack_5 = iVar2 - (int)pTStack_3;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    iStack_6 = iVar1 - (int)pTStack_3;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    pSVar7 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_XP___0_____1_,arg0,arg1,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar7,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pPVar8 = (this->fields).progressBar;
      if (pPVar8 != (ProgressBar *)0x0) {
        value = (float)(iVar2 - (int)pTStack_3) / (float)(iVar1 - (int)pTStack_3);
        if (value < 0.0) {
          value = 0.0;
        }
        else if (_UNK_? < value) {
          value = _UNK_?;
        }
        (pPVar8->fields).progress = value;
        this_00 = (pPVar8->fields).progressBar;
        if (this_00 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (this_00,value,(MethodInfo *)0x0);
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
             pMVar10 != (MVLocalPlayer *)0x0)) {
            if ((pMVar10->fields)._.level == (this->fields).badgeLevel) {
              return;
            }
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 != (MVNetworkGame *)0x0) &&
               (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
               pMVar10 != (MVLocalPlayer *)0x0)) {
              (this->fields).badgeLevel = (pMVar10->fields)._.level;
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 != (MVNetworkGame *)0x0) &&
                 (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
                 pMVar10 != (MVLocalPlayer *)0x0)) {
                iVar1 = (pMVar10->fields)._.level;
                this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                          func_?(
                                         TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                         );
                Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
                SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      func_?();
      return;
    }
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 == (UnityAction *)0x0) {
      func_?();
    }
    else {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 != (UnityAction *)0x0) {
        func_?();
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,unaff_EBP);
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
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pUVar1 != (UnityAction *)0x0) {
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
    goto code_?;
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
  func_?();
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 != (MVNetworkGame *)0x0) {
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
    if (pMVar6 != (MVLocalPlayer *)0x0) {
      (this->fields).badgeLevel = (pMVar6->fields)._.level;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        if (pMVar6 != (MVLocalPlayer *)0x0) {
          xpProgressData =
               (XPProgressData *)
               DayNightCycle::DayNightCycle_get__skyParamsList
                         ((DayNightCycle *)pMVar6,(MethodInfo *)0x0);
          LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
            if (pMVar6 != (MVLocalPlayer *)0x0) {
              pXVar7 = (pMVar6->fields).OnXPProgressData;
              this_00 = (UnityAction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_00,(Object *)&UNK_?,
                         MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                         (MethodInfo *)0x0);
              pXVar7 = (XPProgress_OnXPProgressDataDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pXVar7,(Delegate *)this_00,(MethodInfo *)0x0);
              if (pXVar7 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
                (pMVar6->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
                func_?();
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar5 != (MVNetworkGame *)0x0) {
                  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
                  if (pMVar6 != (MVLocalPlayer *)0x0) {
                    level = (pMVar6->fields)._.level;
                    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
                    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                              (this_01,(Object *)&UNK_?,
                               MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                               ,(MethodInfo *)0x0);
                    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    BadgeManager::BadgeManager_GetBadgeTexture
                              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                pXVar8 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                  pXVar8 = pXVar7;
                }
                if (pXVar8 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
                  (pMVar6->fields).OnXPProgressData = pXVar8;
                  pXVar8 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                  if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                    pXVar8 = pXVar7;
                  }
                  if (pXVar8 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
                }
code_?:
                func_?();
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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

