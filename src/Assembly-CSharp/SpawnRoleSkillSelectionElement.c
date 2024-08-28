
/* Void AddSkill() */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_AddSkill
               (SpawnRoleSkillSelectionElement *this,MethodInfo *method)

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
                    MethodInfo__SpawnRoleSkillSelectionElement____c___AddSkill_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleSkillSelectionElement____c);
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost + (this->fields).skillCost)) {
    pUVar1 = (this->fields).cantAddSkillCallback;
    if (pUVar1 == (UnityAction *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  else {
    pUVar3 = (this->fields).addSkillCallback;
    if (pUVar3 == (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                   *)0x0) goto code_?;
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,(this->fields).skillSetting,
               (pUVar3->fields)._._.method);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SpawnRoleSkillSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SpawnRoleSkillSelectionElement____c);
  }
  callbackFunction = TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__SpawnRoleSkillSelectionElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleSkillSelectionElement____c);
    }
    object = TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleSkillSelectionElement____c___AddSkill_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0 = callbackFunction;
    func_?(&TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    cRam_? = '\x01';
  }
  (this->fields).skillCost = skillCost;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  ppKVar1 = &(this->fields).skillSetting;
  *ppKVar1 = skillSetting;
  func_?(ppKVar1,skillSetting);
  ppUVar2 = &(this->fields).addSkillCallback;
  *ppUVar2 = addSkillCallback;
  func_?(ppUVar2,addSkillCallback);
  ppUVar3 = &(this->fields).cantAddSkillCallback;
  *ppUVar3 = cantAddSkillCallback;
  func_?(ppUVar3,cantAddSkillCallback);
  spawnRoleTier = (GamePassTier__Enum)(this->fields).nameText;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar4 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (spawnRoleTier != GamePassTier__Enum_Tier0) {
      (**(code **)(*(int *)spawnRoleTier + 0x318))
                (spawnRoleTier,pSVar4,*(undefined4 *)(*(int *)spawnRoleTier + 0x31c));
      spawnRoleTier = (GamePassTier__Enum)(this->fields).spawnRoleCostText;
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&skillCost,(MethodInfo *)0x0);
      if (spawnRoleTier != GamePassTier__Enum_Tier0) {
        (**(code **)(*(int *)spawnRoleTier + 0x318))
                  (spawnRoleTier,pSVar4,*(undefined4 *)(*(int *)spawnRoleTier + 0x31c));
        spawnRoleTier = (GamePassTier__Enum)(this->fields).spawnRoleCostText;
        pCVar5 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                           (&CStack_6,skillCost,(MethodInfo *)0x0);
        if (spawnRoleTier != GamePassTier__Enum_Tier0) {
          (**(code **)(*(int *)spawnRoleTier + 0x178))
                    (spawnRoleTier,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                     *(undefined4 *)(*(int *)spawnRoleTier + 0x17c));
          spawnRoleTier =
               (GamePassTier__Enum)
               SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                         (skillDataManager,skill,(this->fields).iconColor,
                          (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                          (this->fields).iconHeight,(MethodInfo *)0x0);
          pKVar7 = skillSetting;
          if ((SpawnRoleSkillIconController *)spawnRoleTier != (SpawnRoleSkillIconController *)0x0)
          {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)spawnRoleTier,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                        ((SpawnRoleSkillIconController *)spawnRoleTier,skillCost,(MethodInfo *)0x0);
              ptr = (this->fields).cogWheelIcon;
              if (ptr != (GameObject *)0x0) {
                spawnRoleTier =
                     (GamePassTier__Enum)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1((Void *)ptr,(MethodInfo *)0x0);
                if ((GameObject *)spawnRoleTier != (GameObject *)0x0) {
                  if (pKVar7 == (KogamaSettingValueWrapperBase *)0x0) {
                    pKVar8 = (KogamaSettingValueWrapperBase *)0x0;
                  }
                  else {
                    bVar9 = (
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                            ->_1).naturalAligment;
                    if (((pKVar7->klass->_1).naturalAligment < bVar9) ||
                       ((pKVar7->klass->_1).typeHierarchy[bVar9 - 1] !=
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
                      pKVar8 = pKVar7;
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
  func_?();
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
  pSVar3 = this;
  this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)(this->fields).skillSetting;
  if (this_00 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar4) ||
       ((this_00->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      bVar4 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar4) ||
         ((this_00->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
      bVar4 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      pAVar5 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
      ;
      if (((this_00->klass->_1).naturalAligment < bVar4) ||
         ((this_00->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
      pSStack_6 = (SpawnRoleSkillSelectionElement *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_NumericValue
                            ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                            );
      ppSVar7 = &pSStack_6;
      pSVar8 = TypeInfo__System__Single;
    }
    else {
      bVar4 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      pAVar5 = (AttributeSettingFloat__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
      ;
      if ((((this_00->klass->_1).naturalAligment < bVar4) ||
          (ppIVar9 = (this_00->klass->_1).typeHierarchy,
          ppIVar9[bVar4 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
          )) || (ppIVar9[(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                         ->_1).naturalAligment - 1] !=
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                )) goto code_?;
      this = (SpawnRoleSkillSelectionElement *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
             KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                       (this_00,
                        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                       );
      ppSVar7 = &this;
      pSVar8 = (Single__Class *)TypeInfo__System__Int32;
    }
    pOVar2 = (Object *)func_?(pSVar8,ppSVar7);
  }
code_?:
  pSVar10 = (pSVar3->fields).infoButton;
  iVar11 = (pSVar3->fields).skillCost;
  if (pSVar10 != (SpawnRoleSkillInfoButton *)0x0) {
    ppSVar12 = &(pSVar10->fields).skillType;
    *ppSVar12 = skill;
    func_?(ppSVar12,skill);
    ppOVar13 = &(pSVar10->fields).skillValue;
    *ppOVar13 = pOVar2;
    func_?(ppOVar13,pOVar2);
    ppSVar14 = &(pSVar10->fields).skillDataManager;
    *ppSVar14 = skillDataManager;
    func_?(ppSVar14,skillDataManager);
    (pSVar10->fields).skillCost = iVar11;
    return;
  }
  func_?();
  pAVar5 = (AttributeSettingFloat__Class *)0x0;
  this_00 = extraout_EDX;
code_?:
  func_?(this_00,pAVar5);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

