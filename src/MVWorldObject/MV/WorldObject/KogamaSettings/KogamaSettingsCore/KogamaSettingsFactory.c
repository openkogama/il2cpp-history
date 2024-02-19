
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
  pSVar1 = (Single__Class *)kogamaSettingBasePrototype;
  if (kogamaSettingBasePrototype == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
  iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                    (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image);
  if (iVar2 == 0) goto code_?;
  uVar3 = func_?(2,
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                          ,iVar2);
  switch(uVar3) {
  case 0:
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                               );
    pSVar1 = (Single__Class *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)unaff_EDI,(String *)unaff_EBX,*pbVar4,parent,
                 (MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    break;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if ((unaff_EDI->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
        ->_1).naturalAligment) goto code_?;
    if ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       ) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    if (kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0)
    goto code_?;
    pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
    if (pIVar6 == (Il2CppArrayType *)0x0) goto code_?;
    piStack_7 = pIVar6->sizes;
    piVar8 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                               );
    pMVar9 = 
    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    kogamaSettingBasePrototype =
         (KogamaSettingValueWrapperBase *)
         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    pSVar1 = TypeInfo__System__Single;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single___ctor
                (unaff_EBX,(String *)unaff_EDI,*pfVar10,(float)piStack_7,(float)piVar8,parent,pMVar9)
      ;
      return (KogamaSettingValueWrapperBase *)unaff_EBX;
    }
    break;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pKVar5 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if ((unaff_EDI->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
        ->_1).naturalAligment) goto code_?;
    if ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       ) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if (kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0)
    goto code_?;
    pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
    if (pIVar6 == (Il2CppArrayType *)0x0) goto code_?;
    piVar8 = pIVar6->sizes;
    piStack_7 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                               );
    pMVar9 = 
    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    kogamaSettingBasePrototype =
         (KogamaSettingValueWrapperBase *)
         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    pSVar1 = (Single__Class *)TypeInfo__System__Int32;
    if (valuePair.value == (Object *)0x0) goto code_?;
    pSVar1 = (Single__Class *)TypeInfo__System__Int32;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
    {
      piVar11 = (int32_t *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
      KogamaSettingNumericBase_1_System_Int32___ctor
                ((KogamaSettingNumericBase_1_System_Int32_ *)unaff_EDI,(String *)unaff_EBX,*piVar11,
                 (int32_t)piVar8,(int32_t)piStack_7,parent,pMVar9);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if ((unaff_EDI->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
        ->_1).naturalAligment) goto code_?;
    if ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       ) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if (kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0)
    goto code_?;
    pIVar6 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array;
    if (pIVar6 == (Il2CppArrayType *)0x0) goto code_?;
    piStack_7 = pIVar6->sizes;
    kogamaSettingBasePrototype =
         (KogamaSettingValueWrapperBase *)
         (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.generic_class)->cached_class;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                               );
    pSVar1 = (Single__Class *)TypeInfo__System__Int32;
    goto code_?;
  }
  while( true ) {
    func_?(valuePair.value,pSVar1);
    pKVar5 = extraout_EDX_00;
code_?:
    uVar12 = func_?(pSVar1,pKVar5);
    valuePair.value = (Object *)((ulonglong)uVar12 >> 0x20);
    piVar8 = (int *)uVar12;
    if (extraout_ECX == 1) break;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)((uint)piVar8 ^ 0xADDR);
code_?:
    if (valuePair.value == (Object *)0x0) {
code_?:
      func_?();
      valuePair.value = extraout_EDX;
    }
    else if (((valuePair.value)->klass->_0).element_class == (pSVar1->_0).element_class) {
      piVar11 = (int32_t *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                ((KogamaSettingEnumBase *)unaff_EDI,(String *)unaff_EBX,*piVar11,(int32_t)piStack_7,
                 (int32_t)kogamaSettingBasePrototype,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
  }
  *piVar8 = (int)ROUND(extraout_ST0);
  *(char *)&(unaff_EDI->_0).image = (char)uVar12;
  *piVar8 = (int)ROUND(extraout_ST0);
  pcVar13 = (code *)swi(3);
  pKVar14 = (KogamaSettingValueWrapperBase *)(*pcVar13)();
  return pKVar14;
}

