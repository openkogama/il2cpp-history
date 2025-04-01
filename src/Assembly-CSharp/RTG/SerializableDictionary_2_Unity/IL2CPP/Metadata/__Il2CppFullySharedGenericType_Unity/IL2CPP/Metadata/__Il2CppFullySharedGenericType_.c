
/* Void Add(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[2].klass)->actualSize;
  uVar3 = (method->klass->rgctx_data[4].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xffffffe8;
  func_?();
  pDVar4 = (this->fields)._dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var7 = key;
  }
  _Stack_8.dummy = &stack0xffffffe8;
  func_?(method,p_Var7,uVar2);
  _Var8 = _Stack_8;
  p_Var7 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var7 = value;
  }
  func_?(_Stack_8.dummy,p_Var7,uVar3);
  if (pDVar4 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
      _Var8 = (_union_86)(_Var8.array)->etype;
    }
    if (-1 < (int)(pMVar1->klass->rgctx_data[2].method)->return_type) {
      method = (MethodInfo *)method->methodPointer;
    }
    pMVar5 = pMVar1->klass->rgctx_data[0x1c].method;
    pMStack_6 = method;
    _Stack_8 = _Var8;
    (*pMVar5->invoker_method)
              ((pMVar1->klass->rgctx_data[0x1c].method)->methodPointer,pMVar5,pDVar4,&pMStack_6,
               _Var8.dummy);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[2].klass)->actualSize;
  func_?();
  method = (MethodInfo *)(this->fields)._dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var7 = key;
  }
  func_?(&stack0xfffffff0,p_Var7,uVar2);
  pMVar3 = method;
  if (method != (MethodInfo *)0x0) {
    method = (MethodInfo *)&stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[2].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar4 = pMVar1->klass->rgctx_data[0x1e].method;
    (*pMVar4->invoker_method)
              ((pMVar1->klass->rgctx_data[0x1e].method)->methodPointer,pMVar4,pMVar3,&method,
               (void *)((int)&key + 3));
    return key._3_1_;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
  pIStack_1 = (Il2CppRuntimeInterfaceOffsetPair *)0xffffffff;
  ppIStack_2 = (Il2CppClass **)&DAT_?;
  ppIStack_3 = (Il2CppClass **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_3;
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  pPStack_5 = (PropertyInfo *)(method->klass->rgctx_data[0xc].klass)->actualSize;
  p_Stack_2c = (Il2CppMetadataTypeHandle)(method->klass->rgctx_data[0xf].klass)->actualSize;
  pIVar6 = method->klass->rgctx_data[0xc].klass;
  ppMVar7 = (MethodInfo **)&stack0xffffffa0;
  if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar6);
    ppMVar7 = ppMStack_4;
  }
  ppMStack_4 = ppMVar7;
  func_?();
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?();
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?();
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?();
  p_Var3 = p_Stack_2c;
  pIStack_8 = (Il2CppClass *)&stack0xffffffa0;
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?();
  pIStack_9 = (Il2CppInteropData *)&stack0xffffffa0;
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?();
  pEStack_10 = (EventInfo *)&stack0xffffffa0;
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?(&stack0xffffffa0,0,pPStack_5);
  func_?();
  pFStack_11 = (FieldInfo *)&stack0xffffffa0;
  ppMStack_4 = (MethodInfo **)&stack0xffffffa0;
  func_?(&stack0xffffffa0,0,p_Var3);
  (*(method->klass->rgctx_data[0x1f].method)->methodPointer)
            (this,method->klass->rgctx_data[0x1f].rgctxDataDummy);
  if ((other != (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) &&
     (pIStack_12 = (Il2CppGenericClass *)
                   (*(method->klass->rgctx_data[0x20].method)->methodPointer)
                             (other,method->klass->rgctx_data[0x20].rgctxDataDummy),
     pIStack_12 != (Il2CppGenericClass *)0x0)) {
    pMVar13 = method->klass->rgctx_data[0xb].method;
    other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)pIStack_8;
    (*pMVar13->invoker_method)
              ((method->klass->rgctx_data[0xb].method)->methodPointer,pMVar13,pIStack_12,&other,
               pIStack_8);
    func_?(pEStack_10,pIStack_8,pPStack_5);
    pIStack_1 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
    while( true ) {
      cVar14 = (*(method->klass->rgctx_data[0x15].method)->methodPointer)();
      if (cVar14 == '\0') {
        pIStack_1 = (Il2CppRuntimeInterfaceOffsetPair *)0xffffffff;
        func_?();
        *unaff_FS_OFFSET = ppIStack_3;
        return;
      }
      other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)pIStack_9;
      pMVar13 = method->klass->rgctx_data[0xd].method;
      pIVar6 = (Il2CppClass *)(method->klass->rgctx_data[0xd].method)->methodPointer;
      (*pMVar13->invoker_method)((Il2CppMethodPointer)pIVar6,pMVar13,pEStack_10,&other,pIStack_9);
      func_?();
      other = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)(this->fields)._dictionary;
      pMVar13 = method->klass->rgctx_data[0x10].method;
      pIStack_12 = (Il2CppGenericClass *)&stack0xffffffa0;
      (*pMVar13->invoker_method)
                ((method->klass->rgctx_data[0x10].method)->methodPointer,pMVar13,pFStack_11,
                 &pIStack_12,&stack0xffffffa0);
      pMVar13 = method->klass->rgctx_data[0x13].method;
      pIStack_12 = (Il2CppGenericClass *)&stack0xffffffa0;
      (*pMVar13->invoker_method)
                ((method->klass->rgctx_data[0x13].method)->methodPointer,pMVar13,pFStack_11,
                 &pIStack_12,&stack0xffffffa0);
      if (other == (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)0x0) break;
      pIStack_8 = pIVar6;
      if ((int)(method->klass->rgctx_data[4].method)->return_type < 0) {
        pIStack_8 = (Il2CppClass *)&stack0xffffffa0;
      }
      pIVar15 = (Il2CppClass *)&stack0xffffffa0;
      if (-1 < (int)(method->klass->rgctx_data[2].method)->return_type) {
        pIVar15 = pIVar6;
      }
      func_?((method->klass->rgctx_data[0x1c].method)->methodPointer,
                      method->klass->rgctx_data[0x1c].rgctxDataDummy,other,pIVar15,pIStack_8);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  pMVar1 = method;
  func_?();
  pDStack_2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
               *)&stack0xffffffd4;
  func_?();
  pIVar3 = pMVar1->klass->rgctx_data[1].klass;
  pDStack_4 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
               *)&stack0xffffffd4;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pDStack_4 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                 *)&stack0xffffffd4;
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  pDVar5 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(pIVar3);
  pMVar6 = pMVar1->klass->rgctx_data[0x17].method;
  (*pMVar6->methodPointer)(pDVar5,pMVar6);
  pSVar7 = this;
  (this->fields)._dictionary = pDVar5;
  func_?(&this->fields,pDVar5);
  pLVar8 = (pSVar7->fields)._serializedKeys;
  if (pLVar8 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    method = (MethodInfo *)
             (*(pMVar1->klass->rgctx_data[0x18].method)->methodPointer)
                       (pLVar8,pMVar1->klass->rgctx_data[0x18].rgctxDataDummy);
    pLVar8 = (pSVar7->fields)._serializedValues;
    if (pLVar8 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      val2 = (*(pMVar1->klass->rgctx_data[0x19].method)->methodPointer)
                       (pLVar8,pMVar1->klass->rgctx_data[0x19].rgctxDataDummy);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      pDStack_9 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                    *)mscorlib.dll::System::Math::Math_Min_4((int32_t)method,val2,(MethodInfo *)0x0)
      ;
      pDVar10 = pDStack_4;
      method = (MethodInfo *)0x0;
      if (0 < (int)pDStack_9) {
        do {
          pLVar8 = (pSVar7->fields)._serializedKeys;
          pDStack_4 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                       *)(pSVar7->fields)._dictionary;
          if (pLVar8 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          pMVar6 = pMVar1->klass->rgctx_data[0x1a].method;
          this = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)method;
          ppSStack_11 = &this;
          _Stack_14.dummy = pDStack_2;
          (*pMVar6->invoker_method)
                    ((pMVar1->klass->rgctx_data[0x1a].method)->methodPointer,pMVar6,pLVar8,
                     &ppSStack_11,pDStack_2);
          pLVar8 = (pSVar7->fields)._serializedValues;
          if (pLVar8 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          pMVar6 = pMVar1->klass->rgctx_data[0x1b].method;
          this = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)method;
          (*pMVar6->invoker_method)
                    ((pMVar1->klass->rgctx_data[0x1b].method)->methodPointer,pMVar6,pLVar8,
                     (void **)&stack0xffffffe0,pDVar10);
          if (pDStack_4 ==
              (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
               *)0x0) goto code_?;
          pDVar12 = pDVar10;
          if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
            pDVar12 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                      *)(pDVar10->_0).image;
          }
          if (-1 < (int)(pMVar1->klass->rgctx_data[2].method)->return_type) {
            pDStack_2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                         *)(pDStack_2->_0).image;
          }
          pDStack_9 = pDStack_4;
          _Stack_14 = *(_union_86 *)(pMVar1->klass->rgctx_data + 0x1c);
          ppSStack_11 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                         **)(pMVar1->klass->rgctx_data[0x1c].method)->methodPointer;
          pDStack_4 = pDStack_2;
          pDStack_2 = pDVar12;
          func_?();
          method = (MethodInfo *)((int)&method->methodPointer + 1);
        } while ((int)method < (int)pDStack_9);
      }
      pLVar8 = (pSVar7->fields)._serializedKeys;
      if (pLVar8 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pMVar6 = pMVar1->klass->rgctx_data[8].method;
        (*pMVar6->methodPointer)(pLVar8,pMVar6);
        pLVar8 = (pSVar7->fields)._serializedValues;
        if (pLVar8 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          pMVar1 = pMVar1->klass->rgctx_data[10].method;
          (*pMVar1->methodPointer)(pLVar8,pMVar1);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnBeforeSerialize() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnBeforeSerialize
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppRGCTXData *)0xffffffff;
  pDStack_2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___StaticFields
               *)&DAT_?;
  pIStack_3 = (Il2CppRuntimeInterfaceOffsetPair *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  pFStack_5 = (FieldInfo *)(method->klass->rgctx_data[0xc].klass)->actualSize;
  pEVar6 = (EventInfo *)(method->klass->rgctx_data[0xf].klass)->actualSize;
  pIVar7 = method->klass->rgctx_data[0xc].klass;
  pEStack_8 = pEVar6;
  ppIVar9 = (Il2CppClass **)&stack0xffffff98;
  if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar7);
    ppIVar9 = ppIStack_4;
  }
  ppIStack_4 = ppIVar9;
  func_?();
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?();
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?();
  pFVar10 = pFStack_5;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?();
  pIStack_11 = (Il2CppInteropData *)&stack0xffffff98;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?();
  pIStack_12 = (Il2CppClass *)&stack0xffffff98;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?();
  ppIStack_13 = (Il2CppClass **)&stack0xffffff98;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?(&stack0xffffff98,0,pFVar10);
  func_?();
  ppMStack_14 = (MethodInfo **)&stack0xffffff98;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff98;
  func_?(&stack0xffffff98,0,pEVar6);
  (*(method->klass->rgctx_data[6].method)->methodPointer)
            (this,method->klass->rgctx_data[6].rgctxDataDummy);
  pIStack_15 = (Il2CppInteropData *)(this->fields)._serializedKeys;
  if (pIStack_15 != (Il2CppInteropData *)0x0) {
    (*(method->klass->rgctx_data[8].method)->methodPointer)
              (pIStack_15,method->klass->rgctx_data[8].rgctxDataDummy);
    pIStack_15 = (Il2CppInteropData *)(this->fields)._serializedValues;
    if (pIStack_15 != (Il2CppInteropData *)0x0) {
      (*(method->klass->rgctx_data[10].method)->methodPointer)
                (pIStack_15,method->klass->rgctx_data[10].rgctxDataDummy);
      pIStack_16 = (Il2CppClass *)(this->fields)._dictionary;
      if (pIStack_16 != (Il2CppClass *)0x0) {
        pMVar17 = method->klass->rgctx_data[0xb].method;
        pIStack_15 = pIStack_11;
        (*pMVar17->invoker_method)
                  ((method->klass->rgctx_data[0xb].method)->methodPointer,pMVar17,pIStack_16,
                   &pIStack_15,pIStack_11);
        func_?(ppIStack_13,pIStack_11,pFStack_5);
        pIStack_1 = (Il2CppRGCTXData *)0x1;
        while( true ) {
          pIVar7 = pIStack_12;
          cVar18 = (*(method->klass->rgctx_data[0x15].method)->methodPointer)();
          if (cVar18 == '\0') {
            pIStack_1 = (Il2CppRGCTXData *)0xffffffff;
            func_?();
            *unaff_FS_OFFSET = pIStack_3;
            return;
          }
          pIStack_16 = pIVar7;
          pMVar17 = method->klass->rgctx_data[0xd].method;
          pDVar19 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                     *)(method->klass->rgctx_data[0xd].method)->methodPointer;
          (*pMVar17->invoker_method)
                    ((Il2CppMethodPointer)pDVar19,pMVar17,ppIStack_13,&pIStack_16,pIVar7);
          func_?();
          pLVar20 = (this->fields)._serializedKeys;
          pMVar17 = method->klass->rgctx_data[0x10].method;
          pIStack_16 = (Il2CppClass *)&stack0xffffff98;
          (*pMVar17->invoker_method)
                    ((method->klass->rgctx_data[0x10].method)->methodPointer,pMVar17,ppMStack_14,
                     &pIStack_16,&stack0xffffff98);
          if (pLVar20 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
          pDVar21 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                    *)&stack0xffffff98;
          if (-1 < (int)(method->klass->rgctx_data[2].method)->return_type) {
            pDVar21 = pDVar19;
          }
          func_?((method->klass->rgctx_data[0x12].method)->methodPointer,
                          method->klass->rgctx_data[0x12].rgctxDataDummy,pLVar20,pDVar21);
          pLVar20 = (this->fields)._serializedValues;
          func_?((method->klass->rgctx_data[0x13].method)->methodPointer,
                          method->klass->rgctx_data[0x13].rgctxDataDummy,ppMStack_14,
                          &stack0xffffff98);
          if (pLVar20 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
          pDVar21 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                    *)&stack0xffffff98;
          if (-1 < (int)(method->klass->rgctx_data[4].method)->return_type) {
            pDVar21 = pDVar19;
          }
          func_?((method->klass->rgctx_data[0x14].method)->methodPointer,
                          method->klass->rgctx_data[0x14].rgctxDataDummy,pLVar20,pDVar21);
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void RemoveNullKeys() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__RemoveNullKeys
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pDVar1 = (this->fields)._dictionary;
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (pIVar2->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar2);
  }
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  iVar3 = *(int *)((int)pIVar2->static_fields + 4);
  if (iVar3 == 0) {
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pIVar2->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar2);
    }
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    uVar4 = *(undefined4 *)pIVar2->static_fields;
    pIVar2 = method->klass->rgctx_data[0x22].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    iVar3 = func_?(pIVar2);
    pMVar5 = method->klass->rgctx_data[0x25].method;
    (*pMVar5->methodPointer)(iVar3,uVar4,method->klass->rgctx_data[0x24].rgctxDataDummy,pMVar5);
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(int *)((int)pIVar2->static_fields + 4) = iVar3;
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?((int)pIVar2->static_fields + 4,iVar3);
  }
  uVar4 = (*(method->klass->rgctx_data[0x26].method)->methodPointer)
                    (pDVar1,iVar3,method->klass->rgctx_data[0x26].rgctxDataDummy);
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (pIVar2->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar2);
  }
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  iVar3 = *(int *)((int)pIVar2->static_fields + 8);
  if (iVar3 == 0) {
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pIVar2->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar2);
    }
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    uVar6 = *(undefined4 *)pIVar2->static_fields;
    pIVar2 = method->klass->rgctx_data[0x28].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    iVar3 = func_?(pIVar2);
    pMVar5 = method->klass->rgctx_data[0x2a].method;
    (*pMVar5->methodPointer)(iVar3,uVar6,method->klass->rgctx_data[0x29].rgctxDataDummy,pMVar5);
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(int *)((int)pIVar2->static_fields + 8) = iVar3;
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?((int)pIVar2->static_fields + 8,iVar3);
  }
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (pIVar2->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar2);
  }
  pIVar2 = method->klass->rgctx_data[0x23].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  iVar7 = *(int *)((int)pIVar2->static_fields + 0xc);
  if (iVar7 == 0) {
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pIVar2->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar2);
    }
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    uVar6 = *(undefined4 *)pIVar2->static_fields;
    pIVar2 = method->klass->rgctx_data[0x2b].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    iVar7 = func_?(pIVar2);
    pMVar5 = method->klass->rgctx_data[0x2d].method;
    (*pMVar5->methodPointer)(iVar7,uVar6,method->klass->rgctx_data[0x2c].rgctxDataDummy,pMVar5);
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(int *)((int)pIVar2->static_fields + 0xc) = iVar7;
    pIVar2 = method->klass->rgctx_data[0x23].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?((int)pIVar2->static_fields + 0xc,iVar7);
  }
  pDVar1 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)(*(method->klass->rgctx_data[0x2e].method)->methodPointer)
                        (uVar4,iVar3,iVar7,method->klass->rgctx_data[0x2e].rgctxDataDummy);
  (this->fields)._dictionary = pDVar1;
  func_?(&this->fields,pDVar1);
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
  (this->fields)._serializedKeys = pLVar4;
  func_?(&(this->fields)._serializedKeys,pLVar4);
  pIVar1 = method->klass->rgctx_data[9].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pLVar4 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?(pIVar1);
  pMVar3 = method->klass->rgctx_data[0x30].method;
  (*pMVar3->methodPointer)(pLVar4,pMVar3);
  pMVar3 = (MethodInfo *)&(this->fields)._serializedValues;
  (this->fields)._serializedValues = pLVar4;
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
  iVar1 = in_stack_2;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 8) + 0x84);
  in_stack_2 =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0x10) + 0x84);
  func_?();
  func_?();
  pDVar4 = (this->fields)._dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&index;
  if (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 8) + 0x14) < 0) {
    p_Var7 = index;
  }
  puStack_5 = &stack0xffffffe4;
  func_?(&stack0xffffffe4,p_Var7,uVar3);
  puVar6 = puStack_5;
  if (pDVar4 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    puStack_7 = &stack0xffffffe4;
    if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 8) + 0x14)) {
      puStack_7 = unaff_EDI;
    }
    puStack_8 = puStack_5;
    iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc);
    (**(code **)(iVar9 + 8))
              (**(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc),iVar9,pDVar4,
               &puStack_7,puStack_5);
    p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,puVar6,in_stack_2);
    return p_Var7;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar10)();
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[2].klass)->actualSize;
  uVar3 = (method->klass->rgctx_data[4].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xffffffe8;
  func_?();
  pDVar4 = (this->fields)._dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&index;
  if ((int)(pMVar1->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var7 = index;
  }
  _Stack_8.dummy = &stack0xffffffe8;
  func_?(method,p_Var7,uVar2);
  _Var8 = _Stack_8;
  p_Var7 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var7 = value;
  }
  func_?(_Stack_8.dummy,p_Var7,uVar3);
  if (pDVar4 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
      _Var8 = (_union_86)(_Var8.array)->etype;
    }
    if (-1 < (int)(pMVar1->klass->rgctx_data[2].method)->return_type) {
      method = (MethodInfo *)method->methodPointer;
    }
    pMVar5 = pMVar1->klass->rgctx_data[5].method;
    pMStack_6 = method;
    _Stack_8 = _Var8;
    (*pMVar5->invoker_method)
              ((pMVar1->klass->rgctx_data[5].method)->methodPointer,pMVar5,pDVar4,&pMStack_6,
               _Var8.dummy);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

