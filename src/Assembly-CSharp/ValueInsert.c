
/* ValueInsert AddFloat(Single) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddFloat
          (ValueInsert *this,float input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).values;
  afStackX_10[0] = input;
  item = (Object *)FUN_?(uRam_?,afStackX_10);
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if ((uint)pOVar3->max_length <= uVar4) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,item,pMVar1->klass->rgctx_data[0xe].method);
        return this;
      }
      (this_00->fields)._size = uVar4 + 1;
      FUN_?(pOVar3,(longlong)(int)uVar4,item);
      return this;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (ValueInsert *)(*pcVar5)();
  return pVVar6;
}


/* ValueInsert AddInt(Int32) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddInt
          (ValueInsert *this,int32_t input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).values;
  aiStackX_10[0] = input;
  item = (Object *)FUN_?(uRam_?,aiStackX_10);
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if ((uint)pOVar3->max_length <= uVar4) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize(this_00,item,pMVar1->klass->rgctx_data[0xe].method);
        return this;
      }
      (this_00->fields)._size = uVar4 + 1;
      FUN_?(pOVar3,(longlong)(int)uVar4,item);
      return this;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (ValueInsert *)(*pcVar5)();
  return pVVar6;
}


/* ValueInsert AddString(String) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddString
          (ValueInsert *this,String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
  this_00 = (this->fields).values;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if ((uint)pOVar3->max_length <= uVar4) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  (this_00,(Object *)input,pMVar1->klass->rgctx_data[0xe].method);
        return this;
      }
      (this_00->fields)._size = uVar4 + 1;
      FUN_?(pOVar3,(longlong)(int)uVar4,input);
      return this;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (ValueInsert *)(*pcVar5)();
  return pVVar6;
}


/* Object[] GetValueParams() */

Object__Array *
Assembly-CSharp.dll::ValueInsert::ValueInsert_GetValueParams(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__;
  pLVar2 = (this->fields).values;
  if (pLVar2 != (List_1_System_Object_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      pvVar3 = MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__->klass->
               rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      pOVar4 = (Object__Array *)FUN_?(pvVar3);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar2->fields)._items,0,(Array *)pOVar4,0,(pLVar2->fields)._size,
                 (MethodInfo *)0x0);
      return pOVar4;
    }
    pvVar3 = MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__->klass->
             rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
      FUN_?(pvVar3);
    }
    pIVar5 = pMVar1->klass->rgctx_data[2].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    return *(Object__Array **)pIVar5->static_fields;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object__Array *)(*pcVar6)();
  return pOVar4;
}


/* ValueInsert() */

void Assembly-CSharp.dll::ValueInsert::ValueInsert__ctor(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).values = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

