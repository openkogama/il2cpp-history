
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
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)(),
     iVar1 == 0)) goto code_?;
  uVar2 = func_?(2);
  switch(uVar2) {
  case 0:
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
    kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Boolean;
    if (valuePair.value == (Object *)0x0) break;
    pIVar3 = ((valuePair.value)->klass->_0).element_class;
    pIVar4 = (TypeInfo__System__Boolean->_0).element_class;
    bVar5 = pIVar3 < pIVar4;
    if (pIVar3 == pIVar4) {
      pbVar6 = (bool *)func_?();
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                ((KogamaSettingBoolBase *)unaff_EDI,(String *)unaff_EBX,*pbVar6,parent,
                 (MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)unaff_EDI;
    }
    goto code_?;
  case 1:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar5 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment) ||
       (pIVar4 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    unaff_EDI = (KogamaSettingValueWrapperBase__Class *)(kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 != (Il2CppArrayType *)0x0)) {
      piVar8 = pIVar7->sizes;
      piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
      pMVar10 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Single;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Single->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          pfVar11 = (float *)func_?();
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
          KogamaSettingNumericBase_1_System_Single___ctor
                    (unaff_EBX,(String *)unaff_EDI,*pfVar11,(float)piVar8,(float)piVar9,parent,
                     pMVar10);
          return (KogamaSettingValueWrapperBase *)unaff_EBX;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    unaff_EDI = kogamaSettingBasePrototype->klass;
    bVar5 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment) ||
       (pIVar4 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                  ->_1).naturalAligment - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 != (Il2CppArrayType *)0x0)) {
      piVar8 = pIVar7->sizes;
      piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
      pMVar10 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
      ;
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          piVar12 = (int32_t *)func_?();
          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
          KogamaSettingNumericBase_1_System_Int32___ctor
                    ((KogamaSettingNumericBase_1_System_Int32_ *)unaff_EDI,(String *)unaff_EBX,
                     *piVar12,(int32_t)piVar8,(int32_t)piVar9,parent,pMVar10);
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
    bVar5 = 1;
    if (((unaff_EDI->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         ->_1).naturalAligment) ||
       (pIVar4 = (unaff_EDI->_1).typeHierarchy
                 [(
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                  ->_1).naturalAligment - 1],
       bVar5 = pIVar4 < 
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       , pIVar4 != (Il2CppClass *)
                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
       )) goto code_?;
    unaff_EBX = (KogamaSettingNumericBase_1_System_Single_ *)
                (kogamaSettingBasePrototype->fields)._.key;
    if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
       (pIVar7 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
       pIVar7 != (Il2CppArrayType *)0x0)) {
      piVar8 = pIVar7->sizes;
      piVar9 = (((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array)->lobounds;
      unaff_EDI = (KogamaSettingValueWrapperBase__Class *)func_?();
      kogamaSettingBasePrototype = (KogamaSettingValueWrapperBase *)TypeInfo__System__Int32;
      if (valuePair.value != (Object *)0x0) {
        pIVar3 = ((valuePair.value)->klass->_0).element_class;
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        bVar5 = pIVar3 < pIVar4;
        if (pIVar3 == pIVar4) {
          piVar12 = (int32_t *)func_?();
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    ((KogamaSettingEnumBase *)unaff_EDI,(String *)unaff_EBX,*piVar12,(int32_t)piVar8
                     ,(int32_t)piVar9,parent,(MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)unaff_EDI;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar5 = 0;
  func_?();
code_?:
  func_?();
code_?:
  pSVar13 = (Single__Class *)kogamaSettingBasePrototype;
  uVar14 = func_?();
  bRam_? = (byte)uVar14;
  out(extraout_DX,unaff_EBX);
  bVar15 = (byte)((ushort)extraout_CX >> 8);
  out(extraout_DX,&stack0xffffffe0);
  out(extraout_DX,kogamaSettingBasePrototype);
  puVar16 = (undefined1 *)((int)&unaff_EDI[-1]._1.instance_size + 1);
  *puVar16 = *puVar16 + (char)((ushort)uVar14 >> 8) +
            (CARRY1((byte)pSVar13,bRam_?) ||
            CARRY1((byte)pSVar13 + bRam_?,
                   CARRY1(bVar15,(byte)extraout_CX) || CARRY1(bVar15 + (byte)extraout_CX,bVar5)));
  out(extraout_DX,kogamaSettingBasePrototype);
  pcVar17 = (code *)swi(3);
  pKVar18 = (KogamaSettingValueWrapperBase *)(*pcVar17)();
  return pKVar18;
}

