
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
    unaff_EDI = kogamaSettingBasePrototype->klass;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).naturalAligment <= (unaff_EDI->_1).naturalAligment) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
       )) {
      pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key
      ;
      pKVar4 = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar5 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,(String *)unaff_EDI,*pbVar5,parent,(MethodInfo *)0x0);
        this[1].klass = pKVar4;
        this[1].monitor = (MonitorData *)pKVar3;
        return (KogamaSettingValueWrapperBase *)this;
      }
code_?:
      func_?();
    }
    break;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment) ||
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) break;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
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
    pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
    this_00 = (AttributeSettingFloat *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar9 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                (this_00,(String *)unaff_EDI,*pfVar9,(float)piVar7,(float)piVar8,calculator,
                 (AttributeSettingsExclusivityFlag__Enum)pKVar3,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this_00;
    }
    goto code_?;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment <= (unaff_EDI->_1).naturalAligment) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      pSVar10 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      ((AttributeSettingInt *)unaff_EDI,pSVar10,*piVar11,(int32_t)piVar7,
                       (int32_t)piVar8,calculator_00,(AttributeSettingsExclusivityFlag__Enum)pKVar3,
                       parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)unaff_EDI;
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
    unaff_EDI = kogamaSettingBasePrototype->klass;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         ->_1).naturalAligment <= (unaff_EDI->_1).naturalAligment) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
       )) {
      pSVar10 = (kogamaSettingBasePrototype->fields)._.key;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_01 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_01,pSVar10,*piVar11,(int32_t)piVar7,(int32_t)piVar8,parent,
                       (MethodInfo *)0x0);
            this_01[1].klass = (KogamaSettingEnumBase__Class *)unaff_EDI;
            func_?();
            this_01[1].monitor = (MonitorData *)pKVar3;
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
  func_?();
  this_02 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_02,(MethodInfo *)0x0);
  func_?();
  bVar12 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
  cVar13 = SCARRY4((int)&stack0xffffffd8,0x14);
  cVar14 = (int)&stack0xffffffec < 0;
  bVar15 = &stack0x00000000 == (undefined1 *)0x14;
  uVar16 = func_?();
  uVar17 = (undefined2)((uint6)uVar16 >> 0x20);
  if (!bVar15 && cVar13 == cVar14) {
    out(uVar17,(int)uVar16);
    bVar18 = *(char *)&(unaff_EDI->_0).image + (byte)extraout_CX;
    bVar15 = CARRY1(*(byte *)&(unaff_EDI->_0).image,(byte)extraout_CX) || CARRY1(bVar18,bVar12);
    *(byte *)&(unaff_EDI->_0).image = bVar18 + bVar12;
    out(uVar17,(int)uVar16);
    bVar19 = (byte)((uint6)uVar16 >> 8);
    bVar20 = (byte)((ushort)extraout_CX >> 8);
    bVar12 = bVar19 + bVar20;
    bVar18 = (byte)uVar16;
    cVar14 = bVar12 + bVar15;
    bVar15 = 0x99 < bVar18 || (CARRY1(bVar19,bVar20) || CARRY1(bVar12,bVar15));
    uVar2 = CONCAT31((int3)(CONCAT22((short)((uint6)uVar16 >> 0x10),CONCAT11(cVar14,bVar18)) >> 8),
                      bVar18 + (9 < (bVar18 & 0xf) | in_AF) * '\x06' + bVar15 * '`');
    out(uVar17,uVar2);
    bVar12 = (byte)((uint6)uVar16 >> 0x28);
    out(uVar17,uVar2);
    pVVar21 = &unaff_EDI[-0x3855c5].vtable.Finalize;
    *(char *)&pVVar21->methodPtr =
         *(char *)&pVVar21->methodPtr + cVar14 +
         (CARRY1(in_stack_22,bVar12) || CARRY1(in_stack_22 + bVar12,bVar15));
    pcVar23 = (code *)swi(3);
    pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
    return pKVar24;
  }
  if (!bVar15) {
    source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                       ((KogamaSettingWrapperBase *)valuePair.value,(MethodInfo *)0x0);
    iVar1 = ((String__Fields *)&(unaff_EDI->_0).name)->_stringLength;
    if (iVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (*(int *)(iVar1 + 0x10) == 0) {
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     ,this_02);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **
         )(iVar1 + 0x10) = this_03;
        func_?(iVar1 + 0x10,this_03);
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (*(Dictionary_2_System_Object_System_Object_ **)(iVar1 + 0x10),source,
                 (MethodInfo *)0x0);
      if (*(int *)(iVar1 + 8) != 0) {
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                  (*(Dictionary_2_System_Object_System_Object_ **)(*(int *)(iVar1 + 8) + 0x58),
                   *(Dictionary_2_System_Object_System_Object_ **)(iVar1 + 0x10),(MethodInfo *)0x0)
        ;
        pKVar24 = extraout_EAX;
        if (*(int *)(iVar1 + 0x1c) != 0) {
          pKVar24 = (KogamaSettingValueWrapperBase *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0xc))();
        }
        return pKVar24;
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
  return pKVar24;
}

