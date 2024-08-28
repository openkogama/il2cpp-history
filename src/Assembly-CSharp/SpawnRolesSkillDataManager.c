
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
  index = 0.0;
  this_00 = (this->fields).skillDataList;
  do {
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (SpawnRoleSkillIconController *)(*pcVar1)();
      return pSVar2;
    }
    if ((this_00->fields)._size <= (int)index) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_create_,skillType,
                           StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return (SpawnRoleSkillIconController *)0x0;
    }
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                       ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffcc,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)this_00,(int32_t)index,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    CStack_4._8_8_ = *(undefined8 *)&(pMVar3->width).m_Unit;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)pMVar3->index,(MethodInfo *)0x0);
    this_00 = (this->fields).skillDataList;
    if (bVar5 != 0) {
      if (this_00 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        puStack_6 = (undefined *)index;
        iVar7 = func_?();
        puStack_6 = *(undefined **)(iVar7 + 8);
        original = *(Object **)(iVar7 + 0xc);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pSVar2 = (SpawnRoleSkillIconController *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           (original,
                            SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                           );
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pCVar8 = Styles::Styles_GetColor(&CStack_4,iconColorStyle,(MethodInfo *)0x0);
        CStack_4.r = pCVar8->r;
        CStack_4.g = pCVar8->g;
        CStack_4.b = pCVar8->b;
        CStack_4.a = pCVar8->a;
        pCVar8 = Styles::Styles_GetColor
                           ((Color *)&puStack_6,iconBackgroundColorStyle,(MethodInfo *)0x0);
        if (pSVar2 != (SpawnRoleSkillIconController *)0x0) {
          newIconColor.g = CStack_4.g;
          newIconColor.r = CStack_4.r;
          newIconColor.b = CStack_4.b;
          newIconColor.a = CStack_4.a;
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeColor
                    (pSVar2,newIconColor,*pCVar8,(MethodInfo *)0x0);
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
                    (pSVar2,imageWidth,imageHeight,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
      goto code_?;
    }
    index = (float)((int)index + 1);
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
  this_00 = (this->fields).skillDataList;
  do {
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if ((this_00->fields)._size <= iVar1) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                       (&MStack_5,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)this_00,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)pMVar4->index,(MethodInfo *)0x0);
    this_00 = (this->fields).skillDataList;
    if (bVar6 != 0) {
      if (this_00 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
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
  this_00 = (this->fields).skillDataList;
  do {
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if ((this_00->fields)._size <= iVar1) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return ::StringLiteral__;
    }
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                       ((MultiColumnCollectionHeader_ViewState_ColumnState *)&stack0xffffffcc,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)this_00,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    CStack_5._8_8_ = *(undefined8 *)&(pMVar4->width).m_Unit;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)pMVar4->index,(MethodInfo *)0x0);
    this_00 = (this->fields).skillDataList;
    if (bVar6 != 0) {
      if (this_00 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?();
        pSVar3 = *(String **)(iVar1 + 8);
        pCVar7 = SpawnRolesSkillDataManager_GetValueColor
                           (&CStack_5,this,skillCost,(MethodInfo *)0x0);
        CVar8 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar7,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar8 & 0xffffffff),in_stack_9)
        ;
        pSVar3 = mscorlib.dll::System::String::String_Format_1
                           (pSVar3,(Object *)arg0,settingValue,(MethodInfo *)0x0);
        return pSVar3;
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
  pLVar1 = (this->fields).defenceSkillsList;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)skillKey,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 != 0) {
      return SkillCategory__Enum_Defence;
    }
    pLVar1 = (this->fields).offenceSkillsList;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)pLVar1,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      if (bVar2 != 0) {
        return SkillCategory__Enum_Offence;
      }
      pLVar1 = (this->fields).tacticalSkillsList;
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Contains
                          ((List_1_System_Object_ *)pLVar1,(Object *)skillKey,
                           MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                          );
        if (bVar2 == 0) {
          message = mscorlib.dll::System::String::String_Concat_3
                              (skillKey,StringLiteral__is_not_in_any_skill_category_li,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  this_00 = (this->fields).skillDataList;
  do {
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (SkillSettingBase *)(*pcVar1)();
      return pSVar2;
    }
    if ((this_00->fields)._size <= index) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_create_,skillType,
                           StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return (SkillSettingBase *)0x0;
    }
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                       (&MStack_4,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)this_00,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)pMVar3->index,(MethodInfo *)0x0);
    this_00 = (this->fields).skillDataList;
    if (bVar5 != 0) {
      if (this_00 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        piVar6 = (int32_t *)func_?();
        MStack_4.index = *piVar6;
        MStack_4.name = (String *)piVar6[1];
        MStack_4.actualWidth = (float)piVar6[2];
        MStack_4.width.m_Value = (float)piVar6[3];
        MStack_4._16_8_ = *(undefined8 *)(piVar6 + 4);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar2 = (SkillSettingBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)MStack_4.width.m_Unit,
                            SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                           );
        return pSVar2;
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
  this_00 = (this->fields).skillDataList;
  do {
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float10)(*pcVar2)();
      return (float)fVar3;
    }
    if ((this_00->fields)._size <= iVar1) {
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_get_ski,skillType,
                           StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0.0;
    }
    if (this_00 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                       ((MultiColumnCollectionHeader_ViewState_ColumnState *)auStack_5,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)this_00,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)pMVar4->index,(MethodInfo *)0x0);
    this_00 = (this->fields).skillDataList;
    if (bVar6 != 0) {
      if (this_00 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?();
        auStack_5._20_4_ = (undefined4)((ulonglong)*(undefined8 *)(iVar1 + 0x10) >> 0x20);
        return (float)auStack_5._20_4_;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

