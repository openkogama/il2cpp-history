
/* Void AddSkill() */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_AddSkill
               (SpawnRoleSkillSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost + (this->fields).skillCost)) {
    this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).cantAddSkillCallback;
    if (this_00 == (AvatarMotor_OnActiveBounceDelegate *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  else {
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).addSkillCallback;
    if (this_01 ==
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_01,(Dictionary_2_System_String_System_Object_ *)(this->fields).skillSetting,
               MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
              );
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SpawnRoleSkillSelectionElement->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)0x0,
               MethodInfo__SpawnRoleSkillSelectionElement___AddSkill_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__SpawnRoleSkillSelectionElement->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SpawnRoleSkillSelectionElement->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Boolean CanAddSkill() */

bool Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_CanAddSkill
               (SpawnRoleSkillSelectionElement *this,MethodInfo *method)

{
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost + (this->fields).skillCost)) {
    return 0;
  }
  return 1;
}


/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_Initialize
               (SpawnRoleSkillSelectionElement *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,int32_t skillCost,int32_t spawnRoleCost,
               GamePassTier__Enum spawnRoleTier,KogamaSettingValueWrapperBase *skillSetting,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *addSkillCallback,UnityAction *cantAddSkillCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = skillSetting;
  pTVar2 = (this->fields).nameText;
  (this->fields).skillCost = skillCost;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).addSkillCallback = addSkillCallback;
  (this->fields).cantAddSkillCallback = cantAddSkillCallback;
  (this->fields).skillSetting = skillSetting;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar2 = (this->fields).spawnRoleCostText;
      uVar4 = func_?(&skillCost,0);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,uVar4,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar2 = (this->fields).spawnRoleCostText;
        spawnRoleTier = skillCost;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((int)spawnRoleTier < 0) {
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?(TypeInfo__Styles);
          }
          colorStyle = ColorStyle__Enum_NegativeRed;
          pCVar5 = &CStack_6;
        }
        else {
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?(TypeInfo__Styles);
          }
          colorStyle = ColorStyle__Enum_OffWhite;
          pCVar5 = &CStack_7;
        }
        pCVar5 = Styles::Styles_GetColor(pCVar5,colorStyle,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_color.method)
                    (pTVar2,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                     (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
          spawnRoleTier =
               (GamePassTier__Enum)
               SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                         (skillDataManager,skill,(this->fields).iconColor,
                          (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                          (this->fields).iconHeight,(MethodInfo *)0x0);
          if ((SpawnRoleSkillIconController *)spawnRoleTier != (SpawnRoleSkillIconController *)0x0)
          {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)spawnRoleTier,(MethodInfo *)0x0);
            if (this_01 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_01,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                        ((SpawnRoleSkillIconController *)spawnRoleTier,skillCost,(MethodInfo *)0x0);
              this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(this->fields).cogWheelIcon;
              if (this_00 !=
                  (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
                spawnRoleTier =
                     (GamePassTier__Enum)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                               (this_00,(MethodInfo *)0x0);
                if ((GameObject *)spawnRoleTier != (GameObject *)0x0) {
                  if (pKVar1 == (KogamaSettingValueWrapperBase *)0x0) {
                    pKVar8 = (KogamaSettingValueWrapperBase *)0x0;
                  }
                  else {
                    bVar9 = (
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                            ->_1).naturalAligment;
                    if (((pKVar1->klass->_1).naturalAligment < bVar9) ||
                       ((pKVar1->klass->_1).typeHierarchy[bVar9 - 1] !=
                        (Il2CppClass *)
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                       )) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    pKVar8 = (KogamaSettingValueWrapperBase *)0x0;
                    if (bVar10) {
                      pKVar8 = pKVar1;
                    }
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)spawnRoleTier,
                             pKVar8 == (KogamaSettingValueWrapperBase *)0x0,(MethodInfo *)0x0);
                  SpawnRoleSkillSelectionElement_InitializeInfoButton
                            (this,skill,skillDataManager,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeInfoButton(String, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::
     SpawnRoleSkillSelectionElement_InitializeInfoButton
               (SpawnRoleSkillSelectionElement *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&fStack_1);
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)(this->fields).skillSetting;
  if (pKVar3 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    pKVar4 = pKVar3->klass;
    bStack_5 = (pKVar4->_1).naturalAligment;
    bVar6 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if ((bStack_5 < bVar6) ||
       ((pKVar4->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pKVar8 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
    if (bVar7) {
      pKVar8 = pKVar3;
    }
    if (pKVar8 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
      if (pKVar3 == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) goto code_?;
      bStack_9 = (
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 ->_1).naturalAligment;
      if ((bStack_5 < bStack_9) ||
         (cStack_10 = '\x01',
         (pKVar4->_1).typeHierarchy[bStack_9 - 1] !=
         (Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        cStack_10 = '\0';
      }
      pKVar8 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
      if (cStack_10 != '\0') {
        pKVar8 = pKVar3;
      }
      if (pKVar8 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
        if ((bStack_5 < bStack_9) ||
           ((pKVar4->_1).typeHierarchy[bStack_9 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pKVar8 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
        if (bVar7) {
          pKVar8 = pKVar3;
        }
        if (pKVar8 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
          fStack_1 = (float)MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                            KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                                      (pKVar8,
                                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                      );
          pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&fStack_1);
          goto code_?;
        }
      }
      func_?(pKVar3,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                     );
      goto code_?;
    }
    if (pKVar3 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
      bVar6 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((pKVar3->klass->_1).naturalAligment < bVar6) ||
         ((pKVar3->klass->_1).typeHierarchy[bVar6 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pKVar8 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
      if (bVar7) {
        pKVar8 = pKVar3;
      }
      if (pKVar8 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
        iVar11 = func_?(pKVar3,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                               );
        method_00 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
        ;
        if (iVar11 == 0) goto code_?;
        pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)
                  func_?(pKVar3,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                 );
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__get_NumericValue(pKVar3,method_00);
        fStack_1 = (float)extraout_ST0;
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
      }
    }
  }
code_?:
  pSVar12 = (this->fields).infoButton;
  iVar13 = (this->fields).skillCost;
  if (pSVar12 != (SpawnRoleSkillInfoButton *)0x0) {
    (pSVar12->fields).skillValue = pOVar2;
    (pSVar12->fields).skillType = skill;
    (pSVar12->fields).skillDataManager = skillDataManager;
    (pSVar12->fields).skillCost = iVar13;
    return;
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void <AddSkill>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::
     SpawnRoleSkillSelectionElement__AddSkill_m__0(IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

