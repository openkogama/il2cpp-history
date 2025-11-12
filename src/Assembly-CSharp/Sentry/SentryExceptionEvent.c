
/* SentryExceptionEvent(String, String, List`1[Sentry.Breadcrumb], List`1[Sentry.StackTraceSpec],
   Dictionary`2[System.String,System.String], Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::Sentry::SentryExceptionEvent::SentryExceptionEvent__ctor
               (SentryExceptionEvent *this,String *exceptionType,String *exceptionValue,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,List_1_Sentry_StackTraceSpec_ *stackTrace,
               Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__ExceptionContainer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__ExceptionSpec);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SentryEvent::SentryEvent__ctor
            ((SentryEvent *)this,exceptionType,tags,extra,breadcrumbs,(MethodInfo *)0x0);
  this_00 = (List_1_Sentry_ExceptionSpec_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__List__);
  item = (Object *)FUN_?(TypeInfo__Sentry__ExceptionSpec);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__StackTraceContainer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  item[1].klass = (Object__Class *)exceptionType;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)(item + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  item[1].monitor = (MonitorData *)exceptionValue;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&item[1].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pOVar7 = (Object__Class *)FUN_?(TypeInfo__Sentry__StackTraceContainer);
  (pOVar7->_0).name = (char *)stackTrace;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pOVar7->_0).name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar1 = iRam_?;
  item[2].klass = pOVar7;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)(item + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar8 = 
  MethodInfo__System__Collections__Generic__List<Sentry::ExceptionSpec>__Add_Sentry__ExceptionSpec_;
  if (this_00 != (List_1_Sentry_ExceptionSpec_ *)0x0) {
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pEVar10 = (this_00->fields)._items;
    if (pEVar10 != (ExceptionSpec__Array *)0x0) {
      uVar2 = (this_00->fields)._size;
      if (uVar2 < (uint)pEVar10->max_length) {
        (this_00->fields)._size = uVar2 + 1;
        FUN_?(pEVar10,(longlong)(int)uVar2,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,item,pMVar8->klass->rgctx_data[0xe].method);
      }
      pEVar11 = (ExceptionContainer *)FUN_?(TypeInfo__Sentry__ExceptionContainer);
      iVar1 = iRam_?;
      (pEVar11->fields).values = this_00;
      if (iVar1 != 0) {
        uVar2 = (uint)((ulonglong)&pEVar11->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
          iVar1 = iRam_?;
        } while (!bVar6);
      }
      (this->fields).exception = pEVar11;
      if (iVar1 != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields).exception >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

