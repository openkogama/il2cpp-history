
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
  pOVar1 = valuePair.value;
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
    this = (KogamaSettingBoolBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                          );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this,(String *)unaff_EBX,*pbVar4,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    }
    break;
  case 1:
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if ((kogamaSettingBasePrototype->klass->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
        ->_1).naturalAligment) goto code_?;
    if ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       ) goto code_?;
    key = (kogamaSettingBasePrototype->fields)._.key;
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
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class
       ) {
      pfVar10 = (float *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single___ctor
                (unaff_EBX,key,*pfVar10,(float)piStack_7,(float)piVar8,parent,pMVar9);
      return (KogamaSettingValueWrapperBase *)unaff_EBX;
    }
    break;
  case 2:
    pKVar5 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if ((kogamaSettingBasePrototype->klass->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
        ->_1).naturalAligment) goto code_?;
    if ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
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
    this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)
              func_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                             );
    pMVar9 = 
    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
    ;
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
    if (valuePair.value == (Object *)0x0) goto code_?;
    if (((valuePair.value)->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
    {
      piVar11 = (int32_t *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
      KogamaSettingNumericBase_1_System_Int32___ctor
                (this_00,(String *)unaff_EBX,*piVar11,(int32_t)piVar8,(int32_t)piStack_7,parent,
                 pMVar9);
      return (KogamaSettingValueWrapperBase *)this_00;
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    pKVar5 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if ((kogamaSettingBasePrototype->klass->_1).naturalAligment <
        (
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
        ->_1).naturalAligment) goto code_?;
    if ((kogamaSettingBasePrototype->klass->_1).typeHierarchy
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
    pKVar12 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    goto code_?;
  }
  while( true ) {
    func_?(pOVar1,kogamaSettingBasePrototype);
    pKVar5 = extraout_EDX_00;
code_?:
    func_?(kogamaSettingBasePrototype,pKVar5);
    pKVar12 = extraout_EDX_01;
    if (extraout_ECX == 1) break;
code_?:
    max = *(int32_t *)
           (*(int *)(*(int *)&(((Single__Class *)kogamaSettingBasePrototype)->_0).byval_arg.attrs +
                    0x10) + 0xc);
    this_01 = (KogamaSettingEnumBase *)func_?(pKVar12);
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
    if (valuePair.value == (Object *)0x0) {
code_?:
      func_?();
      pOVar1 = extraout_EDX;
    }
    else {
      pOVar1 = valuePair.value;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?(valuePair.value);
        KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                  (this_01,(String *)unaff_EBX,*piVar11,(int32_t)piStack_7,max,parent,
                   (MethodInfo *)0x0);
        return (KogamaSettingValueWrapperBase *)this_01;
      }
    }
  }
  pcVar13 = (code *)swi(1);
  pKVar14 = (KogamaSettingValueWrapperBase *)(*pcVar13)();
  return pKVar14;
}

