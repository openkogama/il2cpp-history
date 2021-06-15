
/* Void HideEUseIcon() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_HideEUseIcon
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if (this_00 != (ShowUse *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_Initialize
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).use3DPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ShowUse3D_MethodInfo__UnityEngine__Object__Instantiate<ShowUse3D>_ShowUse3D_);
  (this->fields).use = (ShowUse *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar2,pTVar3,0,(MethodInfo *)0x0);
      this_00 = (this->fields).use;
      if (this_00 != (ShowUse *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (bVar4 != 0) {
            pGVar5 = (this->fields).touristLogo;
            if (pGVar5 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            this_01 = (this->fields).embeddedPlayerConfig;
            if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
            pEVar6 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                               ((EmbeddedSiteConfigData *)&stack0xffffffec,this_01,(MethodInfo *)0x0
                               );
            key = pEVar6->siteEnum;
            if ((key != EmbeddedSite__Enum_None) && (key != EmbeddedSite__Enum_DefaultEmbedded)) {
              pDVar7 = (this->fields).logoToPathMap;
              if (pDVar7 == (Dictionary_2_EmbeddedSite_System_String_ *)0x0) goto code_?;
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmbeddedSite,System::
                      Object]::Dictionary_2_EmbeddedSite_System_Object__ContainsKey
                                ((Dictionary_2_EmbeddedSite_System_Object_ *)pDVar7,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__ContainsKey_EmbeddedSite_
                                );
              if (bVar4 != 0) {
                this_02 = (this->fields).logo;
                if (this_02 == (Image *)0x0) goto code_?;
                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0);
                if (pGVar5 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,1,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar8 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0)
                ;
                pDVar7 = (this->fields).logoToPathMap;
                if (pDVar7 == (Dictionary_2_EmbeddedSite_System_String_ *)0x0)
                goto code_?;
                str1 = (String *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[EmbeddedSite,System
                       ::Object]::Dictionary_2_EmbeddedSite_System_Object__get_Item
                                 ((Dictionary_2_EmbeddedSite_System_Object_ *)pDVar7,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__get_Item_EmbeddedSite_
                                 );
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar8 = mscorlib.dll::System::String::String_Concat_2
                                   (pSVar8,str1,(MethodInfo *)0x0);
                this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_04,(Object *)this,
                           MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                           ,
                           MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                          );
                this_05 = (AssetBundleRequest *)func_?();
                AssetBundleRequest::AssetBundleRequest__ctor
                          (this_05,pSVar8,
                           (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                           WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
                  func_?();
                }
                AsyncWWWManager::AsyncWWWManager_WWWRequest
                          ((AsyncWebRequest *)0x0,(MethodInfo *)0x0);
              }
            }
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pIVar9 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if (pIVar9 != (IEditModeUI *)0x0) {
            pGVar5 = (this->fields).leaveEditPlayModeButton;
            if (pGVar5 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
          }
          pXVar1 = (XpBoostParticlePreviewer *)(this->fields).levelBadge;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (pXVar1,
                              LevelBadge_MethodInfo__UnityEngine__Object__Instantiate<LevelBadge>_LevelBadge_
                             );
          (this->fields).levelBadge = (LevelBadge *)pXVar1;
          if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pXVar1,(MethodInfo *)0x0);
            pGVar5 = (this->fields).winningConditionLayoutGroup;
            if (pGVar5 != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar5,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar2,pTVar3,0,(MethodInfo *)0x0);
                this_03 = (this->fields).levelBadge;
                if (this_03 != (LevelBadge *)0x0) {
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this_03,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                              (pTVar2,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController_OnDestroy
               (DesktopInGameGUIController *this,MethodInfo *method)

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
             MethodInfo__DesktopInGameGUIController__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
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
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pSVar1,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    bVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_isNetworkError(www,(MethodInfo *)0x0);
    if ((bVar1 != 0) ||
       (bVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_get_isHttpError(www,(MethodInfo *)0x0), bVar1 != 0)) {
      pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Streaming_asset_callback_failed_,pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    this_01 = (PlayButtonMobile *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                         (MethodInfo *)0x0);
    if (this_01 != (PlayButtonMobile *)0x0) {
      PlayButtonMobile::PlayButtonMobile_OnCountdownEnd(this_01,(MethodInfo *)0x0);
      this_02 = (Texture2D *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                (this_02,2,2,(MethodInfo *)0x0);
      UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
      ImageConversion_LoadImage_1(this_02,data,(MethodInfo *)0x0);
      this_00 = (this->fields).logo;
      if (this_02 != (Texture2D *)0x0) {
        (*(code *)(this_02->klass->vtable).get_width.method)();
        (*(code *)(this_02->klass->vtable).get_height.method)(this_02);
        func_?(&stack0xffffffe4,0,0);
        pivot.x = 0.0;
        pivot.y = 0.0;
        uVar3 = 0;
        uVar4 = 0x3f000000;
        uVar5 = 0x3f000000;
        func_?(&stack0xfffffff4);
        rect.m_YMin = (float)uVar4;
        rect.m_XMin = (float)uVar5;
        rect.m_Width = (float)uVar3;
        rect.m_Height = 0.0;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                          (this_02,rect,pivot,(MethodInfo *)0x0);
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,value,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0)
          ;
          if (pGVar6 != (GameSessionData *)0x0) {
            pSVar2 = (pGVar6->fields).referrer;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar2 = mscorlib.dll::System::String::String_Concat_2
                               (StringLiteral_referrer_logo_set_from_callback_,pSVar2,
                                (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar2,(MethodInfo *)0x0);
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


/* DesktopInGameGUIController() */

void Assembly-CSharp.dll::DesktopInGameGUIController::DesktopInGameGUIController__ctor
               (DesktopInGameGUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_EmbeddedSite_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Dictionary__
            );
  if (this_00 != (Dictionary_2_EmbeddedSite_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[EmbeddedSite,System::Object]::
    Dictionary_2_EmbeddedSite_System_Object__Add
              ((Dictionary_2_EmbeddedSite_System_Object_ *)this_00,EmbeddedSite__Enum_Poki,
               (Object *)StringLiteral_Logos_Logo_Poki_png,
               MethodInfo__System__Collections__Generic__Dictionary<EmbeddedSite,_System::String>__Add_EmbeddedSite__System__String_
              );
    (this->fields).logoToPathMap = this_00;
    uStack1 = 0;
    if (cRam_? == '\0') {
      pOStack2 = (Object_1__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack2 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

