
/* Void Add(Object, IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Add
               (ChunkInstances *this,Object *sender,IntVector *intVector,
               ChunkInstances_ChunkInstanceVariables *chunkInstanceVariables,MethodInfo *method)

{
  pCVar1 = chunkInstanceVariables;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstancesChanged);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    IStackX_8.x = intVector->x;
    IStackX_8.y = intVector->y;
    CStack_2.guid._a = (chunkInstanceVariables->guid)._a;
    CStack_2.guid._b = (chunkInstanceVariables->guid)._b;
    CStack_2.guid._c = (chunkInstanceVariables->guid)._c;
    CStack_2.guid._d = (chunkInstanceVariables->guid)._d;
    CStack_2.guid._e = (chunkInstanceVariables->guid)._e;
    CStack_2.guid._f = (chunkInstanceVariables->guid)._f;
    CStack_2.guid._g = (chunkInstanceVariables->guid)._g;
    CStack_2.guid._h = (chunkInstanceVariables->guid)._h;
    CStack_2.guid._i = (chunkInstanceVariables->guid)._i;
    CStack_2.guid._j = (chunkInstanceVariables->guid)._j;
    CStack_2.guid._k = (chunkInstanceVariables->guid)._k;
    CStack_2.gameObject = chunkInstanceVariables->gameObject;
    CStack_2.collider = chunkInstanceVariables->collider;
    IStackX_8.z = intVector->z;
    CStack_2.renderer = chunkInstanceVariables->renderer;
    CStack_2.filter = chunkInstanceVariables->filter;
    CStack_2.transparent = chunkInstanceVariables->transparent;
    CStack_2._49_7_ = *(undefined7 *)&chunkInstanceVariables->field_0x31;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__TryInsert
              (this_00,&IStackX_8,&CStack_2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
               ->klass->rgctx_data[0x22].method);
    pEVar3 = (this->fields).Changed;
    if (pEVar3 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      lVar4 = FUN_?(TypeInfo__ChunkInstancesChanged);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)intVector;
      *(int16_t *)(lVar4 + 0x18) = intVector->z;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      (*(pEVar3->fields)._._.invoke_impl)
                ((pEVar3->fields)._._.method_code,sender,lVar4,(pEVar3->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Clear
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstancesChanged);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar3 = &(pDVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pEVar4 = (this->fields).Changed;
    if (pEVar4 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__IntVector);
      }
      uVar5 = *(undefined4 *)&TypeInfo__MV__WorldObject__IntVector->static_fields->One;
      iVar6 = (TypeInfo__MV__WorldObject__IntVector->static_fields->One).z;
      lVar7 = FUN_?(TypeInfo__ChunkInstancesChanged);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(undefined4 *)(lVar7 + 0x14) = uVar5;
      *(int16_t *)(lVar7 + 0x18) = iVar6;
      *(undefined4 *)(lVar7 + 0x10) = 2;
      (*(pEVar4->fields)._._.invoke_impl)
                ((pEVar4->fields)._._.method_code,this,lVar7,(pEVar4->fields)._._.method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean Contains(IntVector) */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Contains
               (ChunkInstances *this,IntVector *intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__ContainsKey_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    IStackX_8.x = intVector->x;
    IStackX_8.y = intVector->y;
    IStackX_8.z = intVector->z;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__FindEntry
                      (this_00,&IStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__ContainsKey_MV__WorldObject__IntVector_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* ChunkInstances+ChunkInstanceVariables GetChunk(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_GetChunk
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,ChunkInstances *this,
          IntVector *intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    uStackX_8._0_2_ = intVector->x;
    uStackX_8._2_2_ = intVector->y;
    iStackX_c = intVector->z;
    puVar2 = (undefined8 *)FUN_?(auStack_3,pDVar1,&uStackX_8);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    pGVar6 = (GameObject *)puVar2[2];
    pBVar7 = (BoxCollider *)puVar2[3];
    (__return_storage_ptr__->guid)._a = (int)uVar4;
    (__return_storage_ptr__->guid)._b = (short)((ulonglong)uVar4 >> 0x20);
    (__return_storage_ptr__->guid)._c = (short)((ulonglong)uVar4 >> 0x30);
    (__return_storage_ptr__->guid)._d = (char)uVar5;
    (__return_storage_ptr__->guid)._e = (char)((ulonglong)uVar5 >> 8);
    (__return_storage_ptr__->guid)._f = (char)((ulonglong)uVar5 >> 0x10);
    (__return_storage_ptr__->guid)._g = (char)((ulonglong)uVar5 >> 0x18);
    (__return_storage_ptr__->guid)._h = (char)((ulonglong)uVar5 >> 0x20);
    (__return_storage_ptr__->guid)._i = (char)((ulonglong)uVar5 >> 0x28);
    (__return_storage_ptr__->guid)._j = (char)((ulonglong)uVar5 >> 0x30);
    (__return_storage_ptr__->guid)._k = (char)((ulonglong)uVar5 >> 0x38);
    pMVar8 = (MeshRenderer *)puVar2[4];
    pMVar9 = (MeshFilter *)puVar2[5];
    __return_storage_ptr__->gameObject = pGVar6;
    __return_storage_ptr__->collider = pBVar7;
    uVar4 = puVar2[6];
    __return_storage_ptr__->renderer = pMVar8;
    __return_storage_ptr__->filter = pMVar9;
    *(undefined8 *)&__return_storage_ptr__->transparent = uVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pCVar11 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar10)();
  return pCVar11;
}


/* String Guids() */

String * Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Guids
                   (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_>__System__String__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChunkInstances____c___Guids_b__19_0_System__String__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChunkInstances____c);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (*(int *)&(TypeInfo__ChunkInstances____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = ::StringLiteral__;
  this_00 = TypeInfo__ChunkInstances____c->static_fields->__9__19_0;
  if (this_00 ==
      (Func_3_String_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_String_
       *)0x0) {
    if (*(int *)&(TypeInfo__ChunkInstances____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__ChunkInstances____c->static_fields->__9;
    this_00 = (Func_3_String_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_String_
               *)FUN_?(
                              TypeInfo__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>
                              );
    mscorlib.dll::System::Func`3[Object,System::Collections::Generic::KeyValuePair`2[MV::WorldObject
    ::IntVector,ChunkInstances+ChunkInstanceVariables],Object]::
    Func_3_Object_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_Object___ctor
              ((Func_3_Object_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_Object_
                *)this_00,(Object *)object,
               MethodInfo__ChunkInstances____c___Guids_b__19_0_System__String__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_
               ,(MethodInfo *)0x0);
    TypeInfo__ChunkInstances____c->static_fields->__9__19_0 = this_00;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__ChunkInstances____c->static_fields->__9__19_0 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  pMVar7 = 
  System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_>__System__String__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_
  ;
  if ((
      System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_>__System__String__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    pSVar2 = (String *)func_?(&StringLiteral_source);
    pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar2,(MethodInfo *)0x0);
    FUN_?(pEVar8,pMVar7);
code_?:
    FUN_?();
  }
  else {
    if (this_00 ==
        (Func_3_String_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_String_
         *)0x0) {
      pSVar2 = (String *)func_?(&StringLiteral_func);
      pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                          (pSVar2,(MethodInfo *)0x0);
      FUN_?(pEVar8,pMVar7);
      pcVar9 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar9)();
      return pSVar2;
    }
    pvVar10 = ((pMVar7->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
      pvVar10 = (void *)FUN_?(pvVar10);
    }
    plVar11 = (longlong *)FUN_?(0,pvVar10,pDVar1);
    while (plVar11 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar11);
        }
        return pSVar2;
      }
      if (plVar11 == (longlong *)0x0) goto code_?;
      pvVar10 = (pMVar7->field7_0x38).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
        pvVar10 = (void *)FUN_?(pvVar10);
      }
      lVar13 = *plVar11;
      uVar14 = 0;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(void **)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) == pvVar10) {
            puVar15 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10)
                       * 0x10 + 0x138 + lVar13);
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar15 = (undefined8 *)FUN_?(plVar11,pvVar10,0);
code_?:
      puVar15 = (undefined8 *)(*(code *)*puVar15)(auStack_16,plVar11,puVar15[1]);
      uStack_17 = *puVar15;
      uStack_18 = puVar15[1];
      uStack_19 = puVar15[2];
      uStack_20 = puVar15[3];
      uStack_21 = *(undefined4 *)(puVar15 + 4);
      uStack_22 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uStack_23 = *(undefined4 *)(puVar15 + 5);
      uStack_24 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uStack_25 = *(undefined4 *)(puVar15 + 6);
      uStack_26 = *(undefined4 *)((longlong)puVar15 + 0x34);
      uStack_27 = *(undefined4 *)(puVar15 + 7);
      uStack_28 = *(undefined4 *)((longlong)puVar15 + 0x3c);
      pSVar2 = (String *)
                (*(this_00->fields)._._.invoke_impl)
                          ((this_00->fields)._._.method_code,pSVar2,&uStack_17,
                           (this_00->fields)._._.method);
    }
  }
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar9)();
  return pSVar2;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_MoveNext
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunkInstances;
  if (pDStack_1 ==
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar14 = *puVar13;
      LOCK();
      uVar15 = *puVar13;
      if (uVar14 == uVar15) {
        *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (uVar14 != uVar15);
  }
  uStack_16 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_17 = 2;
  uStack_18 = 0;
  uStack_19 = 0;
  uStack_20 = uStack_16;
  uStack_21 = 2;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  pDStack_28 = pDStack_1;
  bVar3 = FUN_?(&pDStack_28,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                       );
  return bVar3;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Remove
               (ChunkInstances *this,IntVector *intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstancesChanged);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Remove_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).Changed;
  if (pEVar1 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
    lVar2 = FUN_?(TypeInfo__ChunkInstancesChanged);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)intVector;
    *(int16_t *)(lVar2 + 0x18) = intVector->z;
    *(undefined4 *)(lVar2 + 0x10) = 1;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,lVar2,(pEVar1->fields)._._.method);
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    IStackX_8.x = intVector->x;
    IStackX_8.y = intVector->y;
    IStackX_8.z = intVector->z;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Remove
              (this_00,&IStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Remove_MV__WorldObject__IntVector_
              );
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Reset
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__System_Collections_IEnumerator_Reset__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = uStack_8;
    uStack_13 = 2;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0;
    uStack_24 = 0;
    uStack_25 = 0;
    uStack_26 = 0;
    uStack_27 = 0;
    pDStack_3 = pDVar1;
    pDStack_28 = pDVar1;
    plVar29 = (longlong *)
             FUN_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                           ,&pDStack_28);
    if (plVar29 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar29 + 0x40) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        FUN_?(plVar29);
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
      if (plVar29[2] != 0) {
        if ((int)plVar29[3] != *(int *)(plVar29[2] + 0x2c)) {
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        *(undefined4 *)((longlong)plVar29 + 0x1c) = 0;
        plVar29[4] = 0;
        plVar29[5] = 0;
        plVar29[6] = 0;
        plVar29[7] = 0;
        plVar29[8] = 0;
        plVar29[9] = 0;
        plVar29[10] = 0;
        plVar29[0xb] = 0;
        pDStack_31 = (this->fields).chunkInstances;
        if (pDStack_31 !=
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          uStack_10 = 0;
          uStack_11 = 0;
          uStack_14 = 0;
          uStack_15 = 0;
          uStack_16 = 0;
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
            lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          uStack_8 = (ulonglong)(uint)(pDStack_31->fields)._version;
          uStack_9 = 2;
          uStack_32 = 0;
          uStack_33 = 0;
          uStack_34 = uStack_8;
          uStack_35 = 2;
          uStack_36 = 0;
          uStack_37 = 0;
          uStack_38 = 0;
          uStack_39 = 0;
          uStack_40 = 0;
          uStack_41 = 0;
          pDStack_3 = pDStack_31;
          FUN_?(&pDStack_31,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                       );
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void SetTransparent(Boolean) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_SetTransparent
               (ChunkInstances *this,bool t,MethodInfo *method)

{
  bStackX_10 = t;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstancesChanged);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__set_Item_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GStack_1._a = 0;
  GStack_1._b = 0;
  GStack_1._c = 0;
  GStack_1._d = 0;
  GStack_1._e = 0;
  GStack_1._f = 0;
  GStack_1._g = 0;
  GStack_1._h = 0;
  GStack_1._i = 0;
  GStack_1._j = 0;
  GStack_1._k = 0;
  pGStack_2 = (GameObject *)0x0;
  pBStack_3 = (BoxCollider *)0x0;
  pMStack_4 = (MeshRenderer *)0x0;
  pMStack_5 = (MeshFilter *)0x0;
  uStack_6 = 0;
  if ((this->fields).chunkInstances !=
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    collection = (IEnumerable_1_MV_WorldObject_IntVector_ *)FUN_?();
    pMVar7 = 
    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
    ;
    if ((
        System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    }
    if (collection == (IEnumerable_1_MV_WorldObject_IntVector_ *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar8,pMVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pvVar10 = (pMVar7->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
      pvVar10 = (void *)FUN_?(pvVar10);
    }
    this_00 = (List_1_MV_WorldObject_IntVector_ *)FUN_?(pvVar10);
    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
    List_1_MV_WorldObject_IntVector___ctor_1
              (this_00,collection,(pMVar7->field7_0x38).rgctx_data[2].method);
    if (this_00 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&uStack_12 >> 0xc);
        lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar15 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar16 = uVar14 == *puVar15;
          if (bVar16) {
            *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar16);
      }
      ppLStack_17 = (List_1_MV_WorldObject_IntVector_ **)
                     ((ulonglong)(uint)(this_00->fields)._version << 0x20);
      uStack_18 = 0;
      lStack_19 = (longlong)ppLStack_17;
      uStack_20 = 0;
      uStack_12 = 0;
      ppLStack_17 = &pLStack_21;
      pLStack_21 = this_00;
      do {
        do {
          cVar22 = FUN_?(&pLStack_21,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                                );
          uVar23 = uStack_20;
          pMVar7 = 
          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
          ;
          if (cVar22 == '\0') {
            return;
          }
          uVar24 = (undefined4)uStack_20;
          iVar25 = uStack_20._4_2_;
          pDVar26 = (this->fields).chunkInstances;
          if (pDVar26 == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                         *)0x0) goto code_?;
          IStackX_8.x = (int16_t)uStack_20;
          IStackX_8.y = uStack_20._2_2_;
          IStackX_8.z = uStack_20._4_2_;
          uStack_20 = uVar23;
          uVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   IntVector,ChunkInstances+ChunkInstanceVariables]::
                   Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__FindEntry
                             (pDVar26,&IStackX_8,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                              ->klass->rgctx_data[0x21].method);
          uVar23 = uStack_20;
          if ((int)uVar11 < 0) {
            uStack_20._0_2_ = (int16_t)uVar24;
            uStack_20._2_2_ = SUB42(uVar24,2);
            IStackX_8.x = (int16_t)uStack_20;
            IStackX_8.y = uStack_20._2_2_;
            IStackX_8.z = iVar25;
            uStack_20 = uVar23;
            uVar23 = func_?(pMVar7->klass->rgctx_data,0xe);
            key = (Object *)func_?(uVar23);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                      (key,(MethodInfo *)0x0);
code_?:
            FUN_?();
            goto code_?;
          }
          pDVar27 = (pDVar26->fields)._entries;
          if (pDVar27 == (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar27->max_length <= uVar11) goto code_?;
          pCVar28 = &pDVar27->vector[(int)uVar11].value;
          aCStack_29[0].guid._a = (pCVar28->guid)._a;
          aCStack_29[0].guid._b = (pCVar28->guid)._b;
          aCStack_29[0].guid._c = (pCVar28->guid)._c;
          aCStack_29[0].guid._d = (pCVar28->guid)._d;
          aCStack_29[0].guid._e = (pCVar28->guid)._e;
          aCStack_29[0].guid._f = (pCVar28->guid)._f;
          aCStack_29[0].guid._g = (pCVar28->guid)._g;
          aCStack_29[0].guid._h = (pCVar28->guid)._h;
          aCStack_29[0].guid._i = (pCVar28->guid)._i;
          aCStack_29[0].guid._j = (pCVar28->guid)._j;
          aCStack_29[0].guid._k = (pCVar28->guid)._k;
          ppGVar30 = &pDVar27->vector[(int)uVar11].value.gameObject;
          aCStack_29[0].gameObject = *ppGVar30;
          aCStack_29[0].collider = (BoxCollider *)ppGVar30[1];
          ppMVar31 = &pDVar27->vector[(int)uVar11].value.renderer;
          aCStack_29[0].renderer = *ppMVar31;
          aCStack_29[0].filter = (MeshFilter *)ppMVar31[1];
          aCStack_29[0]._48_8_ = *(undefined8 *)&pDVar27->vector[(int)uVar11].value.transparent;
          uVar11 = (uint)bStackX_10;
        } while (aCStack_29[0].transparent == bStackX_10);
        pDVar26 = (this->fields).chunkInstances;
        if (iRam_? != 0) {
          uVar32 = (uint)((ulonglong)&pBStack_3 >> 0xc);
          lVar13 = (ulonglong)((uVar32 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar32 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        if (iRam_? != 0) {
          uVar32 = (uint)((ulonglong)&pGStack_2 >> 0xc);
          lVar13 = (ulonglong)((uVar32 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar32 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        if (iRam_? != 0) {
          uVar32 = (uint)((ulonglong)&pMStack_5 >> 0xc);
          lVar13 = (ulonglong)((uVar32 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar32 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        if (iRam_? != 0) {
          uVar32 = (uint)((ulonglong)&pMStack_4 >> 0xc);
          lVar13 = (ulonglong)((uVar32 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar32 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        uStack_6 = (ulonglong)bStackX_10;
        GStack_1._0_8_ = aCStack_29[0].guid._0_8_;
        GStack_1._8_8_ = aCStack_29[0].guid._8_8_;
        pGStack_2 = aCStack_29[0].gameObject;
        pBStack_3 = aCStack_29[0].collider;
        pMStack_4 = aCStack_29[0].renderer;
        pMStack_5 = aCStack_29[0].filter;
        if (pDVar26 == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                       *)0x0) {
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        aCStack_29[0]._48_8_ = uStack_6;
        uStack_20._0_2_ = (int16_t)uVar24;
        uStack_20._2_2_ = SUB42(uVar24,2);
        aIStack_33[0].x = (int16_t)uStack_20;
        aIStack_33[0].y = uStack_20._2_2_;
        aIStack_33[0].z = iVar25;
        in_R9 = (void *)CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        uStack_20 = uVar23;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
        IntVector,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__TryInsert
                  (pDVar26,aIStack_33,aCStack_29,(InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__set_Item_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                   ->klass->rgctx_data[0x22].method);
        pEVar34 = (this->fields).Changed;
        if (pEVar34 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
          lVar13 = FUN_?(TypeInfo__ChunkInstancesChanged);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__EventArgs);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?();
          }
          *(uint *)(lVar13 + 0x10) = (uVar11 ^ 1) + 3;
          *(undefined4 *)(lVar13 + 0x14) = uVar24;
          *(int16_t *)(lVar13 + 0x18) = iVar25;
          in_R9 = (pEVar34->fields)._._.method;
          (*(pEVar34->fields)._._.invoke_impl)((pEVar34->fields)._._.method_code,this,lVar13,in_R9);
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_System_Collections_IEnumerable_GetEnumerator
          (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).chunkInstances;
  if (pDStack_1 ==
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar14 = *puVar13;
      LOCK();
      uVar15 = *puVar13;
      if (uVar14 == uVar15) {
        *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (uVar14 != uVar15);
  }
  uStack_16 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_17 = 2;
  uStack_18 = 0;
  uStack_19 = 0;
  uStack_20 = uStack_16;
  uStack_21 = 2;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  pDStack_28 = pDStack_1;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                         ,&pDStack_28);
  return pIVar3;
}


/* Boolean TryGetValue(IntVector, ChunkInstances+ChunkInstanceVariables ByRef) */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_TryGetValue
               (ChunkInstances *this,IntVector *intVector,
               ChunkInstances_ChunkInstanceVariables *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__TryGetValue_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    IStackX_8.x = intVector->x;
    IStackX_8.y = intVector->y;
    IStackX_8.z = intVector->z;
    uVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__FindEntry
                       (this_00,&IStackX_8,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__TryGetValue_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables__
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar1 < 0) {
      (gameObject->guid)._a = 0;
      (gameObject->guid)._b = 0;
      (gameObject->guid)._c = 0;
      (gameObject->guid)._d = 0;
      (gameObject->guid)._e = 0;
      (gameObject->guid)._f = 0;
      (gameObject->guid)._g = 0;
      (gameObject->guid)._h = 0;
      (gameObject->guid)._i = 0;
      (gameObject->guid)._j = 0;
      (gameObject->guid)._k = 0;
      gameObject->gameObject = (GameObject *)0x0;
      gameObject->collider = (BoxCollider *)0x0;
      gameObject->renderer = (MeshRenderer *)0x0;
      gameObject->filter = (MeshFilter *)0x0;
      *(undefined8 *)&gameObject->transparent = 0;
      return 0;
    }
    pDVar2 = (this_00->fields)._entries;
    if (pDVar2 != (Dictionary_2_TKey_TValue_Entry_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Array
                   *)0x0) {
      if ((uint)pDVar2->max_length <= uVar1) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      bVar5 = iRam_? != 0;
      pCVar6 = &pDVar2->vector[(int)uVar1].value;
      iVar7 = (pCVar6->guid)._b;
      iVar8 = (pCVar6->guid)._c;
      uVar9 = (pCVar6->guid)._d;
      uVar10 = (pCVar6->guid)._e;
      uVar11 = (pCVar6->guid)._f;
      uVar12 = (pCVar6->guid)._g;
      uVar13 = (pCVar6->guid)._h;
      uVar14 = (pCVar6->guid)._i;
      uVar15 = (pCVar6->guid)._j;
      uVar16 = (pCVar6->guid)._k;
      ppGVar17 = &pDVar2->vector[(int)uVar1].value.gameObject;
      pGVar18 = *ppGVar17;
      pBVar19 = (BoxCollider *)ppGVar17[1];
      ppMVar20 = &pDVar2->vector[(int)uVar1].value.renderer;
      pMVar21 = *ppMVar20;
      pMVar22 = (MeshFilter *)ppMVar20[1];
      bVar4 = pDVar2->vector[(int)uVar1].value.transparent;
      uVar23 = *(undefined7 *)&pDVar2->vector[(int)uVar1].value.field_0x31;
      (gameObject->guid)._a = (pCVar6->guid)._a;
      (gameObject->guid)._b = iVar7;
      (gameObject->guid)._c = iVar8;
      (gameObject->guid)._d = uVar9;
      (gameObject->guid)._e = uVar10;
      (gameObject->guid)._f = uVar11;
      (gameObject->guid)._g = uVar12;
      (gameObject->guid)._h = uVar13;
      (gameObject->guid)._i = uVar14;
      (gameObject->guid)._j = uVar15;
      (gameObject->guid)._k = uVar16;
      gameObject->gameObject = pGVar18;
      gameObject->collider = pBVar19;
      gameObject->renderer = pMVar21;
      gameObject->filter = pMVar22;
      gameObject->transparent = bVar4;
      *(undefined7 *)&gameObject->field_0x31 = uVar23;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&gameObject->gameObject >> 0xc);
        puVar24 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar25 = *puVar24;
          LOCK();
          uVar26 = *puVar24;
          if (uVar25 == uVar26) {
            *puVar24 = uVar25 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar25 != uVar26);
      }
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* ChunkInstances() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances__ctor
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        );
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[MV::WorldObject::
           IntVector]::EqualityComparer_1_MV_WorldObject_IntVector__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_MV_WorldObject_IntVector_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_MV_WorldObject_IntVector_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
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
  bVar3 = iRam_? != 0;
  (this->fields).chunkInstances = pDVar1;
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
  return;
}


/* Void add_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_add_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  a = (this->fields).Changed;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ChunkInstancesChanged_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ChunkInstancesChanged_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (pEVar4 == (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Count
                  (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Current
                   (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).chunkInstances ==
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  uStack_7 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  pOVar2 = (Object *)
           FUN_?(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                         ,&uStack_7);
  return pOVar2;
}


/* Void remove_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_remove_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  source = (this->fields).Changed;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ChunkInstancesChanged_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ChunkInstancesChanged_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (pEVar4 == (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

