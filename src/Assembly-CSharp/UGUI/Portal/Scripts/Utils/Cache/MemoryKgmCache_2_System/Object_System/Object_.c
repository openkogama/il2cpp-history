
/* Void AddOrUpdate(Object, Object, Int32, Boolean) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__AddOrUpdate
               (MemoryKgmCache_2_System_Object_System_Object_ *this,Object *key,Object *value,
               int32_t expirationSeconds,bool resetExpirationIfExists,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  if ((this->fields).disposed != 0) {
    return;
  }
  if ((expirationSeconds != -1) && (expirationSeconds < 1)) {
    expirationSeconds = 0x78;
  }
  pRVar2 = (this->fields).locker;
  pMStackX_8 = this;
  if (pRVar2 == (ReaderWriterLockSlim *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_4 = 0xffffffff;
  System.Core.dll::System::Threading::ReaderWriterLockSlim::
  ReaderWriterLockSlim_TryEnterWriteLockCore
            (pRVar2,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
  uStack_4 = 0;
  ppMStack_5 = &pMStackX_8;
  pDVar6 = (pMStackX_8->fields).cache;
  if (pDVar6 ==
      (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_ *)
      0x0) goto code_?;
  method_00 = method->klass->rgctx_data[9].method;
  bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar6,key,&pOStack_1,method_00)
  ;
  pOVar8 = pOStack_1;
  if (bVar7 == 0) {
    pDVar6 = (pMStackX_8->fields).cache;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar3;
      uVar10 = (*pcRam_?)();
      pvVar11 = method->klass->rgctx_data[0xb].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
        pvVar11 = (void *)FUN_?(pvVar11);
      }
      pOVar8 = (Object *)FUN_?(pvVar11);
      pOVar8[1].klass = (Object__Class *)value;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar12 & 0x3f);
        do {
          uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
          puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
          LOCK();
          bVar16 = uVar14 == *puVar15;
          if (bVar16) {
            *puVar15 = uVar14 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar16);
      }
      *(int32_t *)&pOVar8[1].monitor = expirationSeconds;
      *(undefined4 *)((longlong)&pOVar8[1].monitor + 4) = uVar10;
      if (pDVar6 !=
          (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,key,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                   (method->klass->rgctx_data[0x10].method)->klass->rgctx_data[0x22].method);
        pRVar2 = (pMStackX_8->fields).locker;
        if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitWriteLock(pRVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (resetExpirationIfExists == 0) {
      pDVar6 = (pMStackX_8->fields).cache;
      if (pOStack_1 != (Object *)0x0) {
        pOVar8 = (Object *)func_?(pOStack_1,value,expirationSeconds);
        if (pDVar6 !=
            (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar6,key,pOVar8,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                     (method->klass->rgctx_data[0x10].method)->klass->rgctx_data[0x22].method);
          pRVar2 = (pMStackX_8->fields).locker;
          if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
            System.Core.dll::System::Threading::ReaderWriterLockSlim::
            ReaderWriterLockSlim_ExitWriteLock(pRVar2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pDVar6 = (pMStackX_8->fields).cache;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pOVar8 != (Object *)0x0) {
      pOVar8[1].klass = (Object__Class *)value;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar12 & 0x3f);
        do {
          uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
          puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
          LOCK();
          bVar16 = uVar14 == *puVar15;
          if (bVar16) {
            *puVar15 = uVar14 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar16);
      }
      *(int32_t *)&pOVar8[1].monitor = expirationSeconds;
      *(float *)((longlong)&pOVar8[1].monitor + 4) = fVar17;
      if (pDVar6 !=
          (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar6,key,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                   (method->klass->rgctx_data[0x10].method)->klass->rgctx_data[0x22].method);
        pRVar2 = (pMStackX_8->fields).locker;
        if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitWriteLock(pRVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__Clear
               (MemoryKgmCache_2_System_Object_System_Object_ *this,MethodInfo *method)

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
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).cache;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,method->klass->rgctx_data[4].method);
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

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__Dispose
               (MemoryKgmCache_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data->method;
  if ((this->fields).disposed != 0) {
    return;
  }
  (this->fields).disposed = 1;
  MemoryKgmCache_2_System_Object_System_Object__Clear(this,pMVar1->klass->rgctx_data[2].method);
  pRVar2 = (this->fields).locker;
  if (pRVar2 == (ReaderWriterLockSlim *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pRVar2->fields).fDisposed == 0) {
    if (((0 < (int)(pRVar2->fields).numReadWaiters) || (0 < (int)(pRVar2->fields).numUpgradeWaiters)
        ) || (0 < (int)(pRVar2->fields).numWriteWaiters)) {
      pVVar4 = (Void *)func_?(&StringLiteral_The_lock_is_being_disposed_while);
      pSVar5 = (String *)
                UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_2(pVVar4,(MethodInfo *)0x0);
      uVar6 = func_?(&TypeInfo__System__Threading__SynchronizationLockException);
      pSVar7 = (SynchronizationLockException *)func_?(uVar6);
      mscorlib.dll::System::Threading::SynchronizationLockException::
      SynchronizationLockException__ctor_1(pSVar7,pSVar5,(MethodInfo *)0x0);
      uVar6 = func_?(&
                                   MethodInfo__System__Threading__ReaderWriterLockSlim__Dispose_bool_
                                  );
      FUN_?(pSVar7,uVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    uVar8 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
    lVar9 = TlsGetValue(*puRam_?);
    if (lVar9 == 0) {
      GetLastError();
    }
    lVar9 = **(longlong **)
              (*(longlong *)(lVar9 + (ulonglong)(uVar8 >> 0x10) * 8) +
              (ulonglong)(uVar8 & 0xffff) * 8);
    if (lVar9 != 0) {
      do {
        if (*(longlong *)(lVar9 + 0x10) == (pRVar2->fields).lockID) {
          if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x18))) goto code_?;
          break;
        }
        lVar9 = *(longlong *)(lVar9 + 0x28);
      } while (lVar9 != 0);
    }
    if ((pRVar2->fields).fIsReentrant == 0) {
      pTVar10 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread((MethodInfo *)0x0);
      if (pTVar10 == (Thread *)0x0) goto code_?;
      if ((pTVar10->fields).internal_thread == (InternalThread *)0x0) {
        uVar6 = FUN_?(0x28);
        FUN_?(uVar6);
        FUN_?(pTVar10);
        (((pTVar10->fields).internal_thread)->fields).state = 8;
      }
      pIVar11 = (pTVar10->fields).internal_thread;
      if (pIVar11 == (InternalThread *)0x0) goto code_?;
      if ((pIVar11->fields).managed_id == (pRVar2->fields).upgradeLockOwnerId)
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
      uVar8 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
      lVar9 = TlsGetValue(*puRam_?);
      if (lVar9 == 0) {
        GetLastError();
      }
      lVar9 = **(longlong **)
                (*(longlong *)(lVar9 + (ulonglong)(uVar8 >> 0x10) * 8) +
                (ulonglong)(uVar8 & 0xffff) * 8);
      if (lVar9 != 0) {
        do {
          if (*(longlong *)(lVar9 + 0x10) == (pRVar2->fields).lockID) {
            if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x20))) goto code_?;
            break;
          }
          lVar9 = *(longlong *)(lVar9 + 0x28);
        } while (lVar9 != 0);
      }
    }
    if ((pRVar2->fields).fIsReentrant == 0) {
      pTVar10 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread((MethodInfo *)0x0);
      if (pTVar10 == (Thread *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar10->fields).internal_thread == (InternalThread *)0x0) {
        uVar6 = FUN_?(0x28);
        FUN_?(uVar6);
        FUN_?(pTVar10);
        (((pTVar10->fields).internal_thread)->fields).state = 8;
      }
      pIVar11 = (pTVar10->fields).internal_thread;
      if (pIVar11 == (InternalThread *)0x0) goto code_?;
      if ((pIVar11->fields).managed_id == (pRVar2->fields).writeLockOwnerId) {
code_?:
        pVVar4 = (Void *)func_?(&StringLiteral_The_lock_is_being_disposed_while);
        pSVar5 = (String *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_2(pVVar4,(MethodInfo *)0x0);
        uVar6 = func_?(&TypeInfo__System__Threading__SynchronizationLockException);
        pSVar7 = (SynchronizationLockException *)func_?(uVar6);
        mscorlib.dll::System::Threading::SynchronizationLockException::
        SynchronizationLockException__ctor_1(pSVar7,pSVar5,(MethodInfo *)0x0);
        uVar6 = func_?(&
                                     MethodInfo__System__Threading__ReaderWriterLockSlim__Dispose_bool_
                                    );
        FUN_?(pSVar7,uVar6);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
      uVar8 = (TypeInfo__System__Threading__ReaderWriterLockSlim->_1).flags;
      lVar9 = TlsGetValue(*puRam_?);
      if (lVar9 == 0) {
        GetLastError();
      }
      lVar9 = **(longlong **)
                (*(longlong *)(lVar9 + (ulonglong)(uVar8 >> 0x10) * 8) +
                (ulonglong)(uVar8 & 0xffff) * 8);
      if (lVar9 != 0) {
        do {
          if (*(longlong *)(lVar9 + 0x10) == (pRVar2->fields).lockID) {
            if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x1c))) goto code_?;
            break;
          }
          lVar9 = *(longlong *)(lVar9 + 0x28);
        } while (lVar9 != 0);
      }
    }
    if ((pRVar2->fields).writeEvent != (EventWaitHandle *)0x0) {
      pEVar12 = (pRVar2->fields).writeEvent;
      pEVar13 = pEVar12->klass;
      (*(pEVar13->vtable).Close.methodPtr)(pEVar12,(pEVar13->vtable).Close.method);
      (pRVar2->fields).writeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar2->fields).writeEvent);
    }
    if ((pRVar2->fields).readEvent != (EventWaitHandle *)0x0) {
      pEVar12 = (pRVar2->fields).readEvent;
      pEVar13 = pEVar12->klass;
      (*(pEVar13->vtable).Close.methodPtr)(pEVar12,(pEVar13->vtable).Close.method);
      (pRVar2->fields).readEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar2->fields).readEvent);
    }
    if ((pRVar2->fields).upgradeEvent != (EventWaitHandle *)0x0) {
      pEVar12 = (pRVar2->fields).upgradeEvent;
      pEVar13 = pEVar12->klass;
      (*(pEVar13->vtable).Close.methodPtr)(pEVar12,(pEVar13->vtable).Close.method);
      (pRVar2->fields).upgradeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar2->fields).upgradeEvent);
    }
    if ((pRVar2->fields).waitUpgradeEvent != (EventWaitHandle *)0x0) {
      pEVar12 = (pRVar2->fields).waitUpgradeEvent;
      pEVar13 = pEVar12->klass;
      (*(pEVar13->vtable).Close.methodPtr)(pEVar12,(pEVar13->vtable).Close.method);
      (pRVar2->fields).waitUpgradeEvent = (EventWaitHandle *)0x0;
      func_?(&(pRVar2->fields).waitUpgradeEvent);
    }
    (pRVar2->fields).fDisposed = 1;
  }
  return;
}


/* Void Dispose(Boolean) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__Dispose_1
               (MemoryKgmCache_2_System_Object_System_Object_ *this,bool disposing,
               MethodInfo *method)

{
  if (((this->fields).disposed != 0) || ((this->fields).disposed = 1, disposing == 0)) {
    return;
  }
  MemoryKgmCache_2_System_Object_System_Object__Clear(this,method->klass->rgctx_data[2].method);
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


/* Boolean Exists(Object) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__Exists
               (MemoryKgmCache_2_System_Object_System_Object_ *this,Object *key,MethodInfo *method)

{
  if ((this->fields).disposed != 0) {
    return 0;
  }
  pRVar1 = (this->fields).locker;
  if (pRVar1 != (ReaderWriterLockSlim *)0x0) {
    System.Core.dll::System::Threading::ReaderWriterLockSlim::
    ReaderWriterLockSlim_TryEnterReadLockCore
              (pRVar1,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields).cache;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,key,
                         (method->klass->rgctx_data[0x13].method)->klass->rgctx_data[0x21].method);
      pRVar1 = (this->fields).locker;
      if (pRVar1 != (ReaderWriterLockSlim *)0x0) {
        System.Core.dll::System::Threading::ReaderWriterLockSlim::ReaderWriterLockSlim_ExitReadLock
                  (pRVar1,(MethodInfo *)0x0);
        return (byte)((uint)iVar2 >> 0x1f) ^ 1;
      }
      FUN_?();
    }
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Object Get(Object) */

Object * Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
         Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__Get
                   (MemoryKgmCache_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  apOStackX_10[0] = (Object *)0x0;
  bVar1 = MemoryKgmCache_2_System_Object_System_Object__TryGet
                    (this,key,apOStackX_10,method->klass->rgctx_data[6].method);
  if (bVar1 == 0) {
    apOStackX_10[0] = (Object *)0x0;
  }
  return apOStackX_10[0];
}


/* Boolean TryGet(Object, Object ByRef) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object__TryGet
               (MemoryKgmCache_2_System_Object_System_Object_ *this,Object *key,Object **value,
               MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  if ((this->fields).disposed != 0) {
    *value = (Object *)0x0;
    return 0;
  }
  pRVar2 = (this->fields).locker;
  pMStackX_8 = this;
  if (pRVar2 == (ReaderWriterLockSlim *)0x0) {
    FUN_?(0,key,value,method,0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  uStack_5 = 0xffffffff;
  System.Core.dll::System::Threading::ReaderWriterLockSlim::
  ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore
            (pRVar2,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
  uStack_6 = 0;
  ppMStack_7 = &pMStackX_8;
  pDVar8 = (pMStackX_8->fields).cache;
  if (pDVar8 == (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_
                 *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar8,key,&pOStack_1,
                     method->klass->rgctx_data[9].method);
  pOVar9 = pOStack_1;
  if (bVar4 == 0) {
    *value = (Object *)0x0;
    pRVar2 = (pMStackX_8->fields).locker;
    if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
      System.Core.dll::System::Threading::ReaderWriterLockSlim::
      ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar2,(MethodInfo *)0x0);
      return 0;
    }
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      goto code_?;
    }
    pcRam_? = pcVar3;
    fVar11 = (float)(*pcRam_?)();
    if (pOVar9 != (Object *)0x0) {
      if ((float)*(int *)&pOVar9[1].monitor + *(float *)((longlong)&pOVar9[1].monitor + 4) <= fVar11)
      {
        pRVar2 = (pMStackX_8->fields).locker;
        if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
          uStack_5 = 0xffffffff;
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_TryEnterWriteLockCore
                    (pRVar2,(ReaderWriterLockSlim_TimeoutTracker)0xffffffff,(MethodInfo *)0x0);
          uStack_5 = 0;
          ppMStack_12 = &pMStackX_8;
          pDVar8 = (pMStackX_8->fields).cache;
          if (pDVar8 != (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar8,key,
                       method->klass->rgctx_data[0xe].method);
            *value = (Object *)0x0;
            pRVar2 = (pMStackX_8->fields).locker;
            if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
              System.Core.dll::System::Threading::ReaderWriterLockSlim::
              ReaderWriterLockSlim_ExitWriteLock(pRVar2,(MethodInfo *)0x0);
              pRVar2 = (pMStackX_8->fields).locker;
              if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
                System.Core.dll::System::Threading::ReaderWriterLockSlim::
                ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar2,(MethodInfo *)0x0);
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
      if (pOStack_1 != (Object *)0x0) {
        *value = (Object *)pOStack_1[1].klass;
        func_?(value);
        pRVar2 = (pMStackX_8->fields).locker;
        if (pRVar2 != (ReaderWriterLockSlim *)0x0) {
          System.Core.dll::System::Threading::ReaderWriterLockSlim::
          ReaderWriterLockSlim_ExitUpgradeableReadLock(pRVar2,(MethodInfo *)0x0);
          return 1;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* MemoryKgmCache`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::MemoryKgmCache`2[System::
     Object,System::Object]::MemoryKgmCache_2_System_Object_System_Object___ctor
               (MemoryKgmCache_2_System_Object_System_Object_ *this,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(pvVar1);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,method->klass->rgctx_data[0x14].method);
  bVar2 = iRam_? != 0;
  (this->fields).cache =
       (Dictionary_2_System_Object_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_System_Object_ *)
       this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pRVar7 = (ReaderWriterLockSlim *)FUN_?(TypeInfo__System__Threading__ReaderWriterLockSlim);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pRVar7->fields).upgradeLockOwnerId = -1;
  (pRVar7->fields).writeLockOwnerId = -1;
  (pRVar7->fields).fNoWaiters = 1;
  pRVar8 = TypeInfo__System__Threading__ReaderWriterLockSlim->static_fields;
  LOCK();
  lVar4 = pRVar8->s_nextLockID;
  pRVar8->s_nextLockID = pRVar8->s_nextLockID + 1;
  UNLOCK();
  bVar2 = iRam_? != 0;
  (pRVar7->fields).lockID = lVar4 + 1;
  (this->fields).locker = pRVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).locker >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

