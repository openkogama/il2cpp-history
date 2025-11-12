
/* Void Dispose() */

void Assembly-CSharp.dll::AsyncWWWManager+TemporaryHashSet`1[System::Object]::
     AsyncWWWManager_TemporaryHashSet_1_System_Object__Dispose
               (AsyncWWWManager_TemporaryHashSet_1_System_Object_ *this,MethodInfo *method)

{
  if (this != (AsyncWWWManager_TemporaryHashSet_1_System_Object_ *)0x0) {
    if (0 < (this->fields)._._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(this->fields)._._slots,0,(this->fields)._._lastIndex,(MethodInfo *)0x0);
      pIVar1 = (this->fields)._._buckets;
      if (pIVar1 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(this->fields)._._buckets,0,(int32_t)pIVar1->max_length,(MethodInfo *)0x0)
      ;
      (this->fields)._._freeList = -1;
      (this->fields)._._count = 0;
      (this->fields)._._lastIndex = 0;
    }
    piVar2 = &(this->fields)._._version;
    *piVar2 = *piVar2 + 1;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AsyncWWWManager+TemporaryHashSet`1[System.Object]() */

void Assembly-CSharp.dll::AsyncWWWManager+TemporaryHashSet`1[System::Object]::
     AsyncWWWManager_TemporaryHashSet_1_System_Object___ctor
               (AsyncWWWManager_TemporaryHashSet_1_System_Object_ *this,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[1].method;
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default(pMVar1->klass->rgctx_data->method);
  if (pEVar2 == (EqualityComparer_1_System_Object_ *)0x0) {
    pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
             EqualityComparer_1_System_Object__get_Default
                       ((pMVar1->klass->rgctx_data[3].method)->klass->rgctx_data->method);
  }
  bVar3 = iRam_? != 0;
  (this->fields)._._comparer = (IEqualityComparer_1_System_Object_ *)pEVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._._comparer >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  (this->fields)._._freeList = -1;
  (this->fields)._._count = 0;
  (this->fields)._._lastIndex = 0;
  (this->fields)._._version = 0;
  return;
}

