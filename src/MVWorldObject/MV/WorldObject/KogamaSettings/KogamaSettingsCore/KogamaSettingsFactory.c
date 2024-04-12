
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
    pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                func_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                               );
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    pIVar4 = ((valuePair.value)->klass->_0).element_class;
    pIVar5 = (TypeInfo__System__Boolean->_0).element_class;
    uVar6 = pIVar4 < pIVar5;
    if (pIVar4 == pIVar5) {
      pbVar7 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)unaff_EDI,pSVar3,*pbVar7,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    goto code_?;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    uVar6 = 1;
    pKVar8 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment - 1],
       uVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar9 != (Il2CppArrayType *)0x0)) {
      piVar10 = pIVar9->sizes;
      piVar11 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      this = (KogamaSettingNumericBase_1_System_Single_ *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                            );
      pMVar12 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Single->_0).element_class;
        uVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          pfVar13 = (float *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single___ctor
                    (this,(String *)unaff_EDI,*pfVar13,(float)piVar10,(float)piVar11,parent,pMVar12);
          return (KogamaSettingValueWrapperBase *)this;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    uVar6 = 1;
    pKVar8 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                  ->_1).naturalAligment - 1],
       uVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) goto code_?;
    pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar9 != (Il2CppArrayType *)0x0)) {
      piVar10 = pIVar9->sizes;
      piVar11 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                                 );
      pMVar12 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        uVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          piVar14 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32___ctor
                    ((KogamaSettingNumericBase_1_System_Int32_ *)unaff_EDI,pSVar3,*piVar14,
                     (int32_t)piVar10,(int32_t)piVar11,parent,pMVar12);
          return (KogamaSettingValueWrapperBase *)unaff_EDI;
        }
        goto code_?;
      }
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    uVar6 = 1;
    pKVar8 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                  ->_1).naturalAligment - 1],
       uVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) goto code_?;
    pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar9 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar9 != (Il2CppArrayType *)0x0)) {
      piVar10 = pIVar9->sizes;
      piVar11 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                                 );
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        uVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          piVar14 = (int32_t *)func_?(valuePair.value);
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    ((KogamaSettingEnumBase *)unaff_EDI,pSVar3,*piVar14,(int32_t)piVar10,
                     (int32_t)piVar11,parent,(MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)unaff_EDI;
        }
        goto code_?;
      }
    }
  }
code_?:
  uVar6 = 0;
  func_?();
  valuePair.value = extraout_EDX;
code_?:
  func_?(valuePair.value,kogamaSettingBasePrototype);
  pKVar8 = extraout_EDX_00;
code_?:
  piVar10 = (int *)func_?(kogamaSettingBasePrototype,pKVar8);
  if ((bool)uVar6) {
    return (KogamaSettingValueWrapperBase *)unaff_EDI;
  }
  *piVar10 = (int)ROUND(extraout_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

