
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
  cVar1 = (char)((uint)unaff_EBX >> 8);
  if (cRam_? == '\0') {
    func_?();
    func_?();
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
     (iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(), iVar2 == 0)
     ) goto code_?;
  uVar3 = func_?(2);
  switch(uVar3) {
  case 0:
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
    if (valuePair.value == (Object *)0x0) break;
    pIVar4 = ((valuePair.value)->klass->_0).element_class;
    pIVar5 = (TypeInfo__System__Boolean->_0).element_class;
    bVar6 = pIVar4 < pIVar5;
    if (pIVar4 == pIVar5) {
      pbVar7 = (bool *)func_?();
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)unaff_EDI,(String *)unaff_EBX,*pbVar7,parent,
                 (MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    goto code_?;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar6 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment - 1],
       bVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar8 != (Il2CppArrayType *)0x0)) {
      piVar9 = pIVar8->sizes;
      piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
      pMVar11 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Single->_0).element_class;
        bVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          pfVar12 = (float *)func_?();
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single___ctor
                    (unaff_EBX,(String *)unaff_EDI,*pfVar12,(float)piVar9,(float)piVar10,parent,
                     pMVar11);
          return (KogamaSettingValueWrapperBase *)unaff_EBX;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar6 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                  ->_1).naturalAligment - 1],
       bVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar8 != (Il2CppArrayType *)0x0)) {
      piVar9 = pIVar8->sizes;
      piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
      pMVar11 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        bVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          piVar13 = (int32_t *)func_?();
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32___ctor
                    ((KogamaSettingNumericBase_1_System_Int32_ *)unaff_EDI,(String *)unaff_EBX,
                     *piVar13,(int32_t)piVar9,(int32_t)piVar10,parent,pMVar11);
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
    bVar6 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).naturalAligment) ||
       (pIVar5 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                  ->_1).naturalAligment - 1],
       bVar6 = pIVar5 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , pIVar5 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar8 != (Il2CppArrayType *)0x0)) {
      piVar9 = pIVar8->sizes;
      piVar10 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
      if (valuePair.value != (Object *)0x0) {
        pIVar4 = ((valuePair.value)->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        bVar6 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          piVar13 = (int32_t *)func_?();
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    ((KogamaSettingEnumBase *)unaff_EDI,(String *)unaff_EBX,*piVar13,(int32_t)piVar9
                     ,(int32_t)piVar10,parent,(MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)unaff_EDI;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar6 = 0;
  func_?();
code_?:
  cVar1 = (char)((uint)unaff_EBX >> 8);
  func_?();
code_?:
  uVar14 = func_?();
  uVar15 = (undefined2)((uint6)uVar14 >> 0x20);
  out(uVar15,(int)uVar14);
  out(uVar15,&stack0xffffffe0);
  *(char *)&(unaff_EDI->_0).image =
       *(char *)&(unaff_EDI->_0).image + cVar1 +
       (CARRY1(in_stack_16,extraout_CL) || CARRY1(in_stack_16 + extraout_CL,bVar6));
  out(uVar15,(int)uVar14);
  pcVar17 = (code *)swi(3);
  pKVar18 = (KogamaSettingValueWrapperBase *)(*pcVar17)();
  return pKVar18;
}

