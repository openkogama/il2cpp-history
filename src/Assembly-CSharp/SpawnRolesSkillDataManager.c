
/* Color GetCostColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                  (Color *__return_storage_ptr__,int32_t skillCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillCost < 0) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_NegativeRed;
  }
  else {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      pSVar4 = (SpawnRoleSkillIconController *)(*pcVar3)();
      return pSVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return (SpawnRoleSkillIconController *)0x0;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffe4,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    pSVar6 = pSVar7->type;
    pSStack_8 = (String__Class *)pSVar7->description;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      pSStack_8 = TypeInfo__System__String;
      func_?();
    }
    bVar9 = mscorlib.dll::System::String::String_op_Equality(skillType,pSVar6,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar9 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?(&stack0xffffffe4,pLVar2,iVar1,
                                 MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                                );
        pSStack_8 = *(String__Class **)(iVar1 + 8);
        pXVar10 = *(XpBoostParticlePreviewer **)(iVar1 + 0xc);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar10,
                            SpawnRoleSkillIconController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillIconController>_SpawnRoleSkillIconController_
                           );
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pCVar11 = Styles::Styles_GetColor(&CStack_12,iconColorStyle,(MethodInfo *)0x0);
        CStack_12.r = pCVar11->r;
        CStack_12.g = pCVar11->g;
        CStack_12.b = pCVar11->b;
        CStack_12.a = pCVar11->a;
        pCVar11 = Styles::Styles_GetColor
                           ((Color *)&pSStack_8,iconBackgroundColorStyle,(MethodInfo *)0x0);
        if (pXVar10 != (XpBoostParticlePreviewer *)0x0) {
          newIconColor.g = CStack_12.g;
          newIconColor.r = CStack_12.r;
          newIconColor.b = CStack_12.b;
          newIconColor.a = CStack_12.a;
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeColor
                    ((SpawnRoleSkillIconController *)pXVar10,newIconColor,*pCVar11,(MethodInfo *)0x0);
          SpawnRoleSkillIconController::SpawnRoleSkillIconController_ChangeSize
                    ((SpawnRoleSkillIconController *)pXVar10,imageWidth,imageHeight,(MethodInfo *)0x0
                    );
          return (SpawnRoleSkillIconController *)pXVar10;
        }
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


/* String GetNameText(String) */

String * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                   (SpawnRolesSkillDataManager *this,String *skillType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return TypeInfo__System__String->static_fields->Empty;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar6 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    pSVar4 = pSVar6->type;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Equality(skillType,pSVar4,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?(&stack0xffffffcc,pLVar2,iVar1,
                                MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                               );
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return TypeInfo__System__String->static_fields->Empty;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar6 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    method_00 = (MethodInfo *)pSVar6->type;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (skillType,(String *)method_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar7 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?(&stack0xffffffe4,pLVar2,iVar1,
                                MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                               );
        pSVar4 = *(String **)(iVar1 + 8);
        pCVar8 = SpawnRolesSkillDataManager_GetValueColor
                           ((Color *)&stack0xffffffec,this,skillCost,(MethodInfo *)0x0);
        CVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar8,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar9 & 0xffffffff),method_00);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).defenceSkillsList;
  if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
    item_00._4_4_ =
         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
    item_00.rgba = (int32_t)skillKey;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar1,item_00,unaff_EDI);
    if (bVar2 != 0) {
      return SkillCategory__Enum_Defence;
    }
    pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).offenceSkillsList;
    if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
      item_01._4_4_ =
           MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
      item_01.rgba = (int32_t)skillKey;
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(pLVar1,item_01,unaff_retaddr);
      if (bVar2 != 0) {
        return SkillCategory__Enum_Offence;
      }
      pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).tacticalSkillsList;
      if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
        item._4_4_ = 
        MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
        item.rgba = (int32_t)skillKey;
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains(pLVar1,item,method);
        if (bVar2 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          message = mscorlib.dll::System::String::String_Concat_2
                              (skillKey,StringLiteral__is_not_in_any_skill_category_li,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      pSVar4 = (SkillSettingBase *)(*pcVar3)();
      return pSVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_SkillDataManager_can_not_create_,skillType,
                          StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return (SkillSettingBase *)0x0;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    pSVar6 = pSVar7->type;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar8 = mscorlib.dll::System::String::String_op_Equality(skillType,pSVar6,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar8 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?(&stack0xffffffcc,pLVar2,iVar1,
                                MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                               );
        uVar9 = *(undefined8 *)(iVar1 + 0x10);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXStack_10 = (XpBoostParticlePreviewer *)uVar9;
        pSVar4 = (SkillSettingBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXStack_10,
                            SkillSettingBase_MethodInfo__UnityEngine__Object__Instantiate<SkillSettingBase>_SkillSettingBase_
                           );
        return pSVar4;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


/* Color GetValueColor(Int32) */

Color * Assembly-CSharp.dll::SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetValueColor
                  (Color *__return_storage_ptr__,SpawnRolesSkillDataManager *this,int32_t skillCost,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (skillCost < 1) {
    if (skillCost < 0) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_NegativeRed;
    }
    else {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      colorStyle = ColorStyle__Enum_OffGray;
    }
  }
  else {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).skillDataList;
  do {
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_SkillDataManager_can_not_get_ski,skillType,
                          StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return 0.0;
    }
    pLVar2 = (this->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    pSVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffcc,pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    pSVar6 = pSVar7->type;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar8 = mscorlib.dll::System::String::String_op_Equality(skillType,pSVar6,(MethodInfo *)0x0);
    pLVar2 = (this->fields).skillDataList;
    if (bVar8 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        iVar1 = func_?(&stack0xffffffcc,pLVar2,iVar1,
                                MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                               );
        fStack_9 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x10) >> 0x20);
        return fStack_9;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

