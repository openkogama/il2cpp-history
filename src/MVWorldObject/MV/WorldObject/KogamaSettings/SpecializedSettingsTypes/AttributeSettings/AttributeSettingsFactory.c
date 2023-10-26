
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
    func_?();
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
     (iVar1 = (*(kogamaSettingBasePrototype->klass->vtable).__unknown.methodPtr)(), iVar1 == 0))
  goto code_?;
  uVar2 = func_?();
  switch(uVar2) {
  case 0:
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).typeHierarchyDepth <= (kogamaSettingBasePrototype->klass->_1).typeHierarchyDepth) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
       )) {
      pKVar3 = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      pSVar5 = kogamaSettingBasePrototype[1].fields._.key;
      this = (KogamaSettingBoolBase *)func_?();
      if ((this == (KogamaSettingBoolBase *)0x0) || (valuePair.value == (Object *)0x0))
      goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,pSVar4,*pbVar6,parent,(MethodInfo *)0x0);
        this[1].klass = pKVar3;
        this[1].monitor = (MonitorData *)pSVar5;
        return (KogamaSettingValueWrapperBase *)this;
      }
code_?:
      func_?();
    }
    break;
  case 1:
    if (((kogamaSettingBasePrototype->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).typeHierarchyDepth) ||
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) break;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
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
    pSVar5 = kogamaSettingBasePrototype[1].fields._.key;
    this_00 = (AttributeSettingFloat *)func_?();
    if ((this_00 == (AttributeSettingFloat *)0x0) || (valuePair.value == (Object *)0x0))
    goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                (this_00,pSVar4,*pfVar10,(float)piVar8,(float)piVar9,calculator,
                 (AttributeSettingsExclusivityFlag__Enum)pSVar5,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this_00;
    }
    goto code_?;
  case 2:
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).typeHierarchyDepth <= (kogamaSettingBasePrototype->klass->_1).typeHierarchyDepth) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pSVar5 = kogamaSettingBasePrototype[1].fields._.key;
        this_01 = (AttributeSettingInt *)func_?();
        if ((this_01 != (AttributeSettingInt *)0x0) && (valuePair.value != (Object *)0x0)) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_01,pSVar4,*piVar11,(int32_t)piVar8,(int32_t)piVar9,calculator_00,
                       (AttributeSettingsExclusivityFlag__Enum)pSVar5,parent,(MethodInfo *)0x0);
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
         ->_1).typeHierarchyDepth <= (kogamaSettingBasePrototype->klass->_1).typeHierarchyDepth) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
       )) {
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      pKVar12 = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pSVar5 = kogamaSettingBasePrototype[1].fields._.key;
        this_02 = (KogamaSettingEnumBase *)func_?();
        if ((this_02 != (KogamaSettingEnumBase *)0x0) && (valuePair.value != (Object *)0x0)) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_02,pSVar4,*piVar11,(int32_t)piVar8,(int32_t)piVar9,parent,
                       (MethodInfo *)0x0);
            this_02[1].klass = pKVar12;
            func_?();
            this_02[1].monitor = (MonitorData *)pSVar5;
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
  func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_03,(MethodInfo *)0x0);
  func_?();
  cVar13 = (undefined1 *)0xffffffe7 < &stack0xffffffd4;
  uVar14 = func_?();
  pcVar15 = (char *)((ulonglong)uVar14 >> 0x20);
  pcVar16 = (char *)((int)uVar14 + -0x6664ef5f);
  *pcVar16 = *pcVar16 + '\x01';
  *pcVar15 = *pcVar15 + (char)((uint)uRam_? >> 8) + cVar13;
  pcVar17 = (code *)swi(3);
  pKVar18 = (KogamaSettingValueWrapperBase *)(*pcVar17)();
  return pKVar18;
}

