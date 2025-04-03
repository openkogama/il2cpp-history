
/* Void Init() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Init
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields).Params;
  if (pOVar1 != (Object__Array *)0x0) {
    pIVar2 = method->klass->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pDVar3 = (DotParamsList_1_System_Object_ *)func_?(pIVar2);
    DotParamsList`1[System::Object]::DotParamsList_1_System_Object___ctor
              (pDVar3,pOVar1->max_length,method->klass->rgctx_data[3].method);
    (this->fields).SortedParams = pDVar3;
    value = (Il2CppArrayBounds *)&(this->fields).SortedParams;
    func_?(value,pDVar3);
    pOVar1 = (this->fields).Params;
    uVar4 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar5 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar4) {
          return;
        }
        if (pOVar1->max_length <= uVar4) break;
        pOVar6 = (Object__Array *)*ppOVar5;
        pDVar3 = (DotParamsList_1_System_Object_ *)value->length;
        if ((pOVar6 == (Object__Array *)0x0) || (pDVar3 == (DotParamsList_1_System_Object_ *)0x0))
        goto code_?;
        pMVar7 = method->klass->rgctx_data[6].method;
        value = pOVar6->bounds;
        uVar8 = mscorlib.dll::System::Array::Array_BinarySearch_73
                          ((pDVar3->fields)._.keys,0,(pDVar3->fields)._._size,(float)value,
                           (pDVar3->fields)._.comparer,pMVar7->klass->rgctx_data[0xc].method);
        if ((int)uVar8 < 0) {
          pOVar1 = pOVar6;
          func_?(pDVar3,~uVar8,value,pOVar6,pMVar7->klass->rgctx_data[0xe].rgctxDataDummy);
          uVar4 = uVar4 + 1;
          ppOVar5 = ppOVar5 + 1;
        }
        else {
          pOVar1 = (pDVar3->fields)._.values;
          if (pOVar1 == (Object__Array *)0x0) goto code_?;
          if (pOVar1->max_length <= uVar8) break;
          pOVar1->vector[uVar8] = (Object *)pOVar6;
          pOVar1 = (Object__Array *)(pOVar1->vector + uVar8);
          value = (Il2CppArrayBounds *)&UNK_?;
          func_?(pOVar1,pOVar6);
          piVar9 = &(pDVar3->fields)._.version;
          *piVar9 = *piVar9 + 1;
          uVar4 = uVar4 + 1;
          ppOVar5 = ppOVar5 + 1;
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Update
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pDVar1 = (this->fields).SortedParams;
  ppDVar2 = &(this->fields).SortedParams;
  if (pDVar1 == (DotParamsList_1_System_Object_ *)0x0) {
    pOVar3 = (this->fields).Params;
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    pIVar4 = method->klass->rgctx_data[2].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    pDVar1 = (DotParamsList_1_System_Object_ *)func_?(pIVar4);
    DotParamsList`1[System::Object]::DotParamsList_1_System_Object___ctor
              (pDVar1,pOVar3->max_length,method->klass->rgctx_data[3].method);
    *ppDVar2 = pDVar1;
    func_?(ppDVar2,pDVar1);
  }
  else {
    piVar5 = &(pDVar1->fields)._.version;
    *piVar5 = *piVar5 + 1;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pDVar1->fields)._.values,0,(pDVar1->fields)._._size,(MethodInfo *)0x0);
    (pDVar1->fields)._._size = 0;
  }
  pcVar6 = (char *)0x0;
  pOVar3 = (this->fields).Params;
  if (pOVar3 != (Object__Array *)0x0) {
    ppIVar7 = (Il2CppClass **)pOVar3->vector;
    while( true ) {
      if ((int)pOVar3->max_length <= (int)pcVar6) {
        return;
      }
      if ((char *)pOVar3->max_length <= pcVar6) break;
      pIVar4 = *ppIVar7;
      pcVar8 = ((Il2CppClass *)this)->namespaze;
      if ((pIVar4 == (Il2CppClass *)0x0) || (pcVar8 == (char *)0x0)) goto code_?;
      pMVar9 = method->klass->rgctx_data[6].method;
      value = pIVar4->name;
      pOVar3 = (Object__Array *)pMVar9->klass->rgctx_data[0xc].method;
      uVar10 = mscorlib.dll::System::Array::Array_BinarySearch_73
                        (*(Single__Array **)(pcVar8 + 8),0,*(int32_t *)(pcVar8 + 0x10),(float)value,
                         *(IComparer_1_System_Single_ **)(pcVar8 + 0x18),(MethodInfo *)pOVar3);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
        this = (SortedParamsList_1_System_Object_ *)pMVar9->klass->rgctx_data[0xe].method;
        func_?(pcVar8,uVar10,value);
        pcVar6 = pcVar6 + 1;
        ppIVar7 = (Il2CppClass **)(uVar10 + 4);
      }
      else {
        iVar11 = *(int *)(pcVar8 + 0xc);
        if (iVar11 == 0) goto code_?;
        if (*(uint *)(iVar11 + 0xc) <= uVar10) break;
        *(Il2CppClass **)(iVar11 + 0x10 + uVar10 * 4) = pIVar4;
        func_?();
        *(int *)(pcVar8 + 0x14) = *(int *)(pcVar8 + 0x14) + 1;
        pcVar6 = pcVar6 + 1;
        ppIVar7 = ppIVar7 + 1;
        this = (SortedParamsList_1_System_Object_ *)pIVar4;
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* SortedParamsList`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[8].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pOVar2 = (Object__Array *)func_?(pIVar1,0);
  method_00 = (MethodInfo *)&this->fields;
  ((SortedParamsList_1_System_Object___Fields *)method_00)->Params = pOVar2;
  func_?(method_00,pOVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

