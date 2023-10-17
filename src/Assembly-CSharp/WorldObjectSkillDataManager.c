
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
     (this_00 = (pKVar1->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    unaff_ESI = (KogamaSettingNumericBase_1_System_Single_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)skillKey,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
         ((unaff_ESI->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        fVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_NumericValue
                          (unaff_ESI,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                          );
        return fVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
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
     (this_00 = (pKVar1->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    unaff_ESI = (KogamaSettingNumericBase_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)skillKey,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI != (KogamaSettingNumericBase_1_System_Object_ *)0x0) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
         ((unaff_ESI->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        pOVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                 KogamaSettingNumericBase_1_System_Object__get_NumericValue
                           (unaff_ESI,
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                           );
        return (int32_t)pOVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean HasSkill(String) */

bool Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
               (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).skillData != (KogamaSettingsCollectionBase *)0x0) {
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (((this->fields).skillData)->fields).children;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                        );
      return bVar1;
    }
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
  }
  if (settings != (KogamaSettingWrapperBase *)0x0) {
    if (((settings->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((settings->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?(settings,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                     );
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).skillData = (KogamaSettingsCollectionBase *)settings;
    func_?(&this->fields,settings);
  }
  return;
}

