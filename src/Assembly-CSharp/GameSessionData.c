
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
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = ::StringLiteral__;
  func_?(&(this->fields).language,::StringLiteral__);
  (this->fields).token = ::StringLiteral__;
  func_?(&(this->fields).token,::StringLiteral__);
  (this->fields).sessionToken = ::StringLiteral__;
  func_?(&(this->fields).sessionToken,::StringLiteral__);
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  func_?(&(this->fields).newPlanetName,StringLiteral_game_server_test);
  (this->fields).pingURL = ::StringLiteral__;
  func_?(&(this->fields).pingURL,::StringLiteral__);
  (this->fields).disconnectURL = ::StringLiteral__;
  func_?(&(this->fields).disconnectURL,::StringLiteral__);
  (this->fields).gameRewardURL = ::StringLiteral__;
  func_?(&(this->fields).gameRewardURL,::StringLiteral__);
  (this->fields).gamePublishedURL = ::StringLiteral__;
  func_?(&(this->fields).gamePublishedURL,::StringLiteral__);
  (this->fields).purchaseGoldURL = ::StringLiteral__;
  func_?(&(this->fields).purchaseGoldURL,::StringLiteral__);
  (this->fields).loginURL = ::StringLiteral__;
  func_?(&(this->fields).loginURL,::StringLiteral__);
  (this->fields).signupURL = ::StringLiteral__;
  func_?(&(this->fields).signupURL,::StringLiteral__);
  (this->fields).idleURL = ::StringLiteral__;
  func_?(&(this->fields).idleURL,::StringLiteral__);
  (this->fields).disconnectedURL = ::StringLiteral__;
  func_?(&(this->fields).disconnectedURL,::StringLiteral__);
  (this->fields).playerProfileURL = ::StringLiteral__;
  func_?(&(this->fields).playerProfileURL,::StringLiteral__);
  (this->fields).eliteUpgradeURL = ::StringLiteral__;
  func_?(&(this->fields).eliteUpgradeURL,::StringLiteral__);
  (this->fields).region = StringLiteral_RegionNotDefined;
  func_?(&(this->fields).region,StringLiteral_RegionNotDefined);
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  func_?(&(this->fields).ezKey,StringLiteral_h5g9REtmi1LT7JY5);
  (this->fields).reauthURL = ::StringLiteral__;
  func_?(&(this->fields).reauthURL,::StringLiteral__);
  (this->fields).gameRewardDataURL = ::StringLiteral__;
  func_?(&(this->fields).gameRewardDataURL,::StringLiteral__);
  (this->fields).referrer = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).referrer;
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
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_boostersEnabledDefault);
    func_?(&StringLiteral_planetID);
    func_?(&StringLiteral_gameMode);
    func_?(&StringLiteral_RegionNotDefined);
    cRam_? = '\x01';
  }
  (this->fields).serverIP = ::StringLiteral__;
  func_?(&this->fields,::StringLiteral__);
  (this->fields).profileID = -1;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = ::StringLiteral__;
  func_?(&(this->fields).language,::StringLiteral__);
  (this->fields).token = ::StringLiteral__;
  func_?(&(this->fields).token,::StringLiteral__);
  (this->fields).sessionToken = ::StringLiteral__;
  func_?(&(this->fields).sessionToken,::StringLiteral__);
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  func_?(&(this->fields).newPlanetName,StringLiteral_game_server_test);
  (this->fields).pingURL = ::StringLiteral__;
  func_?(&(this->fields).pingURL,::StringLiteral__);
  (this->fields).disconnectURL = ::StringLiteral__;
  func_?(&(this->fields).disconnectURL,::StringLiteral__);
  (this->fields).gameRewardURL = ::StringLiteral__;
  func_?(&(this->fields).gameRewardURL,::StringLiteral__);
  (this->fields).gamePublishedURL = ::StringLiteral__;
  func_?(&(this->fields).gamePublishedURL,::StringLiteral__);
  (this->fields).purchaseGoldURL = ::StringLiteral__;
  func_?(&(this->fields).purchaseGoldURL,::StringLiteral__);
  (this->fields).loginURL = ::StringLiteral__;
  func_?(&(this->fields).loginURL,::StringLiteral__);
  (this->fields).signupURL = ::StringLiteral__;
  func_?(&(this->fields).signupURL,::StringLiteral__);
  (this->fields).idleURL = ::StringLiteral__;
  func_?(&(this->fields).idleURL,::StringLiteral__);
  (this->fields).disconnectedURL = ::StringLiteral__;
  func_?(&(this->fields).disconnectedURL,::StringLiteral__);
  (this->fields).playerProfileURL = ::StringLiteral__;
  func_?(&(this->fields).playerProfileURL,::StringLiteral__);
  (this->fields).eliteUpgradeURL = ::StringLiteral__;
  func_?(&(this->fields).eliteUpgradeURL,::StringLiteral__);
  (this->fields).region = StringLiteral_RegionNotDefined;
  func_?(&(this->fields).region,StringLiteral_RegionNotDefined);
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  func_?(&(this->fields).ezKey,StringLiteral_h5g9REtmi1LT7JY5);
  (this->fields).reauthURL = ::StringLiteral__;
  func_?(&(this->fields).reauthURL,::StringLiteral__);
  (this->fields).gameRewardDataURL = ::StringLiteral__;
  func_?(&(this->fields).gameRewardDataURL,::StringLiteral__);
  (this->fields).referrer = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).referrer;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (gameSessionData != (Dictionary_2_System_String_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       gameSessionData,(Object *)StringLiteral_serverIP,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar1.m_Index == 0) {
      (this->fields).serverIP = (String *)0x0;
    }
    else {
      TVar2.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
      (this->fields).serverIP = (String *)TVar2.m_Index;
      TVar2.m_Index = 0;
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      if (TVar2.m_Index == 0) goto code_?;
    }
    func_?();
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       gameSessionData,(Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this->fields).profileID = *piVar3;
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         gameSessionData,(Object *)StringLiteral_planetID,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                        );
      if (TVar1.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (this->fields).planetID = *piVar3;
        TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           gameSessionData,(Object *)StringLiteral_gameMode,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                          );
        if (TVar1.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
              (TypeInfo__MV__Common__MVGameMode->_0).element_class) goto code_?;
          piVar3 = (int32_t *)func_?();
          (this->fields).gameMode = *piVar3;
          TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             gameSessionData,(Object *)StringLiteral_language,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar1.m_Index == 0) {
            (this->fields).language = (String *)0x0;
          }
          else {
            TVar2.m_Index = (int32_t)(String *)0x0;
            if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
              TVar2 = TVar1;
            }
            if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
            (this->fields).language = (String *)TVar2.m_Index;
            TVar2.m_Index = 0;
            if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
              TVar2 = TVar1;
            }
            if (TVar2.m_Index == 0) goto code_?;
          }
          func_?();
          TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             gameSessionData,(Object *)StringLiteral_embedded,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar1.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pbVar4 = (bool *)func_?();
            (this->fields).embedded = *pbVar4;
            TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_token,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                              );
            if (TVar1.m_Index == 0) {
              (this->fields).token = (String *)0x0;
            }
            else {
              TVar2.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                TVar2 = TVar1;
              }
              if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
              (this->fields).token = (String *)TVar2.m_Index;
              TVar2.m_Index = 0;
              if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                TVar2 = TVar1;
              }
              if (TVar2.m_Index == 0) goto code_?;
            }
            func_?();
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_sessionToken,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 != 0) {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_sessionToken,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar1.m_Index == 0) {
                (this->fields).sessionToken = (String *)0x0;
              }
              else {
                TVar2.m_Index = (int32_t)(String *)0x0;
                if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                  TVar2 = TVar1;
                }
                if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
                (this->fields).sessionToken = (String *)TVar2.m_Index;
                TVar2.m_Index = 0;
                if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                  TVar2 = TVar1;
                }
                if (TVar2.m_Index == 0) goto code_?;
              }
              func_?();
            }
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_playButtonAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 == 0) {
              cVar6 = '\0';
            }
            else {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_playButtonAdsEnabledDefault
                                 ,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar1.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar7 = (char *)func_?();
              cVar6 = *pcVar7;
            }
            (this->fields).playButtonAdsEnabledDefault = cVar6 != '\0';
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_boostersEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 == 0) {
              cVar6 = '\0';
            }
            else {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_boostersEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar1.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar7 = (char *)func_?();
              cVar6 = *pcVar7;
            }
            (this->fields).boostersEnabledDefault = cVar6 != '\0';
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,
                               (Object *)StringLiteral_interstitialsAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 == 0) {
              cVar6 = '\0';
            }
            else {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,
                                 (Object *)StringLiteral_interstitialsAdsEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar1.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar7 = (char *)func_?();
              cVar6 = *pcVar7;
            }
            (this->fields).interstitialsAdsEnabledDefault = cVar6 != '\0';
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_rewardedAdsEnabledDefault,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 == 0) {
              cVar6 = '\0';
            }
            else {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_rewardedAdsEnabledDefault,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              if (TVar1.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pcVar7 = (char *)func_?();
              cVar6 = *pcVar7;
            }
            (this->fields).rewardedAdsEnabledDefault = cVar6 != '\0';
            bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               gameSessionData,(Object *)StringLiteral_newPlanetName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                              );
            if (bVar5 != 0) {
              TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 gameSessionData,(Object *)StringLiteral_newPlanetName,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                );
              TStack8.m_Index = 0;
              if (TVar1.m_Index == 0) {
                (this->fields).newPlanetName = (String *)0x0;
              }
              else {
                if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                  TStack8 = TVar1;
                }
                if ((String *)TStack8.m_Index == (String *)0x0) goto code_?;
                (this->fields).newPlanetName = (String *)TStack8.m_Index;
                TStack8.m_Index = (int32_t)(String *)0x0;
                if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                  TStack8 = TVar1;
                }
                if ((String *)TStack8.m_Index == (String *)0x0) goto code_?;
              }
              ppSStack9 = &(this->fields).newPlanetName;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

