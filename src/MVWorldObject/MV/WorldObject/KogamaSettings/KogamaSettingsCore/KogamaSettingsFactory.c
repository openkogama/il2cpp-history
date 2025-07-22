
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* KogamaSettingValueWrapperBase
   KogamaSettingValueFactory(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase) */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingsFactory::
KogamaSettingsFactory_KogamaSettingValueFactory
          (KeyValuePair_2_System_Object_System_Object_ valuePair,
          KogamaSettingValueWrapperBase *kogamaSettingBasePrototype,
          KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  bVar1 = (byte)((uint)unaff_EBX >> 8);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) ||
     (iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                         (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image),
     iVar2 == 0)) goto code_?;
  uVar3 = func_?(2,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                           ,iVar2);
  pSVar4 = (Single__Class *)kogamaSettingBasePrototype;
  switch(uVar3) {
  case 0:
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    this = (KogamaSettingBoolBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                          );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    pIVar5 = ((valuePair.value)->klass->_0).element_class;
    pIVar6 = (TypeInfo__System__Boolean->_0).element_class;
    cVar7 = pIVar5 < pIVar6;
    if (pIVar5 == pIVar6) {
      pbVar8 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this,(String *)unaff_EBX,*pbVar8,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    }
    goto code_?;
  case 1:
    cVar7 = '\x01';
    pKVar9 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment) ||
       (pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment - 1],
       cVar7 = pIVar6 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , pIVar6 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    key = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar10 != (Il2CppArrayType *)0x0)) {
      piVar11 = pIVar10->sizes;
      piVar12 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                 );
      pMVar13 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
      if (valuePair.value != (Object *)0x0) {
        pIVar5 = ((valuePair.value)->klass->_0).element_class;
        pIVar6 = (TypeInfo__System__Single->_0).element_class;
        cVar7 = pIVar5 < pIVar6;
        if (pIVar5 == pIVar6) {
          pfVar14 = (float *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single___ctor
                    (unaff_EBX,key,*pfVar14,(float)piVar11,(float)piVar12,parent,pMVar13);
          return (KogamaSettingValueWrapperBase *)unaff_EBX;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    cVar7 = '\x01';
    pKVar9 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment) ||
       (pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                  ->_1).naturalAligment - 1],
       cVar7 = pIVar6 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , pIVar6 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar10 != (Il2CppArrayType *)0x0)) {
      piVar11 = pIVar10->sizes;
      piVar12 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                               );
      pMVar13 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar5 = ((valuePair.value)->klass->_0).element_class;
        pIVar6 = (TypeInfo__System__Int32->_0).element_class;
        cVar7 = pIVar5 < pIVar6;
        if (pIVar5 == pIVar6) {
          piVar15 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32___ctor
                    (this_00,(String *)unaff_EBX,*piVar15,(int32_t)piVar11,(int32_t)piVar12,parent,
                     pMVar13);
          return (KogamaSettingValueWrapperBase *)this_00;
        }
        goto code_?;
      }
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    cVar7 = '\x01';
    pKVar9 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).naturalAligment) ||
       (pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                  ->_1).naturalAligment - 1],
       cVar7 = pIVar6 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , pIVar6 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar10 != (Il2CppArrayType *)0x0)) {
      piVar11 = pIVar10->sizes;
      piVar12 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      this_01 = (KogamaSettingEnumBase *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                               );
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar5 = ((valuePair.value)->klass->_0).element_class;
        pIVar6 = (TypeInfo__System__Int32->_0).element_class;
        cVar7 = pIVar5 < pIVar6;
        if (pIVar5 == pIVar6) {
          piVar15 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    (this_01,(String *)unaff_EBX,*piVar15,(int32_t)piVar11,(int32_t)piVar12,parent,
                     (MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)this_01;
        }
        goto code_?;
      }
    }
  }
code_?:
  cVar7 = '\0';
  func_?();
  valuePair.value = extraout_EDX;
code_?:
  bVar1 = (byte)((uint)unaff_EBX >> 8);
  func_?(valuePair.value,kogamaSettingBasePrototype);
  pKVar9 = extraout_EDX_00;
  pSVar4 = (Single__Class *)kogamaSettingBasePrototype;
code_?:
  while( true ) {
    uVar16 = func_?(kogamaSettingBasePrototype,pKVar9);
    pcVar17 = (char *)((int)&pSVar4[-1].vtable.Equals_1.methodPtr + 1);
    bVar18 = (byte)extraout_ECX & 0x1f;
    cVar19 = *pcVar17;
    *pcVar17 = *pcVar17 >> bVar18;
    bVar20 = (extraout_ECX & 0x1f) == 0;
    bVar21 = bVar20 * cVar7 | !bVar20 * ((cVar19 >> bVar18 - 1 & 1U) != 0);
    bVar22 = (byte)((ulonglong)uVar16 >> 8);
    cVar19 = *(char *)&(pSVar4->_0).image;
    bVar18 = *(char *)&(pSVar4->_0).image + bVar22;
    cVar7 = CARRY1(*(byte *)&(pSVar4->_0).image,bVar22) || CARRY1(bVar18,bVar21);
    *(byte *)&(pSVar4->_0).image = bVar18 + bVar21;
    if (*(char *)&(pSVar4->_0).image == '\0' ||
        (SCARRY1(cVar19,bVar22) != SCARRY1(bVar18,bVar21)) != *(char *)&(pSVar4->_0).image < '\0')
    break;
    (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0x56))();
  }
  bVar22 = (byte)(extraout_ECX >> 8);
  bVar18 = bVar22 + bVar1;
  if ((byte)(bVar18 + cVar7) == '\0' ||
      (SCARRY1(bVar22,bVar1) != SCARRY1(bVar18,cVar7)) != (char)(bVar18 + cVar7) < '\0') {
    pcVar17 = (char *)((int)uVar16 + -0x7f);
    *pcVar17 = *pcVar17 + (byte)extraout_ECX + (CARRY1(bVar22,bVar1) || CARRY1(bVar18,cVar7));
    pcVar23 = (code *)swi(1);
    pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
    return pKVar24;
  }
  pcVar23 = (code *)swi(3);
  pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
  return pKVar24;
}

