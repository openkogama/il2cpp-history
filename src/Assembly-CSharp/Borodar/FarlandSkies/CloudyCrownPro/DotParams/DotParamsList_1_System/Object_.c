
/* Int32 BinarySearch[Single](IList`1[System.Single], Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                  (IList_1_System_Single_ *list,float value,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  if (list == (IList_1_System_Single_ *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    func_?(this,method);
  }
  else {
    pCVar2 = mscorlib.dll::System::Collections::Generic::Comparer`1[System::Single]::
             Comparer_1_System_Single__get_Default((method->field7_0x1c).rgctx_data[1].method);
    iVar3 = 0;
    pIVar4 = (method->field7_0x1c).rgctx_data[4].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    iStack_5 = func_?(0,pIVar4,list);
    iStack_5 = iStack_5 + -1;
    if (0 < iStack_5) {
      do {
        iVar6 = (iStack_5 + iVar3) / 2;
        pIVar4 = ((method->field7_0x1c).rgctx_data)->klass;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        pIVar7 = list->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pIVar7->_1).rank;
        uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar7->interfaceOffsets[uVar8].interfaceType == pIVar4) {
              ppMVar10 = &(&(list->klass->vtable).get_Item)[pIVar7->interfaceOffsets[uVar8].offset].
                         method;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        ppMVar10 = (MethodInfo **)func_?(list,pIVar4,0);
code_?:
        fVar11 = (float10)(*(code *)*ppMVar10)(list,iVar6,ppMVar10[1]);
        if (pCVar2 == (Comparer_1_System_Single_ *)0x0) goto code_?;
        iVar12 = (*(code *)(pCVar2->klass->vtable).__unknown.method)
                          (pCVar2,(float)fVar11,value,pCVar2->klass[1]._0.image);
        if (iVar12 < 0) {
          iVar3 = iVar6 + 1;
        }
        else {
          iStack_5 = iVar6 + -1;
        }
      } while (iVar3 < iStack_5);
    }
    pIVar4 = ((method->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    fVar11 = (float10)func_?(0,pIVar4,list,iVar3);
    if (pCVar2 != (Comparer_1_System_Single_ *)0x0) {
      iVar6 = (*(code *)(pCVar2->klass->vtable).__unknown.method)
                        (pCVar2,(float)fVar11,value,pCVar2->klass[1]._0.image);
      if (iVar6 < 0) {
        iVar3 = iVar3 + 1;
      }
      return iVar3;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                  (DotParamsList_1_System_Object_ *this,float time,MethodInfo *method)

{
  if (this != (DotParamsList_1_System_Object_ *)0x0) {
    list = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
           SortedList_2_System_Single_System_Object__get_Keys
                     ((SortedList_2_System_Single_System_Object_ *)this,
                      method->klass->rgctx_data[2].method);
    iVar1 = DotParamsList_1_System_Object__BinarySearch
                      (list,time,method->klass->rgctx_data[3].method);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* DotParamsList`1[System.Object](Int32) */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[System::
     Object]::DotParamsList_1_System_Object___ctor
               (DotParamsList_1_System_Object_ *this,int32_t capacity,MethodInfo *method)

{
  System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
  SortedList_2_System_Single_System_Object___ctor_1
            ((SortedList_2_System_Single_System_Object_ *)this,capacity,
             method->klass->rgctx_data->method);
  return;
}

