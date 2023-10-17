
/* Color GetCostColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                  (Color *__return_storage_ptr__,int32_t skillCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (skillCost < 0) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_NegativeRed;
  }
  else {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                   );
    func_?(&
                    SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    func_?(&StringLiteral_SkillDataManager_can_not_create_);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar4 = (SpawnRoleSkillIconController *)(*pcVar3)();
      return pSVar4;
    }
    if ((pLVar2->fields)._size <= (int)pSVar1) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return (SpawnRoleSkillIconController *)0x0;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,
                        (int32_t)pSVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    CStack_6.b = (float)pSVar5->settingsPrefab;
    CStack_6.a = pSVar5->zeroValue;
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,pSVar5->type,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        pSStack_8 = pSVar1;
        iVar9 = func_?();
        pSStack_8 = *(String **)(iVar9 + 8);
        pSVar4 = *(SpawnRoleSkillIconController **)(iVar9 + 0xc);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSVar4 = (SpawnRoleSkillIconController *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pSVar4,
                            SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                           );
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pCVar10 = Styles::Styles_GetColor(&CStack_6,iconColorStyle,(MethodInfo *)0x0);
        CStack_6.r = pCVar10->r;
        CStack_6.g = pCVar10->g;
        CStack_6.b = pCVar10->b;
        CStack_6.a = pCVar10->a;
        pCVar10 = Styles::Styles_GetColor
                           ((Color *)&pSStack_8,iconBackgroundColorStyle,(MethodInfo *)0x0);
        if (pSVar4 != (SpawnRoleSkillIconController *)0x0) {
          newIconColor.g = CStack_6.g;
          newIconColor.r = CStack_6.r;
          newIconColor.b = CStack_6.b;
          newIconColor.a = CStack_6.a;
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeColor
                    (pSVar4,newIconColor,*pCVar10,(MethodInfo *)0x0);
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
                    (pSVar4,imageWidth,imageHeight,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      goto code_?;
    }
    pSVar1 = (String *)((int)&pSVar1->klass + 1);
  } while( true );
}


/* String GetNameText(String) */

String * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                   (SpawnRolesSkillDataManager *this,String *skillType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                   );
    func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    func_?(&StringLiteral_SkillDataManager_can_not_create_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
    if ((pLVar2->fields)._size <= iVar1) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       (&SStack_6,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,pSVar5->type,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?();
        return *(String **)(iVar1 + 4);
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


/* String GetSkillDescription(String, Object, Int32) */

String * Assembly-CSharp.dll::SpawnRolesSkillDataManager::
         SpawnRolesSkillDataManager_GetSkillDescription
                   (SpawnRolesSkillDataManager *this,String *skillType,Object *settingValue,
                   int32_t skillCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    func_?(&StringLiteral_SkillDataManager_can_not_create_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
    if ((pLVar2->fields)._size <= iVar1) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    CStack_6.b = (float)pSVar5->settingsPrefab;
    CStack_6.a = pSVar5->zeroValue;
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,pSVar5->type,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?();
        pSVar4 = *(String **)(iVar1 + 8);
        pCVar8 = SpawnRolesSkillDataManager_GetValueColor
                           (&CStack_6,this,skillCost,(MethodInfo *)0x0);
        CVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar8,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar9 & 0xffffffff),in_stack_10)
        ;
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (pSVar4,(Object *)arg0,settingValue,(MethodInfo *)0x0);
        return pSVar4;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


/* SkillCategory GetSkillsCategory(String) */

SkillCategory__Enum
Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillsCategory
          (SpawnRolesSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    func_?(&StringLiteral__is_not_in_any_skill_category_li);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).defenceSkillsList;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar1,(RegexCharClass_SingleRange)skillKey,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 != 0) {
      return SkillCategory__Enum_Defence;
    }
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).offenceSkillsList;
    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (pLVar1,(RegexCharClass_SingleRange)skillKey,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      if (bVar2 != 0) {
        return SkillCategory__Enum_Offence;
      }
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).tacticalSkillsList;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                          (pLVar1,(RegexCharClass_SingleRange)skillKey,
                           MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                          );
        if (bVar2 == 0) {
          message = mscorlib.dll::System::String::String_Concat_3
                              (skillKey,StringLiteral__is_not_in_any_skill_category_li,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)message,(MethodInfo *)0x0);
          return SkillCategory__Enum_Defence;
        }
        return SkillCategory__Enum_Tactical;
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                   );
    func_?(&
                    SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
    func_?(&StringLiteral_SkillDataManager_can_not_create_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).skillDataList;
  do {
    if (pLVar1 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (SkillSettingBase *)(*pcVar2)();
      return pSVar3;
    }
    if ((pLVar1->fields)._size <= index) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_create_,skillType,
                           StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return (SkillSettingBase *)0x0;
    }
    pLVar1 = (this->fields).skillDataList;
    if (pLVar1 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       (&SStack_5,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,pSVar4->type,(MethodInfo *)0x0);
    pLVar1 = (this->fields).skillDataList;
    if (bVar6 != 0) {
      if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        puVar7 = (undefined4 *)func_?();
        SStack_5.type = (String *)*puVar7;
        SStack_5.name = (String *)puVar7[1];
        SStack_5.description = (String *)puVar7[2];
        SStack_5.iconPrefab = (SpawnRoleSkillIconController *)puVar7[3];
        SStack_5._16_8_ = *(undefined8 *)(puVar7 + 4);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar3 = (SkillSettingBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)SStack_5.settingsPrefab,
                            SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                           );
        return pSVar3;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Color GetValueColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetValueColor
                  (Color *__return_storage_ptr__,SpawnRolesSkillDataManager *this,int32_t skillCost,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (skillCost < 1) {
    if (skillCost < 0) {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_NegativeRed;
    }
    else {
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_OffGray;
    }
  }
  else {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                   );
    func_?(&StringLiteral_s_zero_value_because_it_is_not_i);
    func_?(&StringLiteral_SkillDataManager_can_not_get_ski);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
    if ((pLVar2->fields)._size <= iVar1) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_get_ski,skillType,
                           StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0.0;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       (&SStack_6,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,pSVar5->type,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?();
        SStack_6.zeroValue = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x10) >> 0x20);
        return SStack_6.zeroValue;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

