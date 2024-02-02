
/* KogamaSettingValueWrapperBase
   KogamaSettingValueFactoryAttributeSettings(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase) */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsFactory::AttributeSettingsFactory_KogamaSettingValueFactoryAttributeSettings
          (KeyValuePair_2_System_Object_System_Object_ valuePair,
          KogamaSettingValueWrapperBase *kogamaSettingBasePrototype,
          KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) ||
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(), iVar1 == 0)
     ) goto code_?;
  uVar2 = func_?();
  switch(uVar2) {
  case 0:
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).naturalAligment <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
       )) {
      pSVar3 = kogamaSettingBasePrototype[1].fields._.key;
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      pKVar5 = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,pSVar4,*pbVar6,parent,(MethodInfo *)0x0);
        this[1].klass = pKVar5;
        this[1].monitor = (MonitorData *)pSVar3;
        return (KogamaSettingValueWrapperBase *)this;
      }
code_?:
      func_?();
    }
    break;
  case 1:
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment) ||
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) break;
    pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 == (Il2CppArrayType *)0x0)) {
code_?:
      func_?();
      goto code_?;
    }
    piVar8 = pIVar7->sizes;
    piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
    this_00 = (AttributeSettingFloat *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                (this_00,pSVar3,*pfVar10,(float)piVar8,(float)piVar9,calculator,
                 (AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this_00;
    }
    goto code_?;
  case 2:
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        this_01 = (AttributeSettingInt *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_01,pSVar3,*piVar11,(int32_t)piVar8,(int32_t)piVar9,calculator_00,
                       (AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this_01;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  default:
    goto code_?;
  case 4:
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         ->_1).naturalAligment <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
       )) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      pKVar12 = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        this_02 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_02,pSVar3,*piVar11,(int32_t)piVar8,(int32_t)piVar9,parent,
                       (MethodInfo *)0x0);
            this_02[1].klass = pKVar12;
            func_?();
            this_02[1].monitor = (MonitorData *)pSVar4;
            return (KogamaSettingValueWrapperBase *)this_02;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  this_03 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_03,(MethodInfo *)0x0);
  func_?();
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

