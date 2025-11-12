
/* KogamaSettingValueWrapperBase
   KogamaSettingValueFactoryAttributeSettings(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase) */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsFactory::AttributeSettingsFactory_KogamaSettingValueFactoryAttributeSettings
          (KeyValuePair_2_System_Object_System_Object_ *valuePair,
          KogamaSettingValueWrapperBase *kogamaSettingBasePrototype,
          KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0) &&
     (lVar1 = (*(kogamaSettingBasePrototype->klass->vtable).__unknown.methodPtr)
                         (kogamaSettingBasePrototype,
                          (kogamaSettingBasePrototype->klass->vtable).__unknown.method), lVar1 != 0
     )) {
    iVar2 = FUN_?(2,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                           ,lVar1);
    if (iVar2 == 0) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar3) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                     );
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
      pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar7 = valuePair->value;
      uVar8 = *(undefined4 *)&kogamaSettingBasePrototype[1].monitor;
      uVar9 = *(undefined4 *)((longlong)&kogamaSettingBasePrototype[1].monitor + 4);
      this_02 = (KogamaSettingBoolBase *)FUN_?();
      if (pOVar7 != (Object *)0x0) {
        if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                    (this_02,pSVar6,*(bool *)&pOVar7[1].klass,parent,(MethodInfo *)0x0);
          *(undefined4 *)&this_02[1].klass = uVar8;
          *(undefined4 *)((longlong)&this_02[1].klass + 4) = uVar9;
          return (KogamaSettingValueWrapperBase *)this_02;
        }
        FUN_?(pOVar7);
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
    }
    else if (iVar2 == 1) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar3) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                     );
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
      pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar7 = valuePair->value;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar10 != (Il2CppArrayType *)0x0)) {
        min = *(float *)&pIVar10->sizes;
        max = *(float *)((longlong)&pIVar10->sizes + 4);
        calculator_00 = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
        AVar11 = *(AttributeSettingsExclusivityFlag__Enum *)
                 &kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_01 = (AttributeSettingFloat *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                               );
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                      (this_01,pSVar6,*(float *)&pOVar7[1].klass,min,max,calculator_00,AVar11,parent,
                       (MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this_01;
          }
          FUN_?(pOVar7);
          pcVar4 = (code *)swi(3);
          pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
          return pKVar5;
        }
      }
    }
    else if (iVar2 == 2) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar3) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                     );
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
      pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar7 = valuePair->value;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar10 != (Il2CppArrayType *)0x0)) {
        iVar12 = *(int32_t *)&pIVar10->sizes;
        iVar13 = *(int32_t *)((longlong)&pIVar10->sizes + 4);
        calculator = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        AVar11 = *(AttributeSettingsExclusivityFlag__Enum *)
                 &kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_00 = (AttributeSettingInt *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                               );
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_00,pSVar6,*(int32_t *)&pOVar7[1].klass,iVar12,iVar13,calculator,AVar11,
                       parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this_00;
          }
          FUN_?(pOVar7);
          pcVar4 = (code *)swi(3);
          pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
          return pKVar5;
        }
      }
    }
    else {
      if ((iVar2 == 3) || (iVar2 != 4)) {
        uVar14 = func_?(&TypeInfo__System__NotImplementedException);
        this_03 = (NotImplementedException *)func_?(uVar14);
        mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
                  (this_03,(MethodInfo *)0x0);
        uVar14 = func_?(&
                                     MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                                    );
        FUN_?(this_03,uVar14);
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar3) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                     );
        pcVar4 = (code *)swi(3);
        pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
        return pKVar5;
      }
      pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar7 = valuePair->value;
      valueAttributeValueMap =
           (Dictionary_2_System_Int32_System_Int32_ *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar10 != (Il2CppArrayType *)0x0)) {
        iVar12 = *(int32_t *)&pIVar10->sizes;
        iVar13 = *(int32_t *)((longlong)&pIVar10->sizes + 4);
        AVar11 = *(AttributeSettingsExclusivityFlag__Enum *)
                 &kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this = (AttributeSettingEnum *)
               FUN_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                            );
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            AttributeSettingTypes::AttributeSettingEnum::AttributeSettingEnum__ctor_1
                      (this,pSVar6,*(int32_t *)&pOVar7[1].klass,valueAttributeValueMap,iVar12,iVar13,
                       AVar11,parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this;
          }
          FUN_?(pOVar7);
          pcVar4 = (code *)swi(3);
          pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
          return pKVar5;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pKVar5 = (KogamaSettingValueWrapperBase *)(*pcVar4)();
  return pKVar5;
}

