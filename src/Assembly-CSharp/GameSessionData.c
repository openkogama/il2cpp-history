
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
  (this->fields).embeddedSite = ::StringLiteral__;
  func_?(&(this->fields).embeddedSite,::StringLiteral__);
  (this->fields).token = ::StringLiteral__;
  func_?(&(this->fields).token,::StringLiteral__);
  (this->fields).sessionToken = ::StringLiteral__;
  func_?(&(this->fields).sessionToken,::StringLiteral__);
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  func_?(&(this->fields).newPlanetName,StringLiteral_game_server_test);
  (this->fields).planetName = ::StringLiteral__;
  func_?(&(this->fields).planetName,::StringLiteral__);
  (this->fields).planetImageURL = ::StringLiteral__;
  func_?(&(this->fields).planetImageURL,::StringLiteral__);
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
  func_?(&(this->fields).referrer,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* GameSessionData(Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor_1
               (GameSessionData *this,Dictionary_2_System_String_System_Object_ *gameSessionData,
               MethodInfo *method)

{
  value = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_playButtonAdsEnabledDefault);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_planetName);
    func_?(&StringLiteral_game_server_test);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_embedded);
    func_?(&StringLiteral_rewardedAdsEnabledDefault);
    func_?(&StringLiteral_newPlanetName);
    func_?(&StringLiteral_sessionToken);
    func_?(&StringLiteral_planetImageURL);
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
  (value->fields).serverIP = ::StringLiteral__;
  func_?(&value->fields,::StringLiteral__);
  (value->fields).profileID = -1;
  (value->fields).planetID = -1;
  (value->fields).gameMode = 1;
  (value->fields).language = ::StringLiteral__;
  func_?(&(value->fields).language,::StringLiteral__);
  (value->fields).embeddedSite = ::StringLiteral__;
  func_?(&(value->fields).embeddedSite,::StringLiteral__);
  (value->fields).token = ::StringLiteral__;
  func_?(&(value->fields).token,::StringLiteral__);
  (value->fields).sessionToken = ::StringLiteral__;
  func_?(&(value->fields).sessionToken,::StringLiteral__);
  (value->fields).newPlanetName = StringLiteral_game_server_test;
  func_?(&(value->fields).newPlanetName,StringLiteral_game_server_test);
  (value->fields).planetName = ::StringLiteral__;
  func_?(&(value->fields).planetName,::StringLiteral__);
  (value->fields).planetImageURL = ::StringLiteral__;
  func_?(&(value->fields).planetImageURL,::StringLiteral__);
  (value->fields).pingURL = ::StringLiteral__;
  func_?(&(value->fields).pingURL,::StringLiteral__);
  (value->fields).disconnectURL = ::StringLiteral__;
  func_?(&(value->fields).disconnectURL,::StringLiteral__);
  (value->fields).gameRewardURL = ::StringLiteral__;
  func_?(&(value->fields).gameRewardURL,::StringLiteral__);
  (value->fields).gamePublishedURL = ::StringLiteral__;
  func_?(&(value->fields).gamePublishedURL,::StringLiteral__);
  (value->fields).purchaseGoldURL = ::StringLiteral__;
  func_?(&(value->fields).purchaseGoldURL,::StringLiteral__);
  (value->fields).loginURL = ::StringLiteral__;
  func_?(&(value->fields).loginURL,::StringLiteral__);
  (value->fields).signupURL = ::StringLiteral__;
  func_?(&(value->fields).signupURL,::StringLiteral__);
  (value->fields).idleURL = ::StringLiteral__;
  func_?(&(value->fields).idleURL,::StringLiteral__);
  (value->fields).disconnectedURL = ::StringLiteral__;
  func_?(&(value->fields).disconnectedURL,::StringLiteral__);
  (value->fields).playerProfileURL = ::StringLiteral__;
  func_?(&(value->fields).playerProfileURL,::StringLiteral__);
  (value->fields).eliteUpgradeURL = ::StringLiteral__;
  func_?(&(value->fields).eliteUpgradeURL,::StringLiteral__);
  (value->fields).region = StringLiteral_RegionNotDefined;
  func_?(&(value->fields).region,StringLiteral_RegionNotDefined);
  (value->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  func_?(&(value->fields).ezKey,StringLiteral_h5g9REtmi1LT7JY5);
  (value->fields).reauthURL = ::StringLiteral__;
  func_?(&(value->fields).reauthURL,::StringLiteral__);
  (value->fields).gameRewardDataURL = ::StringLiteral__;
  func_?(&(value->fields).gameRewardDataURL,::StringLiteral__);
  (value->fields).referrer = ::StringLiteral__;
  func_?(&(value->fields).referrer,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = gameSessionData;
  if (gameSessionData != (Dictionary_2_System_String_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       gameSessionData,(Object *)StringLiteral_serverIP,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar1.m_Index == 0) {
      (value->fields).serverIP = (String *)0x0;
    }
    else {
      TVar2.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
      (value->fields).serverIP = (String *)TVar2.m_Index;
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
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       (Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (value->fields).profileID = *piVar3;
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         (Object *)StringLiteral_planetID,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                        );
      if (TVar1.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (value->fields).planetID = *piVar3;
        TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                           (Object *)StringLiteral_gameMode,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                          );
        if (TVar1.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
              (TypeInfo__MV__Common__MVGameMode->_0).element_class) goto code_?;
          piVar3 = (int32_t *)func_?();
          (value->fields).gameMode = *piVar3;
          TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00
                             ,(Object *)StringLiteral_language,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar1.m_Index == 0) {
            (value->fields).language = (String *)0x0;
          }
          else {
            TVar2.m_Index = (int32_t)(String *)0x0;
            if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
              TVar2 = TVar1;
            }
            if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
            (value->fields).language = (String *)TVar2.m_Index;
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
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00
                             ,(Object *)StringLiteral_embedded,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          if (TVar1.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pbVar4 = (bool *)func_?();
            (value->fields).embedded = *pbVar4;
            pSVar5 = (String *)
                     mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                (Object *)StringLiteral_embeddedSite,
                                (Object *)(value->fields).embeddedSite,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pSVar5 == (String *)0x0) {
              (value->fields).embeddedSite = (String *)0x0;
            }
            else {
              pSVar6 = (String *)0x0;
              if (pSVar5->klass == TypeInfo__System__String) {
                pSVar6 = pSVar5;
              }
              if (pSVar6 == (String *)0x0) goto code_?;
              (value->fields).embeddedSite = pSVar6;
              pSVar6 = (String *)0x0;
              if (pSVar5->klass == TypeInfo__System__String) {
                pSVar6 = pSVar5;
              }
              if (pSVar6 == (String *)0x0) goto code_?;
            }
            func_?();
            TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               this_00,(Object *)StringLiteral_token,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                              );
            if (TVar1.m_Index == 0) {
              (value->fields).token = (String *)0x0;
            }
            else {
              TVar2.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                TVar2 = TVar1;
              }
              if ((String *)TVar2.m_Index == (String *)0x0) goto code_?;
              (value->fields).token = (String *)TVar2.m_Index;
              TVar2.m_Index = 0;
              if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
                TVar2 = TVar1;
              }
              if (TVar2.m_Index == 0) goto code_?;
            }
            func_?();
            pSVar5 = (String *)
                     mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                (Object *)StringLiteral_sessionToken,
                                (Object *)(value->fields).sessionToken,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pSVar5 == (String *)0x0) {
              (value->fields).sessionToken = (String *)0x0;
            }
            else {
              pSVar6 = (String *)0x0;
              if (pSVar5->klass == TypeInfo__System__String) {
                pSVar6 = pSVar5;
              }
              if (pSVar6 == (String *)0x0) goto code_?;
              (value->fields).sessionToken = pSVar6;
              pSVar6 = (String *)0x0;
              if (pSVar5->klass == TypeInfo__System__String) {
                pSVar6 = pSVar5;
              }
              if (pSVar6 == (String *)0x0) goto code_?;
            }
            func_?();
            this = (GameSessionData *)((uint)this & 0xffffff);
            pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            pOVar7 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                (Object *)StringLiteral_playButtonAdsEnabledDefault,pOVar7,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pOVar7 != (Object *)0x0) {
              if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              pbVar4 = (bool *)func_?();
              (value->fields).playButtonAdsEnabledDefault = *pbVar4;
              pOVar7 = (Object *)func_?((uint)TypeInfo__System__Boolean & 0xffffff);
              pOVar7 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                       CollectionExtensions_GetValueOrDefault_5
                                 ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                  (Object *)StringLiteral_boostersEnabledDefault,pOVar7,
                                  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                 );
              if (pOVar7 != (Object *)0x0) {
                if ((pOVar7->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar4 = (bool *)func_?();
                (value->fields).boostersEnabledDefault = *pbVar4;
                pOVar7 = (Object *)
                         func_?(CONCAT13((char)((uint)TypeInfo__System__Boolean >> 0x18),
                                                  (uint3)(ushort)TypeInfo__System__Boolean));
                pOVar7 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                         CollectionExtensions_GetValueOrDefault_5
                                   ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                    (Object *)StringLiteral_interstitialsAdsEnabledDefault,pOVar7,
                                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                   );
                if (pOVar7 != (Object *)0x0) {
                  if ((pOVar7->klass->_0).element_class !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pbVar4 = (bool *)func_?();
                  (value->fields).interstitialsAdsEnabledDefault = *pbVar4;
                  pOVar7 = (Object *)
                           func_?(CONCAT22((short)((uint)TypeInfo__System__Boolean >> 0x10)
                                                    ,(ushort)(byte)TypeInfo__System__Boolean));
                  pOVar7 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                           CollectionExtensions_GetValueOrDefault_5
                                     ((IReadOnlyDictionary_2_System_Object_System_Object_ *)this_00,
                                      (Object *)StringLiteral_rewardedAdsEnabledDefault,pOVar7,
                                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                     );
                  if (pOVar7 != (Object *)0x0) {
                    if ((pOVar7->klass->_0).element_class !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar4 = (bool *)func_?();
                    (value->fields).rewardedAdsEnabledDefault = *pbVar4;
                    pSVar5 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        this_00,(Object *)StringLiteral_newPlanetName,
                                        (Object *)(value->fields).newPlanetName,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar5 == (String *)0x0) {
                      (value->fields).newPlanetName = (String *)0x0;
                    }
                    else {
                      pSVar6 = (String *)0x0;
                      if (pSVar5->klass == TypeInfo__System__String) {
                        pSVar6 = pSVar5;
                      }
                      if (pSVar6 == (String *)0x0) goto code_?;
                      (value->fields).newPlanetName = pSVar6;
                      pSVar6 = (String *)0x0;
                      if (pSVar5->klass == TypeInfo__System__String) {
                        pSVar6 = pSVar5;
                      }
                      if (pSVar6 == (String *)0x0) goto code_?;
                    }
                    func_?();
                    pSVar5 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        this_00,(Object *)StringLiteral_planetName,
                                        (Object *)(value->fields).planetName,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar5 == (String *)0x0) {
                      (value->fields).planetName = (String *)0x0;
                    }
                    else {
                      pSVar6 = (String *)0x0;
                      if (pSVar5->klass == TypeInfo__System__String) {
                        pSVar6 = pSVar5;
                      }
                      if (pSVar6 == (String *)0x0) goto code_?;
                      (value->fields).planetName = pSVar6;
                      pSVar6 = (String *)0x0;
                      if (pSVar5->klass == TypeInfo__System__String) {
                        pSVar6 = pSVar5;
                      }
                      if (pSVar6 == (String *)0x0) goto code_?;
                    }
                    func_?();
                    pSVar5 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        this_00,(Object *)StringLiteral_planetImageURL,
                                        (Object *)(value->fields).planetImageURL,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar5 == (String *)0x0) {
                      (value->fields).planetImageURL = (String *)0x0;
code_?:
                      func_?();
                      if ((value->fields).gameMode == 2) {
                        (value->fields).planetID = -1;
                      }
                      return;
                    }
                    pSVar6 = (String *)0x0;
                    if (pSVar5->klass == TypeInfo__System__String) {
                      pSVar6 = pSVar5;
                    }
                    if (pSVar6 != (String *)0x0) {
                      (value->fields).planetImageURL = pSVar6;
                      pSVar6 = (String *)0x0;
                      if (pSVar5->klass == TypeInfo__System__String) {
                        pSVar6 = pSVar5;
                      }
                      if (pSVar6 != (String *)0x0) goto code_?;
                    }
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
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

