
/* KogamaSettingNumericBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](String,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,String *key,_Il2CppFullySharedGenericType *value,_Il2CppFullySharedGenericType *min,
               _Il2CppFullySharedGenericType *max,KogamaSettingsCollectionBase *parent,
               MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[3].klass)->actualSize;
  apuStack_3[0] = &UNK_?;
  p_StackX_18 = (_Il2CppFullySharedGenericType__Class *)value;
  p_StackX_20 = (_Il2CppFullySharedGenericType__Class *)min;
  lVar4 = FUN_?(0xffffffffffffff0);
  lVar4 = -lVar4;
  plVar5 = (longlong *)((longlong)&pvStack_6 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  plVar8 = (longlong *)((longlong)&pvStack_6 + lVar7 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar4) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  plVar10 = (longlong *)((longlong)&pvStack_6 + lVar9 + lVar7 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  KogamaSettingWrapperBase::KogamaSettingWrapperBase__ctor
            ((KogamaSettingWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  p_Var14 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_18;
  if (*(int *)&(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var14 = p_StackX_18;
  }
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(plVar5,p_Var14,uVar2);
  p_Var15 = (_Il2CppFullySharedGenericType *)&p_StackX_20;
  if (*(int *)&(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var15 = min;
  }
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(plVar8,p_Var15,uVar2);
  p_Var15 = (_Il2CppFullySharedGenericType *)&max;
  if (*(int *)&(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var15 = max;
  }
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(plVar10,p_Var15,uVar2);
  pvVar11 = pMVar1->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
    pvVar11 = (void *)FUN_?(pvVar11);
  }
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  pKVar12 = (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            FUN_?(pvVar11);
  if (-1 < *(int *)&(pMVar1->klass->rgctx_data[3].method)->return_type) {
    plVar10 = (longlong *)*plVar10;
    plVar8 = (longlong *)*plVar8;
    plVar5 = (longlong *)*plVar5;
  }
  pvStack_6 = plVar5;
  lStack_13 = (longlong)plVar8;
  lStack_14 = (longlong)plVar10;
  pIVar15 = pMVar1->klass->rgctx_data;
  *(longlong **)((longlong)alStack_16 + lVar9 + lVar7 + lVar4) = plVar10;
  pMVar1 = pIVar15[5].method;
  pIVar17 = pMVar1->invoker_method;
  pIVar18 = pMVar1->methodPointer;
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  (*pIVar17)(pIVar18,pMVar1,pKVar12,&pvStack_6,
            *(void **)((longlong)alStack_16 + lVar9 + lVar7 + lVar4));
  bVar19 = iRam_? != 0;
  (this->fields).KogamaSettingNumeric = pKVar12;
  if (bVar19) {
    uVar20 = (uint)((ulonglong)&(this->fields).KogamaSettingNumeric >> 0xc);
    uVar21 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
    do {
      uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
      puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
      LOCK();
      bVar19 = uVar22 == *puVar23;
      if (bVar19) {
        *puVar23 = uVar22 | 1L << (uVar20 & 0x3f);
      }
      UNLOCK();
    } while (!bVar19);
  }
  return;
}


/* __Il2CppFullySharedGenericType get_NumericValue() */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumericValue
          (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x18) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  pKVar4 = (this->fields).KogamaSettingNumeric;
  lVar3 = -lVar3;
  puVar5 = &stack0xffffffffffffffe8 + lVar3;
  if (pKVar4 != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    lVar6 = *(longlong *)(in_R8 + 0x20);
    *(undefined1 **)((longlong)alStack_7 + lVar3) = puVar5;
    puVar8 = *(undefined8 **)(*(longlong *)(lVar6 + 0xc0) + 0x10);
    pcVar9 = (code *)puVar8[2];
    uVar10 = *puVar8;
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    puStackX_8 = puVar5;
    (*pcVar9)(uVar10,puVar8,pKVar4,&puStackX_8);
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    p_Var9 = (_Il2CppFullySharedGenericType *)FUN_?(method,puVar5,uVar1);
    return p_Var9;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  p_Var9 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var9;
}


/* Void set_NumericValue(__Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_NumericValue
               (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  pKVar3 = (this->fields).KogamaSettingNumeric;
  lVar2 = -lVar2;
  p_Var9 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var8 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var8 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var9,p_Var8);
  if (pKVar3 != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[3].method)->return_type) {
      p_Var9 = (_Il2CppFullySharedGenericType__Class *)(p_Var9->_0).image;
    }
    pIVar4 = method->klass;
    *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_5 + lVar2) = p_Var9;
    pMVar6 = pIVar4->rgctx_data[4].method;
    pIVar7 = pMVar6->invoker_method;
    pIVar8 = pMVar6->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    p_StackX_10 = p_Var9;
    (*pIVar7)(pIVar8,pMVar6,pKVar3,&p_StackX_10,*(void **)((longlong)alStack_5 + lVar2));
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

