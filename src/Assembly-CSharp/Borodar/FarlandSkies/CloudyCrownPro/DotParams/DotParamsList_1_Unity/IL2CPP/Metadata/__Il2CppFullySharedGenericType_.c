
/* Int32 
   BinarySearch[__Il2CppFullySharedGenericType](IList`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[Unity
        ::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__BinarySearch
                  (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *list,
                  _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    apuStack_1[0] = &UNK_?;
    FUN_?(method);
  }
  pcVar2 = (char *)(ulonglong)((method->field7_0x38).rgctx_data[7].klass)->actualSize;
  apuStack_1[0] = &UNK_?;
  pcStack_3 = pcVar2;
  lVar4 = FUN_?(0xffffffffffffff0);
  lVar4 = -lVar4;
  plVar5 = (longlong *)((longlong)&pcStack_3 + lVar4);
  *(undefined **)((longlong)apuStack_1 + lVar4) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  plVar7 = (longlong *)((longlong)&pcStack_3 + lVar6 + lVar4);
  if (list == (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    this = (ArgumentNullException *)func_?(uVar8);
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    paramName = (String *)func_?(&StringLiteral_list);
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    FUN_?(this,method);
    pcVar9 = (code *)swi(3);
    iVar10 = (*pcVar9)();
    return iVar10;
  }
  pIVar11 = ((method->field7_0x38).rgctx_data[1].method)->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
  pMStackX_18 = (MonitorData *)(*pIVar11)();
  iVar12 = 0;
  pvVar13 = (method->field7_0x38).rgctx_data[4].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    pvVar13 = (void *)FUN_?(pvVar13);
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
  iVar14 = FUN_?(0,pvVar13,list);
  iVar14 = iVar14 + -1;
  pcVar15 = pcVar2;
  if (0 < iVar14) {
    do {
      pcStackX_20 = pcVar15;
      iVar16 = (iVar14 + iVar12) / 2;
      pIVar17 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((pIVar17->field_0x135 & 1) == 0) {
        *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
        pIVar17 = (Il2CppClass *)FUN_?(pIVar17);
      }
      pIVar18 = list->klass;
      uVar19 = 0;
      uVar20._0_1_ = (pIVar18->_1).rank;
      uVar20._1_1_ = (pIVar18->_1).minimumAlignment;
      aiStackX_8[0] = iVar16;
      if (uVar20 != 0) {
        do {
          if (pIVar18->interfaceOffsets[uVar19].interfaceType == pIVar17) {
            pVVar21 = &(pIVar18->vtable).get_Item + pIVar18->interfaceOffsets[uVar19].offset;
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
      *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
      pVVar21 = (VirtualInvokeData *)FUN_?(list,pIVar17,0);
code_?:
      lStack_22 = (longlong)plVar5;
      piStack_23 = aiStackX_8;
      pMVar24 = pVVar21->method;
      *(longlong **)((longlong)alStack_25 + lVar6 + lVar4) = plVar5;
      pIVar26 = pMVar24->invoker_method;
      pIVar11 = pMVar24->virtualMethodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
      (*pIVar26)(pIVar11,pMVar24,list,&piStack_23,*(void **)((longlong)alStack_25 + lVar6 + lVar4));
      p_Var21 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
      if (*(int *)&((method->field7_0x38).rgctx_data[7].method)->return_type < 0) {
        p_Var21 = p_StackX_10;
      }
      *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
      FUN_?(plVar7,p_Var21,pcStackX_20);
      if (pMStackX_18 == (MonitorData *)0x0) goto code_?;
      plVar27 = plVar5;
      plVar28 = plVar7;
      if (-1 < *(int *)&((method->field7_0x38).rgctx_data[7].method)->return_type) {
        plVar27 = (longlong *)*plVar5;
        plVar28 = (longlong *)*plVar7;
      }
      *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
      iVar29 = FUN_?(6,pMStackX_18,plVar27,plVar28);
      iVar30 = iVar16 + -1;
      if (iVar29 < 0) {
        iVar12 = iVar16 + 1;
        iVar30 = iVar14;
      }
      iVar14 = iVar30;
      pcVar2 = pcStack_3;
      pcVar15 = pcStackX_20;
    } while (iVar12 < iVar14);
  }
  pvVar13 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    FUN_?(pvVar13);
  }
  *(longlong **)((longlong)alStack_25 + lVar6 + lVar4) = plVar5;
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
  FUN_?();
  p_Var21 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)&((method->field7_0x38).rgctx_data[7].method)->return_type < 0) {
    p_Var21 = p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
  FUN_?(plVar7,p_Var21,(ulonglong)pcVar2 & 0xffffffff);
  if (pMStackX_18 != (MonitorData *)0x0) {
    if (-1 < *(int *)&((method->field7_0x38).rgctx_data[7].method)->return_type) {
      plVar5 = (longlong *)*plVar5;
      plVar7 = (longlong *)*plVar7;
    }
    lVar31 = *(longlong *)(*(longlong *)pMStackX_18 + 0x1a0);
    piStack_23 = (int *)plVar5;
    lStack_22 = (longlong)plVar7;
    *(int **)((longlong)alStack_25 + lVar6 + lVar4) = aiStackX_8;
    pcVar9 = *(code **)(lVar31 + 0x10);
    uVar8 = *(undefined8 *)(lVar31 + 8);
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
    (*pcVar9)(uVar8,lVar31,pMStackX_18,&piStack_23);
    if (aiStackX_8[0] < 0) {
      iVar12 = iVar12 + 1;
    }
    return iVar12;
  }
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar4) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[Unity
        ::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__FindIndexPerTime
                  (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  float time,MethodInfo *method)

{
  if (this != (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar1 = method->klass->rgctx_data[2].method;
    pvStack_2 = (void *)(*pMVar1->methodPointer)(this,pMVar1);
    pfStack_3 = afStackX_8;
    pMVar1 = method->klass->rgctx_data[3].method;
    afStackX_8[0] = time;
    (*pMVar1->invoker_method)
              ((method->klass->rgctx_data[3].method)->methodPointer,pMVar1,(void *)0x0,&pvStack_2,
               aiStackX_20);
    return aiStackX_20[0];
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

