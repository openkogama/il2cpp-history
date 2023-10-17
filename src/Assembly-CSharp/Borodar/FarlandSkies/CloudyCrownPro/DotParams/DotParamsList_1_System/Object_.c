
/* Int32 BinarySearch[Object](IList`1[System.Object], Object) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                  (IList_1_System_Object_ *list,Object *value,MethodInfo *method)

{
  if (list == (IList_1_System_Object_ *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    uVar1 = func_?(&
                            int_MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<System::Object>__BinarySearch<System::Object>_System__Collections__Generic__IList<System::Object>__System__Object_
                           );
    func_?(this,uVar1);
  }
  else {
    piVar2 = (int *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                              (((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    iStack_3 = 0;
    pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    iStack_5 = func_?(0,pvVar4,list);
    iStack_5 = iStack_5 + -1;
    iVar6 = 0;
    if (0 < iStack_5) {
      do {
        iVar6 = (iStack_5 + iStack_3) / 2;
        pIVar7 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
        if (pIVar7->initialized_and_no_error == 0) {
          pIVar7 = (Il2CppClass *)func_?(pIVar7);
        }
        pIVar8 = list->klass;
        uVar9 = 0;
        uVar10 = (pIVar8->_1).interface_offsets_count;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType == pIVar7) {
              pVVar11 = &(pIVar8->vtable).get_Item + pIVar8->interfaceOffsets[uVar9].offset;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        pVVar11 = (VirtualInvokeData *)func_?(list,pIVar7,0);
code_?:
        uVar1 = (*pVVar11->methodPtr)(list,iVar6,pVVar11->method);
        if (piVar2 == (int *)0x0) goto code_?;
        iVar12 = (**(code **)(*piVar2 + 0xec))(piVar2,uVar1,value,*(undefined4 *)(*piVar2 + 0xf0));
        if (iVar12 < 0) {
          iStack_3 = iVar6 + 1;
        }
        else {
          iStack_5 = iVar6 + -1;
        }
        iVar6 = iStack_3;
      } while (iStack_3 < iStack_5);
    }
    pvVar4 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar1 = func_?(0,pvVar4,list,iVar6);
    if (piVar2 != (int *)0x0) {
      iVar12 = (**(code **)(*piVar2 + 0xec))(piVar2,uVar1,value,*(undefined4 *)(*piVar2 + 0xf0));
      if (iVar12 < 0) {
        iVar6 = iVar6 + 1;
      }
      return iVar6;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Int32 BinarySearch[Single](IList`1[System.Single], Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch_1
                  (IList_1_System_Single_ *list,float value,MethodInfo *method)

{
  if (list == (IList_1_System_Single_ *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,method_00);
    uVar1 = func_?(&
                             int_MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<System::Object>__BinarySearch<float>_System__Collections__Generic__IList<float>__float_
                            );
    func_?(this,uVar1);
  }
  else {
    piVar2 = (int *)(*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                              (((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    iStack_3 = 0;
    pvVar4 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    iStack_5 = func_?(0,pvVar4,list);
    iStack_5 = iStack_5 + -1;
    iVar6 = 0;
    if (0 < iStack_5) {
      do {
        iVar6 = (iStack_5 + iStack_3) / 2;
        pIVar7 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
        if (pIVar7->initialized_and_no_error == 0) {
          pIVar7 = (Il2CppClass *)func_?(pIVar7);
        }
        pIVar8 = list->klass;
        uVar9 = 0;
        uVar10 = (pIVar8->_1).interface_offsets_count;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType == pIVar7) {
              pVVar11 = &(pIVar8->vtable).get_Item + pIVar8->interfaceOffsets[uVar9].offset;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        pVVar11 = (VirtualInvokeData *)func_?(list,pIVar7,0);
code_?:
        fVar12 = (float10)(*pVVar11->methodPtr)(list,iVar6,pVVar11->method);
        if (piVar2 == (int *)0x0) goto code_?;
        iVar13 = (**(code **)(*piVar2 + 0xec))
                          (piVar2,(float)fVar12,value,*(undefined4 *)(*piVar2 + 0xf0));
        if (iVar13 < 0) {
          iStack_3 = iVar6 + 1;
        }
        else {
          iStack_5 = iVar6 + -1;
        }
        iVar6 = iStack_3;
      } while (iStack_3 < iStack_5);
    }
    pvVar4 = (method->field7_0x1c).rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    fVar12 = (float10)func_?(0,pvVar4,list,iVar6);
    if (piVar2 != (int *)0x0) {
      iVar13 = (**(code **)(*piVar2 + 0xec))
                        (piVar2,(float)fVar12,value,*(undefined4 *)(*piVar2 + 0xf0));
      if (iVar13 < 0) {
        iVar6 = iVar6 + 1;
      }
      return iVar6;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                  (DotParamsList_1_System_Object_ *this,float time,MethodInfo *method)

{
  if (this != (DotParamsList_1_System_Object_ *)0x0) {
    uVar1 = (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                      (this,method->klass->rgctx_data[2].rgctxDataDummy);
    iVar2 = (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                      (uVar1,time,method->klass->rgctx_data[3].rgctxDataDummy);
    return iVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}

