
/* KogamaSettingValueWrapperBase
   KogamaSettingValueFactoryAttributeSettings(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase) */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsFactory::AttributeSettingsFactory_KogamaSettingValueFactoryAttributeSettings
          (KeyValuePair_2_System_Object_System_Object_ valuePair,
          KogamaSettingValueWrapperBase *kogamaSettingBasePrototype,
          KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0) &&
     (iVar1 = (*(code *)(kogamaSettingBasePrototype->klass->vtable).__unknown.method)
                         (kogamaSettingBasePrototype), iVar1 != 0)) {
    uVar2 = func_?(2,
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                            );
    switch(uVar2) {
    case 0:
      iVar1 = func_?(kogamaSettingBasePrototype);
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      uVar2 = func_?(&valuePair,
                               MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                              );
      unaff_EBX = 0;
      if (iVar1 != 0) {
        pKVar4 = *(KogamaSettingBoolBase__Class **)(iVar1 + 0x18);
        pMVar5 = *(MonitorData **)(iVar1 + 0x1c);
        this = (KogamaSettingBoolBase *)func_?();
        pbVar6 = (bool *)func_?(uVar2,TypeInfo__System__Boolean);
        KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                  (this,pSVar3,*pbVar6,parent,(MethodInfo *)0x0);
        this[1].klass = pKVar4;
        this[1].monitor = pMVar5;
        return (KogamaSettingValueWrapperBase *)this;
      }
      break;
    case 1:
      iVar1 = func_?(kogamaSettingBasePrototype);
      if (iVar1 != 0) {
        pSVar3 = *(String **)(iVar1 + 8);
        uVar2 = func_?(&valuePair);
        iVar7 = *(int *)(iVar1 + 0x14);
        if ((((iVar7 != 0) && (iVar8 = *(int *)(iVar7 + 0x10), iVar8 != 0)) &&
            (min = *(float *)(iVar8 + 8), iVar7 != 0)) && (iVar8 != 0)) {
          max = *(float *)(iVar8 + 0xc);
          calculator = *(IAttributePointFloatCalculator **)(iVar1 + 0x18);
          AVar9 = *(AttributeSettingsExclusivityFlag__Enum *)(iVar1 + 0x1c);
          this_00 = (AttributeSettingFloat *)func_?();
          pfVar10 = (float *)func_?(uVar2,TypeInfo__System__Single);
          AttributeSettingTypes::AttributeSettingFloat::AttributeSettingFloat__ctor_1
                    (this_00,pSVar3,*pfVar10,min,max,calculator,AVar9,parent,(MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)this_00;
        }
      }
      break;
    case 2:
      iVar1 = func_?(kogamaSettingBasePrototype);
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      uVar2 = func_?(&valuePair,
                               MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                              );
      if (((iVar1 != 0) && (iVar7 = *(int *)(iVar1 + 0x14), iVar7 != 0)) &&
         ((unaff_EBX = *(uint *)(iVar7 + 0x10), unaff_EBX != 0 &&
          ((iVar11 = *(int32_t *)(unaff_EBX + 8), iVar7 != 0 && (unaff_EBX != 0)))))) {
        iVar12 = *(int32_t *)(unaff_EBX + 0xc);
        calculator_00 = *(IAttributePointIntCalculator **)(iVar1 + 0x18);
        AVar9 = *(AttributeSettingsExclusivityFlag__Enum *)(iVar1 + 0x1c);
        this_01 = (AttributeSettingInt *)func_?();
        piVar13 = (int32_t *)func_?(uVar2,TypeInfo__System__Int32);
        AttributeSettingTypes::AttributeSettingInt::AttributeSettingInt__ctor_1
                  (this_01,pSVar3,*piVar13,iVar11,iVar12,calculator_00,AVar9,parent,(MethodInfo *)0x0
                  );
        return (KogamaSettingValueWrapperBase *)this_01;
      }
      break;
    default:
      goto code_?;
    case 4:
      unaff_EBX = func_?(kogamaSettingBasePrototype);
      if (unaff_EBX != 0) {
        pSVar3 = *(String **)(unaff_EBX + 8);
        uVar2 = func_?(&valuePair);
        iVar1 = *(int *)(unaff_EBX + 0x14);
        pKVar14 = *(KogamaSettingEnumBase__Class **)(unaff_EBX + 0x18);
        if ((((iVar1 != 0) && (iVar7 = *(int *)(iVar1 + 0x10), iVar7 != 0)) &&
            (iVar11 = *(int32_t *)(iVar7 + 8), iVar1 != 0)) && (iVar7 != 0)) {
          iVar12 = *(int32_t *)(iVar7 + 0xc);
          pMVar5 = *(MonitorData **)(unaff_EBX + 0x1c);
          this_02 = (KogamaSettingEnumBase *)func_?();
          piVar13 = (int32_t *)func_?(uVar2,TypeInfo__System__Int32);
          KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                    (this_02,pSVar3,*piVar13,iVar11,iVar12,parent,(MethodInfo *)0x0);
          this_02[1].klass = pKVar14;
          this_02[1].monitor = pMVar5;
          return (KogamaSettingValueWrapperBase *)this_02;
        }
      }
    }
  }
  func_?();
code_?:
  this_03 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_03,(MethodInfo *)0x0);
  pMVar15 = 
  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
  ;
  bVar16 = (undefined1 *)0xfffffff3 < &stack0xffffffe0;
  bVar17 = func_?();
  bVar16 = 0x99 < bVar17 | bVar16;
  bVar18 = (byte)extraout_ECX + (byte)unaff_EBX;
  pcVar19 = (char *)(CONCAT31((int3)((uint)extraout_ECX >> 8),bVar18 + bVar16) + -0x2efa5d0);
  *pcVar19 = *pcVar19 + (char)((uint)extraout_ECX >> 8) +
            (0x99 < (byte)(bVar17 + (9 < (bVar17 & 0xf) | in_AF) * -6 + bVar16 * -0x60) ||
            (CARRY1((byte)extraout_ECX,(byte)unaff_EBX) || CARRY1(bVar18,bVar16)));
  ppIVar20 = &pMVar15->klass;
  *ppIVar20 = (Il2CppClass *)((uint)*ppIVar20 ^ unaff_EBX);
  ppIVar20 = &pMVar15->klass;
  *ppIVar20 = (Il2CppClass *)((uint)*ppIVar20 ^ unaff_EBX);
  pcVar21 = (code *)swi(3);
  pKVar22 = (KogamaSettingValueWrapperBase *)(*pcVar21)();
  return pKVar22;
}

