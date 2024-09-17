
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
  uVar11 = func_?();
  out((short)((ulonglong)uVar11 >> 0x20) + 1,(int)uVar11);
  bVar12 = (byte)((ulonglong)uVar11 >> 8);
  bVar13 = bVar12 + (byte)unaff_EBX;
  bVar14 = CARRY1(bVar12,(byte)unaff_EBX) || CARRY1(bVar13,bVar10);
  iVar1 = CONCAT22((short)((ulonglong)uVar11 >> 0x10),CONCAT11(bVar13 + bVar10,(char)uVar11));
  iVar15 = (int)((ulonglong)uVar11 >> 0x20) + 2;
  uVar16 = (undefined2)iVar15;
  out(uVar16,iVar1);
  pbVar17 = (byte *)((int)&unaff_EBX[0x4b23de]._0.events + iVar1 * 2 + 3);
  bVar13 = *pbVar17;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  bVar12 = *pbVar17 + bVar10;
  *pbVar17 = bVar12 + bVar14;
  out(uVar16,iVar1);
  ppEVar18 = &(unaff_EDI->_0).events;
  *(char *)ppEVar18 =
       *(char *)ppEVar18 + (char)((uint)iVar15 >> 8) +
       (CARRY1(bVar13,bVar10) || CARRY1(bVar12,bVar14));
  out(uVar16,iVar1);
  pcVar19 = (code *)swi(3);
  pKVar20 = (KogamaSettingValueWrapperBase *)(*pcVar19)();
  return pKVar20;
}

