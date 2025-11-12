
/* Void AddOrUpdate(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, Int32, Boolean)
    */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__AddOrUpdate
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               int32_t expirationSeconds,bool resetExpirationIfExists,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[5].klass)->actualSize;
  uVar3 = (method->klass->rgctx_data[8].klass)->actualSize;
  apuStack_4[0] = &UNK_?;
  pMStackX_8 = this;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  p_StackX_18 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar5 = FUN_?(0xffffffffffffff0);
  lVar5 = -lVar5;
  IVar6.rgctxDataDummy = (void *)((longlong)aIStack_7 + lVar5);
  *(undefined **)((longlong)apuStack_4 + lVar5) = &UNK_?;
  lVar8 = FUN_?();
  lVar8 = -lVar8;
  IVar9.rgctxDataDummy = (void *)((longlong)aIStack_7 + lVar8 + lVar5);
  IStack_10.rgctxDataDummy = (void *)0x0;
  if ((this->fields).disposed != 0) {
    return;
  }
  if ((expirationSeconds != -1) && (expirationSeconds < 1)) {
    expirationSeconds = 0x78;
  }
  pRVar11 = (this->fields).locker;
  if (pRVar11 == (ReaderWriterLockSlim *)0x0) {
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  method._0_4_ = -1;
  method._4_4_ = 0;
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  System.Core.dll::System::Threading::ReaderWriterLockSlim::
  ReaderWriterLockSlim_TryEnterWriteLockCore
            (pRVar11,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
  uStack_13 = 0;
  ppMStack_14 = &pMStackX_8;
  pDVar15 = (pMStackX_8->fields).cache;
  p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type < 0) {
    p_Var17 = p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  FUN_?(IVar6,p_Var17,uVar2);
  if (pDVar15 == (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) goto code_?;
  aIStack_7[0].rgctxDataDummy = IVar6.rgctxDataDummy;
  if (-1 < *(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type) {
    aIStack_7[0] = *(Il2CppRGCTXData *)&(IVar6.method)->methodPointer;
  }
  pMVar16 = pMVar1->klass->rgctx_data[9].method;
  aIStack_7[1].rgctxDataDummy = &IStack_10;
  pMVar17 = pMVar1->klass->rgctx_data[9].method;
  pIVar18 = pMVar16->invoker_method;
  *(MethodInfo ***)((longlong)aIStack_19 + lVar8 + lVar5) = &method;
  pIVar20 = pMVar17->methodPointer;
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  (*pIVar18)(pIVar20,pMVar16,pDVar15,&aIStack_7[0].rgctxDataDummy,
            *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
  if ((char)method == '\0') {
    pDVar15 = (pMStackX_8->fields).cache;
    p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
    if (*(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type < 0) {
      p_Var17 = p_StackX_10;
    }
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?(IVar6,p_Var17,uVar2);
    p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_18;
    if (*(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type < 0) {
      p_Var17 = p_StackX_18;
    }
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?(IVar9,p_Var17,uVar3);
    pcVar12 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      pcVar12 = (code *)FUN_?(&UNK_?);
      if (pcVar12 != (code *)0x0) goto code_?;
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      uVar21 = func_?(&UNK_?);
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      FUN_?(uVar21,0);
code_?:
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      FUN_?();
    }
    else {
code_?:
      pcRam_? = pcVar12;
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      iVar22 = (*pcRam_?)();
      pvVar23 = pMVar1->klass->rgctx_data[0xb].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar23 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
        pvVar23 = (void *)FUN_?(pvVar23);
      }
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      pIVar24 = (Il2CppRGCTXData *)FUN_?(pvVar23);
      if (-1 < *(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type) {
        IVar9 = (Il2CppRGCTXData)(IVar9.method)->methodPointer;
      }
      pMVar16 = pMVar1->klass->rgctx_data[0x12].method;
      IStack_25._0_4_ = expirationSeconds;
      aIStack_7[0].rgctxDataDummy = IVar9.rgctxDataDummy;
      aIStack_7[1].rgctxDataDummy = &IStack_25;
      ppMStack_26 = &method;
      pMVar17 = pMVar1->klass->rgctx_data[0x12].method;
      pIVar18 = pMVar16->invoker_method;
      *(MethodInfo ***)((longlong)aIStack_19 + lVar8 + lVar5) = &method;
      pIVar20 = pMVar17->methodPointer;
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      method._0_4_ = iVar22;
      (*pIVar18)(pIVar20,pMVar16,pIVar24,&aIStack_7[0].rgctxDataDummy,
                *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
      if (pDVar15 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
        if (-1 < *(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type) {
          IVar6 = (Il2CppRGCTXData)(IVar6.method)->methodPointer;
        }
        pMVar1 = pMVar1->klass->rgctx_data[0x10].method;
        aIStack_7[0].rgctxDataDummy = IVar6.rgctxDataDummy;
        aIStack_7[1].rgctxDataDummy = pIVar24;
        pIVar18 = pMVar1->invoker_method;
        *(Il2CppRGCTXData **)((longlong)aIStack_19 + lVar8 + lVar5) = pIVar24;
        pIVar20 = pMVar1->methodPointer;
        *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
        (*pIVar18)(pIVar20,pMVar1,pDVar15,&aIStack_7[0].rgctxDataDummy,
                  *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
        pRVar11 = (pMStackX_8->fields).locker;
        if (pRVar11 != (ReaderWriterLockSlim *)0x0) {
          *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitWriteLock(pRVar11,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?();
  }
  else {
    pDVar15 = (pMStackX_8->fields).cache;
    pMVar16 = pMVar1->klass->rgctx_data[5].method;
    if (resetExpirationIfExists == 0) {
      p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
      if (*(int *)&pMVar16->return_type < 0) {
        p_Var17 = p_StackX_10;
      }
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      FUN_?(IVar6,p_Var17,uVar2);
      IVar27 = IStack_10;
      p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_18;
      if (*(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type < 0) {
        p_Var17 = p_StackX_18;
      }
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      FUN_?(IVar9,p_Var17,uVar3);
      if (IVar27.rgctxDataDummy != (void *)0x0) {
        if (-1 < *(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type) {
          IVar9 = *(Il2CppRGCTXData *)&(IVar9.method)->methodPointer;
        }
        pMVar16 = pMVar1->klass->rgctx_data[0x11].method;
        aIStack_7[0].rgctxDataDummy = IVar9.rgctxDataDummy;
        aIStack_7[1].rgctxDataDummy = (Il2CppRGCTXData *)&method;
        pMVar17 = pMVar1->klass->rgctx_data[0x11].method;
        pIVar18 = pMVar16->invoker_method;
        *(Il2CppRGCTXData **)((longlong)aIStack_19 + lVar8 + lVar5) = &IStack_25;
        pIVar20 = pMVar17->methodPointer;
        *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
        method._0_4_ = expirationSeconds;
        (*pIVar18)(pIVar20,pMVar16,IVar27.rgctxDataDummy,&aIStack_7[0].rgctxDataDummy,
                  *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
        if (pDVar15 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)0x0) {
          if (-1 < *(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type) {
            IVar6 = (Il2CppRGCTXData)(IVar6.method)->methodPointer;
          }
          pMVar1 = pMVar1->klass->rgctx_data[0x10].method;
          aIStack_7[0].rgctxDataDummy = IVar6.rgctxDataDummy;
          aIStack_7[1] = IStack_25;
          pIVar18 = pMVar1->invoker_method;
          *(Il2CppRGCTXData *)((longlong)aIStack_19 + lVar8 + lVar5) = IStack_25;
          pIVar20 = pMVar1->methodPointer;
          *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
          (*pIVar18)(pIVar20,pMVar1,pDVar15,&aIStack_7[0].rgctxDataDummy,
                    *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
          pRVar11 = (pMStackX_8->fields).locker;
          if (pRVar11 != (ReaderWriterLockSlim *)0x0) {
            *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
            System.Core.dll::System::Threading::ReaderWriterLockSlim::
            ReaderWriterLockSlim_ExitWriteLock(pRVar11,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
    if (*(int *)&pMVar16->return_type < 0) {
      p_Var17 = p_StackX_10;
    }
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?(IVar6,p_Var17,uVar2);
    IVar27 = IStack_10;
    p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_18;
    if (*(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type < 0) {
      p_Var17 = p_StackX_18;
    }
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    FUN_?(IVar9,p_Var17,uVar3);
    *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
    fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (IVar27.rgctxDataDummy != (void *)0x0) {
      if (-1 < *(int *)&(pMVar1->klass->rgctx_data[8].method)->return_type) {
        IVar9 = (Il2CppRGCTXData)(IVar9.method)->methodPointer;
      }
      pMVar16 = pMVar1->klass->rgctx_data[0xf].method;
      IStack_25._0_4_ = fVar28;
      pIStack_29 = (Il2CppRGCTXData *)IVar9;
      ppMStack_30 = &method;
      pIStack_31 = &IStack_25;
      pMVar17 = pMVar1->klass->rgctx_data[0xf].method;
      pIVar18 = pMVar16->invoker_method;
      *(Il2CppRGCTXData **)((longlong)aIStack_19 + lVar8 + lVar5) = aIStack_7;
      pIVar20 = pMVar17->methodPointer;
      *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
      method._0_4_ = expirationSeconds;
      (*pIVar18)(pIVar20,pMVar16,IVar27.rgctxDataDummy,&pIStack_29,
                *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
      if (pDVar15 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
        if (-1 < *(int *)&(pMVar1->klass->rgctx_data[5].method)->return_type) {
          IVar6 = (Il2CppRGCTXData)(IVar6.method)->methodPointer;
        }
        pMVar1 = pMVar1->klass->rgctx_data[0x10].method;
        IStack_25.rgctxDataDummy = IVar6.rgctxDataDummy;
        IStack_32 = aIStack_7[0];
        pIVar18 = pMVar1->invoker_method;
        *(Il2CppRGCTXData *)((longlong)aIStack_19 + lVar8 + lVar5) = aIStack_7[0];
        pIVar20 = pMVar1->methodPointer;
        *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
        (*pIVar18)(pIVar20,pMVar1,pDVar15,&IStack_25.rgctxDataDummy,
                  *(void **)((longlong)aIStack_19 + lVar8 + lVar5));
        pRVar11 = (pMStackX_8->fields).locker;
        if (pRVar11 != (ReaderWriterLockSlim *)0x0) {
          *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitWriteLock(pRVar11,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
  *(undefined **)((longlong)apuStack_4 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pRVar1 = (this->fields).locker;
  if (pRVar1 == (ReaderWriterLockSlim *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  System.Core.dll::System::Threading::ReaderWriterLockSlim::
  ReaderWriterLockSlim_TryEnterWriteLockCore
            (pRVar1,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
  if ((this->fields).cache !=
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    (*(method->klass->rgctx_data[4].method)->methodPointer)();
    pRVar1 = (this->fields).locker;
    if (pRVar1 != (ReaderWriterLockSlim *)0x0) {
      System.Core.dll::System::Threading::ReaderWriterLockSlim::ReaderWriterLockSlim_ExitWriteLock
                (pRVar1,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Dispose() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Dispose
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pIVar1->method->methodPointer)(this,CONCAT71((int7)((ulonglong)pIVar1 >> 8),1));
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Dispose_1
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,bool disposing,MethodInfo *method)

{
  if (((this->fields).disposed != 0) || ((this->fields).disposed = 1, disposing == 0)) {
    return;
  }
  (*(method->klass->rgctx_data[2].method)->methodPointer)();
  pRVar1 = (this->fields).locker;
  if (pRVar1 == (ReaderWriterLockSlim *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pRVar1->fields).fDisposed == 0) {
    if (((0 < (int)(pRVar1->fields).numReadWaiters) || (0 < (int)(pRVar1->fields).numUpgradeWaiters)
        ) || (0 < (int)(pRVar1->fields).numWriteWaiters)) {
      pVVar3 = (Void *)func_?(&StringLiteral_The_lock_is_being_disposed_while);
      pSVar4 = (String *)
                UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_2(pVVar3,(MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__Threading__SynchronizationLockException);
      pSVar6 = (SynchronizationLockException *)func_?(uVar5);
      mscorlib.dll::System::Threading::SynchronizationLockException::
      SynchronizationLockException__ctor_1(pSVar6,pSVar4,(MethodInfo *)0x0);
      uVar5 = func_?(&
                                  MethodInfo__System__Threading__ReaderWriterLockSlim__Dispose_bool_
                                 );
      FUN_?(pSVar6,uVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Threading__ReaderWriterCount);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar7 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
    lVar8 = TlsGetValue(*puRam_?);
    if (lVar8 == 0) {
      GetLastError();
    }
    lVar8 = **(longlong **)
              (*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 0x10) * 8) +
              (ulonglong)(uVar7 & 0xffff) * 8);
    if (lVar8 != 0) {
      do {
        if (*(longlong *)(lVar8 + 0x10) == (pRVar1->fields).lockID) {
          if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) goto code_?;
          break;
        }
        lVar8 = *(longlong *)(lVar8 + 0x28);
      } while (lVar8 != 0);
    }
    if ((pRVar1->fields).fIsReentrant == 0) {
      pTVar9 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread((MethodInfo *)0x0);
      if (pTVar9 == (Thread *)0x0) goto code_?;
      if ((pTVar9->fields).internal_thread == (InternalThread *)0x0) {
        uVar5 = FUN_?(0x28);
        FUN_?(uVar5);
        FUN_?(pTVar9);
        (((pTVar9->fields).internal_thread)->fields).state = 8;
      }
      pIVar10 = (pTVar9->fields).internal_thread;
      if (pIVar10 == (InternalThread *)0x0) goto code_?;
      if ((pIVar10->fields).managed_id == (pRVar1->fields).upgradeLockOwnerId)
      goto code_?;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Threading__ReaderWriterCount);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
      lVar8 = TlsGetValue(*puRam_?);
      if (lVar8 == 0) {
        GetLastError();
      }
      lVar8 = **(longlong **)
                (*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 0x10) * 8) +
                (ulonglong)(uVar7 & 0xffff) * 8);
      if (lVar8 != 0) {
        do {
          if (*(longlong *)(lVar8 + 0x10) == (pRVar1->fields).lockID) {
            if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x20))) goto code_?;
            break;
          }
          lVar8 = *(longlong *)(lVar8 + 0x28);
        } while (lVar8 != 0);
      }
    }
    if ((pRVar1->fields).fIsReentrant == 0) {
      pTVar9 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread((MethodInfo *)0x0);
      if (pTVar9 == (Thread *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pTVar9->fields).internal_thread == (InternalThread *)0x0) {
        uVar5 = FUN_?(0x28);
        FUN_?(uVar5);
        FUN_?(pTVar9);
        (((pTVar9->fields).internal_thread)->fields).state = 8;
      }
      pIVar10 = (pTVar9->fields).internal_thread;
      if (pIVar10 == (InternalThread *)0x0) goto code_?;
      if ((pIVar10->fields).managed_id == (pRVar1->fields).writeLockOwnerId) {
code_?:
        pVVar3 = (Void *)func_?(&StringLiteral_The_lock_is_being_disposed_while);
        pSVar4 = (String *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_2(pVVar3,(MethodInfo *)0x0);
        uVar5 = func_?(&TypeInfo__System__Threading__SynchronizationLockException);
        pSVar6 = (SynchronizationLockException *)func_?(uVar5);
        mscorlib.dll::System::Threading::SynchronizationLockException::
        SynchronizationLockException__ctor_1(pSVar6,pSVar4,(MethodInfo *)0x0);
        uVar5 = func_?(&
                                    MethodInfo__System__Threading__ReaderWriterLockSlim__Dispose_bool_
                                   );
        FUN_?(pSVar6,uVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Threading__ReaderWriterCount);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
      lVar8 = TlsGetValue(*puRam_?);
      if (lVar8 == 0) {
        GetLastError();
      }
      lVar8 = **(longlong **)
                (*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 0x10) * 8) +
                (ulonglong)(uVar7 & 0xffff) * 8);
      if (lVar8 != 0) {
        do {
          if (*(longlong *)(lVar8 + 0x10) == (pRVar1->fields).lockID) {
            if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x1c))) goto code_?;
            break;
          }
          lVar8 = *(longlong *)(lVar8 + 0x28);
        } while (lVar8 != 0);
      }
    }
    if ((pRVar1->fields).writeEvent != (EventWaitHandle *)0x0) {
      pEVar11 = (pRVar1->fields).writeEvent;
      pEVar12 = pEVar11->klass;
      (*(pEVar12->vtable).Close.methodPtr)(pEVar11,(pEVar12->vtable).Close.method);
      (pRVar1->fields).writeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar1->fields).writeEvent);
    }
    if ((pRVar1->fields).readEvent != (EventWaitHandle *)0x0) {
      pEVar11 = (pRVar1->fields).readEvent;
      pEVar12 = pEVar11->klass;
      (*(pEVar12->vtable).Close.methodPtr)(pEVar11,(pEVar12->vtable).Close.method);
      (pRVar1->fields).readEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar1->fields).readEvent);
    }
    if ((pRVar1->fields).upgradeEvent != (EventWaitHandle *)0x0) {
      pEVar11 = (pRVar1->fields).upgradeEvent;
      pEVar12 = pEVar11->klass;
      (*(pEVar12->vtable).Close.methodPtr)(pEVar11,(pEVar12->vtable).Close.method);
      (pRVar1->fields).upgradeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar1->fields).upgradeEvent);
    }
    if ((pRVar1->fields).waitUpgradeEvent != (EventWaitHandle *)0x0) {
      pEVar11 = (pRVar1->fields).waitUpgradeEvent;
      pEVar12 = pEVar11->klass;
      (*(pEVar12->vtable).Close.methodPtr)(pEVar11,(pEVar12->vtable).Close.method);
      (pRVar1->fields).waitUpgradeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar1->fields).waitUpgradeEvent);
    }
    (pRVar1->fields).fDisposed = 1;
  }
  return;
}


/* Boolean Exists(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Exists
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[5].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  pMStackX_8 = this;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)key;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)apvStack_5 + lVar3);
  _StackX_10.monitor._0_1_ = 0;
  if ((this->fields).disposed != 0) {
    return 0;
  }
  pRVar6 = (this->fields).locker;
  if (pRVar6 != (ReaderWriterLockSlim *)0x0) {
    uStackX_20 = 0xffffffff;
    uStackX_24 = 0;
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    System.Core.dll::System::Threading::ReaderWriterLockSlim::
    ReaderWriterLockSlim_TryEnterReadLockCore
              (pRVar6,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
    apvStack_5[2] = (void *)0x0;
    ppMStack_7 = &pMStackX_8;
    pDVar8 = (pMStackX_8->fields).cache;
    p_Var10 = &_StackX_10;
    if (*(int *)&(method->klass->rgctx_data[5].method)->return_type < 0) {
      p_Var10 = key;
    }
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    FUN_?(plVar4,p_Var10,uVar1);
    if (pDVar8 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)0x0) {
      if (-1 < *(int *)&(method->klass->rgctx_data[5].method)->return_type) {
        plVar4 = (longlong *)*plVar4;
      }
      pMVar9 = method->klass->rgctx_data[0x13].method;
      apvStack_5[0] = plVar4;
      pIVar10 = pMVar9->invoker_method;
      *(undefined4 **)((longlong)alStack_11 + lVar3) = &uStackX_20;
      pIVar12 = pMVar9->methodPointer;
      *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
      (*pIVar10)(pIVar12,pMVar9,pDVar8,apvStack_5,*(void **)((longlong)alStack_11 + lVar3));
      bVar13 = (bool)uStackX_20;
      _StackX_10.monitor._0_1_ = (bool)uStackX_20;
      pRVar6 = (pMStackX_8->fields).locker;
      if (pRVar6 != (ReaderWriterLockSlim *)0x0) {
        *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
        System.Core.dll::System::Threading::ReaderWriterLockSlim::ReaderWriterLockSlim_ExitReadLock
                  (pRVar6,(MethodInfo *)0x0);
        return bVar13;
      }
      *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
      FUN_?();
    }
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    FUN_?();
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    FUN_?();
    pcVar14 = (code *)swi(3);
    bVar13 = (*pcVar14)();
    return bVar13;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* __Il2CppFullySharedGenericType Get(__Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Get
          (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x40) + 0xfc);
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x28) + 0xfc);
  apuStack_3[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  plVar5 = (longlong *)((longlong)alStack_6 + lVar4);
  *(undefined **)((longlong)apuStack_3 + lVar4) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  lVar8 = (longlong)alStack_6 + lVar7 + lVar4;
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar4) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  lVar10 = (longlong)alStack_6 + lVar9 + lVar7 + lVar4;
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(lVar10,0,uVar1);
  *(undefined **)((longlong)apuStack_3 + lVar9 + lVar7 + lVar4) = &UNK_?;
  lVar11 = FUN_?();
  lVar11 = -lVar11;
  lVar12 = (longlong)alStack_6 + lVar11 + lVar9 + lVar7 + lVar4;
  *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(lVar12,0,uVar1);
  p_Var14 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x28) + 0x28) < 0)
  {
    p_Var14 = p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(plVar5,p_Var14,uVar2);
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x28) + 0x28))
  {
    plVar5 = (longlong *)*plVar5;
  }
  lVar13 = *(longlong *)(in_R9 + 0x20);
  *(_Il2CppFullySharedGenericType__Class ***)
   ((longlong)alStack_14 + lVar11 + lVar9 + lVar7 + lVar4) = &p_StackX_10;
  puVar15 = *(undefined8 **)(*(longlong *)(lVar13 + 0xc0) + 0x30);
  pcVar16 = (code *)puVar15[2];
  uVar17 = *puVar15;
  alStack_6[0] = (longlong)plVar5;
  alStack_6[1] = lVar10;
  *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
  (*pcVar16)(uVar17,puVar15,this,alStack_6);
  if ((char)p_StackX_10 == '\0') {
    *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
    FUN_?(lVar12,0,uVar1);
    lVar10 = lVar12;
  }
  *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
  FUN_?(lVar8,lVar10,uVar1);
  *(undefined **)((longlong)apuStack_3 + lVar11 + lVar9 + lVar7 + lVar4) = &UNK_?;
  p_Var13 = (_Il2CppFullySharedGenericType *)FUN_?(method,lVar8,uVar1);
  return p_Var13;
}


/* Boolean TryGet(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType ByRef) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__TryGet
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType **value,
               MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[8].klass)->actualSize;
  uVar2 = (method->klass->rgctx_data[5].klass)->actualSize;
  apuStack_3[0] = &UNK_?;
  pMStackX_8 = this;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  pMStackX_18 = (MonitorData *)value;
  uStack_4._4_4_ = uVar1;
  lVar5 = FUN_?(0xffffffffffffff0);
  lVar5 = -lVar5;
  plVar6 = (longlong *)((longlong)&uStack_4 + lVar5);
  *(undefined **)((longlong)apuStack_3 + lVar5) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  plVar8 = (longlong *)((longlong)&uStack_4 + lVar7 + lVar5);
  pMStack_9 = (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)0x0;
  uStackX_20 = 0;
  if ((this->fields).disposed != 0) {
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?(value,0,uVar1);
    return 0;
  }
  pRVar10 = (this->fields).locker;
  if (pRVar10 == (ReaderWriterLockSlim *)0x0) {
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  aplStack_13[0] = (longlong *)0xffffffff;
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  System.Core.dll::System::Threading::ReaderWriterLockSlim::
  ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore
            (pRVar10,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
  uStack_14 = 0;
  ppMStack_15 = &pMStackX_8;
  pDVar16 = (pMStackX_8->fields).cache;
  p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[5].method)->return_type < 0) {
    p_Var17 = p_StackX_10;
  }
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  FUN_?(plVar6,p_Var17,uVar2);
  if (pDVar16 == (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) goto code_?;
  pvStack_17 = plVar6;
  if (-1 < *(int *)&(method->klass->rgctx_data[5].method)->return_type) {
    pvStack_17 = (void *)*plVar6;
  }
  pMVar18 = method->klass->rgctx_data[9].method;
  ppMStack_19 = &pMStack_9;
  pMVar20 = method->klass->rgctx_data[9].method;
  pIVar21 = pMVar18->invoker_method;
  *(undefined8 **)((longlong)alStack_22 + lVar7 + lVar5) = &uStack_4;
  pIVar23 = pMVar20->methodPointer;
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  (*pIVar21)(pIVar23,pMVar18,pDVar16,&pvStack_17,*(void **)((longlong)alStack_22 + lVar7 + lVar5));
  pMVar24 = pMStack_9;
  if ((char)uStack_4 == '\0') {
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?(value,0,uVar1);
    uStackX_20 = 0;
    pRVar10 = (pMStackX_8->fields).locker;
    if (pRVar10 != (ReaderWriterLockSlim *)0x0) {
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      System.Core.dll::System::Threading::ReaderWriterLockSlim::
      ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar10,(MethodInfo *)0x0);
      return 0;
    }
code_?:
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
code_?:
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    FUN_?();
  }
  else {
    pcVar11 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      pcVar11 = (code *)FUN_?(&UNK_?);
      if (pcVar11 != (code *)0x0) goto code_?;
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      uVar25 = func_?(&UNK_?);
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      FUN_?(uVar25,0);
code_?:
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      FUN_?();
code_?:
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      FUN_?();
code_?:
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      FUN_?();
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      FUN_?();
      goto code_?;
    }
code_?:
    pcRam_? = pcVar11;
    *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
    uVar26 = (*pcRam_?)();
    if (pMVar24 !=
        (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
         *)0x0) {
      pIVar23 = (method->klass->rgctx_data[0xc].method)->methodPointer;
      *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
      cVar27 = (*pIVar23)(pMVar24,uVar26);
      pMVar24 = pMStack_9;
      if (cVar27 != '\0') {
        pRVar10 = (pMStackX_8->fields).locker;
        if (pRVar10 != (ReaderWriterLockSlim *)0x0) {
          aplStack_13[0] = (longlong *)0xffffffff;
          *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_TryEnterWriteLockCore
                    (pRVar10,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
          pvStack_17 = (void *)0x0;
          ppMStack_19 = &pMStackX_8;
          pDVar16 = (pMStackX_8->fields).cache;
          p_Var17 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
          if (*(int *)&(method->klass->rgctx_data[5].method)->return_type < 0) {
            p_Var17 = p_StackX_10;
          }
          *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
          FUN_?(plVar6,p_Var17,uVar2);
          if (pDVar16 != (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                         *)0x0) {
            if (-1 < *(int *)&(method->klass->rgctx_data[5].method)->return_type) {
              plVar6 = (longlong *)*plVar6;
            }
            pMVar18 = method->klass->rgctx_data[0xe].method;
            aplStack_13[0] = plVar6;
            pIVar21 = pMVar18->invoker_method;
            *(undefined8 **)((longlong)alStack_22 + lVar7 + lVar5) = &uStack_4;
            pIVar23 = pMVar18->methodPointer;
            *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
            (*pIVar21)(pIVar23,pMVar18,pDVar16,aplStack_13,
                      *(void **)((longlong)alStack_22 + lVar7 + lVar5));
            *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
            FUN_?(value,0,uVar1);
            uStackX_20 = 0;
            pRVar10 = (pMStackX_8->fields).locker;
            if (pRVar10 != (ReaderWriterLockSlim *)0x0) {
              *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
              System.Core.dll::System::Threading::ReaderWriterLockSlim::
              ReaderWriterLockSlim_ExitWriteLock(pRVar10,(MethodInfo *)0x0);
              pRVar10 = (pMStackX_8->fields).locker;
              if (pRVar10 != (ReaderWriterLockSlim *)0x0) {
                *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
                System.Core.dll::System::Threading::ReaderWriterLockSlim::
                ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar10,(MethodInfo *)0x0);
                return 0;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      if (pMStack_9 !=
          (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *)0x0) {
        pMVar18 = method->klass->rgctx_data[0xd].method;
        aplStack_13[0] = plVar8;
        pIVar21 = pMVar18->invoker_method;
        *(longlong **)((longlong)alStack_22 + lVar7 + lVar5) = plVar8;
        pIVar23 = pMVar18->methodPointer;
        *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
        (*pIVar21)(pIVar23,pMVar18,pMVar24,aplStack_13,
                  *(void **)((longlong)alStack_22 + lVar7 + lVar5));
        *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
        FUN_?(value,plVar8,uVar1);
        if ((*(byte *)((longlong)method->klass->rgctx_data[8].rgctxDataDummy + 0x135) & 1) == 0) {
          *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
          FUN_?();
        }
        *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
        func_?();
        uStackX_20 = 1;
        pRVar10 = (pMStackX_8->fields).locker;
        if (pRVar10 != (ReaderWriterLockSlim *)0x0) {
          *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar10,(MethodInfo *)0x0);
          return 1;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  *(undefined **)((longlong)apuStack_3 + lVar7 + lVar5) = &UNK_?;
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* MemoryKgmCache`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]()
    */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (MemoryKgmCache_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pDVar2 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)FUN_?(pvVar1);
  (*(method->klass->rgctx_data[0x14].method)->methodPointer)(pDVar2);
  bVar3 = iRam_? != 0;
  (this->fields).cache = pDVar2;
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
  pRVar8 = (ReaderWriterLockSlim *)FUN_?(TypeInfo__System__Threading__ReaderWriterLockSlim);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pRVar8->fields).upgradeLockOwnerId = -1;
  (pRVar8->fields).writeLockOwnerId = -1;
  (pRVar8->fields).fNoWaiters = 1;
  pRVar9 = TypeInfo__System__Threading__ReaderWriterLockSlim->static_fields;
  LOCK();
  lVar5 = pRVar9->s_nextLockID;
  pRVar9->s_nextLockID = pRVar9->s_nextLockID + 1;
  UNLOCK();
  bVar3 = iRam_? != 0;
  (pRVar8->fields).lockID = lVar5 + 1;
  (this->fields).locker = pRVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).locker >> 0xc);
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

