
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
  ppSVar1 = &(this->fields).skillDataManager;
  *ppSVar1 = skillDataManager;
  func_?(ppSVar1,skillDataManager);
  ppKVar2 = &(this->fields).skillSetting;
  (this->fields).currentSkillCost = skillCost;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  *ppKVar2 = skillSetting;
  func_?(ppKVar2,skillSetting);
  ppUVar3 = &(this->fields).removeSkillCallback;
  *ppUVar3 = removeSkillCallback;
  func_?(ppUVar3,removeSkillCallback);
  ppUVar3 = &(this->fields).updateSkillCallback;
  *ppUVar3 = updateSkillCallback;
  func_?(ppUVar3,updateSkillCallback);
  ppUVar4 = &(this->fields).cantUpdateSkillCallback;
  *ppUVar4 = cantUpdateSkillCallback;
  func_?(ppUVar4,cantUpdateSkillCallback);
  ppUVar4 = &(this->fields).cantRemoveSkillCallback;
  *ppUVar4 = cantRemoveSkillCallback;
  func_?(ppUVar4,cantRemoveSkillCallback);
  pTVar5 = (this->fields).nameText;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar6 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)
                (pTVar5,pSVar6,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar5 = (this->fields).skillCostText;
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&skillCost,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,pSVar6,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        pTVar5 = (this->fields).skillCostText;
        pCVar7 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                           (&CStack_8,skillCost,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          (*(code *)(pTVar5->klass->vtable).set_color.method)
                    (pTVar5,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                     (pTVar5->klass->vtable).get_raycastTarget.methodPtr);
          pSVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                              (skillDataManager,skill,(this->fields).iconColor,
                               (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                               (this->fields).iconHeight,(MethodInfo *)0x0);
          ppSVar10 = &(this->fields).skillIcon;
          *ppSVar10 = pSVar9;
          func_?(ppSVar10,pSVar9);
          pSVar9 = (this->fields).skillIcon;
          if (pSVar9 != (SpawnRoleSkillIconController *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pSVar9,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              pSVar9 = (this->fields).skillIcon;
              if (pSVar9 != (SpawnRoleSkillIconController *)0x0) {
                SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                          (pSVar9,skillCost,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  pSVar2 = (pSVar1->fields).infoButton;
  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (pSVar2 != (SpawnRoleSkillInfoButton *)0x0) {
    ppSVar4 = &(pSVar2->fields).skillType;
    *ppSVar4 = skill;
    func_?(ppSVar4,skill);
    ppOVar5 = &(pSVar2->fields).skillValue;
    *ppOVar5 = pOVar3;
    func_?(ppOVar5,pOVar3);
    ppSVar6 = &(pSVar2->fields).skillDataManager;
    *ppSVar6 = skillDataManager;
    func_?(ppSVar6,skillDataManager);
    (pSVar2->fields).skillCost = skillCost;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_01 = (this->fields).skillSetting;
  if (this_01 != (KogamaSettingValueWrapperBase *)0x0) {
    iVar2 = func_?(this_01,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar3 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (iVar2 == 0) goto code_?;
    iVar2 = func_?(this_01,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar1 = pIVar3;
    if (iVar2 == 0) goto code_?;
    this_01 = (KogamaSettingValueWrapperBase *)&(this->fields).currentSkillCost;
    iVar4 = func_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,iVar2);
    pIVar1 = (IAttributeSetting__Class *)(this->fields).skillCostText;
    *(int32_t *)this_01 = iVar4;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_01,(MethodInfo *)0x0);
    if (pIVar1 != (IAttributeSetting__Class *)0x0) {
      pIVar6 = (pIVar1->_0).image;
      (*(code *)pIVar6[0x12].name)(pIVar1,pSVar5,pIVar6[0x12].nameNoExt);
      this_00 = (this->fields).skillIcon;
      if (this_00 != (SpawnRoleSkillIconController *)0x0) {
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,*(int32_t *)this_01,(MethodInfo *)0x0);
        pSVar7 = (this->fields).infoButton;
        if (pSVar7 != (SpawnRoleSkillInfoButton *)0x0) {
          (pSVar7->fields).skillCost = *(int32_t *)this_01;
          pTVar8 = (this->fields).skillCostText;
          pCVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                             (&CStack_10,*(int32_t *)this_01,(MethodInfo *)0x0);
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
  func_?(this_01,pIVar1);
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
    ppOStack_3 = &(pSVar2->fields).skillValue;
    pOStack_1 = newValue;
    *ppOStack_3 = newValue;
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

