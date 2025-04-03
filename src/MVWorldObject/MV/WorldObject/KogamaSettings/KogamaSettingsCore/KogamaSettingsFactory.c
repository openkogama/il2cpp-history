
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
  if ((kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) ||
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                         (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image),
     iVar1 == 0)) goto code_?;
  uVar2 = func_?(2,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                           ,iVar1);
  switch(uVar2) {
  case 0:
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    this = (KogamaSettingBoolBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                          );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    pIVar3 = ((valuePair.value)->klass->_0).element_class;
    pIVar4 = (TypeInfo__System__Boolean->_0).element_class;
    bVar5 = pIVar3 < pIVar4;
    if (pIVar3 == pIVar4) {
      pbVar6 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this,(String *)unaff_EBX,*pbVar6,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    }
    goto code_?;
  case 1:
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
            ->_1).naturalAligment;
    bVar5 = 1;
    pKVar8 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
       (pIVar4 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar7 - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    key = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar9 != (Il2CppArrayType *)0x0)) {
      piVar10 = pIVar9->sizes;
      piStack_11 = pIVar9->lobounds;
      unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                 );
      pMVar12 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Single->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          pfVar13 = (float *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single___ctor
                    (unaff_EBX,key,*pfVar13,(float)piVar10,(float)piStack_11,parent,pMVar12);
          return (KogamaSettingValueWrapperBase *)unaff_EBX;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    bVar5 = 1;
    pKVar8 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
       (pIVar4 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar7 - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) goto code_?;
    pKVar14 = kogamaSettingBasePrototype[1].klass;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((pKVar14 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = (pKVar14->_0).byval_arg.data.array, pIVar9 != (Il2CppArrayType *)0x0)) {
      piStack_11 = pIVar9->sizes;
      piVar10 = ((pKVar14->_0).byval_arg.data.array)->lobounds;
      this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                               );
      pMVar12 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          piVar15 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32___ctor
                    (this_00,(String *)unaff_EBX,*piVar15,(int32_t)piStack_11,(int32_t)piVar10,parent,
                     pMVar12);
          return (KogamaSettingValueWrapperBase *)this_00;
        }
        goto code_?;
      }
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
            ->_1).naturalAligment;
    bVar5 = 1;
    pKVar8 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
       (pIVar4 = (kogamaSettingBasePrototype->klass->_1).typeHierarchy[bVar7 - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) goto code_?;
    pKVar14 = kogamaSettingBasePrototype[1].klass;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((pKVar14 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = (pKVar14->_0).byval_arg.data.array, pIVar9 != (Il2CppArrayType *)0x0)) {
      piVar10 = pIVar9->sizes;
      max = ((pKVar14->_0).byval_arg.data.array)->lobounds;
      this_01 = (KogamaSettingEnumBase *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                               );
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          piVar15 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    (this_01,(String *)unaff_EBX,*piVar15,(int32_t)piVar10,(int32_t)max,parent,
                     (MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)this_01;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar5 = 0;
  func_?();
  valuePair.value = extraout_EDX;
code_?:
  func_?(valuePair.value,kogamaSettingBasePrototype);
  pKVar8 = extraout_EDX_00;
code_?:
  uVar16 = func_?(kogamaSettingBasePrototype,pKVar8);
  uVar2 = (undefined4)uVar16;
  if (extraout_ECX == 1) {
    uVar17 = (undefined2)((ulonglong)uVar16 >> 0x20);
    out(uVar17,uVar2);
    bVar18 = (byte)((ulonglong)uVar16 >> 0x28);
    bVar7 = *(char *)&(((Single__Class *)kogamaSettingBasePrototype)->_0).image + bVar18;
    bVar19 = CARRY1(*(byte *)&(((Single__Class *)kogamaSettingBasePrototype)->_0).image,bVar18) ||
             CARRY1(bVar7,bVar5);
    *(byte *)&(((Single__Class *)kogamaSettingBasePrototype)->_0).image = bVar7 + bVar5;
    out(uVar17,uVar2);
    bVar7 = *(char *)&unaff_EBX->klass + (byte)uVar16;
    bVar20 = CARRY1(*(byte *)&unaff_EBX->klass,(byte)uVar16) || CARRY1(bVar7,bVar19);
    *(byte *)&unaff_EBX->klass = bVar7 + bVar19;
    out(uVar17,uVar2);
    pbVar21 = (byte *)((int)((ulonglong)uVar16 >> 0x20) * 2);
    bVar7 = *pbVar21;
    bVar18 = (byte)((uint)unaff_EBX >> 8);
    bVar5 = *pbVar21 + bVar18;
    *pbVar21 = bVar5 + bVar20;
    out(uVar17,uVar2);
    pVVar22 = &(((Single__Class *)((int)kogamaSettingBasePrototype + -0x33ef1204))->vtable).
              System_IConvertible_ToDateTime;
    *(char *)&pVVar22->methodPtr =
         *(char *)&pVVar22->methodPtr + (CARRY1(bVar7,bVar18) || CARRY1(bVar5,bVar20));
    pcVar23 = (code *)swi(3);
    pKVar24 = (KogamaSettingValueWrapperBase *)(*pcVar23)();
    return pKVar24;
  }
  arg0 = (Object *)func_?();
  piStack_11 = (int *)(((Single__Class *)kogamaSettingBasePrototype)->_0).namespaze;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&piStack_11);
  pKVar24 = (KogamaSettingValueWrapperBase *)
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral_regularUserVat__0___subscribedUs,arg0,arg1,(MethodInfo *)0x0);
  return pKVar24;
}

