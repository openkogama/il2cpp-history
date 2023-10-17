
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
      unaff_EBX = (KogamaSettingEnumBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
      this = (KogamaSettingBoolBase *)func_?();
      if ((this == (KogamaSettingBoolBase *)0x0) || (valuePair.value == (Object *)0x0))
      goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar5 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,(String *)unaff_EBX,*pbVar5,parent,(MethodInfo *)0x0);
        this[1].klass = pKVar3;
        this[1].monitor = (MonitorData *)pSVar4;
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
    unaff_EBX = (KogamaSettingEnumBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar6 == (Il2CppArrayType *)0x0)) {
code_?:
      func_?();
      goto code_?;
    }
    piVar7 = pIVar6->sizes;
    piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
    this_00 = (AttributeSettingFloat *)func_?();
    if ((this_00 == (AttributeSettingFloat *)0x0) || (valuePair.value == (Object *)0x0))
    goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar9 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                (this_00,(String *)unaff_EBX,*pfVar9,(float)piVar7,(float)piVar8,calculator,
                 (AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,(MethodInfo *)0x0);
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
      unaff_EBX = (KogamaSettingEnumBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        this_01 = (AttributeSettingInt *)func_?();
        if ((this_01 != (AttributeSettingInt *)0x0) && (valuePair.value != (Object *)0x0)) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar10 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_01,(String *)unaff_EBX,*piVar10,(int32_t)piVar7,(int32_t)piVar8,
                       calculator_00,(AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,
                       (MethodInfo *)0x0);
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
      unaff_EBX = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pSVar11 = kogamaSettingBasePrototype[1].fields._.key;
        this_02 = (KogamaSettingEnumBase *)func_?();
        if ((this_02 != (KogamaSettingEnumBase *)0x0) && (valuePair.value != (Object *)0x0)) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar10 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_02,pSVar4,*piVar10,(int32_t)piVar7,(int32_t)piVar8,parent,
                       (MethodInfo *)0x0);
            this_02[1].klass = unaff_EBX;
            func_?();
            this_02[1].monitor = (MonitorData *)pSVar11;
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
  cVar12 = (undefined1 *)0xffffffe7 < &stack0xffffffd4;
  func_?();
  uVar2 = uRam_?;
  pppIVar13 = &unaff_EBX[0x364ec9]._0.implementedInterfaces;
  *(char *)pppIVar13 = *(char *)pppIVar13 + extraout_DL + cVar12;
  uRam_? = (undefined1)uVar2;
  pcVar14 = (code *)swi(3);
  pKVar15 = (KogamaSettingValueWrapperBase *)(*pcVar14)();
  return pKVar15;
}

