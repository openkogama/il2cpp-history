
/* Boolean CanRemoveSkill() */

bool Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_CanRemoveSkill
               (SkillSettingBase *this,MethodInfo *method)

{
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost - (this->fields).currentSkillCost)) {
    return 0;
  }
  return 1;
}


/* Boolean CanUpdateSkill(Int32) */

bool Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_CanUpdateSkill
               (SkillSettingBase *this,int32_t newSkillCost,MethodInfo *method)

{
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < ((this->fields).spawnRoleCost - (this->fields).currentSkillCost) + newSkillCost)) {
    return 0;
  }
  return 1;
}


/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_Initialize
               (SkillSettingBase *this,String *skill,SpawnRolesSkillDataManager *skillDataManager,
               int32_t skillCost,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               KogamaSettingValueWrapperBase *skillSetting,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *removeSkillCallback,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *updateSkillCallback,UnityAction *cantUpdateSkillCallback,
               UnityAction *cantRemoveSkillCallback,MethodInfo *method)

{
  (this->fields).skillDataManager = skillDataManager;
  func_?(&(this->fields).skillDataManager,skillDataManager);
  (this->fields).currentSkillCost = skillCost;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).skillSetting = skillSetting;
  func_?(&(this->fields).skillSetting,skillSetting);
  (this->fields).removeSkillCallback = removeSkillCallback;
  func_?(&(this->fields).removeSkillCallback,removeSkillCallback);
  (this->fields).updateSkillCallback = updateSkillCallback;
  func_?(&(this->fields).updateSkillCallback,updateSkillCallback);
  (this->fields).cantUpdateSkillCallback = cantUpdateSkillCallback;
  func_?(&(this->fields).cantUpdateSkillCallback,cantUpdateSkillCallback);
  (this->fields).cantRemoveSkillCallback = cantRemoveSkillCallback;
  func_?(&(this->fields).cantRemoveSkillCallback,cantRemoveSkillCallback);
  pTVar1 = (this->fields).nameText;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar2 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).skillCostText;
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&skillCost,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        pTVar1 = (this->fields).skillCostText;
        pCVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                           (&CStack_4,skillCost,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar3->r,pCVar3->g,pCVar3->b,pCVar3->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
          pSVar5 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                             (skillDataManager,skill,(this->fields).iconColor,
                              (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                              (this->fields).iconHeight,(MethodInfo *)0x0);
          (this->fields).skillIcon = pSVar5;
          func_?(&(this->fields).skillIcon,pSVar5);
          pSVar5 = (this->fields).skillIcon;
          if (pSVar5 != (SpawnRoleSkillIconController *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pSVar5,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              pSVar5 = (this->fields).skillIcon;
              if (pSVar5 != (SpawnRoleSkillIconController *)0x0) {
                SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                          (pSVar5,skillCost,(MethodInfo *)0x0);
                (*(code *)(this->klass->vtable).InitializeInfoButton.method)
                          (this,skill,skillCost,skillDataManager,this->klass[1]._0.image);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_InitializeInfoButton
               (SkillSettingBase *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (SkillSettingBase *)0x0;
  this_00 = (pSVar1->fields).infoButton;
  skillValue = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (SpawnRoleSkillInfoButton *)0x0) {
    SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
              (this_00,skill,skillValue,skillCost,skillDataManager,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveSkill() */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_RemoveSkill
               (SkillSettingBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost - (this->fields).currentSkillCost)) {
    pUVar1 = (this->fields).cantRemoveSkillCallback;
    if (pUVar1 != (UnityAction *)0x0) {
      (*(pUVar1->fields)._._.invoke_impl)
                ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
      return;
    }
  }
  else {
    pUVar2 = (this->fields).removeSkillCallback;
    if (pUVar2 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                   *)0x0) {
      (*(pUVar2->fields)._._.invoke_impl)
                ((pUVar2->fields)._._.method_code,(this->fields).skillSetting,
                 (pUVar2->fields)._._.method);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSkillCost() */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillCost
               (SkillSettingBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    cRam_? = '\x01';
  }
  pIVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  pTVar2 = (Text *)(this->fields).skillSetting;
  if (pTVar2 != (Text *)0x0) {
    iVar3 = func_?(pTVar2,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar4 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (iVar3 == 0) goto code_?;
    iVar3 = func_?(pTVar2,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar1 = pIVar4;
    if (iVar3 == 0) goto code_?;
    iVar5 = func_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,iVar3);
    pTVar2 = (this->fields).skillCostText;
    (this->fields).currentSkillCost = iVar5;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).currentSkillCost,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar6,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
      ;
      this_00 = (this->fields).skillIcon;
      if (this_00 != (SpawnRoleSkillIconController *)0x0) {
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,(this->fields).currentSkillCost,(MethodInfo *)0x0);
        pSVar7 = (this->fields).infoButton;
        if (pSVar7 != (SpawnRoleSkillInfoButton *)0x0) {
          (pSVar7->fields).skillCost = (this->fields).currentSkillCost;
          pTVar8 = (this->fields).skillCostText;
          pCVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                             (&CStack_10,(this->fields).currentSkillCost,(MethodInfo *)0x0);
          pTVar2 = (Text *)0x0;
          if (pTVar8 != (Text *)0x0) {
            (*(code *)(pTVar8->klass->vtable).set_color.method)
                      (pTVar8,pCVar9->r,pCVar9->g,pCVar9->b,pCVar9->a,
                       (pTVar8->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(pTVar2,pIVar1);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillData
               (SkillSettingBase *this,Object *newValue,MethodInfo *method)

{
  pOStack_1 = (Object *)&stack0xfffffffc;
  pSVar2 = (this->fields).infoButton;
  if (pSVar2 != (SpawnRoleSkillInfoButton *)0x0) {
    pOStack_1 = newValue;
    (pSVar2->fields).skillValue = newValue;
    ppOStack_3 = &(pSVar2->fields).skillValue;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateSpawnRoleTier(GamePassTier) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSpawnRoleTier
               (SkillSettingBase *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  (this->fields).spawnRoleTier = (undefined1)newTier;
  return;
}

