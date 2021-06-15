
/* String ToString() */

String * Assembly-CSharp.dll::GameSessionData::GameSessionData_ToString
                   (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,9);
  pSVar1 = (this->fields).serverIP;
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    iStack_4 = (this->fields).profileID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    iStack_6 = (this->fields).planetID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    iStack_7 = (this->fields).gameMode;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&iStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    pSVar1 = (this->fields).language;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)pSVar1;
    bStack_8 = (this->fields).embedded;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar5;
    pSVar1 = (this->fields).token;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 7) goto code_?;
    args->vector[6] = (Object *)pSVar1;
    pSVar1 = (this->fields).newToken;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 8) goto code_?;
    args->vector[7] = (Object *)pSVar1;
    pSVar1 = (this->fields).newPlanetName;
    if (pSVar1 == (String *)0x0) {
code_?:
      if (8 < args->max_length) {
        args->vector[8] = (Object *)pSVar1;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_serverIP__0___profileID__1___pla,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
  return pSVar1;
}


/* GameSessionData() */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor
               (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).serverIP = TypeInfo__System__String->static_fields->Empty;
  (this->fields).profileID = -1;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = TypeInfo__System__String->static_fields->Empty;
  (this->fields).token = TypeInfo__System__String->static_fields->Empty;
  (this->fields).newToken = StringLiteral_newProfileTokenNotSet;
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  (this->fields).pingURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).disconnectURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gameRewardURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gamePublishedURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).purchaseGoldURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).loginURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).signupURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).idleURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).disconnectedURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).playerProfileURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).eliteUpgradeURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).region = StringLiteral_RegionNotDefined;
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  (this->fields).reauthURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gameRewardDataURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).referrer = TypeInfo__System__String->static_fields->Empty;
  return;
}


/* GameSessionData(Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor_1
               (GameSessionData *this,Dictionary_2_System_String_System_Object_ *gameSessionData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).serverIP = TypeInfo__System__String->static_fields->Empty;
  (this->fields).profileID = -1;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = TypeInfo__System__String->static_fields->Empty;
  (this->fields).token = TypeInfo__System__String->static_fields->Empty;
  (this->fields).newToken = StringLiteral_newProfileTokenNotSet;
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  (this->fields).pingURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).disconnectURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gameRewardURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gamePublishedURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).purchaseGoldURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).loginURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).signupURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).idleURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).disconnectedURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).playerProfileURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).eliteUpgradeURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).region = StringLiteral_RegionNotDefined;
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  (this->fields).reauthURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).gameRewardDataURL = TypeInfo__System__String->static_fields->Empty;
  (this->fields).referrer = TypeInfo__System__String->static_fields->Empty;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (gameSessionData == (Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
    func_?(0);
    pPVar1 = extraout_ECX;
    pSVar2 = extraout_EDX;
  }
  else {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                        (Type *)StringLiteral_serverIP,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    pPVar3 = (Pool *)0x0;
    if (pPVar1 == (Pool *)0x0) {
code_?:
      (this->fields).serverIP = (String *)pPVar3;
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                          (Type *)StringLiteral_profileID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar5 = (int32_t *)func_?();
        (this->fields).profileID = *piVar5;
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                            (Type *)StringLiteral_planetID,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
        if (pPVar3 != (Pool *)0x0) {
          if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?(pPVar3);
          (this->fields).planetID = *piVar5;
          pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                              (Type *)StringLiteral_gameMode,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             );
          uVar4 = CONCAT44(TypeInfo__MV__Common__MVGameMode,pPVar3);
          if (pPVar3 != (Pool *)0x0) {
            if ((pPVar3->klass->_0).element_class !=
                (TypeInfo__MV__Common__MVGameMode->_0).element_class) goto code_?;
            piVar5 = (int32_t *)func_?(pPVar3);
            (this->fields).gameMode = *piVar5;
            pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                                (Type *)StringLiteral_language,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                               );
            pPVar3 = (Pool *)0x0;
            if (pPVar1 != (Pool *)0x0) {
              if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
                pPVar3 = pPVar1;
              }
              pSVar2 = TypeInfo__System__String;
              if (pPVar3 == (Pool *)0x0) goto code_?;
            }
            (this->fields).language = (String *)pPVar3;
            pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                                (Type *)StringLiteral_embedded,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                               );
            uVar4 = CONCAT44(TypeInfo__System__Boolean,pPVar3);
            if (pPVar3 != (Pool *)0x0) {
              if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              pbVar6 = (bool *)func_?(pPVar3);
              (this->fields).embedded = *pbVar6;
              pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                                  (Type *)StringLiteral_token,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                 );
              pPVar3 = (Pool *)0x0;
              if (pPVar1 != (Pool *)0x0) {
                if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
                  pPVar3 = pPVar1;
                }
                pSVar2 = TypeInfo__System__String;
                if (pPVar3 == (Pool *)0x0) goto code_?;
              }
              (this->fields).token = (String *)pPVar3;
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                  *)gameSessionData,StringLiteral_newToken,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                                );
              if (bVar7 != 0) {
                pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                                    (Type *)StringLiteral_newToken,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                   );
                pPVar3 = (Pool *)0x0;
                if (pPVar1 != (Pool *)0x0) {
                  if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
                    pPVar3 = pPVar1;
                  }
                  pSVar2 = TypeInfo__System__String;
                  if (pPVar3 == (Pool *)0x0) goto code_?;
                }
                (this->fields).newToken = (String *)pPVar3;
              }
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                  *)gameSessionData,StringLiteral_newPlanetName,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__ContainsKey_System__String_
                                );
              if (bVar7 == 0) goto code_?;
              pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 ((Dictionary_2_System_Type_Pool_ *)gameSessionData,
                                  (Type *)StringLiteral_newPlanetName,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                 );
              pPVar3 = (Pool *)0x0;
              if (pPVar1 != (Pool *)0x0) {
                if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
                  pPVar3 = pPVar1;
                }
                pSVar2 = TypeInfo__System__String;
                if (pPVar3 == (Pool *)0x0) goto code_?;
              }
              (this->fields).newPlanetName = (String *)pPVar3;
code_?:
              if ((this->fields).gameMode == 2) {
                (this->fields).planetID = -1;
              }
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
      pPVar3 = pPVar1;
    }
    pSVar2 = TypeInfo__System__String;
    if (pPVar3 != (Pool *)0x0) goto code_?;
  }
code_?:
  uVar4 = func_?(pPVar1,pSVar2);
code_?:
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

