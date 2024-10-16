
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


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void CreateSettingsDialog(Int32, WorldObjectType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_2
               (SettingsFactory *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsFactory____c__DisplayClass58_0;
  pMVar1 = (MVDoorBlueprint__Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pSVar2 = this;
  pLVar3 = (Link__Array *)unaff_EBX.m_Index;
  if (0x41 < (int)worldObjectType) {
    if ((int)worldObjectType < 0x87) {
      if (worldObjectType == WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy) {
        pVVar4 = (this->fields).vehicleEnergySettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar4 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar4,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pVVar4 != (VehicleEnergySettings *)0x0) {
          woID = 0;
          this = pSVar5;
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar4,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (worldObjectType != WorldObjectType__Enum_AvatarSpawnRoleCreator) goto code_?;
        unaff_EBX.m_Index = (int32_t)(this->fields).spawnRoleEditorPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        woID = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)unaff_EBX.m_Index,
                                   SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                                  );
        unaff_EDI = pSVar2;
        if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
          &(pMVar1->_0).name)->_buckets = (Int32__Array *)woID;
          this = (SettingsFactory *)&(pMVar1->_0).name;
          func_?();
          this_03 = ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Fields *)
                    &(pMVar1->_0).name)->_buckets;
          if (this_03 != (Int32__Array *)0x0) {
            woID = 0;
            this = (SettingsFactory *)0x0;
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)this_03,0,(MethodInfo *)0x0);
            woID = 0;
            this = pSVar2;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pSVar2,(MethodInfo *)0x0);
            woID = (int32_t)
                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
            ;
            this = (SettingsFactory *)&UNK_?;
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            this = (SettingsFactory *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pMVar1,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,callbackFunction,
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
        func_?();
      }
      pOVar7 = (ObjectTransparencySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar7,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pOVar7 != (ObjectTransparencySettings *)0x0) {
        woID = 0;
        this = pSVar5;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar7,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      switch(worldObjectType) {
      case WorldObjectType__Enum_CameraSettings:
        pCVar8 = (this->fields).cameraBoxSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar8 = (CameraBoxSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar8,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        unaff_EDI = (SettingsFactory *)0x0;
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        if (pCVar8 != (CameraBoxSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
          CameraBoxSettings_Initialize(pCVar8,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
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
          func_?();
        }
        pGVar9 = (GameCoinChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar9,
                             GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        unaff_EDI = (SettingsFactory *)0x0;
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        if (pGVar9 != (GameCoinChestSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          GameCoinChestSettings::GameCoinChestSettings_Initialize
                    (pGVar9,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_BlueprintDoor:
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar10,woID,(MethodInfo *)0x0), pSVar2 = this,
           pMVar1 = TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint,
           pMVar11 != (MVWorldObject *)0x0)) {
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
              unaff_EBX.m_Index = (int32_t)(pLVar12->fields)._items;
              pDVar13 = (this->fields).doorSettingsPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pDVar13 = (DoorSettings *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pDVar13,
                                   UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                                  );
              pSVar5 = (SettingsFactory *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pSVar2,(MethodInfo *)0x0);
              unaff_EDI = (SettingsFactory *)0x0;
              pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
              if (pDVar13 != (DoorSettings *)0x0) {
                woID = 0;
                this = pSVar5;
                UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
                DoorSettings_Initialize
                          (pDVar13,unaff_EBX.m_Index,(GameObject *)pSVar5,(MethodInfo *)0x0);
                return;
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
          func_?();
        }
        pMVar1 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        id = woID;
        unaff_EDI = pSVar2;
        if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
          pSVar14 = (SettingsBase *)(pMVar1->_0).byval_arg.data.typeHandle;
          (pMVar1->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)woID;
          unaff_EDI = (SettingsFactory *)id;
          if (pSVar14 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_Initialize
                      (pSVar14,woID,pGVar6,MVWorldObjectDocumentationType__Enum_TeamEditor,
                       (MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
               (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar10,id,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)
               ) {
              woID = (int32_t)(pMVar11->fields).data;
              (pMVar1->_0).interopData = (Il2CppInteropData *)woID;
              this = (SettingsFactory *)&(pMVar1->_0).interopData;
              func_?();
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar1,
                         *(SettingsInputField **)&(pMVar1->_0).byval_arg.attrs,
                         (GameObject *)(pMVar1->_0).castClass,MVTeam__Enum_Blue,(MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar1,
                         (SettingsInputField *)(pMVar1->_0).this_arg.data.typeHandle,
                         (GameObject *)(pMVar1->_0).declaringType,MVTeam__Enum_Red,
                         (MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar1,
                         *(SettingsInputField **)&(pMVar1->_0).this_arg.attrs,
                         (GameObject *)(pMVar1->_0).parent,MVTeam__Enum_Green,(MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_InitInputfield
                        ((TeamEditorSettings *)pMVar1,
                         (SettingsInputField *)(pMVar1->_0).element_class,
                         (GameObject *)(pMVar1->_0).generic_class,MVTeam__Enum_Yellow,
                         (MethodInfo *)0x0);
              TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                        ((TeamEditorSettings *)pMVar1,
                         (Dictionary_2_System_Object_System_Object_ *)(pMVar1->_0).interopData,
                         (MethodInfo *)0x0);
              (pMVar1->_0).interopData = (Il2CppInteropData *)0x0;
              func_?();
              return;
            }
          }
        }
        break;
      case WorldObjectType__Enum_TriggerCube:
        pTVar15 = (this->fields).triggerCubeSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar15 = (TriggerCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pTVar15,
                             TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pTVar15 != (TriggerCubeSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          TriggerCubeSettings::TriggerCubeSettings_Initialize
                    (pTVar15,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_ShootableButton:
        original_00 = (this->fields).shootablePlateSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar1 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                            );
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pSVar2,(MethodInfo *)0x0);
        if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
          if (cRam_? == '\0') {
            woID = (int32_t)&TypeInfo__System__Convert;
            this = (SettingsFactory *)&UNK_?;
            func_?();
            this = (SettingsFactory *)&TypeInfo__System__Globalization__CultureInfo;
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pSVar14 = (SettingsBase *)(pMVar1->_0).byval_arg.data.typeHandle;
          if (pSVar14 != (SettingsBase *)0x0) {
            woID = 0;
            this = (SettingsFactory *)0x40;
            pSVar2 = (SettingsFactory *)0x0;
            SettingsBase::SettingsBase_Initialize
                      (pSVar14,0,(GameObject *)unaff_EDI,
                       MVWorldObjectDocumentationType__Enum_ShootableButton,(MethodInfo *)0x0);
            woID = 0;
            this = (SettingsFactory *)&UNK_?;
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            unaff_EDI = pSVar2;
            if (((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
                (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)
                ) && (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                (pMVar11->fields).data,
                     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
               ) {
              unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
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
                func_?();
              }
              worldObjectType =
                   (WorldObjectType__Enum)
                   mscorlib.dll::System::Convert::Convert_ToSingle_1
                             ((Object *)unaff_EBX.m_Index,(IFormatProvider *)unaff_EDI,
                              (MethodInfo *)0x0);
              pSVar16 = *(SettingsSlider **)&(pMVar1->_0).byval_arg.attrs;
              if (pSVar16 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar16,StringLiteral_duration,(float)worldObjectType,0.5,30.0,
                           (MethodInfo *)0x0);
                this_01 = (SettingsInputFieldSlider *)(pMVar1->_0).this_arg.data.typeHandle;
                if (this_01 != (SettingsInputFieldSlider *)0x0) {
                  woID = 0;
                  this = (SettingsFactory *)worldObjectType;
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (this_01,StringLiteral_duration,(float)worldObjectType,(MethodInfo *)0x0
                            );
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
          func_?();
        }
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_01,
                               LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                              );
        pMVar1 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        if (unaff_EDI != (SettingsFactory *)0x0) {
          if (cRam_? == '\0') {
            woID = (int32_t)&TypeInfo__System__Boolean;
            this = (SettingsFactory *)&UNK_?;
            func_?();
            this = (SettingsFactory *)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            ;
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar17 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
          if (pTVar17 != (Toggle *)0x0) {
            woID = 0;
            this = (SettingsFactory *)0x41;
            SettingsBase::SettingsBase_Initialize
                      ((SettingsBase *)pTVar17,0,(GameObject *)pMVar1,
                       MVWorldObjectDocumentationType__Enum_Lever,(MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar1 = (MVDoorBlueprint__Class *)0x0;
            if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
               (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0))
            {
              pMVar1 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
              unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
              if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
                worldObjectType = (WorldObjectType__Enum)&UNK_?;
                method = (MethodInfo *)pMVar1;
                TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    pMVar1,(Object *)StringLiteral_beginActivated,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar19 = CONCAT44(TypeInfo__System__Boolean,TVar18.m_Index);
                if ((unaff_EDI != (SettingsFactory *)0x0) && (TVar18.m_Index != 0)) {
                  if (*(Il2CppClass **)(*(int *)TVar18.m_Index + 0x20) ==
                      (TypeInfo__System__Boolean->_0).element_class) {
                    pbVar20 = (bool *)func_?();
                    method = (MethodInfo *)&UNK_?;
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
        }
        break;
      case WorldObjectType__Enum_CollectTheItemDropOff:
        pCVar21 = (this->fields).collectTheItemDropoffSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar21 = (CollectTheItemDropoffSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar21,
                             CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pCVar21 != (CollectTheItemDropoffSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                    (pCVar21,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_CollectTheItemCollectable:
        pCVar22 = (this->fields).collectTheItemSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar22 = (CollectTheItemSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar22,
                             CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pCVar22 != (CollectTheItemSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          CollectTheItemSettings::CollectTheItemSettings_Initialize
                    (pCVar22,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_WindTurbine:
        pWVar23 = (this->fields).windTurbineSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pWVar23 = (WindTurbineSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pWVar23,
                             WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pWVar23 != (WindTurbineSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          WindTurbineSettings::WindTurbineSettings_Initialize
                    (pWVar23,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      case WorldObjectType__Enum_GlobalSoundEmitter:
        pGVar24 = (this->fields).globalSoundEmitterSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pGVar24 = (GlobalSoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar24,
                             GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                            );
        pSVar5 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
        unaff_EDI = (SettingsFactory *)0x0;
        if (pGVar24 != (GlobalSoundEmitterSettings *)0x0) {
          woID = 0;
          this = pSVar5;
          GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                    (pGVar24,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        break;
      default:
        if (worldObjectType != WorldObjectType__Enum_GamePointChest) goto code_?;
        original_02 = (this->fields).gamePointChestSettingsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        unaff_EDI = (SettingsFactory *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_02,
                               GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                              );
        pMVar1 = (MVDoorBlueprint__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pSVar2,(MethodInfo *)0x0);
        if (unaff_EDI != (SettingsFactory *)0x0) {
          if (cRam_? == '\0') {
            woID = (int32_t)&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            ;
            this = (SettingsFactory *)&UNK_?;
            func_?();
            this = (SettingsFactory *)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
            ;
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pTVar17 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
          if (pTVar17 != (Toggle *)0x0) {
            woID = 0;
            this = (SettingsFactory *)StringLiteral_Crystal_Reward;
            SettingsBase::SettingsBase_Initialize_1
                      ((SettingsBase *)pTVar17,0,(GameObject *)pMVar1,StringLiteral_Crystal_Reward,
                       (MethodInfo *)0x0);
            woID = 0;
            this = (SettingsFactory *)&UNK_?;
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar1 = (MVDoorBlueprint__Class *)0x0;
            if (((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
                (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)
                ) && (pMVar1 = (MVDoorBlueprint__Class *)(pMVar11->fields).data,
                     pMVar1 != (MVDoorBlueprint__Class *)0x0)) {
              bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  pMVar1,(Object *)StringLiteral_gamePointAmount,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar25 == 0) {
                worldObjectType = WorldObjectType__Enum_PickupItemHealthPack;
                value = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)pMVar1,
                           (Object *)StringLiteral_gamePointAmount,value,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
              }
              woID = (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                          *)pMVar1,(Object *)StringLiteral_gamePointAmount,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
              uVar19 = CONCAT44(TypeInfo__System__Int32,woID);
              if (woID != 0) {
                if (*(Il2CppClass **)(*(int *)woID + 0x20) !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                this = (SettingsFactory *)&UNK_?;
                puVar26 = (undefined4 *)func_?();
                pSVar16 = (SettingsSlider *)(unaff_EDI->fields).worldObjectType;
                if (pSVar16 != (SettingsSlider *)0x0) {
                  pMVar1 = (MVDoorBlueprint__Class *)*puVar26;
                  SettingsSlider::SettingsSlider_Initialize_1
                            (pSVar16,StringLiteral_gamePointAmount,(int32_t)pMVar1,2,100,
                             (MethodInfo *)0x0);
                  this_02 = (unaff_EDI->fields).materialsController;
                  if (this_02 != (MaterialsController *)0x0) {
                    woID = 0;
                    this = (SettingsFactory *)pMVar1;
                    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                              ((SettingsInputFieldSlider *)this_02,StringLiteral_gamePointAmount,
                               (int32_t)pMVar1,(MethodInfo *)0x0);
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
      pPVar27 = (this->fields).pointLightSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pPVar27 = (PointLightSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar27,
                           PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pPVar27 != (PointLightSettings *)0x0) {
        woID = 0;
        this = pSVar5;
        PointLightSettings::PointLightSettings_Initialize
                  (pPVar27,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (worldObjectType != WorldObjectType__Enum_SoundEmitter) goto code_?;
      pSVar28 = (this->fields).soundEmitterSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar28 = (SoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar28,
                           SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      unaff_EDI = (SettingsFactory *)0x0;
      if (pSVar28 != (SoundEmitterSettings *)0x0) {
        woID = 0;
        this = pSVar5;
        SoundEmitterSettings::SoundEmitterSettings_Initialize
                  (pSVar28,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  switch(worldObjectType) {
  case WorldObjectType__Enum_ToggleBox:
    original_03 = (this->fields).toggleBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_EDI = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_03,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
    pMVar1 = (MVDoorBlueprint__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    if (unaff_EDI == (SettingsFactory *)0x0) break;
    if (cRam_? == '\0') {
      woID = (int32_t)&TypeInfo__System__Boolean;
      this = (SettingsFactory *)&UNK_?;
      func_?();
      this = (SettingsFactory *)
             &
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pTVar17 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
    if (pTVar17 == (Toggle *)0x0) break;
    woID = 0;
    this = (SettingsFactory *)0x38;
    SettingsBase::SettingsBase_Initialize
              ((SettingsBase *)pTVar17,0,(GameObject *)pMVar1,
               MVWorldObjectDocumentationType__Enum_ToggleBox,(MethodInfo *)0x0);
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar1 = (MVDoorBlueprint__Class *)0x0;
    if ((pMVar10 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar10,0,(MethodInfo *)0x0), pMVar11 == (MVWorldObject *)0x0)) break;
    pMVar1 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
    unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
    if (pMVar1 == (MVDoorBlueprint__Class *)0x0) break;
    worldObjectType = (WorldObjectType__Enum)&UNK_?;
    method = (MethodInfo *)pMVar1;
    TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar1,
                        (Object *)StringLiteral_once,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar19 = CONCAT44(TypeInfo__System__Boolean,TVar18.m_Index);
    if ((unaff_EDI == (SettingsFactory *)0x0) || (TVar18.m_Index == 0)) break;
    if (*(Il2CppClass **)(*(int *)TVar18.m_Index + 0x20) ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar20 = (bool *)func_?();
      method = (MethodInfo *)&UNK_?;
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
    pSVar29 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar29 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObjectType__,pSVar29,
                         StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar29,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_TextMsg:
    pMVar30 = (this->fields).messageBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar30 = (MessageBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar30,
                         MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pMVar30 != (MessageBoxSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      MessageBoxSettings::MessageBoxSettings_Initialize
                (pMVar30,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Fire:
    pFVar31 = (this->fields).fireSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pFVar31 = (FireSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pFVar31,
                         FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pFVar31 != (FireSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      FireSettings::FireSettings_Initialize(pFVar31,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Smoke:
    pSVar32 = (this->fields).smokeSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar32 = (SmokeSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar32,
                         SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pSVar32 != (SmokeSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      SmokeSettings::SmokeSettings_Initialize(pSVar32,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_TimeTrigger:
    pTVar33 = (this->fields).timeTriggerSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar33 = (TimeTriggerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar33,
                         TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pTVar33 != (TimeTriggerSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      TimeTriggerSettings::TimeTriggerSettings_Initialize
                (pTVar33,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_PressurePlate:
    original_04 = (this->fields).pressurePlateSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_EDI = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_04,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
    pMVar1 = (MVDoorBlueprint__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    if (unaff_EDI != (SettingsFactory *)0x0) {
      if (cRam_? == '\0') {
        woID = (int32_t)&TypeInfo__System__Boolean;
        this = (SettingsFactory *)&UNK_?;
        func_?();
        this = (SettingsFactory *)
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
        ;
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar17 = *(Toggle **)&(unaff_EDI->fields).previewSettingsPopup;
      if (pTVar17 != (Toggle *)0x0) {
        woID = 0;
        this = (SettingsFactory *)0x3b;
        SettingsBase::SettingsBase_Initialize
                  ((SettingsBase *)pTVar17,0,(GameObject *)pMVar1,
                   MVWorldObjectDocumentationType__Enum_PressurePlate,(MethodInfo *)0x0);
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)0x0;
        if ((pMVar10 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar10,0,(MethodInfo *)0x0), pMVar11 != (MVWorldObject *)0x0)) {
          pMVar1 = (MVDoorBlueprint__Class *)(pMVar11->fields).data;
          unaff_EDI = (SettingsFactory *)(unaff_EDI->fields).worldObjectType;
          if (pMVar1 != (MVDoorBlueprint__Class *)0x0) {
            worldObjectType = (WorldObjectType__Enum)&UNK_?;
            method = (MethodInfo *)pMVar1;
            TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                pMVar1,(Object *)StringLiteral_hide,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar19 = CONCAT44(TypeInfo__System__Boolean,TVar18.m_Index);
            if ((unaff_EDI != (SettingsFactory *)0x0) && (TVar18.m_Index != 0)) {
              if (*(Il2CppClass **)(*(int *)TVar18.m_Index + 0x20) ==
                  (TypeInfo__System__Boolean->_0).element_class) {
                pbVar20 = (bool *)func_?();
                method = (MethodInfo *)&UNK_?;
                SettingsToggle::SettingsToggle_Initialize
                          ((SettingsToggle *)unaff_EDI,StringLiteral_hide,*pbVar20,(MethodInfo *)0x0
                          );
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case WorldObjectType__Enum_Skybox:
    pSVar34 = (this->fields).skyboxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar34 = (SkyboxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar34,
                         SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pSVar34 != (SkyboxSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      SkyboxSettings::SkyboxSettings_Initialize(pSVar34,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_SpawnPointRed:
  case WorldObjectType__Enum_SpawnPointGreen:
  case WorldObjectType__Enum_SpawnPointYellow:
  case WorldObjectType__Enum_SpawnPointBlue:
    pSVar35 = (this->fields).spawnPointSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar35 = (SpawnPointSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar35,
                         SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pSVar35 != (SpawnPointSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      SpawnPointSettings::SpawnPointSettings_Initialize
                (pSVar35,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_ModelToggle:
    pOVar36 = (this->fields).objectEnablerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar36 = (ObjectEnablerSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pOVar36,
                         ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pOVar36 != (ObjectEnablerSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize
                (pOVar36,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_WaterPlane:
    pWVar37 = (this->fields).waterBoxSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pWVar37 = (WaterBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pWVar37,
                         WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pWVar37 != (WaterBoxSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      WaterBoxSettings::WaterBoxSettings_Initialize
                (pWVar37,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case WorldObjectType__Enum_Blueprint:
    SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
    return;
  case WorldObjectType__Enum_PulseBox:
    pPVar38 = (this->fields).pulseBoxPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pPVar38 = (PulseBoxSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pPVar38,
                         PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                        );
    pSVar5 = (SettingsFactory *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar2,(MethodInfo *)0x0);
    unaff_EDI = (SettingsFactory *)0x0;
    pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
    if (pPVar38 != (PulseBoxSettings *)0x0) {
      woID = 0;
      this = pSVar5;
      PulseBoxSettings::PulseBoxSettings_Initialize
                (pPVar38,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    switch(worldObjectType) {
    case WorldObjectType__Enum_PickupCubeGun:
      unaff_EDI = (SettingsFactory *)(this->fields).cubeGunSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_04 = (CubeGunSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)unaff_EDI,
                           CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                          );
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      if (this_04 != (CubeGunSettings *)0x0) {
        woID = 0;
        this = (SettingsFactory *)(pSVar2->fields).materialsController;
        CubeGunSettings::CubeGunSettings_Initialize
                  (this_04,0,(MaterialsController *)this,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      goto code_?;
    case WorldObjectType__Enum_WorldObjectSpawnerVehicle:
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pLVar3 = (Link__Array *)woID;
      if (pMVar10 == (MVWorldObjectClientManager *)0x0) break;
      this_05 = (MVDoorBlueprint__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar10,woID,(MethodInfo *)0x0);
      pMVar1 = this_05;
      unaff_EBX.m_Index = (int32_t)pLVar3;
      if (this_05 == (MVDoorBlueprint__Class *)0x0) {
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        break;
      }
      unaff_EDI = (SettingsFactory *)(this_05->_0).image;
      if ((*(byte *)&(unaff_EDI->fields).gamePointChestSettingsPrefab <
           (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment) ||
         (*(MVWorldObjectSpawnerVehicle__Class **)
           ((int)(unaff_EDI->fields).cameraBoxSettingsPrefab +
           (uint)(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment * 4 + -4) !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) goto code_?;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar10 == (MVWorldObjectClientManager *)0x0) break;
      unaff_EDI = (SettingsFactory *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar10,(int32_t)(this_05->vtable).get_Scale.methodPtr,
                             (MethodInfo *)0x0);
      this_05 = (MVDoorBlueprint__Class *)0x0;
      pMVar1 = this_05;
      if (unaff_EDI == (SettingsFactory *)0x0) break;
      woID = (int32_t)TypeInfo__MVVehicleBase;
      if (((TypeInfo__MVVehicleBase->_1).naturalAligment <=
           (((CultureInfo__Class *)unaff_EDI->klass)->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)
          (((CultureInfo__Class *)unaff_EDI->klass)->_1).typeHierarchy
          [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] == TypeInfo__MVVehicleBase)) {
        this = (SettingsFactory *)0x2b;
        woID = (int32_t)unaff_EDI;
        iVar39 = func_?();
        unaff_EDI = this;
        if (iVar39 < 0x1b) {
          if (iVar39 == 0x19) {
            original_05 = (this->fields).hoverCraftSettingsPrefab;
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
            if (iVar39 != 0x1a) goto code_?;
            original_05 = (HoverCraftSettings *)(this->fields).hamsterWheelSettingsPrefab;
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
          this_05 = (MVDoorBlueprint__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_05,method_01);
        }
        else if ((iVar39 == 0x1f) || (iVar39 == 0x22)) {
          original_05 = (HoverCraftSettings *)(this->fields).jetpackSettingsPrefab;
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
        bVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)this_05,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar25 == 0) {
          return;
        }
        pSVar2 = (SettingsFactory *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)unaff_EDI,(MethodInfo *)0x0);
        pMVar1 = (MVDoorBlueprint__Class *)0x0;
        if (this_05 != (MVDoorBlueprint__Class *)0x0) {
          woID = 0;
          this = pSVar2;
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
          VehicleBaseSettings_Initialize
                    ((VehicleBaseSettings *)this_05,(int32_t)pLVar3,(GameObject *)pSVar2,
                     (MethodInfo *)0x0);
          return;
        }
        break;
      }
      goto code_?;
    case WorldObjectType__Enum_RoundCube:
      pRVar40 = (this->fields).roundCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar40 = (RoundCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pRVar40,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      if (pRVar40 != (RoundCubeSettings *)0x0) {
        woID = 0;
        this = pSVar5;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar40,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_AdvancedGhost:
      pOVar41 = (this->fields).oculusSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar41 = (OculusSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar41,
                           OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      if (pOVar41 != (OculusSettings *)0x0) {
        woID = 0;
        this = pSVar5;
        OculusSettings::OculusSettings_Initialize(pOVar41,0,(GameObject *)pSVar5,(MethodInfo *)0x0)
        ;
        return;
      }
      break;
    case WorldObjectType__Enum_KillLimit:
      pKVar42 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pKVar42 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar42,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      pSVar2 = (SettingsFactory *)TM::TM__(StringLiteral_Kill_Limit,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar42 != (KillLimitSettings *)0x0) {
        woID = 0;
        this = pSVar2;
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar42,0,(GameObject *)pMVar1,(String *)pSVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_OculusKillLimit:
      pKVar42 = (this->fields).killLimitSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pKVar42 = (KillLimitSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pKVar42,
                           KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                          );
      pMVar1 = (MVDoorBlueprint__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      pSVar2 = (SettingsFactory *)TM::TM__(StringLiteral_Oculus_Kill_Limit,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      if (pKVar42 != (KillLimitSettings *)0x0) {
        woID = 0;
        this = pSVar2;
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar42,0,(GameObject *)pMVar1,(String *)pSVar2,(MethodInfo *)0x0);
        return;
      }
      break;
    case WorldObjectType__Enum_CountingCube:
      pCVar43 = (this->fields).countingCubeSettingsPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar43 = (CountingCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar43,
                           CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                          );
      pSVar5 = (SettingsFactory *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pSVar2,(MethodInfo *)0x0);
      unaff_EDI = (SettingsFactory *)0x0;
      pMVar1 = (MVDoorBlueprint__Class *)pSVar2;
      if (pCVar43 != (CountingCubeSettings *)0x0) {
        woID = 0;
        this = pSVar5;
        CountingCubeSettings::CountingCubeSettings_Initialize
                  (pCVar43,0,(GameObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  woID = (int32_t)&UNK_?;
  uVar19 = func_?();
  pLVar3 = (Link__Array *)unaff_EBX.m_Index;
code_?:
  woID = (int32_t)((ulonglong)uVar19 >> 0x20);
  this = (SettingsFactory *)uVar19;
  func_?();
  woID = (int32_t)extraout_EDX;
  this_05 = pMVar1;
code_?:
  this = unaff_EDI;
  func_?();
code_?:
  uVar19 = func_?();
  uVar44 = (uint)((ulonglong)uVar19 >> 0x20);
  ppTVar45 = &(unaff_EDI->fields).toggleBoxSettingsPrefab;
  *(undefined1 *)ppTVar45 = *(undefined1 *)ppTVar45;
  puVar46 = (uint *)((int)uVar19 + 0x3c);
  uVar47 = (uint)(&stack0xfffffff4 < *(undefined1 **)((int)&this + (int)unaff_EDI));
  uVar48 = *puVar46;
  uVar49 = *puVar46;
  *puVar46 = uVar49 + uVar44 + uVar47;
  *(char *)(uVar44 + 0x50) =
       *(char *)(uVar44 + 0x50) + (char)((ulonglong)uVar19 >> 8) +
       (CARRY4(uVar48,uVar44) || CARRY4(uVar49 + uVar44,uVar47));
  bVar50 = (byte)uVar19;
  bVar51 = (byte)((ulonglong)uVar19 >> 0x20);
  bVar52 = bVar51 - extraout_ECX[0x3c];
  puVar53 = (uint *)CONCAT31((int3)((ulonglong)uVar19 >> 0x28),bVar52 - (bVar50 < 0x10));
  *extraout_ECX =
       *extraout_ECX + (char)((ulonglong)uVar19 >> 0x28) +
       (bVar51 < extraout_ECX[0x3c] || bVar52 < (bVar50 < 0x10));
  puVar26 = (undefined4 *)CONCAT31((int3)((ulonglong)uVar19 >> 8),bVar50 + 0xae);
  *(char *)(puVar53 + 0xf) = (char)puVar53[0xf] + '\x10' + ((byte)(bVar50 + 0xae) < 0x10);
  puVar46 = (uint *)((int)&unaff_EDI->klass + (int)&stack0x00000000);
  *puVar46 = *puVar46 | (uint)puVar53;
  out((short)puVar53,puVar26);
  piVar54 = (int *)((int)&pLVar3->klass + 1);
  puVar26[-1] = this_05;
  *extraout_ECX = *extraout_ECX + (char)&stack0xffffffe4;
  *(undefined1 **)extraout_ECX = &stack0xffffffe4 + *(int *)extraout_ECX;
  uVar55 = (undefined3)((uint)&stack0xffffffe4 >> 8);
  cVar56 = (char)&stack0xffffffe4 + *extraout_ECX;
  iVar39 = CONCAT31(uVar55,cVar56);
  *piVar54 = *piVar54 + iVar39;
  *(int *)(extraout_ECX + iVar39) = *(int *)(extraout_ECX + iVar39) + iVar39;
  bVar52 = cVar56 + 2;
  iRam_? = iRam_? + CONCAT31(uVar55,bVar52);
  *extraout_ECX = *extraout_ECX | (byte)extraout_ECX;
  bVar52 = bVar52 | *extraout_ECX;
  piVar57 = (int *)CONCAT31(uVar55,bVar52);
  swi(4);
  iVar39 = puVar26[-1];
  uVar58 = *puVar26;
  puVar59 = (undefined1 *)((int)&unaff_EDI->klass + 1);
  uVar48 = CONCAT31((int3)((uint)puVar26[2] >> 8),
                    (char)puVar26[2] + *(char *)((int)(puVar26 + 7) + (int)puVar59));
  puVar26[2] = uVar48;
  puVar26 = (undefined4 *)puVar26[2];
  piVar54 = (int *)((int)&(this_05->_0).image + 1);
  *puVar59 = *(undefined1 *)&(this_05->_0).image;
  puVar26 = (undefined4 *)*puVar26;
  pcVar60 = (char *)(uVar48 ^ *(uint *)((int)&(this_05->_0).klass + 1));
  pcVar61 = (char *)((int)&this_05[0x1bf8f0].vtable.OnRunTimeDataUpdate.methodPtr +
                   (int)pcVar60 * 2 + 1);
  *pcVar61 = *pcVar61 + bVar52;
  puVar46 = (uint *)((int)&(unaff_EDI->fields).toggleBoxSettingsPrefab + 2);
  pcVar61 = (char *)*puVar46;
  *puVar46 = *puVar46 - (int)pcVar60;
  *(char *)((int)puVar53 + 0x5f) =
       *(char *)((int)puVar53 + 0x5f) + (char)((uint)pcVar60 >> 8) + (pcVar61 < pcVar60);
  *(char *)piVar57 = (char)*piVar57 + (char)iVar39;
  *piVar57 = *piVar57 + iVar39;
  pbVar62 = (byte *)CONCAT31((int3)((uint)iVar39 >> 8),(char)iVar39 + *pcVar60 + '\x05');
  *piVar57 = (int)(pbVar62 + *piVar57);
  *piVar57 = (int)(pbVar62 + *piVar57);
  *piVar54 = (int)(pbVar62 + *piVar54);
  *piVar57 = (int)(pbVar62 + *piVar57);
  *piVar57 = (int)(pbVar62 + *piVar57);
  *pbVar62 = *pbVar62 | bVar52;
  *pbVar62 = *pbVar62 | bVar52;
  *puVar53 = *puVar53 | (uint)piVar57;
  uVar48 = *(uint *)(pbVar62 + (int)puVar53 * 4);
  uVar63 = puVar26[2];
  puVar26[2] = pbVar62;
  puVar26[1] = (uint)piVar57 | uVar48;
  *puVar26 = puVar53;
  puVar26[-1] = pcVar60;
  puVar26[-2] = puVar26 + 3;
  puVar26[-3] = uVar58;
  puVar26[-4] = piVar54;
  puVar26[-5] = uVar63;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

