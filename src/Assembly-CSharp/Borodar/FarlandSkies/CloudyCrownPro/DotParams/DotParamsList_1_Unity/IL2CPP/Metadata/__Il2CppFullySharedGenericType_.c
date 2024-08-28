
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
  pIVar2 = (pMVar1->field7_0x1c).rgctx_data;
  uStack_3 = (pIVar2[7].klass)->actualSize;
  pIVar4 = (Il2CppClass *)&stack0xffffffc8;
  func_?();
  pIStack_5 = (Il2CppClass *)&stack0xffffffc8;
  func_?();
  if (list == (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    method = (MethodInfo *)&stack0xffffffc8;
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar6);
    pMVar1 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,pMVar1);
    func_?();
  }
  else {
    pMVar7 = pIVar2[1].method;
    method = (MethodInfo *)&stack0xffffffc8;
    _Stack_1c.rgctx_data = (Il2CppRGCTXData *)(*pMVar7->methodPointer)(pMVar7);
    puStack_8 = (undefined1 *)0x0;
    pIVar9 = (pMVar1->field7_0x1c).rgctx_data[4].klass;
    if (((uint)pIVar9->vtable[0].methodPtr & 0x100) == 0) {
      pIVar9 = (Il2CppClass *)func_?(pIVar9);
    }
    iVar10 = func_?(0,pIVar9,list);
    _Stack_18.genericMethod = (Il2CppGenericMethod *)(iVar10 + -1);
    puVar11 = (undefined1 *)0x0;
    pIVar9 = (Il2CppClass *)&stack0xffffffc8;
    if (0 < (int)_Stack_18.genericMethod) {
      do {
        pIVar9 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
        pIVar12 = (Il2CppType *)
                  ((int)(puVar11 + (int)&(_Stack_18.genericMethod)->methodDefinition) / 2);
        pIStack_13 = pIVar12;
        if (((uint)pIVar9->vtable[0].methodPtr & 0x100) == 0) {
          pIVar9 = (Il2CppClass *)func_?(pIVar9);
        }
        uVar14 = 0;
        ppIStack_15 = (Il2CppType **)0x0;
        pIVar16 = list->klass;
        uVar17._0_1_ = (pIVar16->_1).rank;
        uVar17._1_1_ = (pIVar16->_1).minimumAlignment;
        pIStack_18 = pIVar12;
        if (uVar17 != 0) {
          do {
            pIVar4 = pIStack_5;
            if (pIVar16->interfaceOffsets[uVar14].interfaceType == pIVar9) {
              ppMVar19 = &(&(list->klass->vtable).get_Item)[pIVar16->interfaceOffsets[uVar14].offset].
                         method;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar17);
        }
        ppMVar19 = (MethodInfo **)func_?(list,pIVar9,0);
code_?:
        pIStack_20 = (Il2CppClass *)&pIStack_18;
        iVar10 = (int)ppMVar19[1];
        pIStack_21 = pIVar4;
        (**(code **)(iVar10 + 8))(*(undefined4 *)(iVar10 + 4),iVar10,list,&pIStack_20,pIVar4);
        pMVar7 = method;
        p_Var13 = (_Il2CppFullySharedGenericType *)&value;
        if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
          p_Var13 = value;
        }
        func_?(method,p_Var13,uStack_3);
        if (_Stack_1c.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
        pIVar9 = pIVar4;
        if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
          pMVar7 = (MethodInfo *)pMVar7->methodPointer;
          pIVar9 = (Il2CppClass *)pIVar4->image;
        }
        iVar10 = func_?(6,_Stack_1c.rgctx_data,pIVar9,pMVar7);
        if (iVar10 < 0) {
          puStack_8 = (undefined1 *)((int)&pIStack_13->data + 1);
        }
        else {
          _Stack_18.genericMethod = (Il2CppGenericMethod *)&pIStack_13[-1].field_0x7;
        }
        puVar11 = puStack_8;
        pIVar9 = pIVar4;
      } while ((int)puStack_8 < (int)_Stack_18.genericMethod);
    }
    pIVar4 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    func_?(0,pIVar4,list,puVar11,pIVar9);
    p_Var13 = (_Il2CppFullySharedGenericType *)&value;
    if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
      p_Var13 = value;
    }
    func_?(method,p_Var13,uStack_3);
    if (_Stack_1c.rgctx_data != (Il2CppRGCTXData *)0x0) {
      pIStack_21 = (Il2CppClass *)method;
      if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
        pIVar9 = (Il2CppClass *)pIVar9->image;
        pIStack_21 = (Il2CppClass *)method->methodPointer;
      }
      pIVar22 = ((*_Stack_1c.rgctx_data).klass)->vtable[7].methodPtr;
      pIStack_20 = pIVar9;
      (**(code **)(pIVar22 + 8))
                (*(undefined4 *)(pIVar22 + 4),pIVar22,_Stack_1c.rgctx_data,&pIStack_20,&list);
      if ((int)list < 0) {
        puVar11 = puVar11 + 1;
      }
      return (int32_t)puVar11;
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  iVar24 = (*pcVar23)();
  return iVar24;
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
    pMVar2 = method->klass->rgctx_data[2].method;
    pvStack_3 = (void *)(*pMVar2->methodPointer)(this,pMVar2);
    ppDStack_4 = &this;
    this = (DotParamsList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)time;
    pMVar1 = pMVar1->klass->rgctx_data[3].method;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,(void *)0x0,&pvStack_3,&iStack_5);
    return iStack_5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}

