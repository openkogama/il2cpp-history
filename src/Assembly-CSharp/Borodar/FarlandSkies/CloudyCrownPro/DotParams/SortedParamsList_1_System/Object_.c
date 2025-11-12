
/* Void Init() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Init
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields).Params;
  if (pOVar1 != (Object__Array *)0x0) {
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    this_00 = (SortedList_2_System_Single_System_Object_ *)FUN_?(pvVar2);
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              (this_00,(int32_t)pOVar1->max_length,
               (method->klass->rgctx_data[3].method)->klass->rgctx_data->method);
    bVar3 = iRam_? != 0;
    (this->fields).SortedParams = (DotParamsList_1_System_Object_ *)this_00;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).SortedParams >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pOVar1 = (this->fields).Params;
    uVar4 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar8 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar4) {
          return;
        }
        if ((uint)pOVar1->max_length <= uVar4) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pOVar10 = *ppOVar8;
        pDVar11 = (this->fields).SortedParams;
        if ((pOVar10 == (Object *)0x0) || (pDVar11 == (DotParamsList_1_System_Object_ *)0x0)) break;
        pMVar12 = method->klass->rgctx_data[6].method;
        uVar13 = *(undefined4 *)&pOVar10[1].klass;
        uVar14 = FUN_?((pDVar11->fields)._.keys,0,(pDVar11->fields)._._size,uVar13,
                               (pDVar11->fields)._.comparer,
                               pMVar12->klass->rgctx_data[0xc].rgctxDataDummy);
        if ((int)uVar14 < 0) {
          FUN_?(pDVar11,~uVar14,uVar13,pOVar10,pMVar12->klass->rgctx_data[0xe].rgctxDataDummy);
          uVar4 = uVar4 + 1;
          ppOVar8 = ppOVar8 + 1;
        }
        else {
          pOVar15 = (pDVar11->fields)._.values;
          if (pOVar15 == (Object__Array *)0x0) break;
          FUN_?(pOVar15,(longlong)(int)uVar14,pOVar10);
          piVar16 = &(pDVar11->fields)._.version;
          *piVar16 = *piVar16 + 1;
          uVar4 = uVar4 + 1;
          ppOVar8 = ppOVar8 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Update
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  uVar1 = 0;
  if ((this->fields).SortedParams == (DotParamsList_1_System_Object_ *)0x0) {
    pOVar2 = (this->fields).Params;
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    this_00 = (SortedList_2_System_Single_System_Object_ *)FUN_?(pvVar3);
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              (this_00,(int32_t)pOVar2->max_length,
               (method->klass->rgctx_data[3].method)->klass->rgctx_data->method);
    bVar4 = iRam_? != 0;
    (this->fields).SortedParams = (DotParamsList_1_System_Object_ *)this_00;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).SortedParams >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    pDVar9 = (this->fields).SortedParams;
    piVar10 = &(pDVar9->fields)._.version;
    *piVar10 = *piVar10 + 1;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pDVar9->fields)._.values,0,(pDVar9->fields)._._size,(MethodInfo *)0x0);
    (pDVar9->fields)._._size = 0;
  }
  pOVar2 = (this->fields).Params;
  if (pOVar2 != (Object__Array *)0x0) {
    ppOVar11 = pOVar2->vector;
    while( true ) {
      if ((int)pOVar2->max_length <= (int)uVar1) {
        return;
      }
      if ((uint)pOVar2->max_length <= uVar1) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pOVar13 = *ppOVar11;
      pDVar9 = (this->fields).SortedParams;
      if ((pOVar13 == (Object *)0x0) || (pDVar9 == (DotParamsList_1_System_Object_ *)0x0)) break;
      pMVar14 = method->klass->rgctx_data[6].method;
      uVar15 = *(undefined4 *)&pOVar13[1].klass;
      uVar5 = FUN_?((pDVar9->fields)._.keys,0,(pDVar9->fields)._._size,uVar15,
                             (pDVar9->fields)._.comparer,
                             pMVar14->klass->rgctx_data[0xc].rgctxDataDummy);
      if ((int)uVar5 < 0) {
        FUN_?(pDVar9,~uVar5,uVar15,pOVar13,pMVar14->klass->rgctx_data[0xe].rgctxDataDummy);
        uVar1 = uVar1 + 1;
        ppOVar11 = ppOVar11 + 1;
      }
      else {
        pOVar16 = (pDVar9->fields)._.values;
        if (pOVar16 == (Object__Array *)0x0) break;
        FUN_?(pOVar16,(longlong)(int)uVar5,pOVar13);
        piVar10 = &(pDVar9->fields)._.version;
        *piVar10 = *piVar10 + 1;
        uVar1 = uVar1 + 1;
        ppOVar11 = ppOVar11 + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* SortedParamsList`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[8].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pOVar2 = (Object__Array *)FUN_?(pvVar1,0);
  bVar3 = iRam_? != 0;
  (this->fields).Params = pOVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

