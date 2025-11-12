
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
         KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ToString
                   (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Value__0____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Value__0____1_;
  if (this != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,(this->fields)._.value,(Object *)(this->fields).RangeValidator,
               (MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* KogamaSettingNumeric`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,_Il2CppFullySharedGenericType *min,
               _Il2CppFullySharedGenericType *max,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[1].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  p_StackX_18 = (_Il2CppFullySharedGenericType__Class *)min;
  p_StackX_20 = (_Il2CppFullySharedGenericType__Class *)max;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  plVar4 = (longlong *)(auStack_5 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  plVar7 = (longlong *)(auStack_5 + lVar6 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  lVar8 = FUN_?();
  lVar8 = -lVar8;
  plVar9 = (longlong *)(auStack_5 + lVar8 + lVar6 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6 + lVar3) = &UNK_?;
  lVar10 = FUN_?();
  lVar10 = -lVar10;
  *(undefined **)((longlong)apuStack_2 + lVar10 + lVar8 + lVar6 + lVar3) = &UNK_?;
  lVar11 = FUN_?();
  lVar11 = -lVar11;
  p_Var20 = (_Il2CppFullySharedGenericType__Class *)
            (auStack_5 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3);
  p_Var17 = (_Il2CppFullySharedGenericType *)&stack0x00000018;
  if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var17 = min;
  }
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  FUN_?(plVar4,p_Var17,uVar1);
  p_Var18 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_20;
  if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var18 = p_StackX_20;
  }
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  FUN_?(plVar7,p_Var18,uVar1);
  pvVar12 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
         &UNK_?;
    pvVar12 = (void *)FUN_?(pvVar12);
  }
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  p_StackX_20 = (_Il2CppFullySharedGenericType__Class *)FUN_?(pvVar12);
  if (-1 < *(int *)&(method->klass->rgctx_data[1].method)->return_type) {
    plVar7 = (longlong *)*plVar7;
    plVar4 = (longlong *)*plVar4;
  }
  pIVar13 = method->klass;
  auStack_5._0_8_ = plVar4;
  auStack_5._8_8_ = plVar7;
  *(longlong **)((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) = plVar7;
  pMVar15 = pIVar13->rgctx_data[5].method;
  pIVar16 = pMVar15->invoker_method;
  pIVar17 = pMVar15->methodPointer;
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  (*pIVar16)(pIVar17,pMVar15,p_StackX_20,(void **)auStack_5,
            *(void **)((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3));
  p_Var18 = p_StackX_10;
  bVar18 = iRam_? != 0;
  (this->fields).RangeValidator =
       (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)p_StackX_20;
  if (bVar18) {
    uVar19 = (uint)((ulonglong)&(this->fields).RangeValidator >> 0xc);
    puVar20 = (ulonglong *)((ulonglong)((uVar19 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar21 = *puVar20;
      LOCK();
      uVar22 = *puVar20;
      if (uVar21 == uVar22) {
        *puVar20 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (uVar21 != uVar22);
  }
  pRVar23 = (this->fields).RangeValidator;
  p_Var19 = (_Il2CppFullySharedGenericType__Class *)&stack0x00000010;
  if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var19 = p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  FUN_?(plVar9,p_Var19,uVar1);
  if (pRVar23 != (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[1].method)->return_type) {
      plVar9 = (longlong *)*plVar9;
    }
    pIVar13 = method->klass;
    auStack_5._16_8_ = auStack_5 + lVar10 + lVar8 + lVar6 + lVar3;
    *(undefined1 **)((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
         auStack_5 + lVar10 + lVar8 + lVar6 + lVar3;
    auStack_5._8_8_ = &p_StackX_20;
    p_StackX_20 = (_Il2CppFullySharedGenericType__Class *)
                  ((ulonglong)p_StackX_20 & 0xffffffffffffff00);
    pMVar15 = pIVar13->rgctx_data[4].method;
    auStack_5._0_8_ = plVar9;
    pIVar16 = pMVar15->invoker_method;
    pIVar17 = (method->klass->rgctx_data[4].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
         &UNK_?;
    (*pIVar16)(pIVar17,pMVar15,pRVar23,(void **)auStack_5,
              *(void **)((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3));
    p_Var19 = (_Il2CppFullySharedGenericType__Class *)&stack0x00000010;
    if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
      p_Var19 = p_Var18;
    }
    *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
         &UNK_?;
    FUN_?(p_Var20,p_Var19,uVar1);
    if (-1 < *(int *)&(method->klass->rgctx_data[1].method)->return_type) {
      p_Var20 = (_Il2CppFullySharedGenericType__Class *)(p_Var20->_0).image;
    }
    pIVar13 = method->klass;
    *(_Il2CppFullySharedGenericType__Class **)
     ((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) = p_Var20;
    pMVar15 = pIVar13->rgctx_data[6].method;
    pIVar16 = pMVar15->invoker_method;
    pIVar17 = pMVar15->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
         &UNK_?;
    p_StackX_10 = p_Var20;
    (*pIVar16)(pIVar17,pMVar15,this,&stack0x00000010,
              *(void **)((longlong)alStack_14 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3));
    return;
  }
  *(undefined **)((longlong)apuStack_2 + lVar11 + lVar10 + lVar8 + lVar6 + lVar3) =
       &UNK_?;
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  str1 = (String *)0x0;
  pSVar2 = str1;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?(lRam_?);
    }
    lVar3 = FUN_?(pvVar1);
    pSVar2 = (String *)FUN_?(lVar3 + 0x20);
  }
  lVar3 = lRam_? + 0x20;
  pSVar4 = str1;
  if (lVar3 != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?(lRam_?);
    }
    lVar3 = FUN_?(lVar3);
    pSVar4 = (String *)FUN_?(lVar3 + 0x20);
  }
  if (pSVar2 == pSVar4) {
    KVar5 = KogamaSettingValueType__Enum_Int;
  }
  else {
    pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?(lRam_?);
    }
    pSVar2 = str1;
    if (pvVar1 != (void *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?(lRam_?);
      }
      lVar3 = FUN_?(pvVar1);
      pSVar2 = (String *)FUN_?(lVar3 + 0x20);
    }
    lVar3 = lRam_? + 0x20;
    pSVar4 = str1;
    if (lVar3 != 0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?(lRam_?);
      }
      lVar3 = FUN_?(lVar3);
      pSVar4 = (String *)FUN_?(lVar3 + 0x20);
    }
    if (pSVar2 != pSVar4) {
      lVar3 = lRam_?;
      handle.value = (void *)func_?(method->klass->rgctx_data);
      func_?(lVar3);
      pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pTVar6 == (Type *)0x0) {
        pSVar2 = (String *)func_?(&StringLiteral_Unknown_type_);
      }
      else {
        pSVar2 = (String *)func_?(&StringLiteral_Unknown_type_);
        FUN_?(pTVar6);
        str1 = (String *)func_?(3,pTVar6);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,str1,(MethodInfo *)0x0);
      uVar7 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar7);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
      FUN_?(this_00,method);
      pcVar8 = (code *)swi(3);
      KVar5 = (*pcVar8)();
      return KVar5;
    }
    KVar5 = KogamaSettingValueType__Enum_Float;
  }
  return KVar5;
}


/* __Il2CppFullySharedGenericType get_NumericValue() */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumericValue
          (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 8) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pOVar4 = (Object *)(&stack0xffffffffffffffe8 + lVar3);
  if (this != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pOVar5 = (this->fields)._.value;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
      lVar6 = FUN_?(lVar6);
    }
    if (*(int *)(lVar6 + 0x28) < 0) {
      if ((*(longlong *)(lVar6 + 0x60) == 0) || ((*(byte *)(lVar6 + 0x135) & 8) == 0)) {
        if (pOVar5 == (Object *)0x0) goto code_?;
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lVar6 + 0x40))
        goto code_?;
        pOVar4 = pOVar5 + 1;
      }
      else {
        if ((pOVar5 != (Object *)0x0) &&
           (pOVar7 = *(Object__Class **)(lVar6 + 0x40), pOVar5->klass != pOVar7)) {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(pOVar5,pOVar7);
          pcVar8 = (code *)swi(3);
          p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
          return p_Var8;
        }
        lVar9 = (longlong)&pOVar4->klass + (longlong)*(int *)(*(longlong *)(lVar6 + 0x80) + 0x38);
        lVar10 = lVar9 + -0x10;
        if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x80) + 0x30) + 0x28)) {
          lVar10 = lVar9;
        }
        iVar11 = *(int *)(*(longlong *)(lVar6 + 0x40) + 0xf8);
        if (pOVar5 == (Object *)0x0) {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(lVar10,0);
          *(undefined1 *)&pOVar4->klass = 0;
        }
        else {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(lVar10,pOVar5 + 1,iVar11 + -0x10);
          *(undefined1 *)&pOVar4->klass = 1;
        }
      }
    }
    else {
      if (pOVar5 == (Object *)0x0) {
        pOVar7 = (Object__Class *)0x0;
      }
      else {
        *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
        pOVar7 = (Object__Class *)FUN_?(pOVar5,lVar6);
        if (pOVar7 == (Object__Class *)0x0) {
code_?:
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(pOVar5,lVar6);
          pcVar8 = (code *)swi(3);
          p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
          return p_Var8;
        }
      }
      pOVar4->klass = pOVar7;
    }
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    p_Var8 = (_Il2CppFullySharedGenericType *)FUN_?(method,pOVar4,uVar1);
    return p_Var8;
  }
code_?:
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar8 = (code *)swi(3);
  p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
  return p_Var8;
}


/* Void set_NumericValue(__Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_NumericValue
               (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[1].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)value;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)&pvStack_5 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  lVar7 = (longlong)&pvStack_5 + lVar6 + lVar3;
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  lVar8 = FUN_?();
  lVar8 = -lVar8;
  _StackX_10.monitor = (MonitorData *)((longlong)&pvStack_5 + lVar8 + lVar6 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6 + lVar3) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  lVar10 = (longlong)&pvStack_5 + lVar9 + lVar8 + lVar6 + lVar3;
  *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
  FUN_?(lVar10,0,uVar1);
  pRVar11 = (this->fields).RangeValidator;
  p_Var15 = &_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var15 = value;
  }
  *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
  FUN_?(plVar4,p_Var15,uVar1);
  if (pRVar11 != (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[1].method)->return_type) {
      plVar4 = (longlong *)*plVar4;
    }
    pvStack_5 = plVar4;
    _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)CONCAT71(_StackX_10.klass._1_7_,1);
    p_Stack_50 = &_StackX_10;
    pIVar12 = method->klass;
    lStack_13 = lVar7;
    pMVar14 = method->klass->rgctx_data[4].method;
    *(longlong *)((longlong)alStack_15 + lVar9 + lVar8 + lVar6 + lVar3) = lVar7;
    pIVar16 = pMVar14->invoker_method;
    pIVar17 = (pIVar12->rgctx_data[4].method)->methodPointer;
    *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
    (*pIVar16)(pIVar17,pMVar14,pRVar11,&pvStack_5,
              *(void **)((longlong)alStack_15 + lVar9 + lVar8 + lVar6 + lVar3));
    *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
    FUN_?(lVar10,lVar7,uVar1);
    *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
    FUN_?(_StackX_10.monitor,lVar10);
    pvVar18 = method->klass->rgctx_data[1].rgctxDataDummy;
    *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
    value_00 = (Object *)FUN_?(pvVar18,_StackX_10.monitor);
    *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined **)((longlong)apuStack_2 + lVar9 + lVar8 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

