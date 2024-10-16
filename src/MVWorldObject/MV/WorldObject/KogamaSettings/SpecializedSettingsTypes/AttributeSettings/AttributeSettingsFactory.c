
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
      unaff_EBX = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar4 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,(String *)unaff_EDI,*pbVar4,parent,(MethodInfo *)0x0);
        this[1].klass = unaff_EBX;
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
       (pIVar5 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar5 == (Il2CppArrayType *)0x0)) {
code_?:
      func_?();
      goto code_?;
    }
    piVar6 = pIVar5->sizes;
    piVar7 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
    unaff_EBX = (KogamaSettingBoolBase__Class *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar8 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                ((AttributeSettingFloat *)unaff_EBX,(String *)unaff_EDI,*pfVar8,(float)piVar6,
                 (float)piVar7,calculator,(AttributeSettingsExclusivityFlag__Enum)pKVar3,parent,
                 (MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EBX;
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
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar5 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar5 != (Il2CppArrayType *)0x0)) {
        piVar6 = pIVar5->sizes;
        piVar7 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar9 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      ((AttributeSettingInt *)unaff_EDI,(String *)unaff_EBX,*piVar9,(int32_t)piVar6
                       ,(int32_t)piVar7,calculator_00,(AttributeSettingsExclusivityFlag__Enum)pKVar3
                       ,parent,(MethodInfo *)0x0);
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
      unaff_EBX = (KogamaSettingBoolBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar5 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar5 != (Il2CppArrayType *)0x0)) {
        piVar6 = pIVar5->sizes;
        piVar7 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pKVar3 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        this_00 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar9 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_00,(String *)unaff_EBX,*piVar9,(int32_t)piVar6,(int32_t)piVar7,parent,
                       (MethodInfo *)0x0);
            this_00[1].klass = (KogamaSettingEnumBase__Class *)unaff_EDI;
            func_?();
            this_00[1].monitor = (MonitorData *)pKVar3;
            return (KogamaSettingValueWrapperBase *)this_00;
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
  this_01 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_01,(MethodInfo *)0x0);
  func_?();
  bVar10 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
  cVar11 = SCARRY4((int)&stack0xffffffd8,0x14);
  cVar12 = (int)&stack0xffffffec < 0;
  bVar13 = &stack0x00000000 == (undefined1 *)0x14;
  uVar14 = func_?();
  iVar1 = (int)uVar14;
  if (!bVar13 && cVar11 == cVar12) {
    uVar15 = (undefined2)((ulonglong)uVar14 >> 0x20);
    out(uVar15,iVar1);
    pbVar16 = (byte *)(iVar1 + (int)((ulonglong)uVar14 >> 0x20) * 2);
    bVar17 = *pbVar16 + (byte)extraout_CX;
    bVar13 = CARRY1(*pbVar16,(byte)extraout_CX) || CARRY1(bVar17,bVar10);
    *pbVar16 = bVar17 + bVar10;
    out(uVar15,iVar1);
    bVar17 = (byte)((ulonglong)uVar14 >> 8);
    bVar18 = (byte)((ushort)extraout_CX >> 8);
    bVar10 = bVar17 + bVar18;
    cVar12 = bVar10 + bVar13;
    uVar2 = CONCAT22((short)((ulonglong)uVar14 >> 0x10),CONCAT11(cVar12,(char)uVar14));
    out(uVar15,uVar2);
    bVar19 = (byte)((ulonglong)uVar14 >> 0x28);
    out(uVar15,uVar2);
    puVar20 = (undefined1 *)((int)&(unaff_EDI + -0x3855c5)[1]._0.image + 1);
    *puVar20 = *puVar20 + cVar12 +
              (CARRY1(in_stack_21,bVar19) ||
              CARRY1(in_stack_21 + bVar19,CARRY1(bVar17,bVar18) || CARRY1(bVar10,bVar13)));
    pcVar22 = (code *)swi(3);
    pKVar23 = (KogamaSettingValueWrapperBase *)(*pcVar22)();
    return pKVar23;
  }
  func_?();
  func_?();
  uRam_? = 1;
  if ((unaff_EDI->_0).byval_arg.data.dummy == (void *)0x0) {
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (unaff_EDI->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_02;
    func_?(&(unaff_EDI->_0).byval_arg,this_02);
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((Dictionary_2_System_Object_System_Object_ *)(unaff_EDI->_0).byval_arg.data.typeHandle,
             (Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(MethodInfo *)0x0);
  iVar1 = ((String__Fields *)&(unaff_EDI->_0).name)->_stringLength;
  if (iVar1 != 0) {
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
              (*(Dictionary_2_System_Object_System_Object_ **)(iVar1 + 0x58),
               (Dictionary_2_System_Object_System_Object_ *)
               (unaff_EDI->_0).byval_arg.data.typeHandle,(MethodInfo *)0x0);
    iVar1._0_2_ = (unaff_EDI->_0).this_arg.attrs;
    iVar1._2_1_ = (unaff_EDI->_0).this_arg.type;
    iVar1._3_1_ = (unaff_EDI->_0).this_arg.field_0x7;
    pKVar23 = extraout_EAX;
    if (iVar1 != 0) {
      pKVar23 = (KogamaSettingValueWrapperBase *)
                (**(code **)(*(int *)&(unaff_EDI->_0).this_arg.attrs + 0xc))();
    }
    return pKVar23;
  }
  func_?();
  pcVar22 = (code *)swi(3);
  pKVar23 = (KogamaSettingValueWrapperBase *)(*pcVar22)();
  return pKVar23;
}

