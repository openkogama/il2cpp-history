
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
    func_?(&(this->fields).SortedParams,pDVar3);
    value = (Object__Class *)(this->fields).Params;
    pcVar4 = (char *)0x0;
    if (value != (Object__Class *)0x0) {
      ppOVar5 = (Object **)((int)&value->_0 + 0x10);
      while( true ) {
        if ((int)(value->_0).namespaze <= (int)pcVar4) {
          return;
        }
        if ((value->_0).namespaze <= pcVar4) break;
        pOVar6 = *ppOVar5;
        pDVar3 = (this->fields).SortedParams;
        if ((pOVar6 == (Object *)0x0) || (pDVar3 == (DotParamsList_1_System_Object_ *)0x0))
        goto code_?;
        pMVar7 = method->klass->rgctx_data[6].method;
        value = pOVar6[1].klass;
        uVar8 = mscorlib.dll::System::Array::Array_BinarySearch_71
                          ((pDVar3->fields)._.keys,0,(pDVar3->fields)._._size,(float)value,
                           (pDVar3->fields)._.comparer,pMVar7->klass->rgctx_data[0xc].method);
        if ((int)uVar8 < 0) {
          func_?(pDVar3,~uVar8,value,pOVar6,pMVar7->klass->rgctx_data[0xe].rgctxDataDummy)
          ;
          pcVar4 = pcVar4 + 1;
          ppOVar5 = ppOVar5 + 1;
        }
        else {
          pOVar1 = (pDVar3->fields)._.values;
          if (pOVar1 == (Object__Array *)0x0) goto code_?;
          if (pOVar1->max_length <= uVar8) break;
          pOVar1->vector[uVar8] = pOVar6;
          value = (Object__Class *)&UNK_?;
          func_?(pOVar1->vector + uVar8,pOVar6);
          piVar9 = &(pDVar3->fields)._.version;
          *piVar9 = *piVar9 + 1;
          pcVar4 = pcVar4 + 1;
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
  if ((this->fields).SortedParams == (DotParamsList_1_System_Object_ *)0x0) {
    pOVar1 = (this->fields).Params;
    if (pOVar1 == (Object__Array *)0x0) goto code_?;
    pIVar2 = method->klass->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pDVar3 = (DotParamsList_1_System_Object_ *)func_?(pIVar2);
    DotParamsList`1[System::Object]::DotParamsList_1_System_Object___ctor
              (pDVar3,pOVar1->max_length,method->klass->rgctx_data[3].method);
    (this->fields).SortedParams = pDVar3;
    func_?(&(this->fields).SortedParams,pDVar3);
  }
  else {
    pDVar3 = (this->fields).SortedParams;
    piVar4 = &(pDVar3->fields)._.version;
    *piVar4 = *piVar4 + 1;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pDVar3->fields)._.values,0,(pDVar3->fields)._._size,(MethodInfo *)0x0);
    (pDVar3->fields)._._size = 0;
  }
  pOVar1 = (this->fields).Params;
  pcVar5 = (char *)0x0;
  if (pOVar1 != (Object__Array *)0x0) {
    ppIVar6 = (Il2CppClass **)pOVar1->vector;
    while( true ) {
      if ((int)pOVar1->max_length <= (int)pcVar5) {
        return;
      }
      if ((char *)pOVar1->max_length <= pcVar5) break;
      pIVar2 = *ppIVar6;
      pDVar3 = (this->fields).SortedParams;
      if ((pIVar2 == (Il2CppClass *)0x0) || (pDVar3 == (DotParamsList_1_System_Object_ *)0x0))
      goto code_?;
      pMVar7 = method->klass->rgctx_data[6].method;
      value = pIVar2->name;
      pOVar1 = (Object__Array *)pMVar7->klass->rgctx_data[0xc].method;
      uVar8 = mscorlib.dll::System::Array::Array_BinarySearch_71
                        ((pDVar3->fields)._.keys,0,(pDVar3->fields)._._size,(float)value,
                         (pDVar3->fields)._.comparer,(MethodInfo *)pOVar1);
      if ((int)uVar8 < 0) {
        uVar8 = ~uVar8;
        this = (SortedParamsList_1_System_Object_ *)pMVar7->klass->rgctx_data[0xe].method;
        func_?(pDVar3,uVar8,value);
        pcVar5 = pcVar5 + 1;
        ppIVar6 = (Il2CppClass **)(uVar8 + 4);
      }
      else {
        pOVar9 = (pDVar3->fields)._.values;
        if (pOVar9 == (Object__Array *)0x0) goto code_?;
        if (pOVar9->max_length <= uVar8) break;
        pOVar9->vector[uVar8] = (Object *)pIVar2;
        func_?();
        pcVar5 = pcVar5 + 1;
        piVar4 = &(pDVar3->fields)._.version;
        *piVar4 = *piVar4 + 1;
        ppIVar6 = ppIVar6 + 1;
        this = (SortedParamsList_1_System_Object_ *)pIVar2;
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (this->fields).Params = pOVar2;
  method_00 = (MethodInfo *)&this->fields;
  func_?(method_00,pOVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

