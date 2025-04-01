
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
  cVar1 = (char)unaff_EBX;
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
     (iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(), iVar2 == 0)
     ) goto code_?;
  uVar3 = func_?();
  switch(uVar3) {
  case 0:
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
            ->_1).naturalAligment;
    if ((bVar4 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar4 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
       )) {
      pKVar5 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
      pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
      unaff_EBX = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar7 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,pSVar6,*pbVar7,parent,(MethodInfo *)0x0);
        this[1].klass = unaff_EBX;
        this[1].monitor = (MonitorData *)pKVar5;
        return (KogamaSettingValueWrapperBase *)this;
      }
code_?:
      func_?();
    }
    break;
  case 1:
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ->_1).naturalAligment;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar4) ||
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) break;
    pSVar6 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar8 == (Il2CppArrayType *)0x0)) {
code_?:
      func_?();
      goto code_?;
    }
    piVar9 = pIVar8->sizes;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    piVar10 = pIVar8->lobounds;
    pKVar5 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
    unaff_EBX = (KogamaSettingBoolBase__Class *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar11 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                ((AttributeSettingFloat *)unaff_EBX,pSVar6,*pfVar11,(float)piVar9,(float)piVar10,
                 calculator,(AttributeSettingsExclusivityFlag__Enum)pKVar5,parent,(MethodInfo *)0x0)
      ;
      return (KogamaSettingValueWrapperBase *)unaff_EBX;
    }
    goto code_?;
  case 2:
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if ((bVar4 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar4 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pKVar12 = kogamaSettingBasePrototype[1].klass;
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      if ((pKVar12 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = (pKVar12->_0).byval_arg.data.array, pIVar8 != (Il2CppArrayType *)0x0)) {
        piVar9 = pIVar8->sizes;
        piVar10 = ((pKVar12->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar5 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_00 = (AttributeSettingInt *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar13 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_00,(String *)unaff_EBX,*piVar13,(int32_t)piVar9,(int32_t)piVar10,
                       calculator_00,(AttributeSettingsExclusivityFlag__Enum)pKVar5,parent,
                       (MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this_00;
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
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
            ->_1).naturalAligment;
    if ((bVar4 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar4 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
       )) {
      pKVar12 = kogamaSettingBasePrototype[1].klass;
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      pKVar14 = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((pKVar12 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = (pKVar12->_0).byval_arg.data.array, pIVar8 != (Il2CppArrayType *)0x0)) {
        piVar9 = pIVar8->sizes;
        piVar10 = ((pKVar12->_0).byval_arg.data.array)->lobounds;
        pKVar5 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_01 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar13 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_01,(String *)unaff_EBX,*piVar13,(int32_t)piVar9,(int32_t)piVar10,parent,
                       (MethodInfo *)0x0);
            this_01[1].klass = pKVar14;
            func_?();
            this_01[1].monitor = (MonitorData *)pKVar5;
            return (KogamaSettingValueWrapperBase *)this_01;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  cVar1 = (char)unaff_EBX;
  func_?();
code_?:
  func_?();
  this_02 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_02,(MethodInfo *)0x0);
  func_?();
  cVar15 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
  iVar2 = func_?();
  *(char *)(iVar2 + 0x6e10eed8) = *(char *)(iVar2 + 0x6e10eed8) + cVar1 + cVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

