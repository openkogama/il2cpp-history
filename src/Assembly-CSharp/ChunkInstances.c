
/* Void Add(Object, IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Add
               (ChunkInstances *this,Object *sender,IntVector intVector,
               ChunkInstances_ChunkInstanceVariables chunkInstanceVariables,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstancesChanged);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Add
              (this_00,intVector,chunkInstanceVariables,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
              );
    pEVar1 = (this->fields).Changed;
    if (pEVar1 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      this_01 = (ChunkInstancesChanged *)func_?();
      uStack2 = (undefined2)((uint)this_01 >> 0x10);
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Added,intVector,(MethodInfo *)0x0);
      uStack2 = 0x102e;
      (*(pEVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Clear
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstancesChanged);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Clear__
                   );
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Clear__
              );
    pEVar1 = (this->fields).Changed;
    if (pEVar1 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      chunkPos = TypeInfo__MV__WorldObject__IntVector->static_fields->One;
      this_01 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Clear,chunkPos,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,(short)this_01,(pEVar1->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Contains(IntVector) */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Contains
               (ChunkInstances *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this_00,intVector,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__ContainsKey_MV__WorldObject__IntVector_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* ChunkInstances+ChunkInstanceVariables GetChunk(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_GetChunk
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,ChunkInstances *this,
          IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pCVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,ChunkInstances+ChunkInstanceVariables]::
              Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__get_Item
                        (&CStack_2,this_00,intVector,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                        );
    iVar3 = (pCVar1->guid)._b;
    iVar4 = (pCVar1->guid)._c;
    uVar5 = (pCVar1->guid)._d;
    uVar6 = (pCVar1->guid)._e;
    uVar7 = (pCVar1->guid)._f;
    uVar8 = (pCVar1->guid)._g;
    uVar9 = (pCVar1->guid)._h;
    uVar10 = (pCVar1->guid)._i;
    uVar11 = (pCVar1->guid)._j;
    uVar12 = (pCVar1->guid)._k;
    bVar13 = pCVar1->transparent;
    uVar14 = *(undefined3 *)&pCVar1->field_0x21;
    (__return_storage_ptr__->guid)._a = (pCVar1->guid)._a;
    (__return_storage_ptr__->guid)._b = iVar3;
    (__return_storage_ptr__->guid)._c = iVar4;
    (__return_storage_ptr__->guid)._d = uVar5;
    (__return_storage_ptr__->guid)._e = uVar6;
    (__return_storage_ptr__->guid)._f = uVar7;
    (__return_storage_ptr__->guid)._g = uVar8;
    (__return_storage_ptr__->guid)._h = uVar9;
    (__return_storage_ptr__->guid)._i = uVar10;
    (__return_storage_ptr__->guid)._j = uVar11;
    (__return_storage_ptr__->guid)._k = uVar12;
    pBVar15 = pCVar1->collider;
    pMVar16 = pCVar1->renderer;
    pMVar17 = pCVar1->filter;
    __return_storage_ptr__->gameObject = pCVar1->gameObject;
    __return_storage_ptr__->collider = pBVar15;
    __return_storage_ptr__->renderer = pMVar16;
    __return_storage_ptr__->filter = pMVar17;
    __return_storage_ptr__->transparent = bVar13;
    *(undefined3 *)&__return_storage_ptr__->field_0x21 = uVar14;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar18)();
  return pCVar1;
}


/* String Guids() */

String * Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Guids
                   (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_>__System__String__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>
                   );
    func_?(&
                    MethodInfo__ChunkInstances____c___Guids_b__19_0_System__String__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_
                   );
    func_?(&TypeInfo__ChunkInstances____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  source = (this->fields).chunkInstances;
  if ((TypeInfo__ChunkInstances____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ChunkInstances____c);
  }
  pSVar1 = ::StringLiteral__;
  this_00 = TypeInfo__ChunkInstances____c->static_fields->__9__19_0;
  if (this_00 ==
      (Func_3_String_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_String_
       *)0x0) {
    if ((TypeInfo__ChunkInstances____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ChunkInstances____c);
    }
    object = TypeInfo__ChunkInstances____c->static_fields->__9;
    this_00 = (Func_3_String_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_String_
               *)func_?(
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
    func_?(&TypeInfo__ChunkInstances____c->static_fields->__9__19_0,this_00);
  }
  pSVar1 = (String *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_Aggregate
                     ((IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                       *)source,(Object *)pSVar1,
                      (Func_3_Object_System_Collections_Generic_KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_Object_
                       *)this_00,
                      System__String_MethodInfo__System__Linq__Enumerable__Aggregate<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>_>__System__String__System__Func<System::String,_System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>,_System::String>_
                     );
  return pSVar1;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_MoveNext
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    DStack_3._dictionary = pDVar1->_dictionary;
    DStack_3._version = pDVar1->_version;
    DStack_3._index = pDVar1->_index;
    DStack_3._current.key.x = (pDVar1->_current).key.x;
    DStack_3._current.key.y = (pDVar1->_current).key.y;
    DStack_3._current._4_4_ = *(undefined4 *)&(pDVar1->_current).key.z;
    DStack_3._current.value.guid._a = (pDVar1->_current).value.guid._a;
    DStack_3._current.value.guid._b = (pDVar1->_current).value.guid._b;
    DStack_3._current.value.guid._c = (pDVar1->_current).value.guid._c;
    DStack_3._current.value.guid._d = (pDVar1->_current).value.guid._d;
    DStack_3._current.value.guid._e = (pDVar1->_current).value.guid._e;
    DStack_3._current.value.guid._f = (pDVar1->_current).value.guid._f;
    DStack_3._current.value.guid._g = (pDVar1->_current).value.guid._g;
    DStack_3._current.value.guid._h = (pDVar1->_current).value.guid._h;
    DStack_3._current.value.guid._i = (pDVar1->_current).value.guid._i;
    DStack_3._current.value.guid._j = (pDVar1->_current).value.guid._j;
    DStack_3._current.value.guid._k = (pDVar1->_current).value.guid._k;
    DStack_3._current.value.gameObject = (pDVar1->_current).value.gameObject;
    DStack_3._current.value.collider = (pDVar1->_current).value.collider;
    DStack_3._current.value.renderer = (pDVar1->_current).value.renderer;
    DStack_3._current.value.filter = (pDVar1->_current).value.filter;
    DStack_3._current.value.transparent = (pDVar1->_current).value.transparent;
    DStack_3._current.value._33_3_ = *(undefined3 *)&(pDVar1->_current).value.field_0x21;
    DStack_3._getEnumeratorRetType = pDVar1->_getEnumeratorRetType;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__MoveNext
                      (&DStack_3,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                      );
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Remove
               (ChunkInstances *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstancesChanged);
    func_?(0xa1e8);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).Changed;
  if (pEVar1 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
    this_01 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
    ChunkInstancesChanged::ChunkInstancesChanged__ctor
              (this_01,ChunkInstancesChanged_ChangeType__Enum_Removed,intVector,(MethodInfo *)0x0);
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,(short)this_01,(pEVar1->fields)._._.method);
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Remove
              (this_00,intVector,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Remove_MV__WorldObject__IntVector_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Reset
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__System_Collections_IEnumerator_Reset__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).chunkInstances;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_3,pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_4 = pDVar2->_dictionary;
    iStack_5 = pDVar2->_version;
    iStack_6 = pDVar2->_index;
    uStack_7._0_2_ = (pDVar2->_current).key.x;
    uStack_7._2_2_ = (pDVar2->_current).key.y;
    uStack_8 = *(undefined4 *)&(pDVar2->_current).key.z;
    iStack_9 = (pDVar2->_current).value.guid._a;
    uStack_10._0_2_ = (pDVar2->_current).value.guid._b;
    uStack_10._2_2_ = (pDVar2->_current).value.guid._c;
    uStack_11._0_1_ = (pDVar2->_current).value.guid._d;
    uStack_11._1_1_ = (pDVar2->_current).value.guid._e;
    uStack_11._2_1_ = (pDVar2->_current).value.guid._f;
    uStack_11._3_1_ = (pDVar2->_current).value.guid._g;
    uStack_12._0_1_ = (pDVar2->_current).value.guid._h;
    uStack_12._1_1_ = (pDVar2->_current).value.guid._i;
    uStack_12._2_1_ = (pDVar2->_current).value.guid._j;
    uStack_12._3_1_ = (pDVar2->_current).value.guid._k;
    pGStack_13 = (pDVar2->_current).value.gameObject;
    pBStack_14 = (pDVar2->_current).value.collider;
    pMStack_15 = (pDVar2->_current).value.renderer;
    uStack_16._0_4_ = (pDVar2->_current).value.filter;
    uStack_16._4_1_ = (pDVar2->_current).value.transparent;
    uStack_16._5_3_ = *(undefined3 *)&(pDVar2->_current).value.field_0x21;
    iStack_17 = pDVar2->_getEnumeratorRetType;
    piVar18 = (int *)func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                    ,&pDStack_4);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__System_Collections_IEnumerator_Reset__
    ;
    uVar19 = CONCAT44(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                     ,piVar18);
    if (piVar18 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar18 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      pDVar2 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                *)func_?(piVar18);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
      WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__System_Collections_IEnumerator_Reset
                (pDVar2,method_00);
      pDVar1 = (this->fields).chunkInstances;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                    0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,ChunkInstances+ChunkInstanceVariables]::
                 Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                           (&DStack_3,pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                           );
        DStack_20._dictionary = pDVar2->_dictionary;
        DStack_20._version = pDVar2->_version;
        DStack_20._index = pDVar2->_index;
        DStack_20._current.key.x = (pDVar2->_current).key.x;
        DStack_20._current.key.y = (pDVar2->_current).key.y;
        DStack_20._current._4_4_ = *(undefined4 *)&(pDVar2->_current).key.z;
        DStack_20._current.value.guid._a = (pDVar2->_current).value.guid._a;
        DStack_20._current.value.guid._b = (pDVar2->_current).value.guid._b;
        DStack_20._current.value.guid._c = (pDVar2->_current).value.guid._c;
        DStack_20._current.value.guid._d = (pDVar2->_current).value.guid._d;
        DStack_20._current.value.guid._e = (pDVar2->_current).value.guid._e;
        DStack_20._current.value.guid._f = (pDVar2->_current).value.guid._f;
        DStack_20._current.value.guid._g = (pDVar2->_current).value.guid._g;
        DStack_20._current.value.guid._h = (pDVar2->_current).value.guid._h;
        DStack_20._current.value.guid._i = (pDVar2->_current).value.guid._i;
        DStack_20._current.value.guid._j = (pDVar2->_current).value.guid._j;
        DStack_20._current.value.guid._k = (pDVar2->_current).value.guid._k;
        DStack_20._current.value.gameObject = (pDVar2->_current).value.gameObject;
        DStack_20._current.value.collider = (pDVar2->_current).value.collider;
        DStack_20._current.value.renderer = (pDVar2->_current).value.renderer;
        DStack_20._current.value.filter = (pDVar2->_current).value.filter;
        DStack_20._current.value.transparent = (pDVar2->_current).value.transparent;
        DStack_20._current.value._33_3_ = *(undefined3 *)&(pDVar2->_current).value.field_0x21;
        DStack_20._getEnumeratorRetType = pDVar2->_getEnumeratorRetType;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
        WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__MoveNext
                  (&DStack_20,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                  );
        return;
      }
    }
  }
  uVar19 = func_?();
code_?:
  func_?(uVar19);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void SetTransparent(Boolean) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_SetTransparent
               (ChunkInstances *this,bool t,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff20;
  puVar5 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstancesChanged);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__set_Item_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                   );
    func_?(&
                    System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pLStack_11 = (List_1_MV_WorldObject_IntVector_ *)0x0;
  pBStack_12 = (BoxCollider *)0x0;
  uStack_13._0_4_ = (MeshRenderer *)0x0;
  pMVar14 = (MeshRenderer *)uStack_13;
  uStack_13._0_4_ = (MeshRenderer *)0x0;
  uStack_13._4_4_ = (MeshFilter *)0x0;
  pDVar15 = (this->fields).chunkInstances;
  if (pDVar15 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)pDVar15,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Keys__
                       );
    this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                        ((IEnumerable_1_MV_WorldObject_IntVector_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::IntVector>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::IntVector>_System__Collections__Generic__IEnumerable<MV::WorldObject::IntVector>_
                        );
    pMVar14 = (MeshRenderer *)uStack_13;
    if (this_00 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
                List_1_MV_WorldObject_IntVector__GetEnumerator
                          ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)auStack_17,this_00,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                          );
      uStack_18 = 0;
      LStack_19._list = pLVar16->_list;
      LStack_19._index = pLVar16->_index;
      LStack_19._version = pLVar16->_version;
      LStack_19._current.x = (pLVar16->_current).x;
      LStack_19._current.y = (pLVar16->_current).y;
      LStack_19._16_4_ = *(undefined4 *)&(pLVar16->_current).z;
      uStack_1 = 1;
      pLStack_20 = &LStack_19;
      while( true ) {
        do {
          bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject::
                  IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                            (&LStack_19,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                            );
          if (bVar21 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_19,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                       ,in_stack_22);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pDVar15 = (this->fields).chunkInstances;
          uStack_23._0_2_ = LStack_19._current.x;
          uStack_23._2_2_ = LStack_19._current.y;
          iStack_24 = LStack_19._current.z;
          uStack_25 = LStack_19._18_2_;
          pMVar14 = (MeshRenderer *)uStack_13;
          if (pDVar15 == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                         *)0x0) goto code_?;
          key_00.z = LStack_19._current.z;
          key_00.x = LStack_19._current.x;
          key_00.y = LStack_19._current.y;
          pCVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,ChunkInstances+ChunkInstanceVariables]::
                    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__get_Item
                              ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffff2c,pDVar15,
                               key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                              );
          auStack_17._0_4_ = pCVar26->gameObject;
          auStack_17._4_4_ = pCVar26->collider;
          auStack_17._8_4_ = pCVar26->renderer;
          auStack_17._12_4_ = pCVar26->filter;
          uVar27._0_2_ = (pCVar26->guid)._b;
          uVar27._2_2_ = (pCVar26->guid)._c;
          uVar28._0_1_ = (pCVar26->guid)._d;
          uVar28._1_1_ = (pCVar26->guid)._e;
          uVar28._2_1_ = (pCVar26->guid)._f;
          uVar28._3_1_ = (pCVar26->guid)._g;
          uVar29._0_1_ = (pCVar26->guid)._h;
          uVar29._1_1_ = (pCVar26->guid)._i;
          uVar29._2_1_ = (pCVar26->guid)._j;
          uVar29._3_1_ = (pCVar26->guid)._k;
          in_stack_22 = *(MethodInfo **)&(pCVar26->guid)._h;
        } while (pCVar26->transparent == t);
        uStack_23._4_4_ = (this->fields).chunkInstances;
        pLStack_11 = (List_1_MV_WorldObject_IntVector_ *)0x0;
        uStack_13 = 0;
        uStack_10 = 0;
        iStack_6 = (pCVar26->guid)._a;
        uStack_7 = uVar27;
        uStack_8 = uVar28;
        uStack_9 = uVar29;
        pBStack_12 = (BoxCollider *)auStack_17._4_4_;
        func_?();
        pLStack_11 = (List_1_MV_WorldObject_IntVector_ *)auStack_17._0_4_;
        func_?();
        uStack_13._4_4_ = (MeshFilter *)auStack_17._12_4_;
        func_?();
        uStack_13._0_4_ = (MeshRenderer *)auStack_17._8_4_;
        func_?();
        uStack_10 = CONCAT31(uStack_10._1_3_,t);
        pMVar14 = (MeshRenderer *)uStack_13;
        if (uStack_23._4_4_ ==
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
        break;
        key.z = (int16_t)_iStack_18;
        key.x = (int16_t)uStack_23;
        key.y = uStack_23._2_2_;
        value.guid._b = (undefined2)uStack_7;
        value.guid._c = uStack_7._2_2_;
        value.guid._a = iStack_6;
        value.guid._d = (undefined1)uStack_8;
        value.guid._e = uStack_8._1_1_;
        value.guid._f = uStack_8._2_1_;
        value.guid._g = uStack_8._3_1_;
        value.guid._h = (undefined1)uStack_9;
        value.guid._i = uStack_9._1_1_;
        value.guid._j = uStack_9._2_1_;
        value.guid._k = uStack_9._3_1_;
        value.gameObject = (GameObject *)pLStack_11;
        value.collider = pBStack_12;
        value.renderer = (MeshRenderer *)uStack_13;
        value.filter = uStack_13._4_4_;
        value._32_4_ = uStack_10;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
        IntVector,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__set_Item
                  (uStack_23._4_4_,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__set_Item_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
                  );
        pEVar30 = (this->fields).Changed;
        if (pEVar30 != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
          uStack_23._4_4_ =
               (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
               ((t ^ 1) + 3);
          pCStack_31 = (ChunkInstancesChanged *)func_?();
          chunkPos.z = (int16_t)_iStack_18;
          chunkPos.x = (int16_t)uStack_23;
          chunkPos.y = uStack_23._2_2_;
          ChunkInstancesChanged::ChunkInstancesChanged__ctor
                    (pCStack_31,(ChunkInstancesChanged_ChangeType__Enum)uStack_23._4_4_,chunkPos,
                     (MethodInfo *)0x0);
          in_stack_22 = (MethodInfo *)this;
          (*(pEVar30->fields)._._.invoke_impl)();
        }
      }
    }
  }
code_?:
  uStack_13._0_4_ = pMVar14;
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_System_Collections_IEnumerable_GetEnumerator
          (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->_dictionary;
    iStack_4 = pDVar1->_version;
    iStack_5 = pDVar1->_index;
    uStack_6._0_2_ = (pDVar1->_current).key.x;
    uStack_6._2_2_ = (pDVar1->_current).key.y;
    uStack_7 = *(undefined4 *)&(pDVar1->_current).key.z;
    iStack_8 = (pDVar1->_current).value.guid._a;
    uStack_9._0_2_ = (pDVar1->_current).value.guid._b;
    uStack_9._2_2_ = (pDVar1->_current).value.guid._c;
    uStack_10._0_1_ = (pDVar1->_current).value.guid._d;
    uStack_10._1_1_ = (pDVar1->_current).value.guid._e;
    uStack_10._2_1_ = (pDVar1->_current).value.guid._f;
    uStack_10._3_1_ = (pDVar1->_current).value.guid._g;
    uStack_11._0_1_ = (pDVar1->_current).value.guid._h;
    uStack_11._1_1_ = (pDVar1->_current).value.guid._i;
    uStack_11._2_1_ = (pDVar1->_current).value.guid._j;
    uStack_11._3_1_ = (pDVar1->_current).value.guid._k;
    pGStack_12 = (pDVar1->_current).value.gameObject;
    pBStack_13 = (pDVar1->_current).value.collider;
    pMStack_14 = (pDVar1->_current).value.renderer;
    uStack_15._0_4_ = (pDVar1->_current).value.filter;
    uStack_15._4_1_ = (pDVar1->_current).value.transparent;
    uStack_15._5_3_ = *(undefined3 *)&(pDVar1->_current).value.field_0x21;
    iStack_16 = pDVar1->_getEnumeratorRetType;
    pIVar17 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&pDStack_3);
    return pIVar17;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pIVar17 = (IEnumerator *)(*pcVar18)();
  return pIVar17;
}


/* Boolean TryGetValue(IntVector, ChunkInstances+ChunkInstanceVariables ByRef) */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_TryGetValue
               (ChunkInstances *this,IntVector intVector,
               ChunkInstances_ChunkInstanceVariables *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__TryGetValue
                      (this_00,intVector,gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__TryGetValue_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables__
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* ChunkInstances() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances__ctor
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((ChunkInstances__Fields *)method_00)->chunkInstances = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void add_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_add_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_ChunkInstancesChanged_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Count
                  (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Current
                   (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->_dictionary;
    iStack_4 = pDVar1->_version;
    iStack_5 = pDVar1->_index;
    uStack_6._0_2_ = (pDVar1->_current).key.x;
    uStack_6._2_2_ = (pDVar1->_current).key.y;
    uStack_7 = *(undefined4 *)&(pDVar1->_current).key.z;
    iStack_8 = (pDVar1->_current).value.guid._a;
    uStack_9._0_2_ = (pDVar1->_current).value.guid._b;
    uStack_9._2_2_ = (pDVar1->_current).value.guid._c;
    uStack_10._0_1_ = (pDVar1->_current).value.guid._d;
    uStack_10._1_1_ = (pDVar1->_current).value.guid._e;
    uStack_10._2_1_ = (pDVar1->_current).value.guid._f;
    uStack_10._3_1_ = (pDVar1->_current).value.guid._g;
    uStack_11._0_1_ = (pDVar1->_current).value.guid._h;
    uStack_11._1_1_ = (pDVar1->_current).value.guid._i;
    uStack_11._2_1_ = (pDVar1->_current).value.guid._j;
    uStack_11._3_1_ = (pDVar1->_current).value.guid._k;
    pGStack_12 = (pDVar1->_current).value.gameObject;
    pBStack_13 = (pDVar1->_current).value.collider;
    pMStack_14 = (pDVar1->_current).value.renderer;
    uVar15 = (pDVar1->_current).value.filter;
    uVar16 = (pDVar1->_current).value.transparent;
    uVar17 = *(undefined3 *)&(pDVar1->_current).value.field_0x21;
    uVar18 = CONCAT31(uVar17,uVar16);
    uStack_19._0_4_ = (pDVar1->_current).value.renderer;
    uStack_19._4_4_ = (pDVar1->_current).value.filter;
    uStack_20 = uVar18;
    uStack_21 = uStack_6;
    uStack_22 = uStack_7;
    iStack_23 = iStack_8;
    uStack_24 = uStack_9;
    uStack_25 = uStack_10;
    uStack_26 = uStack_11;
    pGStack_27 = pGStack_12;
    pBStack_28 = pBStack_13;
    uStack_29 = uVar15;
    uStack_30 = uVar18;
    pOVar31 = (Object *)
             func_?(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&uStack_6);
    return pOVar31;
  }
  func_?();
  pcVar32 = (code *)swi(3);
  pOVar31 = (Object *)(*pcVar32)();
  return pOVar31;
}


/* Void remove_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_remove_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ChunkInstancesChanged>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_ChunkInstancesChanged_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

