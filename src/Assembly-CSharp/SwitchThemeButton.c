
/* Void Initialize(Int32, Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_Initialize
               (SwitchThemeButton *this,int32_t levelRequirement,int32_t goldReq,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if ((pMVar2->fields)._.level < levelRequirement) {
        if (cRam_? == '\0') {
          func_?();
          func_?(&TypeInfo__BadgeManager);
          func_?(&
                          MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                         );
          cRam_? = '\x01';
        }
        pGVar3 = (this->fields).levelReq;
        if (levelRequirement < 1) {
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
        }
        else {
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
          SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BadgeManager);
          }
          BadgeManager::BadgeManager_GetBadgeTexture
                    (levelRequirement,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                     (MethodInfo *)0x0);
        }
        pGVar3 = (this->fields).levelReq;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields).memberUI;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).priceTag;
      }
      else {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if ((pMVar2 == (MVLocalPlayer *)0x0) ||
           (this_00 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
           this_00 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
        bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_00,SubscriptionBenefit__Enum_FreeBuildingGameObjects,
                           (MethodInfo *)0x0);
        piVar5 = piRam_?;
        if (bVar4 == 0) {
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x318))();
            if (pGRam00000010 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGRam00000010,0,(MethodInfo *)0x0);
              if (pGRam00000018 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGRam00000018,1,(MethodInfo *)0x0);
                if (pGRam00000020 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGRam00000020,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        if (pGRam00000010 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGRam00000010,0,(MethodInfo *)0x0);
        if (pGRam00000018 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGRam00000018,0,(MethodInfo *)0x0);
        pGVar3 = pGRam00000020;
      }
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_OnDestroy
               (SwitchThemeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnLevelTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_OnLevelTextureReceived
               (SwitchThemeButton *this,UnityWebRequest *www,MethodInfo *method)

{
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pTRam00000028 =
           UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      func_?();
      if (pRRam00000014 == (RawImage *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRRam00000014,(Texture *)pTRam00000028,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_Reset
               (SwitchThemeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pBVar1 = (Button *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                       );
    (this->fields).button = pBVar1;
    func_?(&(this->fields).button,pBVar1);
  }
  return;
}


/* Void set_GoldRequirement(Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_set_GoldRequirement
               (SwitchThemeButton *this,int32_t value,MethodInfo *method)

{
  pTVar1 = (this->fields).priceTagNumber;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&value,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_LevelRequirement(Int32) */

void Assembly-CSharp.dll::SwitchThemeButton::SwitchThemeButton_set_LevelRequirement
               (SwitchThemeButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelReq;
  if (value < 1) {
    if (this_00 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
      }
      (*pcRam_?)(this_00,0);
      return;
    }
  }
  else if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SwitchThemeButton__OnLevelTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              ((int32_t)this_01,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

