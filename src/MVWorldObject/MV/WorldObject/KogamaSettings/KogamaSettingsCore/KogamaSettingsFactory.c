
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
  cVar1 = true;
  if (kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
  iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                     (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image);
  cVar1 = true;
  if (iVar2 == 0) goto code_?;
  uVar3 = func_?(2,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                           ,iVar2);
  switch(uVar3) {
  case 0:
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    this = (KogamaSettingBoolBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                          );
    cVar1 = true;
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    pIVar5 = ((valuePair.value)->klass->_0).element_class;
    pIVar6 = (TypeInfo__System__Boolean->_0).element_class;
    bVar7 = pIVar5 < pIVar6;
    cVar1 = '\0';
    if (pIVar5 == pIVar6) {
      pbVar8 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this,pSVar4,*pbVar8,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    }
    goto code_?;
  case 1:
    bVar9 = (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
             ->_1).naturalAligment;
    bVar10 = (kogamaSettingBasePrototype->klass->_1).naturalAligment;
    cVar1 = bVar10 == bVar9;
    bVar7 = 1;
    pKVar11 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if (bVar10 < bVar9) goto code_?;
    pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar9 - 1];
    bVar7 = pIVar6 < 
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    cVar1 = '\0';
    if (pIVar6 != (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       ) goto code_?;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    cVar1 = kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)cVar1) {
      pIVar12 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
      cVar1 = pIVar12 == (Il2CppArrayType *)0x0;
      if (!(bool)cVar1) {
        piVar13 = pIVar12->sizes;
        piVar14 = pIVar12->lobounds;
        this_00 = (KogamaSettingNumericBase_1_System_Single_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                 );
        pMVar15 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        cVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
        if (!(bool)cVar1) {
          pIVar5 = ((valuePair.value)->klass->_0).element_class;
          pIVar6 = (TypeInfo__System__Single->_0).element_class;
          bVar7 = pIVar5 < pIVar6;
          cVar1 = '\0';
          if (pIVar5 == pIVar6) {
            pfVar16 = (float *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single___ctor
                      (this_00,pSVar4,*pfVar16,(float)piVar13,(float)piVar14,parent,pMVar15);
            return (KogamaSettingValueWrapperBase *)this_00;
          }
          goto code_?;
        }
      }
    }
    break;
  case 2:
    bVar9 = (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
             ->_1).naturalAligment;
    bVar10 = (kogamaSettingBasePrototype->klass->_1).naturalAligment;
    cVar1 = bVar10 == bVar9;
    bVar7 = 1;
    pKVar11 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (bVar10 < bVar9) goto code_?;
    pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar9 - 1];
    bVar7 = pIVar6 < 
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    cVar1 = '\0';
    if (pIVar6 != (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       ) goto code_?;
    pKVar17 = kogamaSettingBasePrototype[1].klass;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    cVar1 = pKVar17 == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)cVar1) {
      pIVar12 = (pKVar17->_0).byval_arg.data.array;
      cVar1 = pIVar12 == (Il2CppArrayType *)0x0;
      if (!(bool)cVar1) {
        piVar13 = pIVar12->sizes;
        piVar14 = ((pKVar17->_0).byval_arg.data.array)->lobounds;
        this_01 = (KogamaSettingNumericBase_1_System_Int32_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                                 );
        pMVar15 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        cVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (!(bool)cVar1) {
          pIVar5 = ((valuePair.value)->klass->_0).element_class;
          pIVar6 = (TypeInfo__System__Int32->_0).element_class;
          bVar7 = pIVar5 < pIVar6;
          cVar1 = '\0';
          if (pIVar5 == pIVar6) {
            piVar18 = (int32_t *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32___ctor
                      (this_01,pSVar4,*piVar18,(int32_t)piVar13,(int32_t)piVar14,parent,pMVar15);
            return (KogamaSettingValueWrapperBase *)this_01;
          }
          goto code_?;
        }
      }
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    bVar9 = (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
             ->_1).naturalAligment;
    bVar10 = (kogamaSettingBasePrototype->klass->_1).naturalAligment;
    cVar1 = bVar10 == bVar9;
    bVar7 = 1;
    pKVar11 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if (bVar10 < bVar9) goto code_?;
    pIVar6 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar9 - 1];
    bVar7 = pIVar6 < 
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    cVar1 = '\0';
    if (pIVar6 != (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       ) goto code_?;
    pKVar17 = kogamaSettingBasePrototype[1].klass;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    cVar1 = pKVar17 == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)cVar1) {
      pIVar12 = (pKVar17->_0).byval_arg.data.array;
      cVar1 = pIVar12 == (Il2CppArrayType *)0x0;
      if (!(bool)cVar1) {
        piVar13 = pIVar12->sizes;
        piVar14 = ((pKVar17->_0).byval_arg.data.array)->lobounds;
        this_02 = (KogamaSettingEnumBase *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                                 );
        cVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (!(bool)cVar1) {
          pIVar5 = ((valuePair.value)->klass->_0).element_class;
          pIVar6 = (TypeInfo__System__Int32->_0).element_class;
          bVar7 = pIVar5 < pIVar6;
          cVar1 = '\0';
          if (pIVar5 == pIVar6) {
            piVar18 = (int32_t *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                      (this_02,pSVar4,*piVar18,(int32_t)piVar13,(int32_t)piVar14,parent,
                       (MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)this_02;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  bVar7 = 0;
  func_?();
  valuePair.value = extraout_EDX;
code_?:
  func_?(valuePair.value,kogamaSettingBasePrototype);
  pKVar11 = extraout_EDX_00;
code_?:
  uVar19 = func_?(kogamaSettingBasePrototype,pKVar11);
  if (extraout_ECX != 1 && cVar1 == '\0') {
    return (KogamaSettingValueWrapperBase *)uVar19;
  }
  puVar20 = &(((Int32__Class *)((int)kogamaSettingBasePrototype + 0x7310db4c))->_1).
            thread_static_fields_size;
  uVar21 = *puVar20;
  bVar10 = (byte)((ulonglong)uVar19 >> 8);
  bVar9 = (char)*puVar20 + bVar10;
  *(byte *)puVar20 = bVar9 + bVar7;
  if (extraout_ECX + -2 != 0 && (char)*puVar20 == '\0') {
    return (KogamaSettingValueWrapperBase *)0x0;
  }
  pcVar22 = (char *)((int)((ulonglong)uVar19 >> 0x20) + -0x1de1ef25);
  *pcVar22 = *pcVar22 + (char)((uint)(extraout_ECX + -2) >> 8) +
            (CARRY1((byte)uVar21,bVar10) || CARRY1(bVar9,bVar7));
  ((KogamaSettingValueWrapperBase *)uVar19)->klass =
       (KogamaSettingValueWrapperBase__Class *)(int)ROUND(extraout_ST0);
  pcVar23 = (code *)swi(3);
  pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
  return pKVar24;
}

