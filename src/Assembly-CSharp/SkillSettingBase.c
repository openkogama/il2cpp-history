
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
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).skillDataManager >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).skillSetting = skillSetting;
  (this->fields).currentSkillCost = skillCost;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).skillSetting >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).removeSkillCallback = removeSkillCallback;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).removeSkillCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).updateSkillCallback = updateSkillCallback;
  iVar6 = 0;
  if (iVar7 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).updateSkillCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).cantUpdateSkillCallback = cantUpdateSkillCallback;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).cantUpdateSkillCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).cantRemoveSkillCallback = cantRemoveSkillCallback;
  if (iVar7 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).cantRemoveSkillCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pTVar8 = (this->fields).nameText;
  aIStackX_20[0].m_value = skillCost;
  if ((skillDataManager != (SpawnRolesSkillDataManager *)0x0) &&
     (pSVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                         (skillDataManager,skill,(MethodInfo *)0x0), pTVar8 != (Text *)0x0)) {
    (*(pTVar8->klass->vtable).set_text.methodPtr)
              (pTVar8,pSVar9,(pTVar8->klass->vtable).set_text.method);
    pTVar8 = (this->fields).skillCostText;
    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
    if (pTVar8 != (Text *)0x0) {
      (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8,pSVar9);
      pTVar8 = (this->fields).skillCostText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Styles);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (skillCost < 0) {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        colorStyle = ColorStyle__Enum_NegativeRed;
      }
      else {
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        colorStyle = ColorStyle__Enum_OffWhite;
      }
      pCVar10 = Styles::Styles_GetColor(&CStack_11,colorStyle,(MethodInfo *)0x0);
      if (pTVar8 != (Text *)0x0) {
        CStack_11.r = pCVar10->r;
        CStack_11.g = pCVar10->g;
        CStack_11.b = pCVar10->b;
        CStack_11.a = pCVar10->a;
        (*(pTVar8->klass->vtable).set_color.methodPtr)
                  (pTVar8,&CStack_11,(pTVar8->klass->vtable).set_color.method);
        pSVar12 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                           (skillDataManager,skill,(this->fields).iconColor,
                            (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                            (this->fields).iconHeight,(MethodInfo *)0x0);
        bVar5 = iRam_? != 0;
        (this->fields).skillIcon = pSVar12;
        if (bVar5) {
          uVar1 = (uint)((ulonglong)&(this->fields).skillIcon >> 0xc);
          uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pSVar12 = (this->fields).skillIcon;
        if ((pSVar12 != (SpawnRoleSkillIconController *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pSVar12,(MethodInfo *)0x0), this_00 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_00,(this->fields).imageContainer,0,(MethodInfo *)0x0);
          pSVar12 = (this->fields).skillIcon;
          if (pSVar12 != (SpawnRoleSkillIconController *)0x0) {
            SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                      (pSVar12,skillCost,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(this->klass->vtable).InitializeInfoButton.methodPtr)
                      (this,skill,(ulonglong)(uint)skillCost,skillDataManager);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_InitializeInfoButton
               (SkillSettingBase *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  lVar1 = lRam_?;
  this_00 = (this->fields).infoButton;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      skillValue = (Object *)FUN_?(lRam_?);
      FUN_?(skillValue + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)(skillValue + 1) >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
    else {
      skillValue = (Object *)0x0;
    }
  }
  else {
    skillValue = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  if (this_00 == (SpawnRoleSkillInfoButton *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
            (this_00,skill,skillValue,skillCost,skillDataManager,(MethodInfo *)0x0);
  return;
}


/* Void RemoveSkill() */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_RemoveSkill
               (SkillSettingBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost - (this->fields).currentSkillCost)) {
    pUVar1 = (this->fields).cantRemoveSkillCallback;
    if (pUVar1 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar4 = (void *)0x0;
      if (pGVar3 != (GameObject *)0x0) {
        pvVar4 = (pGVar3->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillCost() */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillCost
               (SkillSettingBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  pKVar2 = (this->fields).skillSetting;
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    lVar3 = FUN_?(pKVar2,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
    pIVar4 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if (lVar3 == 0) {
      FUN_?(pKVar2,pIVar1);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = FUN_?(pKVar2,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
    if (lVar3 == 0) {
      FUN_?(pKVar2,pIVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar6 = FUN_?(0,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                          ,lVar3);
    pTVar7 = (this->fields).skillCostText;
    (this->fields).currentSkillCost = iVar6;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(this->fields).currentSkillCost,(MethodInfo *)0x0);
    if (pTVar7 != (Text *)0x0) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar8);
      this_00 = (this->fields).skillIcon;
      if (this_00 != (SpawnRoleSkillIconController *)0x0) {
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,(this->fields).currentSkillCost,(MethodInfo *)0x0);
        pSVar9 = (this->fields).infoButton;
        if (pSVar9 != (SpawnRoleSkillInfoButton *)0x0) {
          bVar10 = cRam_? == '\0';
          (pSVar9->fields).skillCost = (this->fields).currentSkillCost;
          pTVar7 = (this->fields).skillCostText;
          iVar11 = (this->fields).currentSkillCost;
          if (bVar10) {
            FUN_?(&TypeInfo__Styles);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (iVar11 < 0) {
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            colorStyle = ColorStyle__Enum_NegativeRed;
          }
          else {
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            colorStyle = ColorStyle__Enum_OffWhite;
          }
          pCVar12 = Styles::Styles_GetColor(&CStack_13,colorStyle,(MethodInfo *)0x0);
          CStack_13.r = pCVar12->r;
          CStack_13.g = pCVar12->g;
          CStack_13.b = pCVar12->b;
          CStack_13.a = pCVar12->a;
          if (pTVar7 != (Text *)0x0) {
            (*(pTVar7->klass->vtable).set_color.methodPtr)
                      (pTVar7,&CStack_13,(pTVar7->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingBase::SkillSettingBase_UpdateSkillData
               (SkillSettingBase *this,Object *newValue,MethodInfo *method)

{
  pSVar1 = (this->fields).infoButton;
  if (pSVar1 == (SpawnRoleSkillInfoButton *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pSVar1->fields).skillValue = newValue;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pSVar1->fields).skillValue >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

