
/* Single GetSkillFloatValue(String) */

float Assembly-CSharp.dll::WorldObjectSkillDataManager::
      WorldObjectSkillDataManager_GetSkillFloatValue
                (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields).skillData;
  if ((pKVar1 != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pKVar1->fields).children,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                        );
    if (this_01.m_Index != 0) {
      bVar2 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if ((bVar2 <= *(byte *)(*(int *)this_01.m_Index + 0xb8)) &&
         (*(AttributeSettingFloat__Class **)
           (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar2 * 4) ==
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        fVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_NumericValue
                          ((KogamaSettingNumericBase_1_System_Single_ *)this_01.m_Index,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                          );
        return fVar3;
      }
      goto code_?;
    }
  }
  func_?();
  this_01.m_Index = extraout_EDX;
code_?:
  func_?(this_01.m_Index);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Int32 GetSkillIntValue(String) */

int32_t Assembly-CSharp.dll::WorldObjectSkillDataManager::
        WorldObjectSkillDataManager_GetSkillIntValue
                  (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields).skillData;
  if ((pKVar1 != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pKVar1->fields).children,
     this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                        );
    if (this_01.m_Index != 0) {
      bVar2 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      if ((bVar2 <= *(byte *)(*(int *)this_01.m_Index + 0xb8)) &&
         (*(AttributeSettingInt__Class **)
           (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar2 * 4) ==
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        iVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                          (this_01.m_Index,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                          );
        return iVar3;
      }
      goto code_?;
    }
  }
  func_?();
  this_01.m_Index = extraout_EDX;
code_?:
  func_?(this_01.m_Index);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean HasSkill(String) */

bool Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
               (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields).skillData;
  if (pKVar1 != (KogamaSettingsCollectionBase *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (pKVar1->fields).children;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                        );
      return bVar2;
    }
    uVar3 = func_?(&stack0xfffffff0);
    func_?(uVar3);
    pcVar4 = (code *)swi(3);
    bVar2 = (*pcVar4)();
    return bVar2;
  }
  return 0;
}


/* Void Initialize(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
               (WorldObjectSkillDataManager *this,KogamaSettingWrapperBase *settings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
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
      func_?(settings,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                     );
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).skillData = (KogamaSettingsCollectionBase *)settings;
    func_?(&this->fields,settings);
  }
  return;
}

