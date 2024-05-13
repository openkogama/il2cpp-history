
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
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
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                        (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image),
     iVar1 == 0)) goto code_?;
  uVar2 = func_?(2,
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                          ,iVar1);
  switch(uVar2) {
  case 0:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
    ;
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
      pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key
      ;
      _Var1 = (_union_86)kogamaSettingBasePrototype[1].monitor;
      kogamaSettingBasePrototype =
           (KogamaSettingValueWrapperBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
      uVar5 = CONCAT44(valuePair.value,TypeInfo__System__Boolean);
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar6 = (bool *)func_?(valuePair.value);
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  ((KogamaSettingBoolBase *)kogamaSettingBasePrototype,(String *)unaff_EDI,*pbVar6,
                   parent,(MethodInfo *)0x0);
        (((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.data = _Var1;
        *(KogamaSettingsCollectionBase **)
         &(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.attrs = pKVar4;
        return (KogamaSettingValueWrapperBase *)(Single__Class *)kogamaSettingBasePrototype;
      }
code_?:
      func_?((int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
      pAVar3 = (AttributeSettingInt__Class *)extraout_EDX;
    }
    break;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
    ;
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
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 == (Il2CppArrayType *)0x0)) {
code_?:
      uVar5 = func_?();
      goto code_?;
    }
    piVar8 = pIVar7->sizes;
    piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
    this = (AttributeSettingFloat *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                          );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?(valuePair.value);
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                (this,(String *)unaff_EDI,*pfVar10,(float)piVar8,(float)piVar9,calculator,
                 (AttributeSettingsExclusivityFlag__Enum)pKVar4,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    }
    goto code_?;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pAVar3 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
    ;
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
      pSVar11 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                    func_?(
                                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                                   );
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?(valuePair.value);
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      ((AttributeSettingInt *)unaff_EDI,pSVar11,*piVar12,(int32_t)piVar8,
                       (int32_t)piVar9,calculator_00,(AttributeSettingsExclusivityFlag__Enum)pKVar4,
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
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
    ;
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
      pSVar11 = (kogamaSettingBasePrototype->fields)._.key;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pKVar4 = kogamaSettingBasePrototype[1].fields._._Parent_k__BackingField;
        kogamaSettingBasePrototype =
             (KogamaSettingValueWrapperBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                            );
        uVar5 = CONCAT44(valuePair.value,TypeInfo__System__Int32);
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?(valuePair.value);
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      ((KogamaSettingEnumBase *)kogamaSettingBasePrototype,pSVar11,*piVar12,
                       (int32_t)piVar8,(int32_t)piVar9,parent,(MethodInfo *)0x0);
            (((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.data.type =
                 (Il2CppType *)unaff_EDI;
            func_?(&(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg,unaff_EDI)
            ;
            *(KogamaSettingsCollectionBase **)
             &(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.attrs = pKVar4;
            return (KogamaSettingValueWrapperBase *)(Single__Class *)kogamaSettingBasePrototype;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?(kogamaSettingBasePrototype,pAVar3);
  valuePair.value = extraout_EDX_00;
code_?:
  func_?(valuePair.value,kogamaSettingBasePrototype);
code_?:
  uVar2 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar2);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                         );
  func_?(this_00,uVar2);
  *(NotImplementedException__Class **)((int)&(unaff_EDI->_0).image + 1) = this_00->klass;
  pcVar13 = (code *)swi(3);
  pKVar14 = (KogamaSettingValueWrapperBase *)(*pcVar13)();
  return pKVar14;
}

