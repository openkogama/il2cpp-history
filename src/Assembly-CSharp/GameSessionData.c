
/* String ToString() */

String * Assembly-CSharp.dll::GameSessionData::GameSessionData_ToString
                   (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_serverIP__0___profileID__1___pla);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,9);
  pSVar1 = (this->fields).serverIP;
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    func_?(args->vector,pSVar1);
    iStack_4 = (this->fields).profileID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    iStack_6 = (this->fields).planetID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    iStack_7 = (this->fields).gameMode;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&iStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    pSVar1 = (this->fields).language;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)pSVar1;
    func_?(args->vector + 4,pSVar1);
    bStack_8 = (this->fields).embedded;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar5;
    func_?(args->vector + 5,pOVar5);
    pSVar1 = (this->fields).token;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 7) goto code_?;
    args->vector[6] = (Object *)pSVar1;
    func_?(args->vector + 6,pSVar1);
    pSVar1 = (this->fields).sessionToken;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 8) goto code_?;
    args->vector[7] = (Object *)pSVar1;
    func_?(args->vector + 7,pSVar1);
    pSVar1 = (this->fields).newPlanetName;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (8 < args->max_length) {
      args->vector[8] = (Object *)pSVar1;
      func_?(args->vector + 8,pSVar1);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_serverIP__0___profileID__1___pla,args,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
  return pSVar1;
}


/* GameSessionData() */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor
               (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_game_server_test);
    func_?(&StringLiteral_h5g9REtmi1LT7JY5);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_RegionNotDefined);
    cRam_? = '\x01';
  }
  (this->fields).serverIP = ::StringLiteral__;
  func_?(&this->fields,::StringLiteral__);
  (this->fields).profileID = -1;
  ppSVar1 = &(this->fields).language;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).embeddedSite;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).token;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).sessionToken;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).newPlanetName;
  *ppSVar1 = StringLiteral_game_server_test;
  func_?(ppSVar1,StringLiteral_game_server_test);
  ppSVar1 = &(this->fields).pingURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).disconnectURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).gameRewardURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).gamePublishedURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).purchaseGoldURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).loginURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).signupURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).idleURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).disconnectedURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).playerProfileURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).eliteUpgradeURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).region;
  *ppSVar1 = StringLiteral_RegionNotDefined;
  func_?(ppSVar1,StringLiteral_RegionNotDefined);
  ppSVar1 = &(this->fields).ezKey;
  *ppSVar1 = StringLiteral_h5g9REtmi1LT7JY5;
  func_?(ppSVar1,StringLiteral_h5g9REtmi1LT7JY5);
  ppSVar1 = &(this->fields).reauthURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  ppSVar1 = &(this->fields).gameRewardDataURL;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  method_00 = (MethodInfo *)&(this->fields).referrer;
  *(String **)method_00 = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* GameSessionData(Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor_1
               (GameSessionData *this,Dictionary_2_System_String_System_Object_ *gameSessionData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__TryGetValue_System__String__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_playButtonAdsEnabledDefault);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_game_server_test);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_embedded);
    func_?(&StringLiteral_rewardedAdsEnabledDefault);
    func_?(&StringLiteral_newPlanetName);
    func_?(&StringLiteral_sessionToken);
    func_?(&StringLiteral_interstitialsAdsEnabledDefault);
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_h5g9REtmi1LT7JY5);
    func_?(&StringLiteral_language);
    func_?(&StringLiteral_embeddedSite);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_boostersEnabledDefault);
    func_?(&StringLiteral_planetID);
    func_?(&StringLiteral_gameMode);
    func_?(&StringLiteral_RegionNotDefined);
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  pSVar2 = (String *)0x0;
  pGVar1->serverIP = ::StringLiteral__;
  func_?(pGVar1,::StringLiteral__);
  (this->fields).profileID = -1;
  ppSVar3 = &(this->fields).language;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).embeddedSite;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).token;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).sessionToken;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).newPlanetName;
  *ppSVar3 = StringLiteral_game_server_test;
  func_?(ppSVar3,StringLiteral_game_server_test);
  ppSVar3 = &(this->fields).pingURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).disconnectURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).gameRewardURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).gamePublishedURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).purchaseGoldURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).loginURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).signupURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).idleURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).disconnectedURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).playerProfileURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).eliteUpgradeURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).region;
  *ppSVar3 = StringLiteral_RegionNotDefined;
  func_?(ppSVar3,StringLiteral_RegionNotDefined);
  ppSVar3 = &(this->fields).ezKey;
  *ppSVar3 = StringLiteral_h5g9REtmi1LT7JY5;
  func_?(ppSVar3,StringLiteral_h5g9REtmi1LT7JY5);
  ppSVar3 = &(this->fields).reauthURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  ppSVar3 = &(this->fields).gameRewardDataURL;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,::StringLiteral__);
  method_00 = (MethodInfo *)&(this->fields).referrer;
  *(String **)method_00 = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (gameSessionData != (Dictionary_2_System_String_System_Object_ *)0x0) {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       gameSessionData,(Object *)StringLiteral_serverIP,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar4.m_Index == 0) {
      pGVar1->serverIP = (String *)0x0;
    }
    else {
      TVar5.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      if ((String *)TVar5.m_Index == (String *)0x0) goto code_?;
      pGVar1->serverIP = (String *)TVar5.m_Index;
      TVar5.m_Index = 0;
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      if (TVar5.m_Index == 0) goto code_?;
    }
    func_?();
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       gameSessionData,(Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar4.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar6 = (int32_t *)func_?();
      (this->fields).profileID = *piVar6;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         gameSessionData,(Object *)StringLiteral_planetID,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                        );
      if (TVar4.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar6 = (int32_t *)func_?();
        (this->fields).planetID = *piVar6;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           gameSessionData,(Object *)StringLiteral_gameMode,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                          );
        if (TVar4.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
              (TypeInfo__MV__Common__MVGameMode->_0).element_class) goto code_?;
          piVar6 = (int32_t *)func_?();
          (this->fields).gameMode = *piVar6;
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             gameSessionData,(Object *)StringLiteral_language,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar4.m_Index == 0) {
            (this->fields).language = (String *)0x0;
          }
          else {
            TVar5.m_Index = (int32_t)(String *)0x0;
            if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
              TVar5 = TVar4;
            }
            if ((String *)TVar5.m_Index == (String *)0x0) goto code_?;
            (this->fields).language = (String *)TVar5.m_Index;
            TVar5.m_Index = 0;
            if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
              TVar5 = TVar4;
            }
            if (TVar5.m_Index == 0) goto code_?;
          }
          func_?();
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             gameSessionData,(Object *)StringLiteral_embedded,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pbVar7 = (bool *)func_?();
            (this->fields).embedded = *pbVar7;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                               (Object *)StringLiteral_embeddedSite,(Object **)&stack0xfffffff8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__TryGetValue_System__String__System__Object__
                              );
            if (bVar8 != 0) {
              pSVar9 = (String *)0x0;
              if (pSVar2 != (String *)0x0) {
                if (pSVar2->klass == TypeInfo__System__String) {
                  pSVar9 = pSVar2;
                }
                if (pSVar9 == (String *)0x0) goto code_?;
              }
              (this->fields).embeddedSite = pSVar9;
              if (pSVar2 != (String *)0x0) {
                pSVar9 = (String *)0x0;
                if (pSVar2->klass == TypeInfo__System__String) {
                  pSVar9 = pSVar2;
                }
                if (pSVar9 == (String *)0x0) goto code_?;
              }
              func_?();
            }
            TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_token,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                              );
            TVar4.m_Index = 0;
            if (TVar5.m_Index == 0) {
              (this->fields).token = (String *)0x0;
            }
            else {
              if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
                TVar4 = TVar5;
              }
              if ((String *)TVar4.m_Index == (String *)0x0) goto code_?;
              (this->fields).token = (String *)TVar4.m_Index;
              TVar4.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar5.m_Index == TypeInfo__System__String) {
                TVar4 = TVar5;
              }
              if ((String *)TVar4.m_Index == (String *)0x0) goto code_?;
            }
            func_?();
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                               (Object *)StringLiteral_sessionToken,(Object **)&stack0xfffffff4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__TryGetValue_System__String__System__Object__
                              );
            if (bVar8 != 0) {
              pSVar2 = (String *)0x0;
              if ((String *)TVar4.m_Index != (String *)0x0) {
                if (((String *)TVar4.m_Index)->klass == TypeInfo__System__String) {
                  pSVar2 = (String *)TVar4.m_Index;
                }
                if (pSVar2 == (String *)0x0) goto code_?;
              }
              (this->fields).sessionToken = pSVar2;
              if ((String *)TVar4.m_Index != (String *)0x0) {
                pSVar2 = (String *)0x0;
                if (((String *)TVar4.m_Index)->klass == TypeInfo__System__String) {
                  pSVar2 = (String *)TVar4.m_Index;
                }
                if (pSVar2 == (String *)0x0) goto code_?;
              }
              func_?();
            }
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_playButtonAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar8 == 0) {
              cVar10 = '\0';
            }
            else {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_playButtonAdsEnabledDefault
                                 ,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar11 = (char *)func_?();
              cVar10 = *pcVar11;
            }
            (this->fields).playButtonAdsEnabledDefault = cVar10 != '\0';
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_boostersEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar8 == 0) {
              cVar10 = '\0';
            }
            else {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_boostersEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar11 = (char *)func_?();
              cVar10 = *pcVar11;
            }
            (this->fields).boostersEnabledDefault = cVar10 != '\0';
            pSVar2 = StringLiteral_interstitialsAdsEnabledDefault;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,
                               (Object *)StringLiteral_interstitialsAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar8 == 0) {
              cVar10 = '\0';
            }
            else {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,
                                 (Object *)StringLiteral_interstitialsAdsEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar11 = (char *)func_?();
              cVar10 = *pcVar11;
            }
            (this->fields).interstitialsAdsEnabledDefault = cVar10 != '\0';
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_rewardedAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar8 == 0) {
              cVar10 = '\0';
            }
            else {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_rewardedAdsEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar11 = (char *)func_?();
              cVar10 = *pcVar11;
            }
            (this->fields).rewardedAdsEnabledDefault = cVar10 != '\0';
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                               (Object *)StringLiteral_newPlanetName,(Object **)&stack0xfffffff0,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__TryGetValue_System__String__System__Object__
                              );
            if (bVar8 != 0) {
              pSVar9 = (String *)0x0;
              if (pSVar2 != (String *)0x0) {
                if (pSVar2->klass == TypeInfo__System__String) {
                  pSVar9 = pSVar2;
                }
                if (pSVar9 == (String *)0x0) goto code_?;
              }
              (this->fields).newPlanetName = pSVar9;
              pSStack12 = (String *)0x0;
              if (pSVar2 != (String *)0x0) {
                if (pSVar2->klass == TypeInfo__System__String) {
                  pSStack12 = pSVar2;
                }
                if (pSStack12 == (String *)0x0) goto code_?;
              }
              func_?();
            }
            if ((this->fields).gameMode == 2) {
              (this->fields).planetID = -1;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

