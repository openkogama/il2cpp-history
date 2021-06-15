
/* Single GetSkillFloatValue(String) */

float Assembly-CSharp.dll::WorldObjectSkillDataManager::
      WorldObjectSkillDataManager_GetSkillFloatValue
                (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).skillData;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)skillKey,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                         );
      if (pPVar1 != (Pool *)0x0) {
        bVar2 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                ->_1).naturalAligment;
        pPVar3 = pPVar1->klass;
        bVar4 = (pPVar3->_1).naturalAligment;
        if ((bVar4 < bVar2) ||
           ((pPVar3->_1).typeHierarchy[bVar2 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           )) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pPVar6 = (Pool *)0x0;
        if (bVar5) {
          pPVar6 = pPVar1;
        }
        if (pPVar6 != (Pool *)0x0) {
          if ((bVar4 < bVar2) ||
             ((pPVar3->_1).typeHierarchy[bVar2 - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pPVar6 = (Pool *)0x0;
          if (bVar5) {
            pPVar6 = pPVar1;
          }
          if (pPVar6 != (Pool *)0x0) {
            MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                      ((KogamaSettingNumericBase_1_System_Int32_ *)pPVar6,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                      );
            return (float)extraout_ST0;
          }
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Int32 GetSkillIntValue(String) */

int32_t Assembly-CSharp.dll::WorldObjectSkillDataManager::
        WorldObjectSkillDataManager_GetSkillIntValue
                  (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).skillData;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)skillKey,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                         );
      if (pPVar1 != (Pool *)0x0) {
        bVar2 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                ->_1).naturalAligment;
        pPVar3 = pPVar1->klass;
        bVar4 = (pPVar3->_1).naturalAligment;
        if ((bVar4 < bVar2) ||
           ((pPVar3->_1).typeHierarchy[bVar2 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pPVar6 = (Pool *)0x0;
        if (bVar5) {
          pPVar6 = pPVar1;
        }
        if (pPVar6 != (Pool *)0x0) {
          if ((bVar4 < bVar2) ||
             ((pPVar3->_1).typeHierarchy[bVar2 - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             )) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pPVar6 = (Pool *)0x0;
          if (bVar5) {
            pPVar6 = pPVar1;
          }
          if (pPVar6 != (Pool *)0x0) {
            iVar7 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                    KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                              ((KogamaSettingNumericBase_1_System_Int32_ *)pPVar6,
                               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                              );
            return iVar7;
          }
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  iVar7 = (*pcVar8)();
  return iVar7;
}


/* Boolean HasSkill(String) */

bool Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
               (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields).skillData;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_01,skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                        );
      return bVar1;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  return 0;
}


/* Void Initialize(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
               (WorldObjectSkillDataManager *this,KogamaSettingWrapperBase *settings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (settings != (KogamaSettingWrapperBase *)0x0) {
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((settings->klass->_1).naturalAligment < bVar1) ||
       ((settings->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pKVar3 = (KogamaSettingsCollectionBase *)0x0;
    if (bVar2) {
      pKVar3 = (KogamaSettingsCollectionBase *)settings;
    }
    if (pKVar3 == (KogamaSettingsCollectionBase *)0x0) {
      func_?(settings,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                     );
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields).skillData = pKVar3;
  }
  return;
}

