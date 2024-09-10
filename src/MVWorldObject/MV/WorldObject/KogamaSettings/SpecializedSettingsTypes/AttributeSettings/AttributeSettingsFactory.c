
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
  uVar1 = SUB42(unaff_EBX,0);
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
     (iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(),
     iVar2 == 0)) goto code_?;
  uVar3 = func_?();
  switch(uVar3) {
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
    pSVar5 = (kogamaSettingBasePrototype->fields)._.key;
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
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_00 = (AttributeSettingInt *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this_00,(String *)unaff_EBX,*piVar11,(int32_t)piVar8,(int32_t)piVar9,
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
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      pKVar12 = (KogamaSettingEnumBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_01 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_01,(String *)unaff_EBX,*piVar11,(int32_t)piVar8,(int32_t)piVar9,parent,
                       (MethodInfo *)0x0);
            this_01[1].klass = pKVar12;
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
  uVar1 = SUB42(unaff_EBX,0);
  func_?();
code_?:
  func_?();
  this_02 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_02,(MethodInfo *)0x0);
  func_?();
  bVar13 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
  cVar14 = SCARRY4((int)&stack0xffffffd8,0x14);
  uVar15 = func_?();
  pcVar16 = (code *)swi(4);
  iVar2 = extraout_ECX;
  if (cVar14 == '\x01') {
    uVar15 = (*pcVar16)();
    iVar2 = extraout_ECX_00;
  }
  uVar17 = (undefined2)((uint6)uVar15 >> 0x20);
  bVar18 = (byte)uVar15;
  bVar13 = 0x99 < bVar18 | bVar13;
  iVar19 = CONCAT31((int3)((uint6)uVar15 >> 8),
                    bVar18 + (9 < (bVar18 & 0xf) | in_AF) * '\x06' + bVar13 * '`');
  out(uVar17,iVar19);
  pbVar20 = &stack0xffffffeb + iVar19;
  bVar18 = *pbVar20;
  bVar21 = *pbVar20 + (byte)uVar1;
  *pbVar20 = bVar21 + bVar13;
  (&stack0xfffffffc)[iVar2] =
       (&stack0xfffffffc)[iVar2] + (char)((ushort)uVar1 >> 8) +
       (CARRY1(bVar18,(byte)uVar1) || CARRY1(bVar21,bVar13));
  out(uVar17,iVar19);
  pcVar16 = (code *)swi(3);
  pKVar22 = (KogamaSettingValueWrapperBase *)(*pcVar16)();
  return pKVar22;
}

