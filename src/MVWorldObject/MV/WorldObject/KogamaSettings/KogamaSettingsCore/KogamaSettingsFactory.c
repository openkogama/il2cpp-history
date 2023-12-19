
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
  uVar1 = true;
  if (kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
  iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                    (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image);
  uVar1 = true;
  if (iVar2 == 0) goto code_?;
  uVar3 = func_?(2,
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                          ,iVar2);
  switch(uVar3) {
  case 0:
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                               );
    uVar1 = true;
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    uVar1 = 0;
    pOVar5 = valuePair.value;
    if (((valuePair.value)->klass->_0).element_class ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar6 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)unaff_EDI,pSVar4,*pbVar6,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    goto code_?;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar7 = (unaff_EDI->_1).naturalAligment;
    bVar8 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
            ->_1).naturalAligment;
    uVar1 = bVar7 == bVar8;
    pKVar9 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if ((bVar7 < bVar8) ||
       (uVar1 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment - 1] ==
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , !(bool)uVar1)) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    uVar1 = kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)uVar1) {
      pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
      uVar1 = pIVar10 == (Il2CppArrayType *)0x0;
      if (!(bool)uVar1) {
        piVar11 = pIVar10->sizes;
        piStack_12 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        in_XMM0_Db = (Object *)0x0;
        this = (KogamaSettingNumericBase_1_System_Single_ *)
               func_?(
                              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                              );
        pMVar13 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        uVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
        if (!(bool)uVar1) {
          uVar1 = 0;
          pOVar5 = valuePair.value;
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar14 = (float *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single___ctor
                      (this,(String *)unaff_EDI,*pfVar14,(float)piVar11,(float)piStack_12,parent,
                       pMVar13);
            return (KogamaSettingValueWrapperBase *)this;
          }
          goto code_?;
        }
      }
    }
    break;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar7 = (unaff_EDI->_1).naturalAligment;
    bVar8 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    uVar1 = bVar7 == bVar8;
    pKVar9 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if ((bVar7 < bVar8) ||
       (uVar1 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                  ->_1).naturalAligment - 1] ==
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , !(bool)uVar1)) goto code_?;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    uVar1 = kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)uVar1) {
      pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
      uVar1 = pIVar10 == (Il2CppArrayType *)0x0;
      if (!(bool)uVar1) {
        piStack_12 = pIVar10->sizes;
        piVar11 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                    func_?(
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                                   );
        pMVar13 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        uVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (!(bool)uVar1) {
          uVar1 = 0;
          pOVar5 = valuePair.value;
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar15 = (int32_t *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32___ctor
                      ((KogamaSettingNumericBase_1_System_Int32_ *)unaff_EDI,pSVar4,*piVar15,
                       (int32_t)piStack_12,(int32_t)piVar11,parent,pMVar13);
            return (KogamaSettingValueWrapperBase *)unaff_EDI;
          }
          goto code_?;
        }
      }
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar7 = (unaff_EDI->_1).naturalAligment;
    bVar8 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
            ->_1).naturalAligment;
    uVar1 = bVar7 == bVar8;
    pKVar9 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if ((bVar7 < bVar8) ||
       (uVar1 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                  ->_1).naturalAligment - 1] ==
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , !(bool)uVar1)) goto code_?;
    pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
    uVar1 = kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0;
    if (!(bool)uVar1) {
      pIVar10 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
      uVar1 = pIVar10 == (Il2CppArrayType *)0x0;
      if (!(bool)uVar1) {
        piVar11 = pIVar10->sizes;
        max = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                    func_?(
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                                   );
        uVar1 = valuePair.value == (Object *)0x0;
        kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
        if (!(bool)uVar1) {
          uVar1 = 0;
          pOVar5 = valuePair.value;
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar15 = (int32_t *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                      ((KogamaSettingEnumBase *)unaff_EDI,pSVar4,*piVar15,(int32_t)piVar11,
                       (int32_t)max,parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)unaff_EDI;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pOVar5 = extraout_EDX;
code_?:
  func_?(pOVar5,kogamaSettingBasePrototype);
  pKVar9 = extraout_EDX_00;
code_?:
  piVar11 = (int *)func_?(kogamaSettingBasePrototype,pKVar9);
  if (extraout_ECX == 1) {
    *piVar11 = (int)ROUND(extraout_ST0);
    *(int *)((int)piVar11 + -1) = (int)ROUND(extraout_ST0);
    *(int *)((uint)((int)piVar11 + -1) | 0x5810db49) = (int)ROUND(extraout_ST0);
    pcVar16 = (code *)swi(3);
    pKVar17 = (KogamaSettingValueWrapperBase *)(*pcVar16)();
    return pKVar17;
  }
  if (!(bool)uVar1) {
    kogamaSettingBasePrototype =
         (KogamaSettingValueWrapperBase *)
         ((int)&(((Single__Class *)kogamaSettingBasePrototype)->_0).image + 1);
    valuePair.value = in_XMM0_Db;
  }
  valuePair.key = (Object *)(((Single__Class *)kogamaSettingBasePrototype)->_0).name;
  pOVar5 = (Object *)func_?(TypeInfo__System__Single,&valuePair,unaff_EDI);
  piStack_12 = (int *)(((Single__Class *)kogamaSettingBasePrototype)->_0).namespaze;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&piStack_12);
  pKVar17 = (KogamaSettingValueWrapperBase *)
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral_regularUserVat__0___subscribedUs,pOVar5,arg1,(MethodInfo *)0x0
                      );
  return pKVar17;
}

