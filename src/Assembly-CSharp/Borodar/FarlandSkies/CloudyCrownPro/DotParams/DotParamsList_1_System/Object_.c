
/* Int32 BinarySearch[Single](IList`1[System.Single], Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                  (IList_1_System_Single_ *list,float value,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  if (list == (IList_1_System_Single_ *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    FUN_?(this,method);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pCVar4 = mscorlib.dll::System::Collections::Generic::Comparer`1[System::Single]::
           Comparer_1_System_Single__get_Default((method->field7_0x38).rgctx_data[1].method);
  iVar5 = 0;
  pvVar6 = (method->field7_0x38).rgctx_data[4].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
    pvVar6 = (void *)FUN_?(pvVar6);
  }
  iVar7 = FUN_?(0,pvVar6,list);
  iVar7 = iVar7 + -1;
  uVar8 = extraout_XMM0_Da;
  iVar9 = 0;
  if (0 < iVar7) {
    do {
      uVar10 = (iVar7 + iVar9) / 2;
      pIVar11 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((pIVar11->field_0x135 & 1) == 0) {
        pIVar11 = (Il2CppClass *)FUN_?(pIVar11);
      }
      pIVar12 = list->klass;
      uVar13 = 0;
      uVar14._0_1_ = (pIVar12->_1).rank;
      uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
      if (uVar14 != 0) {
        do {
          if (pIVar12->interfaceOffsets[uVar13].interfaceType == pIVar11) {
            pVVar15 = &(pIVar12->vtable).get_Item + pIVar12->interfaceOffsets[uVar13].offset;
            goto code_?;
          }
          uVar16 = (short)uVar13 + 1;
          uVar13 = (ulonglong)uVar16;
        } while (uVar16 < uVar14);
      }
      pVVar15 = (VirtualInvokeData *)FUN_?(list,pIVar11,0);
code_?:
      uVar8 = (*pVVar15->methodPtr)(list,(ulonglong)uVar10,pVVar15->method);
      if (pCVar4 == (Comparer_1_System_Single_ *)0x0) goto DAT_?;
      iVar17 = (*(pCVar4->klass->vtable).__unknown.methodPtr)
                        (pCVar4,uVar8,value,(pCVar4->klass->vtable).__unknown.method);
      iVar5 = iVar9;
      iVar9 = uVar10 - 1;
      if (iVar17 < 0) {
        iVar5 = uVar10 + 1;
        iVar9 = iVar7;
      }
      iVar7 = iVar9;
      uVar8 = extraout_XMM0_Da_00;
      iVar9 = iVar5;
    } while (iVar5 < iVar7);
  }
  pvVar6 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
    pvVar6 = (void *)FUN_?(pvVar6);
    uVar8 = extraout_XMM0_Da_01;
  }
  uVar8 = FUN_?(uVar8,pvVar6,list,iVar5);
  if (pCVar4 != (Comparer_1_System_Single_ *)0x0) {
    iVar9 = (*(pCVar4->klass->vtable).__unknown.methodPtr)
                      (pCVar4,uVar8,value,(pCVar4->klass->vtable).__unknown.method);
    iVar7 = iVar5 + 1;
    if (-1 < iVar9) {
      iVar7 = iVar5;
    }
    return iVar7;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                  (DotParamsList_1_System_Object_ *this,float time,MethodInfo *method)

{
  if (this == (DotParamsList_1_System_Object_ *)0x0) {
    FUN_?(0,in_RDX,method,in_R9,CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),
                  CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  plVar3 = (longlong *)
            FUN_?(this,(method->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].
                               rgctxDataDummy);
  pMVar4 = method->klass->rgctx_data[3].method;
  if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(pMVar4);
  }
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar5);
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    FUN_?(this_00,pMVar4);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pCVar6 = mscorlib.dll::System::Collections::Generic::Comparer`1[System::Single]::
           Comparer_1_System_Single__get_Default((pMVar4->field7_0x38).rgctx_data[1].method);
  iVar7 = 0;
  pvVar8 = (pMVar4->field7_0x38).rgctx_data[4].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
    pvVar8 = (void *)FUN_?(pvVar8);
  }
  iVar9 = FUN_?(0,pvVar8,plVar3);
  iVar9 = iVar9 + -1;
  uVar10 = extraout_XMM0_Da;
  iVar11 = 0;
  if (0 < iVar9) {
    do {
      iVar12 = (iVar9 + iVar11) / 2;
      pvVar8 = ((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
        pvVar8 = (void *)FUN_?(pvVar8);
      }
      lVar13 = *plVar3;
      uVar14 = 0;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(void **)(*(longlong *)(lVar13 + 0xb0) + uVar14 * 0x10) == pvVar8) {
            puVar15 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar14 * 0x10) * 0x10 +
                       0x138 + lVar13);
            goto code_?;
          }
          uVar16 = (short)uVar14 + 1;
          uVar14 = (ulonglong)uVar16;
        } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar15 = (undefined8 *)FUN_?(plVar3,pvVar8,0);
code_?:
      uVar10 = (*(code *)*puVar15)(plVar3,iVar12,puVar15[1]);
      if (pCVar6 == (Comparer_1_System_Single_ *)0x0) goto DAT_?;
      iVar17 = (*(pCVar6->klass->vtable).__unknown.methodPtr)
                        (pCVar6,uVar10,time,(pCVar6->klass->vtable).__unknown.method);
      iVar7 = iVar11;
      iVar11 = iVar12 + -1;
      if (iVar17 < 0) {
        iVar7 = iVar12 + 1;
        iVar11 = iVar9;
      }
      iVar9 = iVar11;
      uVar10 = extraout_XMM0_Da_00;
      iVar11 = iVar7;
    } while (iVar7 < iVar9);
  }
  pvVar8 = ((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
    pvVar8 = (void *)FUN_?(pvVar8);
    uVar10 = extraout_XMM0_Da_01;
  }
  uVar10 = FUN_?(uVar10,pvVar8,plVar3,iVar7);
  if (pCVar6 != (Comparer_1_System_Single_ *)0x0) {
    iVar11 = (*(pCVar6->klass->vtable).__unknown.methodPtr)
                      (pCVar6,uVar10,time,(pCVar6->klass->vtable).__unknown.method);
    iVar9 = iVar7 + 1;
    if (-1 < iVar11) {
      iVar9 = iVar7;
    }
    return iVar9;
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* DotParamsList`1[System.Object](Int32) */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[System::
     Object]::DotParamsList_1_System_Object___ctor
               (DotParamsList_1_System_Object_ *this,int32_t capacity,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data->method;
  if (capacity < 0) {
    aiStackX_10[0] = capacity;
    actualValue = (Object *)func_?(uRam_?,aiStackX_10);
    uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
    message = (String *)func_?(&StringLiteral_Non_negative_number_required_);
    paramName = (String *)func_?(&StringLiteral_capacity);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    FUN_?(this_00,pMVar1);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar4 = pMVar1->klass->rgctx_data[9].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pSVar5 = (Single__Array *)FUN_?(pvVar4,capacity);
  bVar6 = iRam_? != 0;
  (this->fields)._.keys = pSVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pvVar4 = pMVar1->klass->rgctx_data[10].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pOVar11 = (Object__Array *)FUN_?(pvVar4,capacity);
  bVar6 = iRam_? != 0;
  (this->fields)._.values = pOVar11;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.values >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pCVar12 = mscorlib.dll::System::Collections::Generic::Comparer`1[System::Single]::
           Comparer_1_System_Single__get_Default(pMVar1->klass->rgctx_data[5].method);
  bVar6 = iRam_? != 0;
  (this->fields)._.comparer = (IComparer_1_System_Single_ *)pCVar12;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.comparer >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

