
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
              ppXVar6 = &(pMVar4->fields).OnXPProgressData;
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
                *ppXVar6 = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
                func_?();
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar3 != (MVNetworkGame *)0x0) {
                  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
                  if (pMVar4 != (MVLocalPlayer *)0x0) {
                    level = (pMVar4->fields)._.level;
                    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                               *)func_?();
                    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::
                    IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                    __Il2CppFullySharedGenericType]::
                    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
                pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                  pXVar7 = pXVar5;
                }
                if (pXVar7 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
                  *ppXVar6 = pXVar7;
                  pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                  if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                    pXVar7 = pXVar5;
                  }
                  if (pXVar7 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
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
    func_?(TypeInfo__LevelingManager->static_fields);
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUVar1;
  }
  if (pUVar2 == (UnityAction *)0x0) {
    func_?();
    func_?();
    func_?();
  }
  else {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      pTVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
               DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      puVar4 = (undefined4 *)(unaff_EDI + 0x1c);
      *puVar4 = pTVar3;
      func_?(puVar4);
      if (*(RawImage **)(unaff_EDI + 0x18) != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (*(RawImage **)(unaff_EDI + 0x18),(Texture *)*puVar4,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
    iStack_1 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
               SparselyPopulatedArrayFragment_1_System_Object__get_Length
                         ((SparselyPopulatedArrayFragment_1_System_Object_ *)xpProgressData,
                          (MethodInfo *)0x0);
    iVar2 = (xpProgressData->fields).playerCurrentXP;
    pTVar3 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       ((WebCompletionSource_1_System_Object_ *)xpProgressData,(MethodInfo *)0x0);
    iVar2 = iVar2 - (int)pTVar3;
    pTVar4 = (this->fields).progressText;
    iStack_5 = iVar2;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    iStack_6 = iStack_1 - (int)pTVar3;
    iStack_1 = iStack_6;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    pSVar7 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_XP___0_____1_,arg0,arg1,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar7,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pPVar8 = (this->fields).progressBar;
      if (pPVar8 != (ProgressBar *)0x0) {
        value = (float)iVar2 / (float)iStack_1;
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
                level = (pMVar10->fields)._.level;
                this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                           *)func_?(
                                            TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                            );
                DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
                Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          (this_01,(Object *)this,
                           MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__BadgeManager);
                }
                BadgeManager::BadgeManager_GetBadgeTexture
                          (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
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
              ppXVar8 = &(pMVar6->fields).OnXPProgressData;
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
                *ppXVar8 = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
                func_?();
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar5 != (MVNetworkGame *)0x0) {
                  pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
                  if (pMVar6 != (MVLocalPlayer *)0x0) {
                    level = (pMVar6->fields)._.level;
                    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                               *)func_?();
                    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::
                    IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                    __Il2CppFullySharedGenericType]::
                    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
                pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                  pXVar9 = pXVar7;
                }
                if (pXVar9 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
                  *ppXVar8 = pXVar9;
                  pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
                  if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                    pXVar9 = pXVar7;
                  }
                  if (pXVar9 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
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

