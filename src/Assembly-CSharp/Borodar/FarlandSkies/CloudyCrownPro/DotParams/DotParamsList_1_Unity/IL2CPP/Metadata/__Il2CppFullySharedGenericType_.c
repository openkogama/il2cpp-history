
/* Int32 
   BinarySearch[__Il2CppFullySharedGenericType](IList`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[Unity
        ::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__BinarySearch
                  (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *list,
                  _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  _Stack_18 = (_union_155)((pMVar1->field7_0x1c).rgctx_data[7].klass)->actualSize;
  p_Var15 = (_union_86 *)&stack0xffffffc8;
  func_?();
  p_Stack_8 = (_union_86 *)&stack0xffffffc8;
  func_?();
  if (list == (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    method = (MethodInfo *)&stack0xffffffc8;
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    pMVar1 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,pMVar1);
    func_?();
  }
  else {
    method = (MethodInfo *)&stack0xffffffc8;
    _Stack_1c.rgctx_data =
         (Il2CppRGCTXData *)
         (*((pMVar1->field7_0x1c).rgctx_data[1].method)->methodPointer)
                   ((pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    iStack_3 = 0;
    pIVar4 = (pMVar1->field7_0x1c).rgctx_data[4].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    iVar5 = func_?(0,pIVar4,list);
    puStack_6 = (undefined1 *)(iVar5 + -1);
    iVar5 = 0;
    _Var14 = (_union_86)&stack0xffffffc8;
    if (0 < (int)puStack_6) {
      do {
        pIVar4 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
        _Var14.__klassIndex = (int)(puStack_6 + iVar5) / 2;
        _Stack_c.__klassIndex = _Var14.__klassIndex;
        if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
          pIVar4 = (Il2CppClass *)func_?(pIVar4);
        }
        uVar7 = 0;
        ppIStack_8 = (Il2CppType **)0x0;
        pIVar9 = list->klass;
        uVar10._0_1_ = (pIVar9->_1).rank;
        uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
        _Stack_24.__klassIndex = _Var14.__klassIndex;
        if (uVar10 != 0) {
          do {
            p_Var15 = p_Stack_8;
            if (pIVar9->interfaceOffsets[uVar7].interfaceType == pIVar4) {
              ppMVar11 = &(&(list->klass->vtable).get_Item)
                         [list->klass->interfaceOffsets[uVar7].offset].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?(list,pIVar4,0);
code_?:
        p_Stack_2c = &_Stack_24;
        iVar5 = (int)ppMVar11[1];
        p_Stack_28 = p_Var15;
        (**(code **)(iVar5 + 8))(*(undefined4 *)(iVar5 + 4),iVar5,list,&p_Stack_2c,p_Var15);
        pMVar12 = method;
        p_Var12 = (_Il2CppFullySharedGenericType *)&value;
        if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
          p_Var12 = value;
        }
        func_?(method,p_Var12,_Stack_18.genericMethod);
        if (_Stack_1c.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
        p_Var13 = p_Var15;
        if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
          pMVar12 = (MethodInfo *)pMVar12->methodPointer;
          p_Var13 = p_Var15->dummy;
        }
        iVar5 = func_?(6,_Stack_1c.rgctx_data,p_Var13,pMVar12);
        if (iVar5 < 0) {
          iStack_3 = (int)&((_Stack_c.type)->data).dummy + 1;
        }
        else {
          puStack_6 = &_Stack_c.type[-1].field_0x7;
        }
        iVar5 = iStack_3;
        _Var14 = (_union_86)p_Var15;
      } while (iStack_3 < (int)puStack_6);
    }
    pIVar4 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    func_?(0,pIVar4,list,iVar5,_Var14.dummy);
    p_Var12 = (_Il2CppFullySharedGenericType *)&value;
    if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
      p_Var12 = value;
    }
    func_?(method,p_Var12,_Stack_18.genericMethod);
    if (_Stack_1c.rgctx_data != (Il2CppRGCTXData *)0x0) {
      if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
        _Var14 = (_Var14.type)->data;
        method = (MethodInfo *)method->methodPointer;
      }
      p_Stack_28 = (_union_86 *)method;
      pIVar13 = ((*_Stack_1c.rgctx_data).klass)->vtable[7].methodPtr;
      p_Stack_2c = (_union_86 *)_Var14;
      (**(code **)(pIVar13 + 8))
                (*(undefined4 *)(pIVar13 + 4),pIVar13,_Stack_1c.rgctx_data,&p_Stack_2c,&list);
      if ((int)list < 0) {
        iVar5 = iVar5 + 1;
      }
      return iVar5;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[Unity
        ::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__FindIndexPerTime
                  (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  float time,MethodInfo *method)

{
  pMVar1 = method;
  if (this != (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pvStack_2 = (void *)(*(method->klass->rgctx_data[2].method)->methodPointer)
                                   (this,method->klass->rgctx_data[2].rgctxDataDummy);
    ppDStack_3 = &this;
    this = (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)time;
    pMVar4 = pMVar1->klass->rgctx_data[3].method;
    (*pMVar4->invoker_method)
              ((pMVar1->klass->rgctx_data[3].method)->methodPointer,pMVar4,(void *)0x0,&pvStack_2,
               &iStack_5);
    return iStack_5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}

