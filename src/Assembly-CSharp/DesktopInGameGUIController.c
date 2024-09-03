
/* Void HideEUseIcon() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_HideEUseIcon
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if (this_00 != (ShowUse *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_Initialize
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedGetRequest);
    func_?(&
                    MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__ContainsKey_EmbeddedSite_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__get_Item_EmbeddedSite_
                   );
    func_?(&
                    LevelBadge_MethodInfo__UnityEngine__Object__Instantiate<LevelBadge>_LevelBadge__UnityEngine__Transform__bool_
                   );
    func_?(&
                    ShowUse3D_MethodInfo__UnityEngine__Object__Instantiate<ShowUse3D>_ShowUse3D__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  original = (this->fields).use3DPrefab;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar2 = (ShowUse *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)original,pTVar1,0,
                      ShowUse3D_MethodInfo__UnityEngine__Object__Instantiate<ShowUse3D>_ShowUse3D__UnityEngine__Transform__bool_
                     );
  (this->fields).use = pSVar2;
  func_?(&(this->fields).use,pSVar2);
  pSVar2 = (this->fields).use;
  if (pSVar2 != (ShowUse *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pSVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar1,(MethodInfo *)0x0);
      bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar3 != 0) {
        pEVar4 = (this->fields).embeddedPlayerConfig;
        pGVar5 = (this->fields).touristLogo;
        if (pEVar4 == (EmbeddedPlayerConfig *)0x0) goto code_?;
        bVar3 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsSite
                          (pEVar4,EmbeddedSite__Enum_GameDistribution,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,bVar3 ^ 1,(MethodInfo *)0x0);
        pEVar4 = (this->fields).embeddedPlayerConfig;
        if (pEVar4 == (EmbeddedPlayerConfig *)0x0) goto code_?;
        pEVar6 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&pLStack_7,pEVar4,(MethodInfo *)0x0);
        key = pEVar6->siteEnum;
        if ((key != 0) && (key != 5)) {
          pDVar8 = (this->fields).logoToPathMap;
          if (pDVar8 == (Dictionary_2_EmbeddedSite_System_String_ *)0x0) goto code_?;
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar8,key,
                             MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__ContainsKey_EmbeddedSite_
                            );
          if (bVar3 != 0) {
            this_00 = (this->fields).logo;
            if (this_00 == (Image *)0x0) goto code_?;
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pGVar5 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar9 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
            pDVar8 = (this->fields).logoToPathMap;
            if (pDVar8 == (Dictionary_2_EmbeddedSite_System_String_ *)0x0) goto code_?;
            str1 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,key,
                              MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__get_Item_EmbeddedSite_
                             );
            pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,(MethodInfo *)0x0);
            this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
            SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_02 = (AssetBundleRequest *)func_?();
            AssetBundleRequest::AssetBundleRequest__ctor
                      (this_02,pSVar9,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                       WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            AsyncWWWManager::AsyncWWWManager_WWWRequest
                      ((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
          }
        }
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        pGVar5 = (this->fields).leaveEditPlayModeButton;
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
      }
      pGVar5 = (this->fields).winningConditionLayoutGroup;
      pLVar10 = (this->fields).levelBadge;
      if (pGVar5 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar10 = (LevelBadge *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pLVar10,pTVar1,0,
                             LevelBadge_MethodInfo__UnityEngine__Object__Instantiate<LevelBadge>_LevelBadge__UnityEngine__Transform__bool_
                            );
        (this->fields).levelBadge = pLVar10;
        func_?();
        pLVar10 = (this->fields).levelBadge;
        if (pLVar10 != (LevelBadge *)0x0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pLVar10,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      (pTVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_OnDestroy
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void ShowEUseIcon(ShowUseOption, Int32) */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_ShowEUseIcon
               (DesktopInGameGUIController *this,ShowUseOption__Enum option,int32_t woID,
               MethodInfo *method)

{
  pSVar1 = (this->fields).use;
  if (pSVar1 != (ShowUse *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).use;
      if (pSVar1 != (ShowUse *)0x0) {
        (*(code *)(pSVar1->klass->vtable).__unknown.method)();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::DesktopInGameGUIController::
     DesktopInGameGUIController_StreamingAssetCallback
               (DesktopInGameGUIController *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Streaming_asset_callback_failed_);
    func_?(&StringLiteral_referrer_logo_set_from_callback_);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    UVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_result(www,(MethodInfo *)0x0);
    if (UVar1 != UnityWebRequest_Result__Enum_ConnectionError) {
      UVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_result(www,(MethodInfo *)0x0);
      if (UVar1 != UnityWebRequest_Result__Enum_ProtocolError) {
        this_01 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
                  __Il2CppFullySharedGenericType]::
                  WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                            ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                              *)www,(MethodInfo *)0x0);
        if (this_01 !=
            (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            0x0) {
          data = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
                 DownloadHandler_get_data((DownloadHandler *)this_01,(MethodInfo *)0x0);
          this_02 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_4
                    (this_02,2,2,(MethodInfo *)0x0);
          UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(this_02,data,(MethodInfo *)0x0);
          this_00 = (this->fields).logo;
          if (this_02 != (Texture2D *)0x0) {
            iVar2 = (*(code *)(this_02->klass->vtable).get_width.method)
                              (this_02,(this_02->klass->vtable).set_width.methodPtr);
            pIVar3 = (this_02->klass->vtable).set_height.methodPtr;
            fVar4 = (float)iVar2;
            pTVar5 = this_02;
            iVar2 = (*(code *)(this_02->klass->vtable).get_height.method)();
            rect.m_YMin = (float)pIVar3;
            rect.m_XMin = (float)pTVar5;
            rect.m_Width = fVar4;
            rect.m_Height = (float)iVar2;
            value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                              (this_02,rect,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (this_00,value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVGameControllerBase);
                cRam_? = '\x01';
              }
              pGVar6 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar6 != (GameSessionData *)0x0) {
                pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                   (StringLiteral_referrer_logo_set_from_callback_,
                                    (pGVar6->fields).referrer,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar7,(MethodInfo *)0x0);
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
    }
    pSVar7 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Streaming_asset_callback_failed_,pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar7,(MethodInfo *)0x0);
  }
  return;
}


/* DesktopInGameGUIController() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController__ctor
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Add_EmbeddedSite__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>
                   );
    func_?(&StringLiteral_Logos_Logo_Poki_png);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
               (Object *)StringLiteral_Logos_Logo_Poki_png,
               MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Add_EmbeddedSite__System__String_
              );
    (this->fields).logoToPathMap = (Dictionary_2_EmbeddedSite_System_String_ *)this_00;
    func_?(&(this->fields).logoToPathMap,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

