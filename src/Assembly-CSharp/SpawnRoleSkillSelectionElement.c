
/* Void AddSkill() */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::SpawnRoleSkillSelectionElement_AddSkill
               (SpawnRoleSkillSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSkillSelectionElement____c___AddSkill_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSkillSelectionElement____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).spawnRoleTier == 0) &&
     (100 < (this->fields).spawnRoleCost + (this->fields).skillCost)) {
    pUVar1 = (this->fields).cantAddSkillCallback;
    if (pUVar1 == (UnityAction *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code);
  }
  else {
    pUVar3 = (this->fields).addSkillCallback;
    if (pUVar3 == (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                   *)0x0) goto DAT_?;
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,(this->fields).skillSetting,
               (pUVar3->fields)._._.method);
  }
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SpawnRoleSkillSelectionElement____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SpawnRoleSkillSelectionElement____c);
  }
  this_01 = TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__SpawnRoleSkillSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSkillSelectionElement____c);
    }
    object = TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__SpawnRoleSkillSelectionElement____c___AddSkill_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0 = this_01;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__SpawnRoleSkillSelectionElement____c->static_fields->__9__16_0 >>
                     0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar4,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar5) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar4,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                            (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  aIStackX_20[0].m_value = skillCost;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).spawnRoleCost = spawnRoleCost;
  (this->fields).spawnRoleTier = (undefined1)spawnRoleTier;
  (this->fields).skillCost = skillCost;
  (this->fields).skillSetting = skillSetting;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).skillSetting >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).addSkillCallback = addSkillCallback;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).addSkillCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cantAddSkillCallback = cantAddSkillCallback;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cantAddSkillCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar8 = (this->fields).nameText;
  if ((skillDataManager != (SpawnRolesSkillDataManager *)0x0) &&
     (pSVar9 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                         (skillDataManager,skill,(MethodInfo *)0x0), pTVar8 != (Text *)0x0)) {
    (*(pTVar8->klass->vtable).set_text.methodPtr)
              (pTVar8,pSVar9,(pTVar8->klass->vtable).set_text.method);
    pTVar8 = (this->fields).spawnRoleCostText;
    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
    if (pTVar8 != (Text *)0x0) {
      (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8,pSVar9);
      pTVar8 = (this->fields).spawnRoleCostText;
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
        this_02 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                            (skillDataManager,skill,(this->fields).iconColor,
                             (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                             (this->fields).iconHeight,(MethodInfo *)0x0);
        if ((this_02 != (SpawnRoleSkillIconController *)0x0) &&
           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0),
           this_03 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_03,(this->fields).imageContainer,0,(MethodInfo *)0x0);
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                    (this_02,skillCost,(MethodInfo *)0x0);
          this_00 = (this->fields).cogWheelIcon;
          if (this_00 != (GameObject *)0x0) {
            pKVar12 = (KogamaSettingValueWrapperBase *)0x0;
            if (skillSetting != (KogamaSettingValueWrapperBase *)0x0) {
              bVar13 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                      ->_1).naturalAligment;
              if (((skillSetting->klass->_1).naturalAligment < bVar13) ||
                 (bVar6 = true,
                 (skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 )) {
                bVar6 = false;
              }
              if (bVar6) {
                pKVar12 = skillSetting;
              }
            }
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,pKVar12 == (KogamaSettingValueWrapperBase *)0x0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                            ,skill,skillDataManager,0);
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar14 = lRam_?;
            skillValue = (Object *)(unaff_RSI & 0xffffffff00000000);
            if (*(int *)(lRam_? + 0x28) < 0) {
              if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                 ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                skillValue = (Object *)FUN_?(lRam_?);
                FUN_?(skillValue + 1,&stack0x00000008,
                              (longlong)*(int *)(lVar14 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)(skillValue + 1) >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar6 = uVar4 == *puVar5;
                    if (bVar6) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
              }
              else {
                skillValue = (Object *)0x0;
              }
            }
            pKVar12 = (this->fields).skillSetting;
            if (pKVar12 != (KogamaSettingValueWrapperBase *)0x0) {
              bVar13 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                      ->_1).naturalAligment;
              if (((pKVar12->klass->_1).naturalAligment < bVar13) ||
                 ((pKVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              pKVar15 = (KogamaSettingValueWrapperBase *)0x0;
              if (bVar6) {
                pKVar15 = pKVar12;
              }
              if (pKVar15 == (KogamaSettingValueWrapperBase *)0x0) {
                bVar13 = (
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                        ->_1).naturalAligment;
                if (((pKVar12->klass->_1).naturalAligment < bVar13) ||
                   ((pKVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
                    (Il2CppClass *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   )) goto code_?;
                pKVar12 = (this->fields).skillSetting;
                bVar13 = (
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                        ->_1).naturalAligment;
                if (((pKVar12->klass->_1).naturalAligment < bVar13) ||
                   ((pKVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
                    (Il2CppClass *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   )) {
                  FUN_?(pKVar12,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                               );
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                FUN_?(pKVar12,
                              MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                             );
                lVar14 = lRam_?;
              }
              else {
                bVar13 = (
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                        ->_1).naturalAligment;
                if (((pKVar12->klass->_1).naturalAligment < bVar13) ||
                   ((pKVar12->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
                    (Il2CppClass *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   )) {
                  FUN_?(pKVar12,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                               );
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                FUN_?(pKVar12,
                              MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                             );
                lVar14 = lRam_?;
              }
              skillValue = (Object *)FUN_?(lVar14,&stack0x00000008);
            }
code_?:
            this_01 = (this->fields).infoButton;
            if (this_01 == (SpawnRoleSkillInfoButton *)0x0) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
                      (this_01,skill,skillValue,(this->fields).skillCost,skillDataManager,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeInfoButton(String, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SpawnRoleSkillSelectionElement::
     SpawnRoleSkillSelectionElement_InitializeInfoButton
               (SpawnRoleSkillSelectionElement *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      skillValue = (Object *)FUN_?(lRam_?);
      FUN_?(skillValue + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)(skillValue + 1) >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    else {
      skillValue = (Object *)0x0;
    }
  }
  else {
    skillValue = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  pKVar7 = (this->fields).skillSetting;
  if (pKVar7 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar8 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((pKVar7->klass->_1).naturalAligment < bVar8) ||
       ((pKVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pKVar9 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar6) {
      pKVar9 = pKVar7;
    }
    if (pKVar9 == (KogamaSettingValueWrapperBase *)0x0) {
      bVar8 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((pKVar7->klass->_1).naturalAligment < bVar8) ||
         ((pKVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) goto code_?;
      pKVar7 = (this->fields).skillSetting;
      bVar8 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((pKVar7->klass->_1).naturalAligment < bVar8) ||
         ((pKVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        FUN_?(pKVar7,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                     );
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStackX_8 = FUN_?(pKVar7,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                               );
      lVar1 = lRam_?;
    }
    else {
      bVar8 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      if (((pKVar7->klass->_1).naturalAligment < bVar8) ||
         ((pKVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        FUN_?(pKVar7,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                     );
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStackX_8 = FUN_?(pKVar7,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                               );
      lVar1 = lRam_?;
    }
    skillValue = (Object *)FUN_?(lVar1,&uStackX_8);
  }
code_?:
  this_00 = (this->fields).infoButton;
  if (this_00 == (SpawnRoleSkillInfoButton *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
            (this_00,skill,skillValue,(this->fields).skillCost,skillDataManager,(MethodInfo *)0x0);
  return;
}

