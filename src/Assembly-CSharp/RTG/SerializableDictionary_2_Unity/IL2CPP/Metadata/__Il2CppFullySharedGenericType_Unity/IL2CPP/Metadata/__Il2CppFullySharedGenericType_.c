
/* Void Add(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
  pIVar2 = pIVar1[2].klass;
  uVar3 = pIVar2->actualSize;
  uVar4 = (pIVar1[4].klass)->actualSize;
  func_?();
  puStack_5 = (undefined4 *)&stack0xffffffe4;
  func_?();
  puVar6 = puStack_5;
  pDVar7 = (this->fields)._dictionary;
  iVar8._0_2_ = (pIVar2->byval_arg).attrs;
  iVar8._2_1_ = (pIVar2->byval_arg).type;
  iVar8._3_1_ = (pIVar2->byval_arg).field_0x7;
  p_Var9 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar8 < 0) {
    p_Var9 = key;
  }
  puStack_9 = (undefined4 *)&stack0xffffffe4;
  func_?(puStack_5,p_Var9,uVar3);
  puVar10 = puStack_9;
  pMVar11 = method;
  p_Var9 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var9 = value;
  }
  func_?(puStack_9,p_Var9,uVar4);
  if (pDVar7 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar1 = pMVar11->klass->rgctx_data;
    if (-1 < (int)(pIVar1[4].method)->return_type) {
      puVar10 = (undefined4 *)*puVar10;
    }
    if (-1 < (int)(pIVar1[2].method)->return_type) {
      puVar6 = (undefined4 *)*puVar6;
    }
    pMVar11 = pIVar1[0x1c].method;
    puStack_12 = puVar6;
    puStack_9 = puVar10;
    (*pMVar11->invoker_method)(pMVar11->methodPointer,pMVar11,pDVar7,&puStack_12,puVar10);
    return;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._dictionary !=
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(method->klass->rgctx_data[0x1d].method)->methodPointer)();
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean ContainsKey(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ContainsKey
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[2].klass;
  func_?();
  pDVar2 = (this->fields)._dictionary;
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var8 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar3 < 0) {
    p_Var8 = key;
  }
  func_?(&stack0xfffffff4,p_Var8,pIVar1->actualSize);
  if (pDVar2 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar4 = method->klass->rgctx_data;
    method = (MethodInfo *)&stack0xfffffff4;
    if (-1 < (int)(pIVar4[2].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar5 = pIVar4[0x1e].method;
    (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pDVar2,&method,(void *)((int)&key + 3));
    return key._3_1_;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void 
   Copy(SerializableDictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Copy
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *other,MethodInfo *method)

{
  pPStack_1 = (PropertyInfo *)0xffffffff;
  pEStack_2 = (EventInfo *)&DAT_?;
  pFStack_3 = (FieldInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pFStack_3;
  pIVar4 = method->klass->rgctx_data;
  uVar5 = (pIVar4[0xc].klass)->actualSize;
  uVar6 = (pIVar4[0xf].klass)->actualSize;
  if (((uint)(pIVar4[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar4[0xc].klass);
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?(&stack0xffffffb0,0,uVar5);
  func_?();
  func_?(&stack0xffffffb0,0,uVar6);
  pMVar7 = method->klass->rgctx_data[0x1f].method;
  (*pMVar7->methodPointer)(this,pMVar7);
  if (other != (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)0x0) {
    pMVar7 = method->klass->rgctx_data[0x20].method;
    pvVar8 = (void *)(*pMVar7->methodPointer)(other,pMVar7);
    if (pvVar8 != (void *)0x0) {
      pMVar7 = method->klass->rgctx_data[0xb].method;
      other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)&stack0xffffffb0;
      (*pMVar7->invoker_method)(pMVar7->methodPointer,pMVar7,pvVar8,&other,&stack0xffffffb0);
      func_?(&stack0xffffffb0,&stack0xffffffb0,uVar5);
      pPStack_1 = (PropertyInfo *)0x1;
      while( true ) {
        cVar9 = (*(method->klass->rgctx_data[0x15].method)->methodPointer)();
        if (cVar9 == '\0') {
          pPStack_1 = (PropertyInfo *)0xffffffff;
          pIVar10 = method->klass->rgctx_data[0xc].klass;
          if (((uint)pIVar10->vtable[0].methodPtr & 0x100) == 0) {
            pIVar10 = (Il2CppClass *)func_?();
          }
          func_?(pIVar10);
          *unaff_FS_OFFSET = pFStack_3;
          return;
        }
        pMVar7 = method->klass->rgctx_data[0xd].method;
        pSVar11 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                   *)pMVar7->methodPointer;
        other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)&stack0xffffffb0;
        (*pMVar7->invoker_method)
                  ((Il2CppMethodPointer)pSVar11,pMVar7,&stack0xffffffb0,&other,&stack0xffffffb0);
        func_?();
        pDVar12 = (this->fields)._dictionary;
        pMVar7 = method->klass->rgctx_data[0x10].method;
        other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)&stack0xffffffb0;
        (*pMVar7->invoker_method)
                  (pMVar7->methodPointer,pMVar7,&stack0xffffffb0,&other,&stack0xffffffb0);
        pMVar7 = method->klass->rgctx_data[0x13].method;
        other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)&stack0xffffffb0;
        (*pMVar7->invoker_method)
                  (pMVar7->methodPointer,pMVar7,&stack0xffffffb0,&other,&stack0xffffffb0);
        if (pDVar12 == (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)0x0) break;
        pIVar4 = method->klass->rgctx_data;
        pSVar13 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                   *)&stack0xffffffb0;
        if (-1 < (int)(pIVar4[4].method)->return_type) {
          pSVar13 = pSVar11;
        }
        pSVar14 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                   *)&stack0xffffffb0;
        if (-1 < (int)(pIVar4[2].method)->return_type) {
          pSVar14 = pSVar11;
        }
        func_?((pIVar4[0x1c].method)->methodPointer,pIVar4[0x1c].method,pDVar12,pSVar14,
                        pSVar13);
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAfterDeserialize() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnAfterDeserialize
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  pIVar1 = method->klass->rgctx_data;
  func_?();
  func_?();
  pIVar2 = pIVar1[1].klass;
  IStack_3 = (Il2CppRGCTXData)&stack0xffffffcc;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    IStack_3 = (Il2CppRGCTXData)&stack0xffffffcc;
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pDVar4 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(pIVar2);
  pMVar5 = method->klass->rgctx_data[0x17].method;
  (*pMVar5->methodPointer)(pDVar4,pMVar5);
  pSStack_6 = &this->fields;
  pSStack_6->_dictionary = pDVar4;
  func_?(pSStack_6,pDVar4);
  pLVar7 = (this->fields)._serializedKeys;
  if (pLVar7 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar5 = method->klass->rgctx_data[0x18].method;
    pDStack_8 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                 *)(*pMVar5->methodPointer)(pLVar7,pMVar5);
    pLVar7 = (this->fields)._serializedValues;
    if (pLVar7 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar5 = method->klass->rgctx_data[0x19].method;
      val2 = (*pMVar5->methodPointer)(pLVar7,pMVar5);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      _Stack_14 = (_union_155)
                  mscorlib.dll::System::Math::Math_Min_4((int32_t)pDStack_8,val2,(MethodInfo *)0x0);
      IVar9.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar10.rgctxDataDummy = &stack0xffffffcc;
      if (0 < (int)_Stack_14.genericMethod) {
        do {
          pLVar7 = (this->fields)._serializedKeys;
          pDStack_8 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                       *)pSStack_6->_dictionary;
          if (pLVar7 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          pIStack_11 = &IStack_12;
          pMVar5 = method->klass->rgctx_data[0x1a].method;
          pMStack_13 = (MethodInfo *)&stack0xffffffcc;
          IStack_12 = IVar9;
          (*pMVar5->invoker_method)
                    (pMVar5->methodPointer,pMVar5,pLVar7,&pIStack_11,&stack0xffffffcc);
          pLVar7 = (this->fields)._serializedValues;
          if (pLVar7 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          p_Var4 = (_union_155 *)method->klass->rgctx_data[0x1b].method;
          _Var10 = (_union_155)p_Var4->genericContainerHandle;
          IStack_12 = IVar9;
          (*(code *)p_Var4[2])
                    ((Il2CppMethodPointer)_Var10.genericContainerHandle,(MethodInfo *)p_Var4,pLVar7,
                     (void **)&stack0xffffffd8,IVar10.rgctxDataDummy);
          if (pDStack_8 ==
              (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
               *)0x0) goto code_?;
          pIVar1 = method->klass->rgctx_data;
          if (-1 < (int)(pIVar1[4].method)->return_type) {
            IVar10 = *(Il2CppRGCTXData *)&(IVar10.method)->methodPointer;
          }
          _Stack_14.genericMethod = (Il2CppGenericMethod *)&stack0xffffffcc;
          if (-1 < (int)(pIVar1[2].method)->return_type) {
            _Stack_14 = _Var10;
          }
          pMStack_13 = pIVar1[0x1c].method;
          IStack_3.rgctxDataDummy = pDStack_8;
          pIStack_11 = (Il2CppRGCTXData *)pMStack_13->methodPointer;
          IStack_12 = IVar10;
          func_?();
          IVar9.rgctxDataDummy = (void *)((int)&(IVar9.method)->methodPointer + 1);
          IVar10 = IStack_3;
        } while ((int)IVar9.rgctxDataDummy < (int)_Stack_14.genericMethod);
      }
      pLVar7 = (this->fields)._serializedKeys;
      if (pLVar7 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pMVar5 = method->klass->rgctx_data[8].method;
        (*pMVar5->methodPointer)(pLVar7,pMVar5);
        pLVar7 = (this->fields)._serializedValues;
        if (pLVar7 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          pMVar5 = method->klass->rgctx_data[10].method;
          (*pMVar5->methodPointer)(pLVar7,pMVar5);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnBeforeSerialize() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnBeforeSerialize
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  pIVar5 = method->klass->rgctx_data;
  uStack_6 = (pIVar5[0xc].klass)->actualSize;
  puStack_7 = (undefined1 *)(pIVar5[0xf].klass)->actualSize;
  puVar8 = &stack0xffffffac;
  if (((uint)(pIVar5[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar5[0xc].klass);
    puVar8 = puStack_4;
  }
  puStack_4 = puVar8;
  func_?();
  puStack_9 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  func_?();
  puStack_4 = &stack0xffffffac;
  func_?();
  uVar10 = uStack_6;
  puStack_4 = &stack0xffffffac;
  func_?();
  puStack_11 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  func_?();
  puStack_12 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  func_?();
  puStack_13 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  func_?(&stack0xffffffac,0,uVar10);
  func_?();
  puStack_14 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  func_?(&stack0xffffffac,0,puStack_7);
  pMVar15 = method->klass->rgctx_data[6].method;
  (*pMVar15->methodPointer)(this,pMVar15);
  pLVar16 = (this->fields)._serializedKeys;
  if (pLVar16 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar15 = method->klass->rgctx_data[8].method;
    (*pMVar15->methodPointer)(pLVar16,pMVar15);
    pLVar16 = (this->fields)._serializedValues;
    if (pLVar16 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar15 = method->klass->rgctx_data[10].method;
      (*pMVar15->methodPointer)(pLVar16,pMVar15);
      pDVar17 = (this->fields)._dictionary;
      if (pDVar17 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
        pMVar15 = method->klass->rgctx_data[0xb].method;
        puStack_18 = puStack_11;
        (*pMVar15->invoker_method)(pMVar15->methodPointer,pMVar15,pDVar17,&puStack_18,puStack_11);
        func_?(puStack_13,puStack_11,uStack_6);
        uStack_1 = 1;
        while( true ) {
          cVar19 = (*(method->klass->rgctx_data[0x15].method)->methodPointer)();
          if (cVar19 == '\0') {
            uStack_1 = 0xffffffff;
            pIVar20 = method->klass->rgctx_data[0xc].klass;
            if (((uint)pIVar20->vtable[0].methodPtr & 0x100) == 0) {
              pIVar20 = (Il2CppClass *)func_?();
            }
            func_?(pIVar20);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          puStack_18 = puStack_12;
          pMVar15 = method->klass->rgctx_data[0xd].method;
          pIVar21 = pMVar15->methodPointer;
          (*pMVar15->invoker_method)(pIVar21,pMVar15,puStack_13,&puStack_18,puStack_12);
          puStack_9 = puStack_7;
          puStack_18 = puStack_12;
          func_?();
          pLVar16 = (this->fields)._serializedKeys;
          pMVar15 = method->klass->rgctx_data[0x10].method;
          puStack_18 = &stack0xffffffac;
          (*pMVar15->invoker_method)
                    (pMVar15->methodPointer,pMVar15,puStack_14,&puStack_18,&stack0xffffffac);
          if (pLVar16 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
          pIVar5 = method->klass->rgctx_data;
          pIVar22 = (Il2CppMethodPointer)&stack0xffffffac;
          if (-1 < (int)(pIVar5[2].method)->return_type) {
            pIVar22 = pIVar21;
          }
          pMVar15 = pIVar5[0x12].method;
          func_?(pMVar15->methodPointer,pMVar15,pLVar16,pIVar22);
          pLVar16 = (this->fields)._serializedValues;
          pMVar15 = method->klass->rgctx_data[0x13].method;
          func_?(pMVar15->methodPointer,pMVar15,puStack_14,&stack0xffffffac);
          if (pLVar16 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
          pIVar5 = method->klass->rgctx_data;
          pIVar22 = (Il2CppMethodPointer)&stack0xffffffac;
          if (-1 < (int)(pIVar5[4].method)->return_type) {
            pIVar22 = pIVar21;
          }
          pMVar15 = pIVar5[0x14].method;
          func_?(pMVar15->methodPointer,pMVar15,pLVar16,pIVar22);
        }
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void RemoveNullKeys() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__RemoveNullKeys
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pSVar1 = &this->fields;
  pDVar2 = pSVar1->_dictionary;
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  if (pIVar3->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar3);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  iVar4 = *(int *)((int)pIVar3->static_fields + 4);
  if (iVar4 == 0) {
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pIVar3->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar3);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar5 = *(undefined4 *)pIVar3->static_fields;
    pIVar3 = method->klass->rgctx_data[0x22].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    iVar4 = func_?(pIVar3);
    pIVar6 = method->klass->rgctx_data;
    pMVar7 = pIVar6[0x25].method;
    (*pMVar7->methodPointer)(iVar4,uVar5,pIVar6[0x24].rgctxDataDummy,pMVar7);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    *(int *)((int)pIVar3->static_fields + 4) = iVar4;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    func_?((int)pIVar3->static_fields + 4,iVar4);
  }
  pMVar7 = method->klass->rgctx_data[0x26].method;
  uVar5 = (*pMVar7->methodPointer)(pDVar2,iVar4,pMVar7);
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  if (pIVar3->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar3);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  iVar4 = *(int *)((int)pIVar3->static_fields + 8);
  if (iVar4 == 0) {
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pIVar3->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar3);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar8 = *(undefined4 *)pIVar3->static_fields;
    pIVar3 = method->klass->rgctx_data[0x28].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    iVar4 = func_?(pIVar3);
    pIVar6 = method->klass->rgctx_data;
    pMVar7 = pIVar6[0x2a].method;
    (*pMVar7->methodPointer)(iVar4,uVar8,pIVar6[0x29].rgctxDataDummy,pMVar7);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    *(int *)((int)pIVar3->static_fields + 8) = iVar4;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    func_?((int)pIVar3->static_fields + 8,iVar4);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  if (pIVar3->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar3);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  iVar9 = *(int *)((int)pIVar3->static_fields + 0xc);
  if (iVar9 == 0) {
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pIVar3->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar3);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    uVar8 = *(undefined4 *)pIVar3->static_fields;
    pIVar3 = method->klass->rgctx_data[0x2b].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    iVar9 = func_?(pIVar3);
    pIVar6 = method->klass->rgctx_data;
    pMVar7 = pIVar6[0x2d].method;
    (*pMVar7->methodPointer)(iVar9,uVar8,pIVar6[0x2c].rgctxDataDummy,pMVar7);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    *(int *)((int)pIVar3->static_fields + 0xc) = iVar9;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    func_?((int)pIVar3->static_fields + 0xc,iVar9);
  }
  pMVar7 = method->klass->rgctx_data[0x2e].method;
  pDVar2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)(*pMVar7->methodPointer)(uVar5,iVar4,iVar9,pMVar7);
  pSVar1->_dictionary = pDVar2;
  func_?(pSVar1,pDVar2);
  return;
}


/* SerializableDictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]()
    */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pDVar2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(pIVar1);
  pMVar3 = method->klass->rgctx_data[0x17].method;
  (*pMVar3->methodPointer)(pDVar2,pMVar3);
  (this->fields)._dictionary = pDVar2;
  func_?(&this->fields,pDVar2);
  pIVar1 = method->klass->rgctx_data[7].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pLVar4 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?(pIVar1);
  pMVar3 = method->klass->rgctx_data[0x2f].method;
  (*pMVar3->methodPointer)(pLVar4,pMVar3);
  ppLVar5 = &(this->fields)._serializedKeys;
  *ppLVar5 = pLVar4;
  func_?(ppLVar5,pLVar4);
  pIVar1 = method->klass->rgctx_data[9].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pLVar4 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?(pIVar1);
  pMVar3 = method->klass->rgctx_data[0x30].method;
  (*pMVar3->methodPointer)(pLVar4,pMVar3);
  pMVar3 = (MethodInfo *)&(this->fields)._serializedValues;
  *(List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)pMVar3 = pLVar4;
  func_?(pMVar3,pLVar4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar3);
  return;
}


/* __Il2CppFullySharedGenericType get_Item(__Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Item
          (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,_Il2CppFullySharedGenericType *index,MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)(in_stack_2 + 0x10) + 0x60);
  iVar3 = *(int *)(iVar1 + 8);
  uStack_4 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x84);
  func_?();
  func_?();
  pDVar5 = (this->fields)._dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&index;
  if (*(int *)(iVar3 + 0x14) < 0) {
    p_Var7 = index;
  }
  puStack_6 = &stack0xffffffe4;
  func_?(&stack0xffffffe4,p_Var7,*(undefined4 *)(iVar3 + 0x84));
  puVar7 = puStack_6;
  if (pDVar5 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    iVar1 = *(int *)(*(int *)(in_stack_2 + 0x10) + 0x60);
    puStack_8 = &stack0xffffffe4;
    if (-1 < *(int *)(*(int *)(iVar1 + 8) + 0x14)) {
      puStack_8 = unaff_EDI;
    }
    puVar9 = *(undefined4 **)(iVar1 + 0xc);
    puStack_10 = puStack_6;
    (*(code *)puVar9[2])(*puVar9,puVar9,pDVar5,&puStack_8,puStack_6);
    p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,puVar7,uStack_4);
    return p_Var7;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar11)();
  return p_Var7;
}


/* Void set_Item(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Item
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *index,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
  pIVar2 = pIVar1[2].klass;
  uVar3 = pIVar2->actualSize;
  uVar4 = (pIVar1[4].klass)->actualSize;
  func_?();
  puStack_5 = (undefined4 *)&stack0xffffffe4;
  func_?();
  puVar6 = puStack_5;
  pDVar7 = (this->fields)._dictionary;
  iVar8._0_2_ = (pIVar2->byval_arg).attrs;
  iVar8._2_1_ = (pIVar2->byval_arg).type;
  iVar8._3_1_ = (pIVar2->byval_arg).field_0x7;
  p_Var9 = (_Il2CppFullySharedGenericType *)&index;
  if (iVar8 < 0) {
    p_Var9 = index;
  }
  puStack_9 = (undefined4 *)&stack0xffffffe4;
  func_?(puStack_5,p_Var9,uVar3);
  puVar10 = puStack_9;
  pMVar11 = method;
  p_Var9 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var9 = value;
  }
  func_?(puStack_9,p_Var9,uVar4);
  if (pDVar7 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar1 = pMVar11->klass->rgctx_data;
    if (-1 < (int)(pIVar1[4].method)->return_type) {
      puVar10 = (undefined4 *)*puVar10;
    }
    if (-1 < (int)(pIVar1[2].method)->return_type) {
      puVar6 = (undefined4 *)*puVar6;
    }
    pMVar11 = pIVar1[5].method;
    puStack_12 = puVar6;
    puStack_9 = puVar10;
    (*pMVar11->invoker_method)(pMVar11->methodPointer,pMVar11,pDVar7,&puStack_12,puVar10);
    return;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

