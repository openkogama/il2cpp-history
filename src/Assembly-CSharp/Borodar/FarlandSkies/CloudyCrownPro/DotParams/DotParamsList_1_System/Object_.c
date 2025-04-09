
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
    iStack_4 = 0;
    pIVar5 = (method->field7_0x1c).rgctx_data[4].klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    iVar6 = func_?(0,pIVar5,list);
    iVar6 = iVar6 + -1;
    if (0 < iVar6) {
      do {
        iVar7 = (iVar6 + iStack_4) / 2;
        pIVar5 = ((method->field7_0x1c).rgctx_data)->klass;
        if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
          pIVar5 = (Il2CppClass *)func_?(pIVar5);
        }
        pIVar8 = list->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType == pIVar5) {
              ppMVar11 = &(&(pIVar8->vtable).get_Item)[pIVar8->interfaceOffsets[uVar9].offset].
                         method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?(list,pIVar5,0);
code_?:
        fVar12 = (float10)(*(code *)*ppMVar11)(list,iVar7,ppMVar11[1]);
        if (pCVar2 == (Comparer_1_System_Single_ *)0x0) goto code_?;
        iVar13 = (*(code *)(pCVar2->klass->vtable).__unknown.method)
                           (pCVar2,(float)fVar12,value,pCVar2->klass[1]._0.image);
        iVar3 = iStack_4;
        iVar14 = iVar7 + -1;
        if (iVar13 < 0) {
          iVar3 = iVar7 + 1;
          iVar14 = iVar6;
        }
        iVar6 = iVar14;
        iStack_4 = iVar3;
      } while (iVar3 < iVar6);
    }
    pIVar5 = ((method->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    fVar12 = (float10)func_?(0,pIVar5,list,iVar3);
    if (pCVar2 != (Comparer_1_System_Single_ *)0x0) {
      iVar7 = (*(code *)(pCVar2->klass->vtable).__unknown.method)
                        (pCVar2,(float)fVar12,value,pCVar2->klass[1]._0.image);
      iVar6 = iVar3 + 1;
      if (-1 < iVar7) {
        iVar6 = iVar3;
      }
      return iVar6;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  iVar16 = (*pcVar15)();
  return iVar16;
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

