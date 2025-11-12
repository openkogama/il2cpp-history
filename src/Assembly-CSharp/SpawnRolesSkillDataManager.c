
/* Color GetCostColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                  (Color *__return_storage_ptr__,int32_t skillCost,MethodInfo *method)

{
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
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* SpawnRoleSkillIconController GetImageClone(String, ColorStyle, ColorStyle, Single, Single) */

SpawnRoleSkillIconController *
Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
          (SpawnRolesSkillDataManager *this,String *skillType,ColorStyle__Enum iconColorStyle,
          ColorStyle__Enum iconBackgroundColorStyle,float imageWidth,float imageHeight,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkillDataManager_can_not_create_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
    lVar3 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_SkillDataManager_can_not_create_,skillType,
                             StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return (SpawnRoleSkillIconController *)0x0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SpawnRolesSkillDataManager_SkillData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      pSVar4 = *(String **)((longlong)&pSVar5->vector[0].type + lVar3);
      if (skillType == pSVar4) break;
      if (((skillType == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((skillType->fields)._stringLength != (pSVar4->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(skillType->fields)._firstChar,
                           (uint8_t *)&(pSVar4->fields)._firstChar,
                           (longlong)(skillType->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pSVar8 = (SpawnRoleSkillIconController *)(*pcVar7)();
      return pSVar8;
    }
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (SpawnRolesSkillDataManager_SkillData__Array *)0x0) {
      if ((uint)pSVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        pSVar8 = (SpawnRoleSkillIconController *)(*pcVar7)();
        return pSVar8;
      }
      pSVar8 = pSVar5->vector[(int)uVar2].iconPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar8 = (SpawnRoleSkillIconController *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar8,
                           SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                          );
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar9 = Styles::Styles_GetColor(aCStack_10,iconColorStyle,(MethodInfo *)0x0);
      uVar11._0_4_ = pCVar9->r;
      uVar11._4_4_ = pCVar9->g;
      uVar12._0_4_ = pCVar9->b;
      uVar12._4_4_ = pCVar9->a;
      pCVar9 = Styles::Styles_GetColor(aCStack_10,iconBackgroundColorStyle,(MethodInfo *)0x0);
      if (pSVar8 != (SpawnRoleSkillIconController *)0x0) {
        pIVar13 = (pSVar8->fields).skillIcon;
        uVar14._0_4_ = pCVar9->r;
        uVar14._4_4_ = pCVar9->g;
        uVar15._0_4_ = pCVar9->b;
        uVar15._4_4_ = pCVar9->a;
        if (pIVar13 != (Image *)0x0) {
          aCStack_10[0]._0_8_ = uVar11;
          aCStack_10[0]._8_8_ = uVar12;
          (*(pIVar13->klass->vtable).set_color.methodPtr)
                    (pIVar13,aCStack_10,(pIVar13->klass->vtable).set_color.method);
          pIVar13 = (pSVar8->fields).negativeIcon;
          if (pIVar13 != (Image *)0x0) {
            aCStack_10[0]._0_8_ = uVar11;
            aCStack_10[0]._8_8_ = uVar12;
            (*(pIVar13->klass->vtable).set_color.methodPtr)
                      (pIVar13,aCStack_10,(pIVar13->klass->vtable).set_color.method);
            pIVar13 = (pSVar8->fields).negativeBackgroundIcon;
            if (pIVar13 != (Image *)0x0) {
              aCStack_10[0]._0_8_ = uVar14;
              aCStack_10[0]._8_8_ = uVar15;
              (*(pIVar13->klass->vtable).set_color.methodPtr)
                        (pIVar13,aCStack_10,(pIVar13->klass->vtable).set_color.method);
              SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
                        (pSVar8,imageWidth,imageHeight,(MethodInfo *)0x0);
              return pSVar8;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar8 = (SpawnRoleSkillIconController *)(*pcVar7)();
  return pSVar8;
}


/* String GetNameText(String) */

String * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                   (SpawnRolesSkillDataManager *this,String *skillType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkillDataManager_can_not_create_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
    lVar3 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_SkillDataManager_can_not_create_,skillType,
                            StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return ::StringLiteral__;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SpawnRolesSkillDataManager_SkillData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      pSVar4 = *(String **)((longlong)&pSVar5->vector[0].type + lVar3);
      if (skillType == pSVar4) break;
      if (((skillType == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((skillType->fields)._stringLength != (pSVar4->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(skillType->fields)._firstChar,
                           (uint8_t *)&(pSVar4->fields)._firstChar,
                           (longlong)(skillType->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar7)();
      return pSVar4;
    }
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (SpawnRolesSkillDataManager_SkillData__Array *)0x0) {
      if (uVar2 < (uint)pSVar5->max_length) {
        return pSVar5->vector[(int)uVar2].name;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar7)();
      return pSVar4;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* String GetSkillDescription(String, Object, Int32) */

String * Assembly-CSharp.dll::SpawnRolesSkillDataManager::
         SpawnRolesSkillDataManager_GetSkillDescription
                   (SpawnRolesSkillDataManager *this,String *skillType,Object *settingValue,
                   int32_t skillCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkillDataManager_can_not_create_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
    lVar3 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_SkillDataManager_can_not_create_,skillType,
                            StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return ::StringLiteral__;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SpawnRolesSkillDataManager_SkillData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      pSVar4 = *(String **)((longlong)&pSVar5->vector[0].type + lVar3);
      if (skillType == pSVar4) break;
      if (((skillType == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((skillType->fields)._stringLength != (pSVar4->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(skillType->fields)._firstChar,
                           (uint8_t *)&(pSVar4->fields)._firstChar,
                           (longlong)(skillType->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar7)();
      return pSVar4;
    }
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (SpawnRolesSkillDataManager_SkillData__Array *)0x0) {
      if (uVar2 < (uint)pSVar5->max_length) {
        ppSVar8 = &pSVar5->vector[(int)uVar2].description;
        pSStack_9 = *ppSVar8;
        pSStack_10 = (SpawnRoleSkillIconController *)ppSVar8[1];
        pCVar11 = SpawnRolesSkillDataManager_GetValueColor
                           (&CStack_12,this,skillCost,(MethodInfo *)0x0);
        CStack_12.r = pCVar11->r;
        CStack_12.g = pCVar11->g;
        CStack_12.b = pCVar11->b;
        CStack_12.a = pCVar11->a;
        uVar2 = FUN_?(&CStack_12);
        color.r = 0;
        color.g = 0;
        color.b = 0;
        color.a = 0;
        color.rgba = uVar2;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (pSStack_9,(Object *)pSVar4,settingValue,(MethodInfo *)0x0);
        return pSVar4;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar7)();
      return pSVar4;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* SkillCategory GetSkillsCategory(String) */

SkillCategory__Enum
Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
          (SpawnRolesSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_in_any_skill_category_li);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).defenceSkillsList;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    cVar2 = FUN_?(pLVar1,skillKey);
    if (cVar2 != '\0') {
      return SkillCategory__Enum_Defence;
    }
    pLVar1 = (this->fields).offenceSkillsList;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      cVar2 = FUN_?(pLVar1,skillKey);
      if (cVar2 != '\0') {
        return SkillCategory__Enum_Offence;
      }
      pLVar1 = (this->fields).tacticalSkillsList;
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        cVar2 = FUN_?(pLVar1,skillKey);
        if (cVar2 == '\0') {
          message = mscorlib.dll::System::String::String_Concat_4
                              (skillKey,StringLiteral__is_not_in_any_skill_category_li,
                               (MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)message,(MethodInfo *)0x0);
          return SkillCategory__Enum_Defence;
        }
        return SkillCategory__Enum_Tactical;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  SVar4 = (*pcVar3)();
  return SVar4;
}


/* SkillSettingBase GetSkillsSettingsClone(String) */

SkillSettingBase *
Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsSettingsClone
          (SpawnRolesSkillDataManager *this,String *skillType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkillDataManager_can_not_create_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
    lVar3 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_SkillDataManager_can_not_create_,skillType,
                            StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return (SkillSettingBase *)0x0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SpawnRolesSkillDataManager_SkillData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      pSVar4 = *(String **)((longlong)&pSVar5->vector[0].type + lVar3);
      if (skillType == pSVar4) break;
      if (((skillType == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((skillType->fields)._stringLength != (pSVar4->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(skillType->fields)._firstChar,
                           (uint8_t *)&(pSVar4->fields)._firstChar,
                           (longlong)(skillType->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pSVar8 = (SkillSettingBase *)(*pcVar7)();
      return pSVar8;
    }
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (SpawnRolesSkillDataManager_SkillData__Array *)0x0) {
      if (uVar2 < (uint)pSVar5->max_length) {
        pSVar8 = pSVar5->vector[(int)uVar2].settingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar8 = (SkillSettingBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pSVar8,
                            SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                           );
        return pSVar8;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar8 = (SkillSettingBase *)(*pcVar7)();
      return pSVar8;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar8 = (SkillSettingBase *)(*pcVar7)();
  return pSVar8;
}


/* Color GetValueColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetValueColor
                  (Color *__return_storage_ptr__,SpawnRolesSkillDataManager *this,int32_t skillCost,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (skillCost < 1) {
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
      colorStyle = ColorStyle__Enum_OffGray;
    }
  }
  else {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_PositiveGreen;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Single GetZeroValue(String) */

float Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetZeroValue
                (SpawnRolesSkillDataManager *this,String *skillType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_s_zero_value_because_it_is_not_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkillDataManager_can_not_get_ski);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).skillDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
    lVar3 = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_SkillDataManager_can_not_get_ski,skillType,
                            StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return 0.0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SpawnRolesSkillDataManager_SkillData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      pSVar4 = *(String **)((longlong)&pSVar5->vector[0].type + lVar3);
      if (skillType == pSVar4) break;
      if (((skillType == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((skillType->fields)._stringLength != (pSVar4->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(skillType->fields)._firstChar,
                           (uint8_t *)&(pSVar4->fields)._firstChar,
                           (longlong)(skillType->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x30;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      fVar8 = (float)(*pcVar7)();
      return fVar8;
    }
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (SpawnRolesSkillDataManager_SkillData__Array *)0x0) {
      if (uVar2 < (uint)pSVar5->max_length) {
        return pSVar5->vector[(int)uVar2].zeroValue;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      fVar8 = (float)(*pcVar7)();
      return fVar8;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float)(*pcVar7)();
  return fVar8;
}

