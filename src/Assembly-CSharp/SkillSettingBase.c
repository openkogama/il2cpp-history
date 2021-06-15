
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
  pTVar1 = (this->fields).nameText;
  (this->fields).currentSkillCost = skillCost;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).skillSetting = skillSetting;
  (this->fields).removeSkillCallback = removeSkillCallback;
  (this->fields).updateSkillCallback = updateSkillCallback;
  (this->fields).cantUpdateSkillCallback = cantUpdateSkillCallback;
  (this->fields).skillDataManager = skillDataManager;
  (this->fields).cantRemoveSkillCallback = cantRemoveSkillCallback;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    pSVar2 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                       (skillDataManager,skill,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).skillCostText;
      uVar3 = func_?(&skillCost,0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,uVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar1 = (this->fields).skillCostText;
        pCVar4 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                           (&CStack_5,skillCost,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_color.method)
                    (pTVar1,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                     (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
          pSVar6 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                             (skillDataManager,skill,(this->fields).iconColor,
                              (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                              (this->fields).iconHeight,(MethodInfo *)0x0);
          (this->fields).skillIcon = pSVar6;
          if (pSVar6 != (SpawnRoleSkillIconController *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pSVar6,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
              pSVar6 = (this->fields).skillIcon;
              if (pSVar6 != (SpawnRoleSkillIconController *)0x0) {
                SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                          (pSVar6,skillCost,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_InitializeInfoButton
               (SkillSettingBase *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost - (this->fields).currentSkillCost)) {
    pUVar1 = (this->fields).cantRemoveSkillCallback;
    if (pUVar1 != (UnityAction *)0x0) {
      this_01 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
      if (this_01 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_01,(MethodInfo *)0x0);
      }
      pcVar2 = (pUVar1->fields)._._.method_ptr;
      this_02 = (pUVar1->fields)._._.method;
      pOVar3 = (pUVar1->fields)._._.m_target;
      if (this_02->flags == 0xffff) {
        func_?(this_02);
      }
      cVar4 = func_?(this_02);
      if (cVar4 == '\0') {
        if ((char)this_02->iflags == '\0') {
          (*pcVar2)();
          return;
        }
      }
      else if ((this_02->flags != 0xffff) &&
              (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
               ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
        cVar4 = func_?(pOVar3);
        if (cVar4 != '\0') {
          return;
        }
        method_00 = this_02;
        cVar4 = func_?();
        pOVar5 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_02,method_00)
        ;
        cVar6 = func_?(pOVar5);
        if (cVar4 != '\0') {
          if (cVar6 != '\0') {
            func_?();
            return;
          }
          func_?(this_02,pOVar3);
          return;
        }
        if (cVar6 != '\0') {
          pOVar3 = mscorlib.dll::System::Collections::Generic::
                   KeyValuePair`2[WinningConditionType,System::Object]::
                   KeyValuePair_2_WinningConditionType_System_Object__get_Value
                             ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_02,
                              unaff_retaddr);
          func_?(this_02->flags,pOVar3);
          return;
        }
        func_?(this_02->flags,pOVar3);
        return;
      }
      (*pcVar2)(pOVar3,this_02);
      return;
    }
  }
  else {
    this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).removeSkillCallback;
    if (this_00 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_00,(Dictionary_2_System_String_System_Object_ *)(this->fields).skillSetting,
                 MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                );
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSkillCost() */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillCost
               (SkillSettingBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  pKVar2 = (this->fields).skillSetting;
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    iVar3 = func_?(pKVar2,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar4 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (iVar3 == 0) goto code_?;
    iVar3 = func_?(pKVar2,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    pIVar1 = pIVar4;
    if (iVar3 == 0) goto code_?;
    pKVar2 = (KogamaSettingValueWrapperBase *)&(this->fields).currentSkillCost;
    iVar5 = func_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,iVar3);
    pIVar1 = (IAttributeSetting__Class *)(this->fields).skillCostText;
    *(int32_t *)pKVar2 = iVar5;
    uVar6 = func_?(pKVar2,0);
    if (pIVar1 != (IAttributeSetting__Class *)0x0) {
      pIVar7 = (pIVar1->_0).image;
      (*(code *)pIVar7[0x11].nameToClassHashTable)(pIVar1,uVar6,pIVar7[0x11].codeGenModule);
      this_00 = (this->fields).skillIcon;
      if (this_00 != (SpawnRoleSkillIconController *)0x0) {
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,*(int32_t *)pKVar2,(MethodInfo *)0x0);
        this_01 = (TimedPlayReward *)(this->fields).infoButton;
        if (this_01 != (TimedPlayReward *)0x0) {
          TimedPlayReward::TimedPlayReward_set_RewardXP
                    (this_01,*(int32_t *)pKVar2,(MethodInfo *)0x0);
          pTVar8 = (this->fields).skillCostText;
          pCVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                             (&CStack_10,*(int32_t *)pKVar2,(MethodInfo *)0x0);
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
  func_?(0);
code_?:
  func_?(pKVar2,pIVar1);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillData
               (SkillSettingBase *this,Object *newValue,MethodInfo *method)

{
  pSVar1 = (this->fields).infoButton;
  if (pSVar1 != (SpawnRoleSkillInfoButton *)0x0) {
    (pSVar1->fields).skillValue = newValue;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSpawnRoleCost
               (SkillSettingBase *this,int32_t newSpawnRoleCost,MethodInfo *method)

{
  (this->fields).spawnRoleCost = newSpawnRoleCost;
  return;
}


/* Void UpdateSpawnRoleTier(GamePassTier) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSpawnRoleTier
               (SkillSettingBase *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  (this->fields).spawnRoleTier = (undefined1)newTier;
  return;
}

