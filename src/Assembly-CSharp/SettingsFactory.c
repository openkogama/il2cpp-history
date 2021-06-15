
/* Void CreateBlueprintSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateBlueprintSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_00 == (MVWorldObjectClientManager *)0x0) ||
      (this_01 = (PrefabPool *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,woID,(MethodInfo *)0x0), this_01 == (PrefabPool *)0x0)) ||
     (pDVar1 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0),
     pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar1,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar3) {
        this_02 = pDVar1;
      }
      if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    piVar4 = (int *)func_?();
    if (piVar4 == (int *)0x0) goto code_?;
    key = (Type *)(**(code **)(*piVar4 + 0xd8))();
    func_?();
    if ((this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_02,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar5 == (Pool *)0x0)) goto code_?;
    if ((pPVar5->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
      pcVar6 = (char *)func_?();
      if (*pcVar6 == '\f') {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pXVar7 = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar7,
                            MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                           );
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        if (pXVar7 != (XpBoostParticlePreviewer *)0x0) {
          MovablesSettings::MovablesSettings_Initialize
                    ((MovablesSettings *)pXVar7,woID,pGVar8,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (*pcVar6 != '\r') {
          return;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pXVar7 = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar7,
                            RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                           );
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        if (pXVar7 != (XpBoostParticlePreviewer *)0x0) {
          RotatorSettings::RotatorSettings_Initialize
                    ((RotatorSettings *)pXVar7,woID,pGVar8,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void CreateGamePointsMinorRewardSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).gamePointMinorRewardSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    GamePointMinorRewardSettings::GamePointMinorRewardSettings_Initialize
              ((GamePointMinorRewardSettings *)pXVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateGamePointsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).gamePointSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    GamePointSettings::GamePointSettings_Initialize
              ((GamePointSettings *)pXVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateGlobalSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).globalSoundInventoryControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pSVar1 != (SoundInventoryController *)0x0) {
    SoundInventoryController::SoundInventoryController_Initialize
              (pSVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateMovablesSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateMovablesSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).movablesSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    MovablesSettings::MovablesSettings_Initialize
              ((MovablesSettings *)pXVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateRespawnSetting(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRespawnSetting
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).respawnSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pRVar1 = (RespawnSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pRVar1,
                      RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pRVar1 != (RespawnSettings *)0x0) {
    RespawnSettings::RespawnSettings_Initialize(pRVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateRotatorSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRotatorSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).rotatorSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    RotatorSettings::RotatorSettings_Initialize
              ((RotatorSettings *)pXVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateSettingsDialog(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,woID,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObject *)0x0) {
      this_02 = (SettingsFactory *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                            *)this_01,(MethodInfo *)0x0);
      SettingsFactory_CreateSettingsDialog_2
                (this_02,0,(WorldObjectType__Enum)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CreateSettingsDialog(Int32, UseRequirementType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_1
               (SettingsFactory *this,int32_t woID,UseRequirementType__Enum requirementType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(requirementType) {
  case UseRequirementType__Enum_Level:
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields).levelRequirementSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      LevelRequirementSettings::LevelRequirementSettings_Initialize
                ((LevelRequirementSettings *)pXVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameCoin:
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields).gameCoinRequirementSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      GameCoinRequirementSettings::GameCoinRequirementSettings_Initialize
                ((GameCoinRequirementSettings *)pXVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_Star:
    pSVar3 = (this->fields).starsRequirementSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar3 = (StarsRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pSVar3,
                        StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pSVar3 != (StarsRequirementSettings *)0x0) {
      StarsRequirementSettings::StarsRequirementSettings_Initialize
                (pSVar3,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_Team:
    pTVar4 = (this->fields).teamRequirementSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar4 = (TeamRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pTVar4,
                        TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar4 != (TeamRequirementSettings *)0x0) {
      TeamRequirementSettings::TeamRequirementSettings_Initialize
                (pTVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameRank:
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields).gameRankRequirementSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      GameRankRequirementSettings::GameRankRequirementSettings_Initialize
                ((GameRankRequirementSettings *)pXVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  bVar5 = false;
  func_?();
  if (!bVar5) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateSettingsDialog(Int32, WorldObjectType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_2
               (SettingsFactory *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory___CreateSettingsDialog_c__AnonStorey0;
  this_00 = (SettingsFactory *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  switch(worldObjectType) {
  case WorldObjectType__Enum_TeamEditor:
    pTVar1 = (this->fields).teamEditorSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar1 = (TeamEditorSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pTVar1,
                         TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pTVar1 != (TeamEditorSettings *)0x0) {
      TeamEditorSettings::TeamEditorSettings_Initialize(pTVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TriggerCube:
    pTVar3 = (this->fields).triggerCubeSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar3 = (TriggerCubeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pTVar3,
                         TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pTVar3 != (TriggerCubeSettings *)0x0) {
      TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar3,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_TextMsg:
      pXVar4 = (XpBoostParticlePreviewer *)(this->fields).messageBoxSettingsPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar4,
                           MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      original = (SettingsFactory *)0x0;
      this_00 = this;
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        MessageBoxSettings::MessageBoxSettings_Initialize
                  ((MessageBoxSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_Fire:
      pFVar5 = (this->fields).fireSettingsPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pFVar5 = (FireSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)pFVar5,
                           FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      original = (SettingsFactory *)0x0;
      this_00 = this;
      if (pFVar5 != (FireSettings *)0x0) {
        FireSettings::FireSettings_Initialize(pFVar5,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_Smoke:
      pSVar6 = (this->fields).smokeSettingsPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pSVar6 = (SmokeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)pSVar6,
                           SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      original = (SettingsFactory *)0x0;
      this_00 = this;
      if (pSVar6 != (SmokeSettings *)0x0) {
        SmokeSettings::SmokeSettings_Initialize(pSVar6,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_TimeTrigger:
      pXVar4 = (XpBoostParticlePreviewer *)(this->fields).timeTriggerSettingsPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar4,
                           TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      original = (SettingsFactory *)0x0;
      this_00 = this;
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        TimeTriggerSettings::TimeTriggerSettings_Initialize
                  ((TimeTriggerSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      switch(worldObjectType) {
      case WorldObjectType__Enum_RoundCube:
        pXVar4 = (XpBoostParticlePreviewer *)(this->fields).roundCubeSettingsPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<RoundCubeSettings>_RoundCubeSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        original = (SettingsFactory *)0x0;
        this_00 = this;
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          RoundCubeSettings::RoundCubeSettings_Initialize
                    ((RoundCubeSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_AdvancedGhost:
        pOVar7 = (this->fields).oculusSettingsPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar7 = (OculusSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pOVar7,
                             OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        original = (SettingsFactory *)0x0;
        this_00 = this;
        if (pOVar7 != (OculusSettings *)0x0) {
          OculusSettings::OculusSettings_Initialize(pOVar7,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        switch(worldObjectType) {
        case WorldObjectType__Enum_ModelToggle:
          pXVar4 = (XpBoostParticlePreviewer *)(this->fields).objectEnablerPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (pXVar4,
                               ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                              );
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          original = (SettingsFactory *)0x0;
          this_00 = this;
          if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
            ObjectEnablerSettings::ObjectEnablerSettings_Initialize
                      ((ObjectEnablerSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
            return;
          }
          break;
        case WorldObjectType__Enum_WaterPlane:
          pWVar8 = (this->fields).waterBoxSettingsPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pWVar8 = (WaterBoxSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              ((XpBoostParticlePreviewer *)pWVar8,
                               WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                              );
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          original = (SettingsFactory *)0x0;
          this_00 = this;
          if (pWVar8 != (WaterBoxSettings *)0x0) {
            WaterBoxSettings::WaterBoxSettings_Initialize(pWVar8,woID,pGVar2,(MethodInfo *)0x0);
            return;
          }
          break;
        case WorldObjectType__Enum_Blueprint:
          SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
          return;
        case WorldObjectType__Enum_PulseBox:
          pXVar4 = (XpBoostParticlePreviewer *)(this->fields).pulseBoxPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (pXVar4,
                               PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                              );
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          original = (SettingsFactory *)0x0;
          this_00 = this;
          if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
            PulseBoxSettings::PulseBoxSettings_Initialize
                      ((PulseBoxSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
            return;
          }
          break;
        default:
          if (worldObjectType == WorldObjectType__Enum_PointLight) {
            pPVar9 = (this->fields).pointLightSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pPVar9 = (PointLightSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)pPVar9,
                                 PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            this_00 = this;
            original = (SettingsFactory *)0x0;
            if (pPVar9 != (PointLightSettings *)0x0) {
              PointLightSettings::PointLightSettings_Initialize
                        (pPVar9,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_SoundEmitter) {
            pXVar4 = (XpBoostParticlePreviewer *)(this->fields).soundEmitterSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar4,
                                 SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            this_00 = this;
            original = (SettingsFactory *)0x0;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              SoundEmitterSettings::SoundEmitterSettings_Initialize
                        ((SoundEmitterSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_ToggleBox) {
            pXVar4 = (XpBoostParticlePreviewer *)(this->fields).toggleBoxSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar4,
                                 ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            this_00 = this;
            original = (SettingsFactory *)0x0;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              ToggleBoxSettings::ToggleBoxSettings_Initialize
                        ((ToggleBoxSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_Skybox) {
            pSVar10 = (this->fields).skyboxSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pSVar10 = (SkyboxSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)pSVar10,
                                 SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            this_00 = this;
            original = (SettingsFactory *)0x0;
            if (pSVar10 != (SkyboxSettings *)0x0) {
              SkyboxSettings::SkyboxSettings_Initialize(pSVar10,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_PickupCubeGun) {
            original = (SettingsFactory *)(this->fields).cubeGunSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)original,
                                 CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                                );
            this_00 = this;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              CubeGunSettings::CubeGunSettings_Initialize
                        ((CubeGunSettings *)pXVar4,woID,(this->fields).materialsController,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_AvatarSpawnRoleCreator) {
            pSVar11 = (this->fields).spawnRoleEditorPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pSVar11 = (SpawnRoleEditorMenu *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)pSVar11,
                                 SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                                );
            original = this;
            if ((this_00 != (SettingsFactory *)0x0) &&
               ((this_00->fields)._._._._.m_CachedPtr = pSVar11,
               pSVar11 != (SpawnRoleEditorMenu *)0x0)) {
              SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize(pSVar11,woID,(MethodInfo *)0x0);
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_01,(Object *)this_00,
                         MethodInfo__SettingsFactory___CreateSettingsDialog_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar2,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_CameraSettings) {
            pXVar4 = (XpBoostParticlePreviewer *)(this->fields).cameraBoxSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar4,
                                 CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<CameraBoxSettings>_CameraBoxSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            original = (SettingsFactory *)0x0;
            this_00 = this;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              CameraBoxSettings::CameraBoxSettings_Initialize
                        ((CameraBoxSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else if (worldObjectType == WorldObjectType__Enum_GameCoinChest) {
            pXVar4 = (XpBoostParticlePreviewer *)(this->fields).gameCoinChestSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar4,
                                 GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            original = (SettingsFactory *)0x0;
            this_00 = this;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              GameCoinChestSettings::GameCoinChestSettings_Initialize
                        ((GameCoinChestSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (worldObjectType != WorldObjectType__Enum_GamePointChest) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_WorldObjectType_has_no_settings_,(MethodInfo *)0x0)
              ;
              return;
            }
            pXVar4 = (XpBoostParticlePreviewer *)(this->fields).gamePointChestSettingsPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                (pXVar4,
                                 GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                                );
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            original = (SettingsFactory *)0x0;
            this_00 = this;
            if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
              GamePointChestSettings::GamePointChestSettings_Initialize
                        ((GamePointChestSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case WorldObjectType__Enum_KillLimit:
        pXVar4 = (XpBoostParticlePreviewer *)(this->fields).killLimitSettingsPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        this_00 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        pSVar12 = TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
        original = (SettingsFactory *)0x0;
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          KillLimitSettings::KillLimitSettings_Initialize
                    ((KillLimitSettings *)pXVar4,woID,(GameObject *)this_00,pSVar12,
                     (MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_OculusKillLimit:
        pXVar4 = (XpBoostParticlePreviewer *)(this->fields).killLimitSettingsPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        this_00 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        pSVar12 = TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
        original = (SettingsFactory *)0x0;
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          KillLimitSettings::KillLimitSettings_Initialize
                    ((KillLimitSettings *)pXVar4,woID,(GameObject *)this_00,pSVar12,
                     (MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_CountingCube:
        pXVar4 = (XpBoostParticlePreviewer *)(this->fields).countingCubeSettingsPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        original = (SettingsFactory *)0x0;
        this_00 = this;
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          CountingCubeSettings::CountingCubeSettings_Initialize
                    ((CountingCubeSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case WorldObjectType__Enum_PressurePlate:
      pXVar4 = (XpBoostParticlePreviewer *)(this->fields).pressurePlateSettingsPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar4,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      original = (SettingsFactory *)0x0;
      this_00 = this;
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        PressurePlateSettings::PressurePlateSettings_Initialize
                  ((PressurePlateSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case WorldObjectType__Enum_ShootableButton:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).shootablePlateSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      ShootablePlateSettings::ShootablePlateSettings_Initialize
                ((ShootablePlateSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_UseLever:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).leverSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      LeverSettings::LeverSettings_Initialize
                ((LeverSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_CollectTheItemDropOff:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).collectTheItemDropoffSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                ((CollectTheItemDropoffSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_CollectTheItemCollectable:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).collectTheItemSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      CollectTheItemSettings::CollectTheItemSettings_Initialize
                ((CollectTheItemSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WindTurbine:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).windTurbineSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      WindTurbineSettings::WindTurbineSettings_Initialize
                ((WindTurbineSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_GlobalSoundEmitter:
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).globalSoundEmitterSettingsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar4,
                         GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    original = (SettingsFactory *)0x0;
    this_00 = this;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                ((GlobalSoundEmitterSettings *)pXVar4,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  uVar13 = 0;
  uVar14 = func_?();
  iVar15 = (int)((ulonglong)uVar14 >> 0x20);
  uVar16 = *(uint *)((int)uVar14 + iVar15);
  uVar17 = *(uint *)((int)uVar14 + iVar15);
  *(byte *)&this_00->klass = *(byte *)&this_00->klass | (byte)extraout_ECX;
  uVar18 = (undefined3)((ulonglong)uVar14 >> 8);
  *(byte *)&this_00->klass = *(byte *)&this_00->klass | (byte)extraout_ECX;
  cVar19 = (char)uVar14 + -0x20;
  uVar20 = *(uint *)(CONCAT31(uVar18,cVar19) + iVar15);
  puVar21 = (uint *)((int)&original[-1].fields.gameRankRequirementSettingsPrefab + 3);
  ppCVar22 = &this_00[0x1605].fields.cameraBoxSettingsPrefab;
  *(char *)ppCVar22 = *(char *)ppCVar22 + (char)((ulonglong)uVar14 >> 8);
  uVar23 = CONCAT31(uVar18,cVar19) | 0xe08102c;
  iVar15 = CONCAT13(unaff_retaddr,(int3)((uint)uVar13 >> 8));
  uVar23 = CONCAT31((int3)(uVar23 >> 8),(char)uVar23 + -0x10) | 0xdb1102c;
  bVar24 = (byte)uVar23;
  uVar18 = (undefined3)(uVar23 >> 8);
  pSVar25 = (ScaleAnimationBase__Class *)this_00->klass;
  if (0xf < (byte)(bVar24 - 0x10)) {
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  *puVar21 = *puVar21 >> 1 | (uint)((*puVar21 & 1) != 0) << 0x1f;
  *puVar21 = *puVar21 >> 1 | (uint)((*puVar21 & 1) != 0) << 0x1f;
  *puVar21 = *puVar21 >> 1 | (uint)((*puVar21 & 1) != 0) << 0x1f;
  bVar27 = bVar24 + 0xb0;
  *puVar21 = *puVar21 >> 1 | (uint)((*puVar21 & 1) != 0) << 0x1f;
  iVar28 = CONCAT31(uVar18,bVar24 + 0xa0);
  iVar29 = iVar15;
  if ((POPCOUNT(bVar24 + 0xa0) & 1U) != 0) {
    cVar19 = in(0xf);
    bVar27 = cVar19 - 0x20;
    iVar29 = CONCAT31(uVar18,cVar19 + -0x30);
    iVar28 = iVar15;
  }
  bVar30 = (byte)((extraout_ECX - (int)pSVar25) - (uint)(bVar24 < 0x10) >> 8);
  *(char *)(iVar28 + iVar29) = *(char *)(iVar28 + iVar29) + bVar30 + (bVar27 < 0x10);
  pbVar31 = (byte *)(iVar28 + iVar29);
  bVar24 = *pbVar31;
  bVar27 = *pbVar31;
  *pbVar31 = bVar27 + bVar30 + 1;
  *(int *)(iVar28 + iVar29) =
       *(int *)(iVar28 + iVar29) + ((uint)&stack0xfffffffc | uVar16 | uVar17 | uVar20) +
       (uint)(CARRY1(bVar24,bVar30) || 0xfe < (byte)(bVar27 + bVar30));
  return;
}


/* Void CreateSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundInventoryControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (pSVar1 != (SoundInventoryController *)0x0) {
    SoundInventoryController::SoundInventoryController_Initialize
              (pSVar1,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_OnValidate
               (SettingsFactory *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if ((bVar1 == 0) && ((this->fields).previewSettingsPopup != 0)) {
    SettingsFactory_CreateSettingsDialog_2(this,-1,(this->fields).worldObjectType,(MethodInfo *)0x0)
    ;
  }
  return;
}

