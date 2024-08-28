
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
    this_01 = (DotParamsList_1_System_Object_ *)func_?(pIVar2);
    DotParamsList`1[System::Object]::DotParamsList_1_System_Object___ctor
              (this_01,pOVar1->max_length,method->klass->rgctx_data[3].method);
    ppDVar3 = &(this->fields).SortedParams;
    *ppDVar3 = this_01;
    func_?(ppDVar3,this_01);
    uVar4 = 0;
    pOVar1 = (this->fields).Params;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar5 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar4) {
          return;
        }
        if (pOVar1->max_length <= uVar4) break;
        value = *ppOVar5;
        if ((value == (Object *)0x0) ||
           (this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields).SortedParams,
           this_00 == (SortedList_2_System_Single_System_Object_ *)0x0)) goto code_?;
        System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
        SortedList_2_System_Single_System_Object__set_Item
                  (this_00,(float)value[1].klass,value,method->klass->rgctx_data[6].method);
        uVar4 = uVar4 + 1;
        ppOVar5 = ppOVar5 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Update
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = (SortedList_2_System_Single_System_Object_ *)(this->fields).SortedParams;
  ppDVar2 = &(this->fields).SortedParams;
  if (pSVar1 == (SortedList_2_System_Single_System_Object_ *)0x0) {
    pOVar3 = (this->fields).Params;
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    pIVar4 = method->klass->rgctx_data[2].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    this_00 = (DotParamsList_1_System_Object_ *)func_?(pIVar4);
    DotParamsList`1[System::Object]::DotParamsList_1_System_Object___ctor
              (this_00,pOVar3->max_length,method->klass->rgctx_data[3].method);
    *ppDVar2 = this_00;
    func_?(ppDVar2,this_00);
  }
  else {
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object__Clear(pSVar1,method->klass->rgctx_data[7].method);
  }
  ppIStack_5 = &method->klass;
  uVar6 = 0;
  pOVar3 = (this->fields).Params;
  if (pOVar3 != (Object__Array *)0x0) {
    ppOVar7 = pOVar3->vector;
    while( true ) {
      if ((int)pOVar3->max_length <= (int)uVar6) {
        return;
      }
      if (pOVar3->max_length <= uVar6) break;
      value = *ppOVar7;
      if ((value == (Object *)0x0) ||
         (pSVar1 = (SortedList_2_System_Single_System_Object_ *)(this->fields).SortedParams,
         pSVar1 == (SortedList_2_System_Single_System_Object_ *)0x0)) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__set_Item
                (pSVar1,(float)value[1].klass,value,(*ppIStack_5)->rgctx_data[6].method);
      uVar6 = uVar6 + 1;
      ppOVar7 = ppOVar7 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

