
/* Void Awake() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_Awake(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelBadge;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpBar;
    if (pPVar1 != (ProgressBarAndroid *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pPVar1 = (this->fields).subscriberXPBar;
        if (pPVar1 != (ProgressBarAndroid *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pPVar1,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?();
            }
            if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
              LevelBadge_OnLevelingInitialized(this,(MethodInfo *)0x0);
              return;
            }
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?();
            }
            pUVar3 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)this,MethodInfo__LevelBadge__OnLevelingInitialized__,
                       (MethodInfo *)0x0);
            pUVar4 = (UnityAction *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
            _uStack00000040 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar4);
            pUVar3 = (UnityAction *)0x0;
            if (pUVar4 == (UnityAction *)0x0) {
code_?:
              TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
              return;
            }
            if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar3 = pUVar4;
            }
            if (pUVar3 != (UnityAction *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  _uStack00000040 = func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnDestroy(LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_OnLevelingInitialized
               (LevelBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pOVar3 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pMVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BadgeManager);
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                ((int32_t)pOVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar4,
                 (MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          pUVar5 = (pMVar2->fields)._.OnLevelChanged;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__LevelBadge__UpdateBadge_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          pUVar6 = (UnityAction_1_System_Int32_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar5,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pUVar5 = (UnityAction_1_System_Int32_ *)0x0;
          if (pUVar6 != (UnityAction_1_System_Int32_ *)0x0) {
            if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
              pUVar5 = pUVar6;
            }
            pXVar7 = (XPProgress_OnXPProgressDataDelegate__Class *)
                     TypeInfo__UnityEngine__Events__UnityAction<int>;
            if (pUVar5 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          }
          (pMVar2->fields)._.OnLevelChanged = pUVar5;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            this_00 = (ThemeSkybox *)
                      MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (this_00 != (ThemeSkybox *)0x0) {
              this_01 = (XPProgressData *)
                        ThemeSkybox::ThemeSkybox_get_SunLight(this_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (this_01 != (XPProgressData *)0x0) {
                iVar8 = XPProgressData::XPProgressData_get_XpNextRel(this_01,(MethodInfo *)0x0);
                if (iVar8 < 0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    this = (LevelBadge *)TypeInfo__UnityEngine__Debug;
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Can_t_calculate_update_progress_,
                             (MethodInfo *)0x0);
code_?:
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar1 != (MVNetworkGame *)0x0) {
                    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                    if (pMVar2 != (MVLocalPlayer *)0x0) {
                      a = (pMVar2->fields).OnXPProgressData;
                      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar4,(Object *)this,
                                 MethodInfo__LevelBadge__UpdateProgress_XPProgressData_,
                                 (MethodInfo *)0x0);
                      pUVar6 = (UnityAction_1_System_Int32_ *)
                               mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)a,(Delegate *)pUVar4,(MethodInfo *)0x0);
                      pUVar5 = (UnityAction_1_System_Int32_ *)0x0;
                      if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
                        (pMVar2->fields).OnXPProgressData =
                             (XPProgress_OnXPProgressDataDelegate *)pUVar5;
                        return;
                      }
                      if ((XPProgress_OnXPProgressDataDelegate__Class *)pUVar6->klass ==
                          TypeInfo__XPProgress__OnXPProgressDataDelegate) {
                        pUVar5 = pUVar6;
                      }
                      pXVar7 = TypeInfo__XPProgress__OnXPProgressDataDelegate;
                      if (pUVar5 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
                      goto code_?;
                    }
                  }
                }
                else {
                  iVar8 = XPProgressData::XPProgressData_get_XpRel(this_01,(MethodInfo *)0x0);
                  fVar9 = (float)iVar8;
                  iVar8 = XPProgressData::XPProgressData_get_XpNextRel(this_01,(MethodInfo *)0x0);
                  this = (LevelBadge *)(fVar9 / (float)iVar8);
                  if ((float)this < 0.0) {
                    pOVar3 = (Object *)func_?();
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__String);
                    }
                    message = mscorlib.dll::System::String::String_Concat
                                        ((Object *)StringLiteral_ProgressPercentage__,pOVar3,
                                         (MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                              ((Object *)message,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0)
                    ;
                  }
                  if (pPRam00000010 != (ProgressBarAndroid *)0x0) {
                    ProgressBarAndroid::ProgressBarAndroid_set_Progress
                              (pPRam00000010,(float)this,(MethodInfo *)0x0);
                    if (pPRam00000014 != (ProgressBarAndroid *)0x0) {
                      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                                (pPRam00000014,(float)this,(MethodInfo *)0x0);
                      goto code_?;
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
  pUVar6 = extraout_ECX;
  pXVar7 = (XPProgress_OnXPProgressDataDelegate__Class *)extraout_EDX;
code_?:
  func_?(pUVar6,pXVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_StreamingAssetCallback
               (LevelBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = x;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pRVar2 = (this->fields).levelBadge;
  if (pRVar2 != (RawImage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar2,1,(MethodInfo *)0x0);
    pRVar2 = (this->fields).levelBadge;
    if (pRVar2 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRVar2,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_00 != (MVNetworkGame *)0x0) &&
          (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
          this_01 != (MVLocalPlayer *)0x0)) &&
         (this_02 = (SubscriptionRulesWrapper *)
                    PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                    PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                              ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                               (MethodInfo *)0x0), this_02 != (SubscriptionRulesWrapper *)0x0)) {
        bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_02,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
        pPVar3 = (this->fields).xpBar;
        if ((pPVar3 != (ProgressBarAndroid *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pPVar3,(MethodInfo *)0x0),
           pGVar4 != (GameObject *)0x0)) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 == bVar1) {
            pPVar3 = (this->fields).xpBar;
            if ((pPVar3 == (ProgressBarAndroid *)0x0) ||
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pPVar3,(MethodInfo *)0x0),
               pGVar4 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,bVar1 == 0,(MethodInfo *)0x0);
          }
          pPVar3 = (this->fields).subscriberXPBar;
          if ((pPVar3 != (ProgressBarAndroid *)0x0) &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pPVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) {
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar4,(MethodInfo *)0x0);
            if (bVar5 == bVar1) {
              return;
            }
            pPVar3 = (this->fields).subscriberXPBar;
            if ((pPVar3 != (ProgressBarAndroid *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pPVar3,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,bVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateBadge(Int32) */

void Assembly-CSharp.dll::LevelBadge::LevelBadge_UpdateBadge
               (LevelBadge *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelBadge__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (xpProgress != (XPProgressData *)0x0) {
    iVar1 = XPProgressData::XPProgressData_get_XpNextRel(xpProgress,(MethodInfo *)0x0);
    if (iVar1 < 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Can_t_calculate_update_progress_,(MethodInfo *)0x0);
      return;
    }
    iVar1 = XPProgressData::XPProgressData_get_XpRel(xpProgress,(MethodInfo *)0x0);
    iVar2 = XPProgressData::XPProgressData_get_XpNextRel(xpProgress,(MethodInfo *)0x0);
    value = (undefined1 *)((float)iVar1 / (float)iVar2);
    if ((float)value < 0.0) {
      value = &stack0xfffffff8;
      this = (LevelBadge *)TypeInfo__System__Single;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_ProgressPercentage__,arg1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_processPercentage_invalid_,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).xpBar;
    if (pPVar3 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar3,(float)value,(MethodInfo *)0x0);
      pPVar3 = (this->fields).subscriberXPBar;
      if (pPVar3 != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar3,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

