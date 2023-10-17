
/* Void Init() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Init
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields).Params;
  if (pOVar1 != (Object__Array *)0x0) {
    pvVar2 = method->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pDVar3 = (DotParamsList_1_System_Object_ *)func_?(pvVar2);
    if (pDVar3 != (DotParamsList_1_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                (pDVar3,pOVar1->max_length,method->klass->rgctx_data[1].rgctxDataDummy);
      (this->fields).SortedParams = pDVar3;
      func_?(&(this->fields).SortedParams,pDVar3);
      pOVar1 = (this->fields).Params;
      uVar4 = 0;
      if (pOVar1 != (Object__Array *)0x0) {
        ppOVar5 = pOVar1->vector;
        while( true ) {
          if ((int)pOVar1->max_length <= (int)uVar4) {
            return;
          }
          if (pOVar1->max_length <= uVar4) break;
          pOVar6 = *ppOVar5;
          if ((pOVar6 == (Object *)0x0) ||
             (pDVar3 = (this->fields).SortedParams, pDVar3 == (DotParamsList_1_System_Object_ *)0x0)
             ) goto code_?;
          (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                    (pDVar3,pOVar6[1].klass,pOVar6,method->klass->rgctx_data[4].rgctxDataDummy);
          uVar4 = uVar4 + 1;
          ppOVar5 = ppOVar5 + 1;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Update
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = this;
  if ((this->fields).SortedParams == (DotParamsList_1_System_Object_ *)0x0) {
    pOVar2 = (this->fields).Params;
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pDVar4 = (DotParamsList_1_System_Object_ *)func_?(pvVar3);
    if (pDVar4 == (DotParamsList_1_System_Object_ *)0x0) goto code_?;
    (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
              (pDVar4,pOVar2->max_length,method->klass->rgctx_data[1].rgctxDataDummy);
    (this->fields).SortedParams = pDVar4;
    func_?(&(this->fields).SortedParams,pDVar4);
  }
  else {
    (*(method->klass->rgctx_data[5].method)->virtualMethodPointer)
              ((this->fields).SortedParams,method->klass->rgctx_data[5].rgctxDataDummy);
  }
  pOVar2 = (this->fields).Params;
  this = (SortedParamsList_1_System_Object_ *)0x0;
  if (pOVar2 != (Object__Array *)0x0) {
    ppOVar5 = pOVar2->vector;
    while( true ) {
      if ((int)pOVar2->max_length <= (int)this) {
        return;
      }
      if ((SortedParamsList_1_System_Object_ *)pOVar2->max_length <= this) break;
      pOVar6 = *ppOVar5;
      if ((pOVar6 == (Object *)0x0) ||
         (pDVar4 = (pSVar1->fields).SortedParams, pDVar4 == (DotParamsList_1_System_Object_ *)0x0))
      goto code_?;
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pDVar4,pOVar6[1].klass,pOVar6,method->klass->rgctx_data[4].rgctxDataDummy);
      this = (SortedParamsList_1_System_Object_ *)((int)&this->klass + 1);
      ppOVar5 = ppOVar5 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SortedParamsList`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[6].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pOVar2 = (Object__Array *)func_?(pvVar1,0);
  (this->fields).Params = pOVar2;
  method_00 = (MethodInfo *)&this->fields;
  func_?(method_00,pOVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

