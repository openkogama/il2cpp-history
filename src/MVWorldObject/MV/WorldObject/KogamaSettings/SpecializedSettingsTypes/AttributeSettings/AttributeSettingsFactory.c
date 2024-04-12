
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
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
    ;
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
      pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
      pSVar5 = (kogamaSettingBasePrototype->fields)._.key;
      unaff_EBX = (_union_86)kogamaSettingBasePrototype[1].monitor;
      kogamaSettingBasePrototype =
           (KogamaSettingValueWrapperBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingBool
                          );
      uVar6 = CONCAT44(valuePair.value,TypeInfo__System__Boolean);
      if (valuePair.value == (Object *)0x0) goto code_?;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar7 = (bool *)func_?(valuePair.value);
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  ((KogamaSettingBoolBase *)kogamaSettingBasePrototype,pSVar5,*pbVar7,parent,
                   (MethodInfo *)0x0);
        (((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.data = unaff_EBX;
        *(String **)&(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.attrs = pSVar4;
        return (KogamaSettingValueWrapperBase *)(Single__Class *)kogamaSettingBasePrototype;
      }
code_?:
      func_?((int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
      pAVar3 = (AttributeSettingInt__Class *)extraout_EDX;
    }
    break;
  case 1:
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
    ;
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
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar8 == (Il2CppArrayType *)0x0)) {
code_?:
      uVar6 = func_?();
      goto code_?;
    }
    piVar9 = pIVar8->sizes;
    piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    calculator = (IAttributePointFloatCalculator *)kogamaSettingBasePrototype[1].monitor;
    pSVar5 = kogamaSettingBasePrototype[1].fields._.key;
    unaff_EBX.dummy =
         (void *)func_?(
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar11 = (float *)func_?(valuePair.value);
      AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                ((AttributeSettingFloat *)unaff_EBX.typeHandle,pSVar4,*pfVar11,(float)piVar9,
                 (float)piVar10,calculator,(AttributeSettingsExclusivityFlag__Enum)pSVar5,parent,
                 (MethodInfo *)0x0);
      return ((Il2CppMetadataTypeHandle)unaff_EBX).dummy;
    }
    goto code_?;
  case 2:
    pAVar3 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
    ;
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
      unaff_EBX = (_union_86)(kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar8 != (Il2CppArrayType *)0x0)) {
        piVar9 = pIVar8->sizes;
        piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        calculator_00 = (IAttributePointIntCalculator *)kogamaSettingBasePrototype[1].monitor;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        this = (AttributeSettingInt *)
               func_?(
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                              );
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?(valuePair.value);
            AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                      (this,(String *)unaff_EBX.typeHandle,*piVar12,(int32_t)piVar9,(int32_t)piVar10,
                       calculator_00,(AttributeSettingsExclusivityFlag__Enum)pSVar4,parent,
                       (MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this;
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
    pAVar3 = (AttributeSettingInt__Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
    ;
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
      unaff_EBX = (_union_86)(kogamaSettingBasePrototype->fields)._.key;
      pMVar13 = kogamaSettingBasePrototype[1].monitor;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar8 != (Il2CppArrayType *)0x0)) {
        piVar9 = pIVar8->sizes;
        piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        pSVar4 = kogamaSettingBasePrototype[1].fields._.key;
        kogamaSettingBasePrototype =
             (KogamaSettingValueWrapperBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingEnum
                            );
        uVar6 = CONCAT44(valuePair.value,TypeInfo__System__Int32);
        if (valuePair.value != (Object *)0x0) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar12 = (int32_t *)func_?(valuePair.value);
            KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::
            KogamaSettingEnumBase__ctor
                      ((KogamaSettingEnumBase *)kogamaSettingBasePrototype,
                       (String *)unaff_EBX.typeHandle,*piVar12,(int32_t)piVar9,(int32_t)piVar10,
                       parent,(MethodInfo *)0x0);
            (((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.data.dummy = pMVar13;
            func_?(&(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg,pMVar13);
            *(String **)&(((Single__Class *)kogamaSettingBasePrototype)->_0).this_arg.attrs = pSVar4
            ;
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
  uVar14 = func_?(&
                           MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                          );
  while( true ) {
    uVar15 = func_?(this_00,uVar14);
    pcVar16 = (char *)(uVar15 >> 0x20);
    iVar1 = extraout_ECX + -1;
    if (iVar1 != 0 && (uVar15 & 0x4000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar16 = *pcVar16 + (char)((uint)iVar1 >> 8) + ((uVar15 & 0x100) != 0);
    bVar17 = in(0xda);
    bVar18 = (byte)((uint)unaff_EBX >> 8);
    bVar19 = bVar18 + bVar17;
    unaff_EBX.__klassIndex = (uint)bVar19 << 8;
    if (iVar1 != 0) break;
    out((short)(uVar15 >> 0x20),bVar17);
    uVar14 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar18,bVar17) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((short)((ushort)bVar19 << 8) < 0) * 0x80 | (uint)(bVar19 == 0) * 0x40 |
             (uint)((uVar15 & 0x1000) != 0) * 0x10 | (uint)((POPCOUNT(bVar19) & 1U) == 0) * 4 |
             (uint)CARRY1(bVar18,bVar17) | (uint)(in_ID & 1) * 0x200000 |
             (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
             (uint)(in_AC & 1) * 0x40000;
  }
  pcVar20 = (code *)swi(3);
  pKVar21 = (KogamaSettingValueWrapperBase *)(*pcVar20)();
  return pKVar21;
}

