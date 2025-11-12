
/* Void Add(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)key;
  _StackX_10.monitor = (MonitorData *)value;
  lVar2 = FUN_?(this,0xffffffffffffff0,(method->klass->rgctx_data[2].klass)->actualSize,key)
  ;
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)&pvStack_4 + lVar2);
  uVar5 = (method->klass->rgctx_data[4].klass)->actualSize;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  lVar6 = FUN_?();
  pDVar7 = (this->fields)._dictionary;
  lVar6 = -lVar6;
  plVar8 = (longlong *)((longlong)&pvStack_4 + lVar6 + lVar2);
  p_Var10 = &_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var10 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var10);
  p_Var10 = (_Il2CppFullySharedGenericType *)&_StackX_10.monitor;
  if (*(int *)&(method->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var10 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?(plVar8,p_Var10,uVar5);
  if (pDVar7 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
      plVar8 = (longlong *)*plVar8;
    }
    if (-1 < *(int *)&(method->klass->rgctx_data[2].method)->return_type) {
      plVar3 = (longlong *)*plVar3;
    }
    pIVar9 = method->klass;
    pvStack_4 = plVar3;
    lStack_10 = (longlong)plVar8;
    *(longlong **)((longlong)alStack_11 + lVar6 + lVar2) = plVar8;
    pMVar12 = pIVar9->rgctx_data[0x1c].method;
    pIVar13 = pMVar12->invoker_method;
    pIVar14 = pMVar12->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
    (*pIVar13)(pIVar14,pMVar12,pDVar7,&pvStack_4,*(void **)((longlong)alStack_11 + lVar6 + lVar2));
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  if ((this->fields)._dictionary !=
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(method->klass->rgctx_data[0x1d].method)->methodPointer)();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean ContainsKey(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ContainsKey
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar2 = FUN_?();
  pDVar3 = (this->fields)._dictionary;
  lVar2 = -lVar2;
  pvStackX_8 = &stack0xffffffffffffffe8 + lVar2;
  p_Var9 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var9 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(pvStackX_8,p_Var9);
  if (pDVar3 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[2].method)->return_type) {
      pvStackX_8 = *(void **)pvStackX_8;
    }
    pIVar4 = method->klass;
    *(_Il2CppFullySharedGenericType__Class ***)((longlong)alStack_5 + lVar2) = &p_StackX_10;
    pMVar6 = pIVar4->rgctx_data[0x1e].method;
    pIVar7 = pMVar6->invoker_method;
    pIVar8 = pMVar6->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    (*pIVar7)(pIVar8,pMVar6,pDVar3,&pvStackX_8,*(void **)((longlong)alStack_5 + lVar2));
    return (bool)p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
  uVar1 = (ulonglong)(method->klass->rgctx_data[0xc].klass)->actualSize;
  uStackX_20 = (method->klass->rgctx_data[0xf].klass)->actualSize;
  uVar2 = (ulonglong)uStackX_20;
  pIVar3 = method->klass->rgctx_data[0xc].klass;
  pLStackX_10 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)other;
  pMStackX_18 = method;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_4[0] = &UNK_?;
    FUN_?(pIVar3);
  }
  apuStack_4[0] = &UNK_?;
  lVar5 = FUN_?();
  lVar5 = -lVar5;
  auStack_6._8_8_ = (longlong)auStack_6 + lVar5;
  *(undefined **)((longlong)apuStack_4 + lVar5) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  pLVar8 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           ((longlong)auStack_6 + lVar7 + lVar5);
  *(undefined **)((longlong)apuStack_4 + lVar7 + lVar5) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  pLVar10 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           ((longlong)auStack_6 + lVar9 + lVar7 + lVar5);
  uVar11 = uVar1 + 0xf;
  if (uVar11 <= uVar1) {
    uVar11 = 0xffffffffffffff0;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_4 + lVar9 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  lVar12 = -uVar11;
  pLVar13 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           ((longlong)auStack_6 + lVar12 + lVar9 + lVar7 + lVar5);
  uVar11 = uVar2 + 0xf;
  if (uVar11 <= uVar2) {
    uVar11 = 0xffffffffffffff0;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_4 + lVar12 + lVar9 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  lVar14 = -uVar11;
  pSVar15 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)((longlong)auStack_6 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5);
  uVar11 = uVar1 + 0xf;
  if (uVar11 <= uVar1) {
    uVar11 = 0xffffffffffffff0;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_4 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  FUN_?();
  lVar16 = -uVar11;
  pSVar17 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
            *)((longlong)auStack_6 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5);
  auStack_6._0_8_ = pSVar17;
  *(undefined **)((longlong)apuStack_4 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  FUN_?(pSVar17,0,uVar1);
  uVar11 = uVar2 + 0xf;
  if (uVar11 <= uVar2) {
    uVar11 = 0xffffffffffffff0;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_4 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  FUN_?();
  uVar18 = uStackX_20;
  lVar19 = -uVar11;
  pvVar20 = (void *)((longlong)auStack_6 +
                   lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5);
  *(undefined **)
   ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  FUN_?(pvVar20,0,uStackX_20);
  pMVar21 = pMStackX_18->klass->rgctx_data[0x1f].method;
  pIVar22 = pMVar21->methodPointer;
  *(undefined **)
   ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  (*pIVar22)(this,pMVar21);
  if (pLStackX_10 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar21 = pMStackX_18->klass->rgctx_data[0x20].method;
    pIVar22 = pMVar21->methodPointer;
    *(undefined **)
     ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
         &UNK_?;
    pvVar23 = (void *)(*pIVar22)(pLStackX_10,pMVar21);
    if (pvVar23 != (void *)0x0) {
      pMVar21 = pMStackX_18->klass->rgctx_data[0xb].method;
      pIVar24 = pMVar21->invoker_method;
      *(List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
       ((longlong)alStack_25 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
           pLVar13;
      pIVar22 = pMVar21->methodPointer;
      *(undefined **)
       ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
           &UNK_?;
      pLStackX_10 = pLVar13;
      (*pIVar24)(pIVar22,pMVar21,pvVar23,&pLStackX_10,
                 *(void **)((longlong)alStack_25 +
                           lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5));
      uVar26 = auStack_6._0_8_;
      *(undefined **)
       ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
           &UNK_?;
      FUN_?(uVar26,pLVar13,uVar1);
      auStack_6._40_8_ = 0;
      auStack_6._48_8_ = &pMStackX_18;
      auStack_6._56_8_ =
           &((SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)auStack_6)->monitor;
      pSStack_27 = (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)auStack_6;
      while( true ) {
        uVar26 = auStack_6._0_8_;
        pMVar21 = pMStackX_18->klass->rgctx_data[0x15].method;
        pIVar22 = pMVar21->methodPointer;
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        cVar28 = (*pIVar22)(uVar26,pMVar21);
        if (cVar28 == '\0') {
          *(undefined **)
           ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
               &UNK_?;
          FUN_?(auStack_6 + 0x30);
          return;
        }
        pMVar21 = pMStackX_18->klass->rgctx_data[0xd].method;
        pIVar24 = pMVar21->invoker_method;
        *(SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
          **)((longlong)alStack_25 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             pSVar15;
        uVar26 = auStack_6._0_8_;
        pIVar22 = pMVar21->methodPointer;
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        pLStackX_10 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pSVar15;
        (*pIVar24)(pIVar22,pMVar21,(void *)uVar26,&pLStackX_10,
                   *(void **)((longlong)alStack_25 +
                             lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5));
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        FUN_?(pvVar20,pSVar15,uVar18);
        pDVar29 = (this->fields)._dictionary;
        pMVar21 = pMStackX_18->klass->rgctx_data[0x10].method;
        pIVar24 = pMVar21->invoker_method;
        *(List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
         ((longlong)alStack_25 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             pLVar8;
        pIVar22 = pMVar21->methodPointer;
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        pLStackX_10 = pLVar8;
        (*pIVar24)(pIVar22,pMVar21,pvVar20,&pLStackX_10,
                   *(void **)((longlong)alStack_25 +
                             lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5));
        pMVar21 = pMStackX_18->klass->rgctx_data[0x13].method;
        pIVar24 = pMVar21->invoker_method;
        *(List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)
         ((longlong)alStack_25 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             pLVar10;
        pIVar22 = pMVar21->methodPointer;
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        pLStackX_10 = pLVar10;
        (*pIVar24)(pIVar22,pMVar21,pvVar20,&pLStackX_10,
                   *(void **)((longlong)alStack_25 +
                             lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5));
        if (pDVar29 ==
            (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)0x0) break;
        auStack_6._32_8_ = pLVar10;
        if (-1 < *(int *)&(pMStackX_18->klass->rgctx_data[4].method)->return_type) {
          auStack_6._32_8_ = pLVar10->klass;
        }
        auStack_6._24_8_ = pLVar8;
        if (-1 < *(int *)&(pMStackX_18->klass->rgctx_data[2].method)->return_type) {
          auStack_6._24_8_ = pLVar8->klass;
        }
        pMVar21 = pMStackX_18->klass->rgctx_data[0x1c].method;
        pIVar24 = pMVar21->invoker_method;
        *(undefined8 *)
         ((longlong)alStack_25 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             auStack_6._32_8_;
        pIVar22 = pMVar21->methodPointer;
        *(undefined **)
         ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
             &UNK_?;
        (*pIVar24)(pIVar22,pMVar21,pDVar29,
                   &(((SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)auStack_6)->fields)._serializedKeys,
                   *(void **)((longlong)alStack_25 +
                             lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5));
        uVar18 = uStackX_20;
      }
      *(undefined **)
       ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
           &UNK_?;
      FUN_?();
      *(undefined **)
       ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
           &UNK_?;
      FUN_?();
      pcVar30 = (code *)swi(3);
      (*pcVar30)();
      return;
    }
  }
  *(undefined **)
   ((longlong)apuStack_4 + lVar19 + lVar16 + lVar14 + lVar12 + lVar9 + lVar7 + lVar5) =
       &UNK_?;
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStack_1[0] = &UNK_?;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)&piStack_4 + lVar2);
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  lVar5 = FUN_?();
  lVar5 = -lVar5;
  plVar6 = (longlong *)((longlong)&piStack_4 + lVar5 + lVar2);
  pvVar7 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    pvVar7 = (void *)FUN_?(pvVar7);
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  pDVar8 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(pvVar7);
  pIVar9 = (method->klass->rgctx_data[0x17].method)->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  (*pIVar9)(pDVar8);
  bVar10 = iRam_? != 0;
  (this->fields)._dictionary = pDVar8;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar12;
      LOCK();
      uVar14 = *puVar12;
      if (uVar13 == uVar14) {
        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar14);
  }
  pLVar15 = (this->fields)._serializedKeys;
  if (pLVar15 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar16 = method->klass->rgctx_data[0x18].method;
    pIVar9 = pMVar16->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    iVar17 = (*pIVar9)(pLVar15,pMVar16);
    pLVar15 = (this->fields)._serializedValues;
    if (pLVar15 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pvVar7 = method->klass->rgctx_data[0x19].rgctxDataDummy;
      pIVar9 = (method->klass->rgctx_data[0x19].method)->methodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
      iVar18 = (*pIVar9)(pLVar15,pvVar7);
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
        FUN_?();
      }
      if (iVar17 <= iVar18) {
        iVar18 = iVar17;
      }
      iVar17 = 0;
      if (0 < iVar18) {
        do {
          pLVar15 = (this->fields)._serializedKeys;
          pDVar8 = (this->fields)._dictionary;
          if (pLVar15 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          pIVar19 = method->klass;
          lStack_20 = (longlong)plVar3;
          *(longlong **)((longlong)alStack_21 + lVar5 + lVar2) = plVar3;
          piStack_4 = aiStackX_8;
          pMVar16 = pIVar19->rgctx_data[0x1a].method;
          pIVar22 = pMVar16->invoker_method;
          pIVar9 = (method->klass->rgctx_data[0x1a].method)->methodPointer;
          *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
          aiStackX_8[0] = iVar17;
          (*pIVar22)(pIVar9,pMVar16,pLVar15,&piStack_4,
                     *(void **)((longlong)alStack_21 + lVar5 + lVar2));
          pLVar15 = (this->fields)._serializedValues;
          if (pLVar15 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
          goto code_?;
          pIVar19 = method->klass;
          lStack_23 = (longlong)plVar6;
          *(longlong **)((longlong)alStack_21 + lVar5 + lVar2) = plVar6;
          piStack_24 = aiStackX_8;
          pMVar16 = pIVar19->rgctx_data[0x1b].method;
          pIVar22 = pMVar16->invoker_method;
          pIVar9 = (method->klass->rgctx_data[0x1b].method)->methodPointer;
          *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
          aiStackX_8[0] = iVar17;
          (*pIVar22)(pIVar9,pMVar16,pLVar15,&piStack_24,
                     *(void **)((longlong)alStack_21 + lVar5 + lVar2));
          if (pDVar8 ==
              (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)0x0) goto code_?;
          lStack_25 = (longlong)plVar6;
          if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
            lStack_25 = *plVar6;
          }
          pvStack_26 = plVar3;
          if (-1 < *(int *)&(method->klass->rgctx_data[2].method)->return_type) {
            pvStack_26 = (void *)*plVar3;
          }
          pIVar19 = method->klass;
          *(longlong *)((longlong)alStack_21 + lVar5 + lVar2) = lStack_25;
          pMVar16 = pIVar19->rgctx_data[0x1c].method;
          pIVar22 = pMVar16->invoker_method;
          pIVar9 = pMVar16->methodPointer;
          *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
          (*pIVar22)(pIVar9,pMVar16,pDVar8,&pvStack_26,
                     *(void **)((longlong)alStack_21 + lVar5 + lVar2));
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar18);
      }
      if ((this->fields)._serializedKeys !=
          (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        pIVar9 = (method->klass->rgctx_data[8].method)->methodPointer;
        *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
        (*pIVar9)();
        if ((this->fields)._serializedValues !=
            (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          pIVar9 = (method->klass->rgctx_data[10].method)->methodPointer;
          *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
          (*pIVar9)();
          return;
        }
      }
    }
  }
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnBeforeSerialize() */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnBeforeSerialize
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  uVar1 = (ulonglong)(method->klass->rgctx_data[0xc].klass)->actualSize;
  uVar2 = (method->klass->rgctx_data[0xf].klass)->actualSize;
  uVar3 = (ulonglong)uVar2;
  pIVar4 = method->klass->rgctx_data[0xc].klass;
  pMStackX_10 = method;
  if ((pIVar4->field_0x135 & 1) == 0) {
    apuStack_5[0] = &UNK_?;
    FUN_?(pIVar4);
  }
  apuStack_5[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  alStack_7[0] = (longlong)alStack_7 + lVar6;
  *(undefined **)((longlong)apuStack_5 + lVar6) = &UNK_?;
  lVar8 = FUN_?();
  lVar8 = -lVar8;
  plVar9 = (longlong *)((longlong)alStack_7 + lVar8 + lVar6);
  *(undefined **)((longlong)apuStack_5 + lVar8 + lVar6) = &UNK_?;
  lVar10 = FUN_?();
  lVar10 = -lVar10;
  plVar11 = (longlong *)((longlong)alStack_7 + lVar10 + lVar8 + lVar6);
  uVar12 = uVar1 + 0xf;
  if (uVar12 <= uVar1) {
    uVar12 = 0xffffffffffffff0;
  }
  uVar12 = uVar12 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_5 + lVar10 + lVar8 + lVar6) = &UNK_?;
  FUN_?();
  lVar13 = -uVar12;
  plStackX_20 = (longlong *)((longlong)alStack_7 + lVar13 + lVar10 + lVar8 + lVar6);
  uVar12 = uVar3 + 0xf;
  if (uVar12 <= uVar3) {
    uVar12 = 0xffffffffffffff0;
  }
  uVar12 = uVar12 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_5 + lVar13 + lVar10 + lVar8 + lVar6) = &UNK_?;
  FUN_?();
  lVar14 = -uVar12;
  plVar15 = (longlong *)((longlong)alStack_7 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6);
  uVar12 = uVar1 + 0xf;
  if (uVar12 <= uVar1) {
    uVar12 = 0xffffffffffffff0;
  }
  uVar12 = uVar12 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_5 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  FUN_?();
  lVar16 = -uVar12;
  pvStackX_18 = (void *)((longlong)alStack_7 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6)
  ;
  *(undefined **)((longlong)apuStack_5 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  FUN_?(pvStackX_18,0,uVar1);
  uVar12 = uVar3 + 0xf;
  if (uVar12 <= uVar3) {
    uVar12 = 0xffffffffffffff0;
  }
  uVar12 = uVar12 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_5 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  FUN_?();
  lVar17 = -uVar12;
  pvVar18 = (void *)((longlong)alStack_7 +
                   lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6);
  *(undefined **)
   ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  FUN_?(pvVar18,0,uVar2);
  pMVar19 = pMStackX_10->klass->rgctx_data[6].method;
  pIVar20 = pMVar19->methodPointer;
  *(undefined **)
   ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  (*pIVar20)(this,pMVar19);
  pLVar21 = (this->fields)._serializedKeys;
  if (pLVar21 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar19 = pMStackX_10->klass->rgctx_data[8].method;
    pIVar20 = pMVar19->methodPointer;
    *(undefined **)
     ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
         &UNK_?;
    (*pIVar20)(pLVar21,pMVar19);
    pLVar21 = (this->fields)._serializedValues;
    if (pLVar21 != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar19 = pMStackX_10->klass->rgctx_data[10].method;
      pIVar20 = pMVar19->methodPointer;
      *(undefined **)
       ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
           &UNK_?;
      (*pIVar20)(pLVar21,pMVar19);
      plVar22 = plStackX_20;
      pDVar23 = (this->fields)._dictionary;
      if (pDVar23 !=
          (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *)0x0) {
        pMVar19 = pMStackX_10->klass->rgctx_data[0xb].method;
        pIVar24 = pMVar19->invoker_method;
        *(longlong **)
         ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
             plStackX_20;
        pIVar20 = pMVar19->methodPointer;
        *(undefined **)
         ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
             &UNK_?;
        (*pIVar24)(pIVar20,pMVar19,pDVar23,&plStackX_20,
                   *(void **)((longlong)alStack_25 +
                             lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
        *(undefined **)
         ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
             &UNK_?;
        FUN_?(pvStackX_18,plVar22,uVar1);
        alStack_7[2] = 0;
        ppMStack_26 = &pMStackX_10;
        ppvStack_27 = &pvStackX_18;
        plStack_28 = alStack_7;
        while( true ) {
          pMVar19 = pMStackX_10->klass->rgctx_data[0x15].method;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          cVar29 = (*pIVar20)(pvStackX_18,pMVar19);
          if (cVar29 == '\0') {
            *(undefined **)
             ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6)
                 = &UNK_?;
            FUN_?(&ppMStack_26);
            return;
          }
          pMVar19 = pMStackX_10->klass->rgctx_data[0xd].method;
          pIVar24 = pMVar19->invoker_method;
          *(longlong **)
           ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               plVar15;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          plStackX_20 = plVar15;
          (*pIVar24)(pIVar20,pMVar19,pvStackX_18,&plStackX_20,
                     *(void **)((longlong)alStack_25 +
                               lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          FUN_?(pvVar18,plVar15,uVar2);
          pLVar21 = (this->fields)._serializedKeys;
          pMVar19 = pMStackX_10->klass->rgctx_data[0x10].method;
          pIVar24 = pMVar19->invoker_method;
          *(longlong **)
           ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               plVar9;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          plStackX_20 = plVar9;
          (*pIVar24)(pIVar20,pMVar19,pvVar18,&plStackX_20,
                     *(void **)((longlong)alStack_25 +
                               lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
          if (pLVar21 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) break;
          plStackX_20 = plVar9;
          if (-1 < *(int *)&(pMStackX_10->klass->rgctx_data[2].method)->return_type) {
            plStackX_20 = (longlong *)*plVar9;
          }
          pMVar19 = pMStackX_10->klass->rgctx_data[0x12].method;
          pIVar24 = pMVar19->invoker_method;
          *(longlong **)
           ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               plStackX_20;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          (*pIVar24)(pIVar20,pMVar19,pLVar21,&plStackX_20,
                     *(void **)((longlong)alStack_25 +
                               lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
          pLVar21 = (this->fields)._serializedValues;
          pMVar19 = pMStackX_10->klass->rgctx_data[0x13].method;
          pIVar24 = pMVar19->invoker_method;
          *(longlong **)
           ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               plVar11;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          plStackX_20 = plVar11;
          (*pIVar24)(pIVar20,pMVar19,pvVar18,&plStackX_20,
                     *(void **)((longlong)alStack_25 +
                               lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
          if (pLVar21 == (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
            *(undefined **)
             ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6)
                 = &UNK_?;
            FUN_?();
            break;
          }
          plStackX_20 = plVar11;
          if (-1 < *(int *)&(pMStackX_10->klass->rgctx_data[4].method)->return_type) {
            plStackX_20 = (longlong *)*plVar11;
          }
          pMVar19 = pMStackX_10->klass->rgctx_data[0x14].method;
          pIVar24 = pMVar19->invoker_method;
          *(longlong **)
           ((longlong)alStack_25 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               plStackX_20;
          pIVar20 = pMVar19->methodPointer;
          *(undefined **)
           ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
               &UNK_?;
          (*pIVar24)(pIVar20,pMVar19,pLVar21,&plStackX_20,
                     *(void **)((longlong)alStack_25 +
                               lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6));
        }
        *(undefined **)
         ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
             &UNK_?;
        FUN_?();
        *(undefined **)
         ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
             &UNK_?;
        FUN_?();
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
  }
  *(undefined **)
   ((longlong)apuStack_5 + lVar17 + lVar16 + lVar14 + lVar13 + lVar10 + lVar8 + lVar6) =
       &UNK_?;
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
    FUN_?(pvVar2);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  lVar4 = *(longlong *)((longlong)pIVar3->static_fields + 8);
  if (lVar4 == 0) {
    pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
      FUN_?(pvVar2);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar5 = *(undefined8 *)pIVar3->static_fields;
    pvVar2 = method->klass->rgctx_data[0x22].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    lVar4 = FUN_?(pvVar2);
    pIVar6 = method->klass->rgctx_data;
    (*(pIVar6[0x25].method)->methodPointer)(lVar4,uVar5,pIVar6[0x24].rgctxDataDummy);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    *(longlong *)((longlong)pIVar3->static_fields + 8) = lVar4;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((longlong)pIVar3->static_fields + 8U >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  pMVar12 = method->klass->rgctx_data[0x26].method;
  uVar5 = (*pMVar12->methodPointer)(pDVar1,lVar4,pMVar12);
  pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
    FUN_?(pvVar2);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  lVar4 = *(longlong *)((longlong)pIVar3->static_fields + 0x10);
  if (lVar4 == 0) {
    pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
      FUN_?(pvVar2);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar13 = *(undefined8 *)pIVar3->static_fields;
    pvVar2 = method->klass->rgctx_data[0x28].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    lVar4 = FUN_?(pvVar2);
    pIVar6 = method->klass->rgctx_data;
    (*(pIVar6[0x2a].method)->methodPointer)(lVar4,uVar13,pIVar6[0x29].rgctxDataDummy);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    *(longlong *)((longlong)pIVar3->static_fields + 0x10) = lVar4;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((longlong)pIVar3->static_fields + 0x10U >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
    FUN_?(pvVar2);
  }
  pIVar3 = method->klass->rgctx_data[0x23].klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  lVar8 = *(longlong *)((longlong)pIVar3->static_fields + 0x18);
  if (lVar8 == 0) {
    pvVar2 = method->klass->rgctx_data[0x23].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    if (*(int *)((longlong)pvVar2 + 0xe4) == 0) {
      FUN_?(pvVar2);
    }
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    uVar13 = *(undefined8 *)pIVar3->static_fields;
    pvVar2 = method->klass->rgctx_data[0x2b].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    lVar8 = FUN_?(pvVar2);
    pIVar6 = method->klass->rgctx_data;
    (*(pIVar6[0x2d].method)->methodPointer)(lVar8,uVar13,pIVar6[0x2c].rgctxDataDummy);
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    *(longlong *)((longlong)pIVar3->static_fields + 0x18) = lVar8;
    pIVar3 = method->klass->rgctx_data[0x23].klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((longlong)pIVar3->static_fields + 0x18U >> 0xc);
      lVar14 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar10 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  pMVar12 = method->klass->rgctx_data[0x2e].method;
  pDVar1 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)(*pMVar12->methodPointer)(uVar5,lVar4,lVar8,pMVar12);
  bVar11 = iRam_? != 0;
  (this->fields)._dictionary = pDVar1;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar10 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
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
  pvVar1 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pDVar2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)FUN_?(pvVar1);
  (*(method->klass->rgctx_data[0x17].method)->methodPointer)(pDVar2);
  bVar3 = iRam_? != 0;
  (this->fields)._dictionary = pDVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pvVar1 = method->klass->rgctx_data[7].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pLVar8 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)FUN_?(pvVar1);
  (*(method->klass->rgctx_data[0x2f].method)->methodPointer)(pLVar8);
  bVar3 = iRam_? != 0;
  (this->fields)._serializedKeys = pLVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._serializedKeys >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pvVar1 = method->klass->rgctx_data[9].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pLVar8 = (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)FUN_?(pvVar1);
  (*(method->klass->rgctx_data[0x30].method)->methodPointer)(pLVar8);
  bVar3 = iRam_? != 0;
  (this->fields)._serializedValues = pLVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._serializedValues >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
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
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x20) + 0xfc);
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)index;
  lVar3 = FUN_?(this,0xffffffffffffff0,
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x10) +
                         0xfc),index);
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)alStack_5 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar6 = FUN_?();
  pDVar7 = (this->fields)._dictionary;
  lVar6 = -lVar6;
  lVar8 = (longlong)alStack_5 + lVar6 + lVar3;
  p_Var10 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x10) + 0x28) < 0)
  {
    p_Var10 = index;
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?(plVar4,p_Var10);
  if (pDVar7 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x10) + 0x28
                     )) {
      plVar4 = (longlong *)*plVar4;
    }
    lVar9 = *(longlong *)(in_R9 + 0x20);
    alStack_5[0] = (longlong)plVar4;
    alStack_5[1] = lVar8;
    *(longlong *)((longlong)alStack_10 + lVar6 + lVar3) = lVar8;
    puVar11 = *(undefined8 **)(*(longlong *)(lVar9 + 0xc0) + 0x18);
    pcVar12 = (code *)puVar11[2];
    uVar13 = *puVar11;
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    (*pcVar12)(uVar13,puVar11,pDVar7,alStack_5);
    *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
    p_Var10 = (_Il2CppFullySharedGenericType *)FUN_?(method,lVar8,uVar1);
    return p_Var10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar6 + lVar3) = &UNK_?;
  FUN_?();
  pcVar12 = (code *)swi(3);
  p_Var10 = (_Il2CppFullySharedGenericType *)(*pcVar12)();
  return p_Var10;
}


/* Void set_Item(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::RTG::SerializableDictionary`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Item
               (SerializableDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *index,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)index;
  _StackX_10.monitor = (MonitorData *)value;
  lVar2 = FUN_?(this,0xffffffffffffff0,(method->klass->rgctx_data[2].klass)->actualSize,
                        index);
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)&pvStack_4 + lVar2);
  uVar5 = (method->klass->rgctx_data[4].klass)->actualSize;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  lVar6 = FUN_?();
  pDVar7 = (this->fields)._dictionary;
  lVar6 = -lVar6;
  plVar8 = (longlong *)((longlong)&pvStack_4 + lVar6 + lVar2);
  p_Var10 = &_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[2].method)->return_type < 0) {
    p_Var10 = index;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var10);
  p_Var10 = (_Il2CppFullySharedGenericType *)&_StackX_10.monitor;
  if (*(int *)&(method->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var10 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?(plVar8,p_Var10,uVar5);
  if (pDVar7 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[4].method)->return_type) {
      plVar8 = (longlong *)*plVar8;
    }
    if (-1 < *(int *)&(method->klass->rgctx_data[2].method)->return_type) {
      plVar3 = (longlong *)*plVar3;
    }
    pIVar9 = method->klass;
    pvStack_4 = plVar3;
    lStack_10 = (longlong)plVar8;
    *(longlong **)((longlong)alStack_11 + lVar6 + lVar2) = plVar8;
    pMVar12 = pIVar9->rgctx_data[5].method;
    pIVar13 = pMVar12->invoker_method;
    pIVar14 = pMVar12->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
    (*pIVar13)(pIVar14,pMVar12,pDVar7,&pvStack_4,*(void **)((longlong)alStack_11 + lVar6 + lVar2));
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar2) = &UNK_?;
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

