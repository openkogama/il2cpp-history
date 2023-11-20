
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
  bVar1 = (byte)unaff_EBX;
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
      pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key
      ;
      unaff_EBX = (KogamaSettingBoolBase__Class *)kogamaSettingBasePrototype[1].monitor;
      this = (KogamaSettingBoolBase *)func_?();
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar5 = (bool *)func_?();
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,(String *)unaff_EDI,*pbVar5,parent,(MethodInfo *)0x0);
        this[1].klass = unaff_EBX;
        this[1].monitor = (MonitorData *)pSVar4;
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
    pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
    unaff_EBX = (KogamaSettingBoolBase__Class *)func_?();
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar9 = (float *)func_?();
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                ((AttributeSettingFloat *)unaff_EBX,(String *)unaff_EDI,*pfVar9,(float)piVar7,
                 (float)piVar8,calculator,(AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,
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
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar10 = (int32_t *)func_?();
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      ((AttributeSettingInt *)unaff_EDI,(String *)unaff_EBX,*piVar10,(int32_t)piVar7
                       ,(int32_t)piVar8,calculator_00,(AttributeSettingsExclusivityFlag__Enum)pSVar4
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
         (pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar6 != (Il2CppArrayType *)0x0)) {
        piVar7 = pIVar6->sizes;
        piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        this_00 = (KogamaSettingEnumBase *)func_?();
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar10 = (int32_t *)func_?();
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      (this_00,(String *)unaff_EBX,*piVar10,(int32_t)piVar7,(int32_t)piVar8,parent,
                       (MethodInfo *)0x0);
            this_00[1].klass = (KogamaSettingEnumBase__Class *)unaff_EDI;
            func_?();
            this_00[1].monitor = (MonitorData *)pSVar4;
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
  bVar1 = (byte)unaff_EBX;
  func_?();
code_?:
  func_?();
  this_01 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_01,(MethodInfo *)0x0);
  func_?();
  cVar11 = (undefined1 *)0xffffffeb < &stack0xffffffd8;
  func_?();
  cRam_? = cRam_? + '\x01';
  pcVar12 = (char *)((int)&(unaff_EDI->_0).image + 1);
  uVar13 = in(extraout_DX);
  *(undefined1 *)&(unaff_EDI->_0).image = uVar13;
  *pcVar12 = *pcVar12 + extraout_AH +
            ((byte)extraout_DX < bVar1 || (byte)((byte)extraout_DX - bVar1) < (cVar11 == '\0'));
  pcVar14 = (code *)swi(3);
  pKVar15 = (KogamaSettingValueWrapperBase *)(*pcVar14)();
  return pKVar15;
}

