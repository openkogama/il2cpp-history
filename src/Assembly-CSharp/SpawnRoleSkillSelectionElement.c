
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
    if (pUVar1 == (UnityAction *)0x0) goto code_?;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  else {
    pUVar2 = (this->fields).addSkillCallback;
    if (pUVar2 == (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                   *)0x0) goto code_?;
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(this->fields).skillSetting,
               (pUVar2->fields)._._.method);
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
  (this->fields).skillSetting = skillSetting;
  func_?(&(this->fields).skillSetting,skillSetting);
  (this->fields).addSkillCallback = addSkillCallback;
  func_?(&(this->fields).addSkillCallback,addSkillCallback);
  (this->fields).cantAddSkillCallback = cantAddSkillCallback;
  func_?(&(this->fields).cantAddSkillCallback,cantAddSkillCallback);
  spawnRoleTier = (GamePassTier__Enum)(this->fields).nameText;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar1 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (spawnRoleTier != GamePassTier__Enum_Tier0) {
      (**(code **)(*(int *)spawnRoleTier + 0x314))
                (spawnRoleTier,pSVar1,*(undefined4 *)(*(int *)spawnRoleTier + 0x318));
      spawnRoleTier = (GamePassTier__Enum)(this->fields).spawnRoleCostText;
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&skillCost,(MethodInfo *)0x0);
      if (spawnRoleTier != GamePassTier__Enum_Tier0) {
        (**(code **)(*(int *)spawnRoleTier + 0x314))
                  (spawnRoleTier,pSVar1,*(undefined4 *)(*(int *)spawnRoleTier + 0x318));
        spawnRoleTier = (GamePassTier__Enum)(this->fields).spawnRoleCostText;
        pCVar2 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                           (&CStack_3,skillCost,(MethodInfo *)0x0);
        if (spawnRoleTier != GamePassTier__Enum_Tier0) {
          (**(code **)(*(int *)spawnRoleTier + 0x174))
                    (spawnRoleTier,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                     *(undefined4 *)(*(int *)spawnRoleTier + 0x178));
          spawnRoleTier =
               (GamePassTier__Enum)
               SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                         (skillDataManager,skill,(this->fields).iconColor,
                          (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                          (this->fields).iconHeight,(MethodInfo *)0x0);
          pKVar4 = skillSetting;
          if ((SpawnRoleSkillIconController *)spawnRoleTier != (SpawnRoleSkillIconController *)0x0)
          {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)spawnRoleTier,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                        ((SpawnRoleSkillIconController *)spawnRoleTier,skillCost,(MethodInfo *)0x0);
              source = (this->fields).cogWheelIcon;
              if (source != (GameObject *)0x0) {
                spawnRoleTier =
                     (GamePassTier__Enum)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)source,(MethodInfo *)0x0);
                if ((GameObject *)spawnRoleTier != (GameObject *)0x0) {
                  if (pKVar4 == (KogamaSettingValueWrapperBase *)0x0) {
                    pKVar5 = (KogamaSettingValueWrapperBase *)0x0;
                  }
                  else {
                    if (((pKVar4->klass->_1).typeHierarchyDepth <
                         (
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                         ->_1).typeHierarchyDepth) ||
                       ((pKVar4->klass->_1).typeHierarchy
                        [(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                         ->_1).typeHierarchyDepth - 1] !=
                        (Il2CppClass *)
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                       )) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    pKVar5 = (KogamaSettingValueWrapperBase *)0x0;
                    if (bVar6) {
                      pKVar5 = pKVar4;
                    }
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)spawnRoleTier,
                             pKVar5 == (KogamaSettingValueWrapperBase *)0x0,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInfoButton(String, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::
     SpawnRoleSkillSelectionElement_InitializeInfoButton
               (SpawnRoleSkillSelectionElement *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  pSVar1 = this;
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
  this = (SpawnRoleSkillSelectionElement *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pKVar3 = (pSVar1->fields).skillSetting;
  if (pKVar3 != (KogamaSettingValueWrapperBase *)0x0) {
    pKVar4 = pKVar3->klass;
    if (((pKVar4->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).typeHierarchyDepth) ||
       ((pKVar4->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pKVar4 = ((pSVar1->fields).skillSetting)->klass;
      if (((pKVar4->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth) ||
         ((pKVar4->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
      this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(pSVar1->fields).skillSetting;
      pAVar5 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
      ;
      if (((this_00->klass->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth) ||
         ((this_00->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
      pOStack_6 = (Object *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_NumericValue
                            (this_00,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                            );
      ppOVar7 = &pOStack_6;
      pSVar8 = TypeInfo__System__Single;
    }
    else {
      this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(pSVar1->fields).skillSetting;
      if (this_00 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) goto code_?;
      pAVar5 = (AttributeSettingFloat__Class *)
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
      ;
      if (((((KogamaSettingNumericBase_1_System_Object___Class *)this_00->klass)->_1).
           typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth) ||
         ((((KogamaSettingNumericBase_1_System_Object___Class *)this_00->klass)->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
code_?:
        func_?(this_00,pAVar5);
        goto code_?;
      }
      pOStack_9 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                  KogamaSettingNumericBase_1_System_Object__get_NumericValue
                            ((KogamaSettingNumericBase_1_System_Object_ *)this_00,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                            );
      ppOVar7 = &pOStack_9;
      pSVar8 = (Single__Class *)TypeInfo__System__Int32;
    }
    pOVar2 = (Object *)func_?(pSVar8,ppOVar7);
  }
code_?:
  pSVar10 = (pSVar1->fields).infoButton;
  iVar11 = (pSVar1->fields).skillCost;
  if (pSVar10 != (SpawnRoleSkillInfoButton *)0x0) {
    (pSVar10->fields).skillType = skill;
    func_?(&(pSVar10->fields).skillType,skill);
    (pSVar10->fields).skillValue = pOVar2;
    func_?(&(pSVar10->fields).skillValue,pOVar2);
    (pSVar10->fields).skillDataManager = skillDataManager;
    func_?(&(pSVar10->fields).skillDataManager,skillDataManager);
    (pSVar10->fields).skillCost = iVar11;
    return;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

