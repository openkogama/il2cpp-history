
/* Single GetSkillFloatValue(String) */

float Assembly-CSharp.dll::WorldObjectSkillDataManager::
      WorldObjectSkillDataManager_GetSkillFloatValue
                (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields).skillData;
  if ((pKVar1 != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (pKVar1->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)skillKey,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pOVar2 != (Object *)0x0) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((pOVar2->klass->_1).naturalAligment < bVar3) ||
         ((pOVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        FUN_?(pOVar2,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                     );
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      if (pOVar2[2].monitor != (MonitorData *)0x0) {
        plVar6 = *(longlong **)(pOVar2[2].monitor + 0x10);
        pIVar7 = (MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                  ->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
        if ((pIVar7->field_0x135 & 1) == 0) {
          pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
        }
        if (plVar6 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar6 + 0x40) == pIVar7->element_class) {
            return *(float *)(plVar6 + 2);
          }
          FUN_?(plVar6,pIVar7);
          pcVar4 = (code *)swi(3);
          fVar5 = (float)(*pcVar4)();
          return fVar5;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Int32 GetSkillIntValue(String) */

int32_t Assembly-CSharp.dll::WorldObjectSkillDataManager::
        WorldObjectSkillDataManager_GetSkillIntValue
                  (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
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
  pKVar1 = (this->fields).skillData;
  if ((pKVar1 != (KogamaSettingsCollectionBase *)0x0) &&
     (this_00 = (pKVar1->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)skillKey,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pOVar2 != (Object *)0x0) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      if (((pOVar2->klass->_1).naturalAligment < bVar3) ||
         ((pOVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        FUN_?(pOVar2,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                     );
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      if (pOVar2[2].monitor != (MonitorData *)0x0) {
        plVar6 = *(longlong **)(pOVar2[2].monitor + 0x10);
        pIVar7 = (MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                  ->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
        if ((pIVar7->field_0x135 & 1) == 0) {
          pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
        }
        if (plVar6 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar6 + 0x40) == pIVar7->element_class) {
            return (int32_t)plVar6[2];
          }
          FUN_?(plVar6,pIVar7);
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean HasSkill(String) */

bool Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
               (WorldObjectSkillDataManager *this,String *skillKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).skillData != (KogamaSettingsCollectionBase *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(((this->fields).skillData)->fields).children;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)skillKey,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar1 >> 0x1f) ^ 1;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  return 0;
}


/* Void Initialize(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::WorldObjectSkillDataManager::WorldObjectSkillDataManager_Initialize
               (WorldObjectSkillDataManager *this,KogamaSettingWrapperBase *settings,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (settings != (KogamaSettingWrapperBase *)0x0) {
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((settings->klass->_1).naturalAligment < bVar1) ||
       ((settings->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(settings);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = iRam_? != 0;
    (this->fields).skillData = (KogamaSettingsCollectionBase *)settings;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
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
  }
  return;
}

