
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = unaff_EDI;
  if ((kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0) &&
     (iVar2 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                        (kogamaSettingBasePrototype,kogamaSettingBasePrototype->klass[1]._0.image),
     iVar2 != 0)) {
    uVar3 = func_?(2,
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                            ,iVar2);
    switch(uVar3) {
    case 0:
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      uVar3 = func_?(&valuePair,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
      this = (KogamaSettingBoolBase *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                            );
      pbVar5 = (bool *)func_?(uVar3,TypeInfo__System__Boolean);
      KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this,pSVar4,*pbVar5,parent,(MethodInfo *)0x0);
      return (KogamaSettingValueWrapperBase *)this;
    case 1:
      unaff_EDI = (undefined1 *)
                  func_?(kogamaSettingBasePrototype,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                 );
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      uVar3 = func_?(&valuePair,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
      if ((((unaff_EDI != (undefined1 *)0x0) && (iVar2 = *(int *)(unaff_EDI + 0x14), iVar2 != 0)) &&
          (iVar6 = *(int *)(iVar2 + 0x10), iVar6 != 0)) &&
         ((min = *(float *)(iVar6 + 8), iVar2 != 0 && (iVar6 != 0)))) {
        max = *(float *)(iVar6 + 0xc);
        this_00 = (KogamaSettingNumericBase_1_System_Single_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                 );
        pfVar7 = (float *)func_?(uVar3,TypeInfo__System__Single);
        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
        KogamaSettingNumericBase_1_System_Single___ctor
                  (this_00,pSVar4,*pfVar7,min,max,parent,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                  );
        return (KogamaSettingValueWrapperBase *)this_00;
      }
      break;
    case 2:
      unaff_EDI = (undefined1 *)
                  func_?(kogamaSettingBasePrototype,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                                 );
      pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
      uVar3 = func_?(&valuePair,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
      if (((unaff_EDI != (undefined1 *)0x0) && (iVar2 = *(int *)(unaff_EDI + 0x14), iVar2 != 0)) &&
         ((unaff_EDI = *(undefined1 **)(iVar2 + 0x10), unaff_EDI != (undefined1 *)0x0 &&
          ((min_00 = *(int32_t *)(unaff_EDI + 8), iVar2 != 0 && (unaff_EDI != (undefined1 *)0x0)))))
         ) {
        max_00 = *(int32_t *)(unaff_EDI + 0xc);
        this_01 = (KogamaSettingNumericBase_1_System_Int32_ *)
                  func_?(
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                                 );
        method_00 = 
        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
        ;
        piVar8 = (int32_t *)func_?(uVar3,TypeInfo__System__Int32);
        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32___ctor
                  (this_01,pSVar4,*piVar8,min_00,max_00,parent,method_00);
        return (KogamaSettingValueWrapperBase *)this_01;
      }
      break;
    default:
      return (KogamaSettingValueWrapperBase *)0x0;
    case 4:
      kogamaSettingBasePrototype =
           (KogamaSettingValueWrapperBase *)
           func_?(kogamaSettingBasePrototype,
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                          );
      if (kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0) {
        pSVar4 = (kogamaSettingBasePrototype->fields)._.key;
        uVar3 = func_?(&valuePair,
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                               );
        pKVar9 = kogamaSettingBasePrototype[1].klass;
        if ((((pKVar9 != (KogamaSettingValueWrapperBase__Class *)0x0) &&
             (kogamaSettingBasePrototype =
                   (KogamaSettingValueWrapperBase *)(pKVar9->_0).byval_arg.data.generic_class,
             kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0)) &&
            (min_01 = (kogamaSettingBasePrototype->fields)._.key,
            pKVar9 != (KogamaSettingValueWrapperBase__Class *)0x0)) &&
           (kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0)) {
          max_01 = (kogamaSettingBasePrototype->fields)._._Parent_k__BackingField;
          this_02 = (KogamaSettingEnumBase *)
                    func_?(
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                                   );
          piVar8 = (int32_t *)func_?(uVar3,TypeInfo__System__Int32);
          KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    (this_02,pSVar4,*piVar8,(int32_t)min_01,(int32_t)max_01,parent,
                     (MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)this_02;
        }
      }
    }
  }
  bVar10 = (byte)((uint)puVar1 >> 8);
  bVar11 = 0;
  bVar12 = 0;
  uVar13 = func_?();
  uVar14 = (undefined2)((uint6)uVar13 >> 0x20);
  pbVar15 = (byte *)uVar13;
  out(uVar14,pbVar15);
  uVar16 = in(uVar14);
  *unaff_EDI = uVar16;
  bVar17 = CARRY1(*pbVar15,bVar12) || CARRY1(*pbVar15 + bVar12,bVar11);
  *pbVar15 = *pbVar15 + bVar12 + bVar11;
  uVar3 = in(uVar14);
  *(undefined4 *)(unaff_EDI + 1) = uVar3;
  bVar11 = (byte)((uint6)uVar13 >> 8);
  bVar12 = bVar11 + bVar10;
  bVar18 = CARRY1(bVar11,bVar10) || CARRY1(bVar12,bVar17);
  bVar12 = bVar12 + bVar17;
  uVar3 = in(uVar14);
  *(undefined4 *)(unaff_EDI + 5) = uVar3;
  bVar11 = *extraout_ECX;
  bVar10 = *extraout_ECX + bVar12;
  *extraout_ECX = bVar10 + bVar18;
  out(kogamaSettingBasePrototype->klass,uVar14);
  pcVar19 = (char *)((int)kogamaSettingBasePrototype + (int)&stack0xfffffffc * 2 + -0x3333efa1);
  *pcVar19 = *pcVar19 + unaff_BL + (CARRY1(bVar11,bVar12) || CARRY1(bVar10,bVar18));
  pcVar20 = (code *)swi(3);
  pKVar21 = (KogamaSettingValueWrapperBase *)(*pcVar20)();
  return pKVar21;
}

