
/* Void CreateBlueprintSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateBlueprintSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&TypeInfo__MV__WorldObject__BlueprintType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObject *)0x0)) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pMVar1->fields).data,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    key = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    this_01 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (TVar2.m_Index != 0) {
      if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?();
      }
      else {
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (TVar2.m_Index,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) goto code_?;
          pcVar3 = (char *)func_?();
          if (*pcVar3 == '\f') {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar4 = (Object *)this_01[2].invoker_method;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_03 = (MovablesSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar4,
                                 MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                                );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_03 != (MovablesSettings *)0x0) {
              MovablesSettings::MovablesSettings_Initialize(this_03,woID,pGVar5,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (*pcVar3 != '\r') {
              return;
            }
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pOVar4 = (Object *)this_01[1].field7_0x1c.methodMetadataHandle;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_04 = (RotatorSettings *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar4,
                                 RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                                );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (this_04 != (RotatorSettings *)0x0) {
              RotatorSettings::RotatorSettings_Initialize(this_04,woID,pGVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateChangeScaleSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateChangeScaleSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass64_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory____c__DisplayClass64_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).changeScaleSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize
                ((CubeModelPopup *)value[1].klass,0x15,woID,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateEditablePickupItemsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateEditablePickupItemsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,woID,(MethodInfo *)0x0),
     unaff_ESI = 
     TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
     , pMVar1 != (MVWorldObject *)0x0)) {
    if (((pMVar1->klass->_1).naturalAligment <
         (
         TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         ->_1).naturalAligment) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(
         TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         ->_1).naturalAligment - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) goto code_?;
    pLVar2 = pMVar1[2].fields.outputLinkRefs;
    unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)0x0;
    if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
      pOVar3 = pLVar2[10].fields._syncRoot;
      if (pOVar3 == (Object *)0x8) {
        pMVar4 = (this->fields).meleeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pMVar4 = (MeleeWeaponSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pMVar4,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pMVar4 != (MeleeWeaponSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings::
          MeleeWeaponSettings_Initialize(pMVar4,(int32_t)unaff_ESI,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pOVar3 == (Object *)0xf) {
        original = (this->fields).customGunSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        if (pOVar3 != (Object *)0x0) {
          (*(code *)pOVar3->klass[1]._0.parent)();
          return;
        }
      }
      else {
        if (pOVar3 != (Object *)0x3b) {
          return;
        }
        pCVar6 = (this->fields).costumeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar6 = (CostumeSettings *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pCVar6,
                            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                           );
        unaff_ESI = (MVEditablePickupItemBaseBlueprint__Class *)(pLVar2->fields)._items;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pCVar6 != (CostumeSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
          CostumeSettings_Initialize(pCVar6,(int32_t)unaff_ESI,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,unaff_ESI);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGamePointsMinorRewardSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointMinorRewardSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_Crystal_Reward);
      func_?(&StringLiteral_gamePointAmount);
      cRam_? = '\x01';
    }
    this_00 = pOVar1[2].klass;
    pOVar1[3].monitor = (MonitorData *)woID;
    if (this_00 != (Object__Class *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                ((SettingsBase *)this_00,woID,root,StringLiteral_Crystal_Reward,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0);
        if ((pMVar2 != (MVWorldObject *)0x0) &&
           (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      (pMVar2->fields).data,
           this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar3 == 0) {
            value_00 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
              value = *piVar6;
              SettingsSlider::SettingsSlider_Initialize_1
                        ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,value,0,
                         100,(MethodInfo *)0x0);
              if (pOVar1[3].klass != (Object__Class *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          ((SettingsInputFieldSlider *)pOVar1[3].klass,StringLiteral_gamePointAmount
                           ,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGamePointsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_Crystal_Reward);
      func_?(&StringLiteral_gamePointAmount);
      cRam_? = '\x01';
    }
    this_00 = pOVar1[2].klass;
    pOVar1[3].monitor = (MonitorData *)woID;
    if (this_00 != (Object__Class *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                ((SettingsBase *)this_00,woID,root,StringLiteral_Crystal_Reward,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0);
        if ((pMVar2 != (MVWorldObject *)0x0) &&
           (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      (pMVar2->fields).data,
           this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar3 == 0) {
            value_00 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar6 = (int32_t *)func_?(TVar4.m_Index);
            if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
              value = *piVar6;
              SettingsSlider::SettingsSlider_Initialize_1
                        ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,value,0,
                         1000,(MethodInfo *)0x0);
              if (pOVar1[3].klass != (Object__Class *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          ((SettingsInputFieldSlider *)pOVar1[3].klass,StringLiteral_gamePointAmount
                           ,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGlobalSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).globalSoundInventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
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
    func_?(&
                    MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).movablesSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pMVar1 = (MovablesSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar1,
                      MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pMVar1 != (MovablesSettings *)0x0) {
    MovablesSettings::MovablesSettings_Initialize(pMVar1,woID,root,(MethodInfo *)0x0);
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
    func_?(&
                    RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).respawnSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pRVar1 = (RespawnSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pRVar1,
                      RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pRVar1 != (RespawnSettings *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&StringLiteral_Respawn);
      func_?(&StringLiteral_respawnTime);
      cRam_? = '\x01';
    }
    this_00 = (pRVar1->fields).settingsBase;
    (pRVar1->fields).woID = woID;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_Initialize_1
                (this_00,woID,root,StringLiteral_Respawn,(MethodInfo *)0x0);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_04 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_04,woID,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar2->fields).data;
          value = 0x1e;
          if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (this_01,(Object *)StringLiteral_respawnTime,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            (pRVar1->fields).isRespawnActive = bVar3;
            if (bVar3 != 0) {
              TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (this_01,(Object *)StringLiteral_respawnTime,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              uVar5 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
              if (TVar4.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar6 = (int32_t *)func_?();
              value = *piVar6;
            }
            this_02 = (pRVar1->fields).respawnTimeSlider;
            if (this_02 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_02,StringLiteral_respawnTime,value,0x1e,0x708,(MethodInfo *)0x0);
              this_03 = (pRVar1->fields).respawnTimeInputField;
              if (this_03 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          (this_03,StringLiteral_respawnTime,value,(MethodInfo *)0x0);
                RespawnSettings::RespawnSettings_SetRespawnUIVisibility
                          (pRVar1,(pRVar1->fields).isRespawnActive,(MethodInfo *)0x0);
                (pRVar1->fields).isInitialized = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateRotatorSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRotatorSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).rotatorSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pRVar1 = (RotatorSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pRVar1,
                      RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pRVar1 != (RotatorSettings *)0x0) {
    RotatorSettings::RotatorSettings_Initialize(pRVar1,woID,root,(MethodInfo *)0x0);
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,woID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      this_00 = (SettingsFactory *)(pMVar1->fields).type;
      SettingsFactory_CreateSettingsDialog_2
                (this_00,0,(WorldObjectType__Enum)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void CreateSettingsDialog(Int32, UseRequirementType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_1
               (SettingsFactory *this,int32_t woID,UseRequirementType__Enum requirementType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
    func_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
    func_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  switch(requirementType) {
  case UseRequirementType__Enum_Level:
    pLVar1 = (this->fields).levelRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pLVar1 = (LevelRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pLVar1,
                        LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pLVar1 != (LevelRequirementSettings *)0x0) {
      LevelRequirementSettings::LevelRequirementSettings_Initialize
                (pLVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameCoin:
    original = (this->fields).gameCoinRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&StringLiteral_gameCoinAmount);
        func_?(&StringLiteral_Game_Coin_Requirement);
        cRam_? = '\x01';
      }
      this_00 = pOVar3[2].klass;
      header = TM::TM__(StringLiteral_Game_Coin_Requirement,(MethodInfo *)0x0);
      if (this_00 != (Object__Class *)0x0) {
        SettingsBase::SettingsBase_Initialize_1
                  ((SettingsBase *)this_00,woID,pGVar2,header,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
            (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,woID,(MethodInfo *)0x0), pMVar4 != (MVWorldObject *)0x0))
           && (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         (pMVar4->fields).data,
              this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (this_01,(Object *)StringLiteral_gameCoinAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar5 == 0) {
            requirementType = UseRequirementType__Enum_Level;
            value = (Object *)func_?(TypeInfo__System__Int32,&requirementType);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gameCoinAmount,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_01,(Object *)StringLiteral_gameCoinAmount,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          value_01 = mscorlib.dll::System::Convert::Convert_ToInt32
                               (value_00.m_Index,(MethodInfo *)0x0);
          if ((SettingsSlider *)pOVar3[2].monitor != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize_1
                      ((SettingsSlider *)pOVar3[2].monitor,StringLiteral_gameCoinAmount,value_01,0,
                       10000,(MethodInfo *)0x0);
            if (pOVar3[3].klass != (Object__Class *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                        ((SettingsInputFieldSlider *)pOVar3[3].klass,StringLiteral_gameCoinAmount,
                         value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    break;
  case UseRequirementType__Enum_Star:
    pSVar6 = (this->fields).starsRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar6 = (StarsRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar6,
                        StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pSVar6 != (StarsRequirementSettings *)0x0) {
      StarsRequirementSettings::StarsRequirementSettings_Initialize
                (pSVar6,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_Team:
    pTVar7 = (this->fields).teamRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar7 = (TeamRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pTVar7,
                        TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (TeamRequirementSettings *)0x0) {
      TeamRequirementSettings::TeamRequirementSettings_Initialize
                (pTVar7,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_GameRank:
    pGVar8 = (this->fields).gameRankRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar8 = (GameRankRequirementSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar8,
                        GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                       );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar8 != (GameRankRequirementSettings *)0x0) {
      GameRankRequirementSettings::GameRankRequirementSettings_Initialize
                (pGVar8,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case UseRequirementType__Enum_RewardedAd:
    pRVar9 = (this->fields).rewardedAdRequirementSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pRVar9 = (RewardedAdRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pRVar9,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pRVar9 != (RewardedAdRequirementSettings *)0x0) {
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings::
      RewardedAdRequirementSettings_Initialize(pRVar9,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  uVar10 = func_?(&stack0xfffffff4);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void CreateSettingsDialog(Int32, WorldObjectType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_2
               (SettingsFactory *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                   );
    func_?(&
                    CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                   );
    func_?(&
                    CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                   );
    func_?(&
                    CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                   );
    func_?(&
                    CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                   );
    func_?(&
                    FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                   );
    func_?(&
                    GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                   );
    func_?(&
                    GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                   );
    func_?(&
                    GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                   );
    func_?(&
                    KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                   );
    func_?(&
                    LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                   );
    func_?(&
                    MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                   );
    func_?(&
                    ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                   );
    func_?(&
                    OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                   );
    func_?(&
                    PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                   );
    func_?(&
                    PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                   );
    func_?(&
                    PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                   );
    func_?(&
                    ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                   );
    func_?(&
                    SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                   );
    func_?(&
                    SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                   );
    func_?(&
                    SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                   );
    func_?(&
                    SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                   );
    func_?(&
                    SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                   );
    func_?(&
                    TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                   );
    func_?(&
                    TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                   );
    func_?(&
                    ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                   );
    func_?(&
                    TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                   );
    func_?(&
                    WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                   );
    func_?(&
                    WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Oculus_Kill_Limit);
    func_?(&StringLiteral_WorldObjectType__);
    func_?(&StringLiteral__has_no_settings_dialogue_);
    func_?(&StringLiteral_Kill_Limit);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory____c__DisplayClass58_0;
  pMVar2 = (MVDoorBlueprint__Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (0x41 < (int)worldObjectType) {
    if ((int)worldObjectType < 0x87) {
      if (worldObjectType == WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy) {
        pVVar3 = (this->fields).vehicleEnergySettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pVVar3 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar3,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pVVar3 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar3,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (worldObjectType != WorldObjectType__Enum_AvatarSpawnRoleCreator) goto code_?;
        original_03 = (this->fields).spawnRoleEditorPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pIVar6 = (Int32__Array *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_03,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        unaff_EDI = this;
        if (pMVar2 != (MVDoorBlueprint__Class *)0x0) {
          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
          &(pMVar2->_0).name)->_buckets = pIVar6;
          func_?();
          pIVar6 = ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
                    &(pMVar2->_0).name)->_buckets;
          if (pIVar6 != (Int32__Array *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)pIVar6,0,(MethodInfo *)0x0);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pMVar2,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
    else if (worldObjectType == WorldObjectType__Enum_ModelTransparency) {
      pOVar7 = (this->fields).objectTransparencySettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pOVar7 = (ObjectTransparencySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar7,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pMVar2 = (MVDoorBlueprint__Class *)this;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pOVar7 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar7,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      switch(worldObjectType) {
      case WorldObjectType__Enum_CameraSettings:
        pCVar8 = (this->fields).cameraBoxSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pCVar8 = (CameraBoxSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar8,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        unaff_EDI = (SettingsFactory *)0x0;
        pMVar2 = (MVDoorBlueprint__Class *)this;
        if (pCVar8 != (CameraBoxSettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
          CameraBoxSettings_Initialize(pCVar8,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_GravityCube:
      case WorldObjectType__Enum_GravityCube|WorldObjectType__Enum_CubeModel:
      case WorldObjectType__Enum_GameCoin:
      case WorldObjectType__Enum_Theme:
      case WorldObjectType__Enum_Door:
      case WorldObjectType__Enum_PickupMeleeWeapon:
      case WorldObjectType__Enum_PickupCostume:
      case WorldObjectType__Enum_PickupCustomGun:
      case WorldObjectType__Enum_Caspar15:
      case WorldObjectType__Enum_ShrinkGun:
      case WorldObjectType__Enum_Thomas4:
      case WorldObjectType__Enum_CollectTheItemCollectableInstance:
      case WorldObjectType__Enum_CollectTheItem:
        goto code_?;
      case WorldObjectType__Enum_GameCoinChest:
        pGVar9 = (this->fields).gameCoinChestSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pGVar9 = (GameCoinChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar9,
                             GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        unaff_EDI = (SettingsFactory *)0x0;
        pMVar2 = (MVDoorBlueprint__Class *)this;
        if (pGVar9 != (GameCoinChestSettings *)0x0) {
          GameCoinChestSettings::GameCoinChestSettings_Initialize
                    (pGVar9,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_BlueprintDoor:
        uVar1 = 0;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
          pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar10,woID,(MethodInfo *)0x0);
          pMVar2 = TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint;
          uVar1 = (undefined2)((uint)woID >> 0x10);
          if (pMVar11 != (MVWorldObject *)0x0) {
            if (((pMVar11->klass->_1).naturalAligment <
                 (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment) ||
               ((MVDoorBlueprint__Class *)
                (pMVar11->klass->_1).typeHierarchy
                [(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment - 1] !=
                TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
              func_?();
            }
            else {
              pLVar12 = pMVar11[2].fields.outputLinkRefs;
              if (pLVar12 != (List_1_MV_WorldObject_Link_ *)0x0) {
                woID_00 = (pLVar12->fields)._items;
                pDVar13 = (this->fields).doorSettingsPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar13 = (DoorSettings *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pDVar13,
                                     UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                                    );
                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                unaff_EDI = (SettingsFactory *)0x0;
                pMVar2 = (MVDoorBlueprint__Class *)this;
                if (pDVar13 != (DoorSettings *)0x0) {
                  UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
                  DoorSettings_Initialize(pDVar13,(int32_t)woID_00,pGVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      case WorldObjectType__Enum_BlueprintMeleeWeapon:
      case WorldObjectType__Enum_BlueprintCostume:
      case WorldObjectType__Enum_BlueprintCustomGun:
        SettingsFactory_CreateEditablePickupItemsSettings(this,woID,(MethodInfo *)0x0);
        return;
      case WorldObjectType__Enum_TeamEditor:
        original = (this->fields).teamEditorSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pMVar2 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        unaff_EDI = this;
        if (pMVar2 != (MVDoorBlueprint__Class *)0x0) {
          pSVar14 = (SettingsBase *)(pMVar2->_0).byval_arg.data.typeHandle;
          (pMVar2->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)woID;
          unaff_EDI = (SettingsFactory *)woID;
          if (pSVar14 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_Initialize
                      (pSVar14,woID,pGVar5,MVWorldObjectDocumentationType__Enum_TeamEditor,
                       (MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
               (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar10,woID,(MethodInfo *)0x0),
               pMVar11 != (MVWorldObject *)0x0)) {
              (pMVar2->_0).interopData = (Il2CppInteropData *)(pMVar11->fields).data;
              func_?();
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar2,
                         *(SettingsInputField **)&(pMVar2->_0).byval_arg.attrs,
                         (GameObject *)(pMVar2->_0).castClass,MVTeam__Enum_Blue,(MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar2,
                         (SettingsInputField *)(pMVar2->_0).this_arg.data.typeHandle,
                         (GameObject *)(pMVar2->_0).declaringType,MVTeam__Enum_Red,
                         (MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar2,
                         *(SettingsInputField **)&(pMVar2->_0).this_arg.attrs,
                         (GameObject *)(pMVar2->_0).parent,MVTeam__Enum_Green,(MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar2,
                         (SettingsInputField *)(pMVar2->_0).element_class,
                         (GameObject *)(pMVar2->_0).generic_class,MVTeam__Enum_Yellow,
                         (MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                        ((TeamEditorSettings *)pMVar2,
                         (Dictionary_2_System_Object_System_Object_ *)(pMVar2->_0).interopData,
                         (MethodInfo *)0x0);
              (pMVar2->_0).interopData = (Il2CppInteropData *)0x0;
              func_?();
              return;
            }
          }
        }
        break;
      case WorldObjectType__Enum_TriggerCube:
        pTVar15 = (this->fields).triggerCubeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pTVar15 = (TriggerCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pTVar15,
                             TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pTVar15 != (TriggerCubeSettings *)0x0) {
          TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar15,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_ShootableButton:
        original_00 = (this->fields).shootablePlateSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pMVar2 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                            );
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
        if (pMVar2 != (MVDoorBlueprint__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pSVar14 = (SettingsBase *)(pMVar2->_0).byval_arg.data.typeHandle;
          if (pSVar14 != (SettingsBase *)0x0) {
            pSVar16 = (SettingsFactory *)0x0;
            SettingsBase::SettingsBase_Initialize
                      (pSVar14,0,(GameObject *)unaff_EDI,
                       MVWorldObjectDocumentationType__Enum_ShootableButton,(MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            unaff_EDI = pSVar16;
            if (((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
                (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)
                ) && (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                (pMVar11->fields).data,
                     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
               ) {
              TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (this_00,(Object *)StringLiteral_duration,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0
                 ) {
                func_?();
              }
              unaff_EDI = (SettingsFactory *)
                          mscorlib.dll::System::Globalization::CultureInfo::
                          CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Convert);
              }
              value = mscorlib.dll::System::Convert::Convert_ToSingle_1
                                ((Object *)TVar17.m_Index,(IFormatProvider *)unaff_EDI,
                                 (MethodInfo *)0x0);
              pSVar18 = *(SettingsSlider **)&(pMVar2->_0).byval_arg.attrs;
              if (pSVar18 != (SettingsSlider *)0x0) {
                uVar1 = 0x3f00;
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar18,StringLiteral_duration,value,0.5,30.0,(MethodInfo *)0x0);
                this_01 = (SettingsInputFieldSlider *)(pMVar2->_0).this_arg.data.typeHandle;
                if (this_01 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (this_01,StringLiteral_duration,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      case WorldObjectType__Enum_UseLever:
        original_01 = (this->fields).leverSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_01,
                               LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                              );
        pMVar2 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (unaff_EDI != (SettingsFactory *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
          if (pTVar19 != (Toggle *)0x0) {
            SettingsBase::SettingsBase_Initialize
                      ((SettingsBase *)pTVar19,0,(GameObject *)pMVar2,
                       MVWorldObjectDocumentationType__Enum_Lever,(MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar2 = (MVDoorBlueprint__Class *)0x0;
            if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
               (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0))
            {
              pMVar2 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
              unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
              if ((pMVar2 != (MVDoorBlueprint__Class *)0x0) &&
                 ((TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)pMVar2,(Object *)StringLiteral_beginActivated,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      ), unaff_EDI != (SettingsFactory *)0x0 &&
                  (TVar17.m_Index != 0)))) {
                if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar20 = (bool *)func_?();
                  SettingsToggle::SettingsToggle_Initialize
                            ((SettingsToggle *)unaff_EDI,StringLiteral_beginActivated,*pbVar20,
                             (MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
        break;
      case WorldObjectType__Enum_CollectTheItemDropOff:
        pCVar21 = (this->fields).collectTheItemDropoffSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pCVar21 = (CollectTheItemDropoffSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar21,
                             CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pCVar21 != (CollectTheItemDropoffSettings *)0x0) {
          CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                    (pCVar21,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_CollectTheItemCollectable:
        pCVar22 = (this->fields).collectTheItemSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pCVar22 = (CollectTheItemSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar22,
                             CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pCVar22 != (CollectTheItemSettings *)0x0) {
          CollectTheItemSettings::CollectTheItemSettings_Initialize
                    (pCVar22,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_WindTurbine:
        pWVar23 = (this->fields).windTurbineSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pWVar23 = (WindTurbineSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pWVar23,
                             WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pWVar23 != (WindTurbineSettings *)0x0) {
          WindTurbineSettings::WindTurbineSettings_Initialize(pWVar23,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_GlobalSoundEmitter:
        pGVar24 = (this->fields).globalSoundEmitterSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        pGVar24 = (GlobalSoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar24,
                             GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                            );
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)this;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pGVar24 != (GlobalSoundEmitterSettings *)0x0) {
          GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                    (pGVar24,0,pGVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        if (worldObjectType != WorldObjectType__Enum_GamePointChest) goto code_?;
        original_02 = (this->fields).gamePointChestSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          pOVar4 = TypeInfo__UnityEngine__Object;
          func_?(TypeInfo__UnityEngine__Object);
          uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
        }
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_02,
                               GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                              );
        pMVar2 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (unaff_EDI != (SettingsFactory *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
          if (pTVar19 != (Toggle *)0x0) {
            SettingsBase::SettingsBase_Initialize_1
                      ((SettingsBase *)pTVar19,0,(GameObject *)pMVar2,StringLiteral_Crystal_Reward,
                       (MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar2 = (MVDoorBlueprint__Class *)0x0;
            if (((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
                (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)
                ) && (pMVar2 = (MVDoorBlueprint__Class *)(pMVar11->fields).data,
                     pMVar2 != (MVDoorBlueprint__Class *)0x0)) {
              bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar2,(Object *)StringLiteral_gamePointAmount,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar25 == 0) {
                pOVar26 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)pMVar2,
                           (Object *)StringLiteral_gamePointAmount,pOVar26,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
              }
              TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar2,(Object *)StringLiteral_gamePointAmount,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar17.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                puVar27 = (undefined4 *)func_?();
                pSVar18 = (SettingsSlider *)(unaff_EDI->fields).worldObjectType;
                if (pSVar18 != (SettingsSlider *)0x0) {
                  pMVar2 = (MVDoorBlueprint__Class *)*puVar27;
                  uVar1 = 0;
                  SettingsSlider::SettingsSlider_Initialize_1
                            (pSVar18,StringLiteral_gamePointAmount,(int32_t)pMVar2,2,100,
                             (MethodInfo *)0x0);
                  this_02 = (unaff_EDI->fields).materialsController;
                  if (this_02 != (MaterialsController *)0x0) {
                    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                              ((SettingsInputFieldSlider *)this_02,StringLiteral_gamePointAmount,
                               (int32_t)pMVar2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  if ((int)worldObjectType < 0xe) {
    if (worldObjectType == WorldObjectType__Enum_PointLight) {
      pPVar28 = (this->fields).pointLightSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pPVar28 = (PointLightSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar28,
                           PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pMVar2 = (MVDoorBlueprint__Class *)this;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pPVar28 != (PointLightSettings *)0x0) {
        PointLightSettings::PointLightSettings_Initialize(pPVar28,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (worldObjectType != WorldObjectType__Enum_SoundEmitter) goto code_?;
      pSVar29 = (this->fields).soundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pSVar29 = (SoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar29,
                           SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pMVar2 = (MVDoorBlueprint__Class *)this;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pSVar29 != (SoundEmitterSettings *)0x0) {
        SoundEmitterSettings::SoundEmitterSettings_Initialize(pSVar29,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  switch(worldObjectType) {
  case WorldObjectType__Enum_ToggleBox:
    original_04 = (this->fields).toggleBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    unaff_EDI = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_04,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
    pMVar2 = (MVDoorBlueprint__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (unaff_EDI == (SettingsFactory *)0x0) break;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
    if (pTVar19 == (Toggle *)0x0) break;
    SettingsBase::SettingsBase_Initialize
              ((SettingsBase *)pTVar19,0,(GameObject *)pMVar2,
               MVWorldObjectDocumentationType__Enum_ToggleBox,(MethodInfo *)0x0);
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar2 = (MVDoorBlueprint__Class *)0x0;
    if ((pMVar10 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar10,0,(MethodInfo *)0x0), pMVar11 == (MVWorldObject *)0x0)) break;
    pMVar2 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
    unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
    if ((pMVar2 == (MVDoorBlueprint__Class *)0x0) ||
       ((TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar2
                             ,(Object *)StringLiteral_once,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_EDI == (SettingsFactory *)0x0 || (TVar17.m_Index == 0))))
    break;
    if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar20 = (bool *)func_?();
      SettingsToggle::SettingsToggle_Initialize
                ((SettingsToggle *)unaff_EDI,StringLiteral_once,*pbVar20,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case WorldObjectType__Enum_Negate:
  case WorldObjectType__Enum_And:
  case WorldObjectType__Enum_Explosives:
  case WorldObjectType__Enum_Teleporter:
  case WorldObjectType__Enum_Goal:
  case WorldObjectType__Enum_PickupItemHealthPack:
  case WorldObjectType__Enum_PickupItemCenterGun:
  case WorldObjectType__Enum_CubeModelTerrainFineGrained:
  case WorldObjectType__Enum_PickupItemImpulseGun:
  case WorldObjectType__Enum_PickupItemBazookaGun:
  case WorldObjectType__Enum_PickupItemRailGun:
  case WorldObjectType__Enum_PickupItemSpawner:
code_?:
    pSVar30 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar30 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObjectType__,pSVar30,
                         StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar30,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_TextMsg:
    pMVar31 = (this->fields).messageBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pMVar31 = (MessageBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar31,
                         MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pMVar31 != (MessageBoxSettings *)0x0) {
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar31,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Fire:
    pFVar32 = (this->fields).fireSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pFVar32 = (FireSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pFVar32,
                         FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pFVar32 != (FireSettings *)0x0) {
      FireSettings::FireSettings_Initialize(pFVar32,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Smoke:
    pSVar33 = (this->fields).smokeSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pSVar33 = (SmokeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar33,
                         SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pSVar33 != (SmokeSettings *)0x0) {
      SmokeSettings::SmokeSettings_Initialize(pSVar33,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TimeTrigger:
    pTVar34 = (this->fields).timeTriggerSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pTVar34 = (TimeTriggerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar34,
                         TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pTVar34 != (TimeTriggerSettings *)0x0) {
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar34,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_PressurePlate:
    original_05 = (this->fields).pressurePlateSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    unaff_EDI = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_05,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
    pMVar2 = (MVDoorBlueprint__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (unaff_EDI != (SettingsFactory *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar19 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
      if (pTVar19 != (Toggle *)0x0) {
        SettingsBase::SettingsBase_Initialize
                  ((SettingsBase *)pTVar19,0,(GameObject *)pMVar2,
                   MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0);
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pMVar2 = (MVDoorBlueprint__Class *)0x0;
        if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)) {
          pMVar2 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
          unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
          if ((pMVar2 != (MVDoorBlueprint__Class *)0x0) &&
             ((TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   pMVar2,(Object *)StringLiteral_hide,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  ), unaff_EDI != (SettingsFactory *)0x0 && (TVar17.m_Index != 0))))
          {
            if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
                (TypeInfo__System__Boolean->_0).element_class) {
              pbVar20 = (bool *)func_?();
              SettingsToggle::SettingsToggle_Initialize
                        ((SettingsToggle *)unaff_EDI,StringLiteral_hide,*pbVar20,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case WorldObjectType__Enum_Skybox:
    pSVar35 = (this->fields).skyboxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pSVar35 = (SkyboxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar35,
                         SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pSVar35 != (SkyboxSettings *)0x0) {
      SkyboxSettings::SkyboxSettings_Initialize(pSVar35,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_SpawnPointRed:
  case WorldObjectType__Enum_SpawnPointGreen:
  case WorldObjectType__Enum_SpawnPointYellow:
  case WorldObjectType__Enum_SpawnPointBlue:
    pSVar36 = (this->fields).spawnPointSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pSVar36 = (SpawnPointSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar36,
                         SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pSVar36 != (SpawnPointSettings *)0x0) {
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar36,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_ModelToggle:
    pOVar37 = (this->fields).objectEnablerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pOVar37 = (ObjectEnablerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pOVar37,
                         ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pOVar37 != (ObjectEnablerSettings *)0x0) {
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize(pOVar37,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WaterPlane:
    pWVar38 = (this->fields).waterBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pWVar38 = (WaterBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pWVar38,
                         WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pWVar38 != (WaterBoxSettings *)0x0) {
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar38,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Blueprint:
    SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_PulseBox:
    pPVar39 = (this->fields).pulseBoxPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOVar4 = TypeInfo__UnityEngine__Object;
      func_?(TypeInfo__UnityEngine__Object);
      uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
    }
    pPVar39 = (PulseBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pPVar39,
                         PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                        );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar2 = (MVDoorBlueprint__Class *)this;
    if (pPVar39 != (PulseBoxSettings *)0x0) {
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar39,0,pGVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_PickupCubeGun:
      unaff_EDI = (SettingsFactory *)(this->fields).cubeGunSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      this_03 = (CubeGunSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)unaff_EDI,
                           CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                          );
      pMVar2 = (MVDoorBlueprint__Class *)this;
      if (this_03 != (CubeGunSettings *)0x0) {
        CubeGunSettings::CubeGunSettings_Initialize
                  (this_03,0,(this->fields).materialsController,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      goto code_?;
    case WorldObjectType__Enum_WorldObjectSpawnerVehicle:
      uVar1 = 0;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar10 == (MVWorldObjectClientManager *)0x0) break;
      iVar40 = woID;
      this_04 = (MVDoorBlueprint__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar10,woID,(MethodInfo *)0x0);
      uVar1 = (undefined2)((uint)iVar40 >> 0x10);
      pMVar2 = this_04;
      if (this_04 == (MVDoorBlueprint__Class *)0x0) {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        break;
      }
      unaff_EDI = (SettingsFactory *)(this_04->_0).image;
      if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment <=
           *(byte *)&(unaff_EDI->fields).gamePointChestSettingsPrefab) &&
         (*(MVWorldObjectSpawnerVehicle__Class **)
           ((int)(unaff_EDI->fields).cameraBoxSettingsPrefab +
           (uint)(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment * 4 + -4) ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar10 == (MVWorldObjectClientManager *)0x0) break;
        unaff_EDI = (SettingsFactory *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar10,(int32_t)(this_04->vtable).get_Scale.methodPtr,
                               (MethodInfo *)0x0);
        this_04 = (MVDoorBlueprint__Class *)0x0;
        pMVar2 = this_04;
        if (unaff_EDI == (SettingsFactory *)0x0) break;
        pMVar41 = TypeInfo__MVVehicleBase;
        if (((TypeInfo__MVVehicleBase->_1).naturalAligment <=
             (((CultureInfo__Class *)unaff_EDI->klass)->_1).naturalAligment) &&
           ((MVVehicleBase__Class *)
            (((CultureInfo__Class *)unaff_EDI->klass)->_1).typeHierarchy
            [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] == TypeInfo__MVVehicleBase)) {
          iVar42 = func_?();
          pOVar26 = pORam0000009b;
          unaff_EDI = (SettingsFactory *)0x2b;
          if (iVar42 < 0x1b) {
            if (iVar42 == 0x19) {
              pOVar26 = pORam00000097;
              method_01 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                method_01 = 
                UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                ;
              }
            }
            else {
              if (iVar42 != 0x1a) goto code_?;
              pOVar26 = pORam0000009f;
              method_01 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                method_01 = 
                UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                ;
              }
            }
code_?:
            this_04 = (MVDoorBlueprint__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                (pOVar26,method_01);
          }
          else if ((iVar42 == 0x1f) || (iVar42 == 0x22)) {
            method_01 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              method_01 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
              ;
            }
            goto code_?;
          }
code_?:
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          uVar1 = 0x103c;
          bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar25 == 0) {
            return;
          }
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)0x2b,(MethodInfo *)0x0);
          pMVar2 = (MVDoorBlueprint__Class *)0x0;
          if (this_04 != (MVDoorBlueprint__Class *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize
                      ((VehicleBaseSettings *)this_04,woID,pGVar5,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        goto code_?;
      }
      goto code_?;
    case WorldObjectType__Enum_RoundCube:
      pRVar43 = (this->fields).roundCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pRVar43 = (RoundCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pRVar43,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar2 = (MVDoorBlueprint__Class *)this;
      if (pRVar43 != (RoundCubeSettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar43,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_AdvancedGhost:
      pOVar44 = (this->fields).oculusSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pOVar44 = (OculusSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar44,
                           OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar2 = (MVDoorBlueprint__Class *)this;
      if (pOVar44 != (OculusSettings *)0x0) {
        OculusSettings::OculusSettings_Initialize(pOVar44,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_KillLimit:
      pKVar45 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar45 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar45,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar2 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar1 = 0x103c;
      pSVar30 = TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar45 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar45,0,(GameObject *)pMVar2,pSVar30,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_OculusKillLimit:
      pKVar45 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pKVar45 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar45,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar2 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      uVar1 = 0x103c;
      pSVar30 = TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar45 != (KillLimitSettings *)0x0) {
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar45,0,(GameObject *)pMVar2,pSVar30,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CountingCube:
      pCVar46 = (this->fields).countingCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pOVar4 = TypeInfo__UnityEngine__Object;
        func_?(TypeInfo__UnityEngine__Object);
        uVar1 = (undefined2)((uint)pOVar4 >> 0x10);
      }
      pCVar46 = (CountingCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar46,
                           CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                          );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar2 = (MVDoorBlueprint__Class *)this;
      if (pCVar46 != (CountingCubeSettings *)0x0) {
        CountingCubeSettings::CountingCubeSettings_Initialize(pCVar46,0,pGVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pMVar41 = extraout_EDX;
  this_04 = pMVar2;
code_?:
  func_?();
  woID = (int32_t)pMVar41;
code_?:
  uVar47 = func_?();
  puVar48 = (uint *)((ulonglong)uVar47 >> 0x20);
  iVar42 = (int)uVar47;
  piVar49 = (int *)(extraout_ECX + -1);
  bVar50 = (byte)(undefined4 *)(iVar42 + 1);
  if (piVar49 == (int *)0x0) {
    cVar51 = bVar50 < 0x10;
    bVar50 = func_?(CONCAT22(uVar1,in_CS));
    pcVar52 = (char *)((int)extraout_EDX_00 * 3 + 0x5300103c);
    *pcVar52 = *pcVar52 + extraout_CH + cVar51;
    *(Il2CppClass **)(&stack0xfffffff8 + (int)unaff_EDI) = extraout_EDX_00;
    ppIVar53 = &(this_04->_0).klass;
    pcVar52 = (char *)((int)&(unaff_EDI->fields).oculusSettingsPrefab + 2);
    *pcVar52 = *pcVar52 + extraout_CH +
              (extraout_EDX_00 < *ppIVar53 ||
              (uint)((int)extraout_EDX_00 - (int)*ppIVar53) < (uint)(bVar50 < 0x10));
    return;
  }
  (&stack0xfffffffc)[(int)unaff_EDI] = ((&stack0xfffffffc)[(int)unaff_EDI] + '-') - (bVar50 < 0x10);
  pcVar52 = *(char **)(iVar42 + 1);
  iVar40 = *(int32_t *)(iVar42 + 9);
  puVar54 = (uint *)(pcVar52 + 0x3c);
  uVar55 = (uint)((byte)pcVar52 < 0x10);
  uVar56 = *puVar54;
  uVar57 = *puVar54 + iVar42 + 0xd;
  *puVar54 = uVar57 + uVar55;
  *pcVar52 = *pcVar52 + (byte)pcVar52 + (CARRY4(uVar56,iVar42 + 0xd) || CARRY4(uVar57,uVar55));
  *piVar49 = (int)(pcVar52 + *piVar49);
  *puVar48 = (uint)(pcVar52 + *puVar48);
  pbVar58 = (byte *)(pcVar52 + *(int *)(pcVar52 + 0x1010101));
  (this_04->_0).image = (Il2CppImage *)(pbVar58 + (int)(this_04->_0).image);
  *piVar49 = (int)(pbVar58 + *piVar49);
  *piVar49 = (int)(pbVar58 + *piVar49);
  puVar59 = (undefined1 *)(iVar42 + 0x11);
  *pbVar58 = *pbVar58 | (byte)piVar49;
  *pbVar58 = *pbVar58 | (byte)piVar49;
  *puVar48 = *puVar48 | (uint)piVar49;
  if (piVar49 == (int *)0x0 && *(int *)(pbVar58 + (int)puVar48 * 4) == 0) {
    puVar60 = (ushort *)(CONCAT31((int3)((uint)pbVar58 >> 8),uRam_?) + (int)puVar48);
    sVar61 = ((ushort)iVar40 & 3) - (*puVar60 & 3);
    *puVar60 = *puVar60 + (ushort)(0 < sVar61) * sVar61;
    pcVar62 = (code *)swi(3);
    (*pcVar62)();
    return;
  }
  piVar49 = (int *)((int)&this_04[-1].vtable.DeSelect.methodPtr + 3);
  *piVar49 = *piVar49 + (int)puVar48;
  if (*piVar49 == 0) {
    puVar59 = (undefined1 *)(iVar42 + 0xd);
    puVar63 = (undefined4 *)(iVar42 + 0xd);
    *(int32_t *)(iVar42 + 0xd) = iVar40;
    iVar40 = (this_04->_1).native_size;
    if (*(int *)(pbVar58 + 0x74) != 0) goto code_?;
  }
  else {
    *pbVar58 = *pbVar58 + (char)pbVar58;
  }
  *(byte **)(puVar59 + -4) = pbVar58;
  puVar64 = puVar59 + -8;
  *(undefined **)(puVar59 + -8) = &UNK_?;
  func_?();
  puVar63 = (undefined4 *)(puVar64 + 4);
code_?:
  puVar63[-1] = 
  SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
  ;
  puVar63[-2] = iVar40;
  puVar63[-3] = &UNK_?;
  pOVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)puVar63[-2],(MethodInfo *)puVar63[-1]);
  puVar63[-1] = 0;
  puVar63[-2] = this_04;
  puVar63[-3] = &UNK_?;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)puVar63[-2],(MethodInfo *)puVar63[-1]);
  if (pOVar26 == (Object *)0x0) {
    puVar63[3] = &UNK_?;
    func_?();
    pcVar62 = (code *)swi(3);
    (*pcVar62)();
    return;
  }
  puVar63[3] = 0;
  puVar63[2] = pGVar5;
  puVar63[1] = woID;
  *puVar63 = pOVar26;
  puVar63[-1] = &UNK_?;
  SoundInventoryController::SoundInventoryController_Initialize
            ((SoundInventoryController *)*puVar63,puVar63[1],(GameObject *)puVar63[2],
             (MethodInfo *)puVar63[3]);
  return;
}


/* Void CreateSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundInventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SoundInventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if ((bVar1 == 0) && ((this->fields).previewSettingsPopup != 0)) {
    SettingsFactory_CreateSettingsDialog_2(this,-1,(this->fields).worldObjectType,(MethodInfo *)0x0)
    ;
  }
  return;
}

