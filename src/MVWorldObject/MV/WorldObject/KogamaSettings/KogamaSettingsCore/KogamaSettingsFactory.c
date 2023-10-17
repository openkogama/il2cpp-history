
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
     (iVar1 = (*(kogamaSettingBasePrototype->klass->vtable).__unknown.methodPtr)
                        (kogamaSettingBasePrototype,
                         (kogamaSettingBasePrototype->klass->vtable).__unknown.method), iVar1 == 0))
  goto code_?;
  uVar2 = func_?(2,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                           ,iVar1);
  switch(uVar2) {
  case 0:
    pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
    kogamaSettingBasePrototype =
         (KogamaSettingValueWrapperBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                        );
    if (((Int32__Class *)kogamaSettingBasePrototype == (Int32__Class *)0x0) ||
       (unaff_EDI = TypeInfo__System__Boolean, valuePair.value == (Object *)0x0))
    goto code_?;
    if (((valuePair.value)->klass->_0).element_class ==
        (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?(valuePair.value);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)kogamaSettingBasePrototype,pSVar3,*pbVar4,parent,
                 (MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)(Int32__Class *)kogamaSettingBasePrototype;
    }
code_?:
    func_?(valuePair.value,unaff_EDI);
    valuePair.value = extraout_ECX;
    pSVar5 = (Single__Class *)extraout_EDX_00;
code_?:
    func_?(valuePair.value,pSVar5);
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32___Class *)extraout_EDX_01;
    break;
  case 1:
    unaff_EDI = (Boolean__Class *)kogamaSettingBasePrototype->klass;
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).typeHierarchyDepth <= (unaff_EDI->_1).typeHierarchyDepth) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 == (Il2CppArrayType *)0x0)) {
code_?:
        func_?();
        valuePair.value = extraout_EDX;
        goto code_?;
      }
      piVar8 = pIVar7->sizes;
      piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      kogamaSettingBasePrototype =
           (KogamaSettingValueWrapperBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                          );
      pMVar10 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      if (((Int32__Class *)kogamaSettingBasePrototype == (Int32__Class *)0x0) ||
         (unaff_EDI = (Boolean__Class *)
                      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
         , valuePair.value == (Object *)0x0)) goto code_?;
      pSVar5 = TypeInfo__System__Single;
      if (((valuePair.value)->klass->_0).element_class ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar11 = (float *)func_?(valuePair.value);
        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
        KogamaSettingNumericBase_1_System_Single___ctor
                  ((KogamaSettingNumericBase_1_System_Single_ *)kogamaSettingBasePrototype,pSVar3,
                   *pfVar11,(float)piVar8,(float)piVar9,parent,pMVar10);
        return (KogamaSettingValueWrapperBase *)(Int32__Class *)kogamaSettingBasePrototype;
      }
      goto code_?;
    }
    break;
  case 2:
    unaff_EDI = (Boolean__Class *)kogamaSettingBasePrototype->klass;
    pKVar6 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth <= (unaff_EDI->_1).typeHierarchyDepth) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar12 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.generic_class,
         pIVar12 != (Il2CppGenericClass *)0x0)) {
        min = (Object *)(pIVar12->context).method_inst;
        max = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.generic_class)->
              cached_class;
        kogamaSettingBasePrototype =
             (KogamaSettingValueWrapperBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                            );
        pMVar10 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        if (((Int32__Class *)kogamaSettingBasePrototype != (Int32__Class *)0x0) &&
           (unaff_EDI = (Boolean__Class *)
                        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
           , valuePair.value != (Object *)0x0)) {
          pSVar5 = (Single__Class *)TypeInfo__System__Int32;
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            puVar13 = (undefined4 *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
            KogamaSettingNumericBase_1_System_Object___ctor
                      ((KogamaSettingNumericBase_1_System_Object_ *)kogamaSettingBasePrototype,
                       pSVar3,(Object *)*puVar13,min,(Object *)max,parent,pMVar10);
            return (KogamaSettingValueWrapperBase *)(Int32__Class *)kogamaSettingBasePrototype;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  default:
    return (KogamaSettingValueWrapperBase *)0x0;
  case 4:
    unaff_EDI = (Boolean__Class *)kogamaSettingBasePrototype->klass;
    pKVar6 = (KogamaSettingNumericBase_1_System_Int32___Class *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).typeHierarchyDepth <= (unaff_EDI->_1).typeHierarchyDepth) &&
       ((unaff_EDI->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar7 != (Il2CppArrayType *)0x0)) {
        piVar8 = pIVar7->sizes;
        piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
        unaff_EDI = (Boolean__Class *)
                    func_?(
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                                   );
        if ((unaff_EDI != (Boolean__Class *)0x0) &&
           (kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32,
           valuePair.value != (Object *)0x0)) {
          if (((valuePair.value)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar14 = (int32_t *)func_?(valuePair.value);
            KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                      ((KogamaSettingEnumBase *)unaff_EDI,pSVar3,*piVar14,(int32_t)piVar8,
                       (int32_t)piVar9,parent,(MethodInfo *)0x0);
            return (KogamaSettingValueWrapperBase *)unaff_EDI;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?(kogamaSettingBasePrototype,pKVar6);
  valuePair.value = extraout_EDX_02;
code_?:
  uRam_? = func_?(valuePair.value,kogamaSettingBasePrototype);
  bVar15 = *extraout_EDX_03;
  *extraout_EDX_03 = *extraout_EDX_03 + extraout_CH;
  *(char *)&(unaff_EDI->_0).image =
       *(char *)&(unaff_EDI->_0).image + (char)((uint)extraout_EDX_03 >> 8) +
       CARRY1(bVar15,extraout_CH);
  pcVar16 = (code *)swi(3);
  pKVar17 = (KogamaSettingValueWrapperBase *)(*pcVar16)();
  return pKVar17;
}

