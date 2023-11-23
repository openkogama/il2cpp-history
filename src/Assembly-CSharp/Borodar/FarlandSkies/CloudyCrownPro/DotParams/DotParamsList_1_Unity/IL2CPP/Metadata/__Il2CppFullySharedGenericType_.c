
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
  uStack_2 = ((pMVar1->field7_0x1c).rgctx_data[7].klass)->actualSize;
  _Var15.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffcc;
  func_?();
  pIStack_3 = (Il2CppRGCTXData *)&stack0xffffffcc;
  func_?();
  if (list == (IList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    method = (MethodInfo *)&stack0xffffffcc;
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    pMVar1 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_list);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,pMVar1);
    func_?();
  }
  else {
    method = (MethodInfo *)&stack0xffffffcc;
    _Stack_14.genericMethod =
         (Il2CppGenericMethod *)
         (*((pMVar1->field7_0x1c).rgctx_data[1].method)->methodPointer)
                   ((pMVar1->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    puVar5 = (undefined1 *)0x0;
    puStack_6 = (undefined1 *)0x0;
    pIVar7 = (pMVar1->field7_0x1c).rgctx_data[4].klass;
    if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
      pIVar7 = (Il2CppClass *)func_?(pIVar7);
    }
    iVar8 = func_?(0,pIVar7,list);
    puStack_9 = (undefined1 *)(iVar8 + -1);
    if (0 < (int)puStack_9) {
      do {
        pIVar7 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
        _Var15.rgctx_data = (Il2CppRGCTXData *)((int)(puStack_9 + (int)puVar5) / 2);
        _Stack_20.rgctx_data = _Var15.rgctx_data;
        if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
          pIVar7 = (Il2CppClass *)func_?(pIVar7);
        }
        uVar10 = 0;
        pIVar11 = list->klass;
        uVar12._0_1_ = (pIVar11->_1).rank;
        uVar12._1_1_ = (pIVar11->_1).minimumAlignment;
        _Stack_18.rgctx_data = _Var15.rgctx_data;
        if (uVar12 != 0) {
          do {
            if (pIVar11->interfaceOffsets[uVar10].interfaceType == pIVar7) {
              ppMVar13 = &(&(list->klass->vtable).get_Item)
                         [list->klass->interfaceOffsets[uVar10].offset].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar12);
        }
        ppMVar13 = (MethodInfo **)func_?(list,pIVar7,0);
code_?:
        _Var15 = (_union_154)pIStack_3;
        p_Stack_28 = &_Stack_18;
        p_Stack_24 = (_union_154 *)pIStack_3;
        iVar8 = (int)ppMVar13[1];
        (**(code **)(iVar8 + 8))(*(undefined4 *)(iVar8 + 4),iVar8,list,&p_Stack_28,pIStack_3);
        pMVar14 = method;
        p_Var13 = (_Il2CppFullySharedGenericType *)&value;
        if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
          p_Var13 = value;
        }
        func_?(method,p_Var13,uStack_2);
        if (_Stack_14.genericMethod == (Il2CppGenericMethod *)0x0) goto code_?;
        pIVar15 = (Il2CppRGCTXData *)_Var15;
        if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
          pMVar14 = (MethodInfo *)pMVar14->methodPointer;
          pIVar15 = *(Il2CppRGCTXData **)_Var15.rgctx_data;
        }
        iVar8 = func_?(6,_Stack_14.genericMethod,pIVar15,pMVar14);
        puVar5 = puStack_6;
        puVar16 = (undefined1 *)((int)_Stack_20.rgctx_data + -1);
        if (iVar8 < 0) {
          puVar5 = (undefined1 *)((int)_Stack_20.rgctx_data + 1);
          puVar16 = puStack_9;
        }
        puStack_9 = puVar16;
        puStack_6 = puVar5;
      } while ((int)puVar5 < (int)puStack_9);
    }
    pIVar7 = ((pMVar1->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
      pIVar7 = (Il2CppClass *)func_?(pIVar7);
    }
    func_?(0,pIVar7,list,puVar5,_Var15.rgctx_data);
    p_Var13 = (_Il2CppFullySharedGenericType *)&value;
    if ((int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type < 0) {
      p_Var13 = value;
    }
    func_?(method,p_Var13,uStack_2);
    if (_Stack_14.genericMethod != (Il2CppGenericMethod *)0x0) {
      if (-1 < (int)((pMVar1->field7_0x1c).rgctx_data[7].method)->return_type) {
                    /* WARNING: Load size is inaccurate */
        _Var15.methodMetadataHandle = *_Var15.methodMetadataHandle;
        method = (MethodInfo *)method->methodPointer;
      }
      p_Stack_24 = (_union_154 *)method;
      pIVar17 = (_Stack_14.genericMethod)->methodDefinition[5].virtualMethodPointer;
      p_Stack_28 = (_union_154 *)_Var15;
      (**(code **)(pIVar17 + 8))
                (*(undefined4 *)(pIVar17 + 4),pIVar17,_Stack_14.genericMethod,&p_Stack_28,&list);
      if ((int)list < 0) {
        puVar5 = puVar5 + 1;
      }
      return (int32_t)puVar5;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
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

