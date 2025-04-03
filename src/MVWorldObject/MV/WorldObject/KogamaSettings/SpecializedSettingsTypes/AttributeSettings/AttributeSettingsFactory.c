
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(),
     iVar1 == 0)) goto code_?;
  uVar2 = func_?();
  switch(uVar2) {
  case 0:
    bVar3 = (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
             ->_1).naturalAligment;
    if ((bVar3 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
       )) {
      pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
      pSVar5 = (kogamaSettingBasePrototype->fields)._.key;
      unaff_EBX = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,pSVar5,*pbVar6,parent,(MethodInfo *)0x0);
        this[1].klass = unaff_EBX;
        this[1].monitor = (MonitorData *)pKVar4;
        return (KogamaSettingValueWrapperBase *)this;
      }
code_?:
      func_?();
    }
    break;
  case 1:
    bVar3 = (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             ->_1).naturalAligment;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar3) ||
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) break;
    pSVar5 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 == (Il2CppArrayType *)0x0)) {
code_?:
      func_?();
      goto code_?;
    }
    piVar8 = pIVar7->sizes;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    piVar9 = pIVar7->lobounds;
    pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
    unaff_EBX = (KogamaSettingBoolBase__Class *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                ((AttributeSettingFloat *)unaff_EBX,pSVar5,*pfVar10,(float)piVar8,(float)piVar9,
                 calculator,(AttributeSettingsExclusivityFlag__Enum)pKVar4,parent,(MethodInfo *)0x0)
      ;
      return (KogamaSettingValueWrapperBase *)unaff_EBX;
    }
    goto code_?;
  case 2:
    bVar3 = (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).naturalAligment;
    if ((bVar3 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pKVar11 = kogamaSettingBasePrototype[1].klass;
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      if ((pKVar11 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = (pKVar11->_0).byval_arg.data.array, pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = ((pKVar11->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_00 = (AttributeSettingInt *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_00,(String *)unaff_EBX,*piVar12,(int32_t)piVar8,(int32_t)piVar9,
                       calculator_00,(AttributeSettingsExclusivityFlag__Enum)pKVar4,parent,
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
    bVar3 = (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
             ->_1).naturalAligment;
    if ((bVar3 <= (kogamaSettingBasePrototype->klass->_1).naturalAligment) &&
       ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
       )) {
      pKVar11 = kogamaSettingBasePrototype[1].klass;
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      pKVar13 = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((pKVar11 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = (pKVar11->_0).byval_arg.data.array, pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = ((pKVar11->_0).byval_arg.data.array)->lobounds;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_01 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_01,(String *)unaff_EBX,*piVar12,(int32_t)piVar8,(int32_t)piVar9,parent,
                       (MethodInfo *)0x0);
            this_01[1].klass = pKVar13;
            func_?();
            this_01[1].monitor = (MonitorData *)pKVar4;
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
  func_?();
code_?:
  do {
    func_?();
    this_02 = (NotImplementedException *)func_?();
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this_02,(MethodInfo *)0x0);
    func_?();
    bVar3 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
    cVar14 = SCARRY4((int)&stack0xffffffd8,0x14);
    uVar15 = func_?();
    pcVar16 = (code *)swi(4);
    iVar1 = extraout_ECX;
    if (cVar14 == '\x01') {
      uVar15 = (*pcVar16)();
      iVar1 = extraout_ECX_00;
    }
  } while (iVar1 == 0);
  pbVar17 = (byte *)((int)uVar15 + -0x1c);
  bVar18 = *pbVar17 + (byte)unaff_EBX;
  bVar19 = CARRY1(*pbVar17,(byte)unaff_EBX) || CARRY1(bVar18,bVar3);
  *pbVar17 = bVar18 + bVar3;
  out((short)((uint6)uVar15 >> 0x20),(char)uVar15);
  bVar3 = *(byte *)&this_02->klass;
  bVar20 = (byte)((uint)iVar1 >> 8);
  bVar18 = *(char *)&this_02->klass + bVar20;
  *(byte *)&this_02->klass = bVar18 + bVar19;
  iVar1 = in(0xee);
  *(char *)(iVar1 + -0x1def111a) =
       *(char *)(iVar1 + -0x1def111a) + bVar20 + (CARRY1(bVar3,bVar20) || CARRY1(bVar18,bVar19));
  in(0xee);
  pcVar16 = (code *)swi(3);
  pKVar21 = (KogamaSettingValueWrapperBase *)(*pcVar16)();
  return pKVar21;
}

