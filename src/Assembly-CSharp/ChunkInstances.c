
/* Void Add(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Add
               (ChunkInstances *this,IntVector intVector,
               ChunkInstances_ChunkInstanceVariables gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstancesChanged);
    func_?(0x78e8);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Add
              (this_00,intVector,gameObject,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
              );
    if ((this->fields).Changed != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      intVector.z = (int16_t)TypeInfo__ChunkInstancesChanged;
      in_stack_1 = (undefined2)((uint)TypeInfo__ChunkInstancesChanged >> 0x10);
      pEVar2 = (this->fields).Changed;
      this_01 = (ChunkInstancesChanged *)func_?();
      if (this_01 == (ChunkInstancesChanged *)0x0) goto code_?;
      chunkPos.z = intVector.z;
      chunkPos._0_4_ = &UNK_?;
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Added,chunkPos,(MethodInfo *)0x0);
      (*(pEVar2->fields)._._.invoke_impl)
                ((pEVar2->fields)._._.method_code,this,(short)this_01,(pEVar2->fields)._._.method);
    }
    return;
  }
code_?:
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
    func_?(0x7914);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
              ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Clear__
              );
    if ((this->fields).Changed != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      pEVar1 = (this->fields).Changed;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      chunkPos = TypeInfo__MV__WorldObject__IntVector->static_fields->One;
      this_01 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
      if (this_01 == (ChunkInstancesChanged *)0x0) goto code_?;
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Clear,chunkPos,(MethodInfo *)0x0);
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,(short)this_01,(pEVar1->fields)._._.method);
    }
    return;
  }
code_?:
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
    pBVar3 = pCVar1->collider;
    pMVar4 = pCVar1->renderer;
    pMVar5 = pCVar1->filter;
    __return_storage_ptr__->gameObject = pCVar1->gameObject;
    __return_storage_ptr__->collider = pBVar3;
    __return_storage_ptr__->renderer = pMVar4;
    __return_storage_ptr__->filter = pMVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar6)();
  return pCVar1;
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
  DStack_1._dictionary =
       (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key.x = 0;
  DStack_1._current.key.y = 0;
  DStack_1._current.key.z = 0;
  DStack_1._current._6_2_ = 0;
  DStack_1._current.value.gameObject = (GameObject *)0x0;
  DStack_1._current.value.collider = (BoxCollider *)0x0;
  DStack_1._current.value.renderer = (MeshRenderer *)0x0;
  this_00 = (this->fields).chunkInstances;
  DStack_1._current.value.filter = (MeshFilter *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_3,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    DStack_1._dictionary = pDVar2->_dictionary;
    DStack_1._version = pDVar2->_version;
    DStack_1._index = pDVar2->_index;
    DStack_1._current.key.x = (pDVar2->_current).key.x;
    DStack_1._current.key.y = (pDVar2->_current).key.y;
    DStack_1._current._4_4_ = *(undefined4 *)&(pDVar2->_current).key.z;
    DStack_1._current.value.gameObject = (pDVar2->_current).value.gameObject;
    DStack_1._current.value.collider = (pDVar2->_current).value.collider;
    DStack_1._current.value.renderer = (pDVar2->_current).value.renderer;
    DStack_1._32_8_ = *(undefined8 *)&(pDVar2->_current).value.filter;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__MoveNext
                      (&DStack_1,
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
    func_?(0x7998);
    cRam_? = '\x01';
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
    if ((this->fields).Changed != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      pEVar1 = (this->fields).Changed;
      this_01 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
      if (this_01 == (ChunkInstancesChanged *)0x0) goto code_?;
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Removed,intVector,(MethodInfo *)0x0)
      ;
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,(short)this_01,(pEVar1->fields)._._.method);
    }
    return;
  }
code_?:
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
  DStack_1._dictionary =
       (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key.x = 0;
  DStack_1._current.key.y = 0;
  pDVar2 = (this->fields).chunkInstances;
  DStack_1._current.value.filter = (MeshFilter *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._current.key.z = 0;
  DStack_1._current._6_2_ = 0;
  DStack_1._current.value.gameObject = (GameObject *)0x0;
  DStack_1._current.value.collider = (BoxCollider *)0x0;
  DStack_1._current.value.renderer = (MeshRenderer *)0x0;
  if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
  {
    pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             IntVector,ChunkInstances+ChunkInstanceVariables]::
             Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                       (&DStack_4,pDVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_5 = pDVar3->_dictionary;
    iStack_6 = pDVar3->_version;
    iStack_7 = pDVar3->_index;
    uStack_8._0_2_ = (pDVar3->_current).key.x;
    uStack_8._2_2_ = (pDVar3->_current).key.y;
    uStack_9 = *(undefined4 *)&(pDVar3->_current).key.z;
    pGStack_10 = (pDVar3->_current).value.gameObject;
    pBStack_11 = (pDVar3->_current).value.collider;
    pMStack_12 = (pDVar3->_current).value.renderer;
    uStack_13 = *(undefined8 *)&(pDVar3->_current).value.filter;
    piVar14 = (int *)func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                    ,&pDStack_5);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__System_Collections_IEnumerator_Reset__
    ;
    uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                     ,piVar14);
    if (piVar14 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar14 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      pDVar3 = (Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                *)func_?(piVar14);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
      WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
      Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__System_Collections_IEnumerator_Reset
                (pDVar3,method_00);
      pDVar2 = (this->fields).chunkInstances;
      if (pDVar2 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                    0x0) {
        pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,ChunkInstances+ChunkInstanceVariables]::
                 Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__GetEnumerator
                           (&DStack_4,pDVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                           );
        DStack_1._dictionary = pDVar3->_dictionary;
        DStack_1._version = pDVar3->_version;
        DStack_1._index = pDVar3->_index;
        DStack_1._current.key.x = (pDVar3->_current).key.x;
        DStack_1._current.key.y = (pDVar3->_current).key.y;
        DStack_1._current._4_4_ = *(undefined4 *)&(pDVar3->_current).key.z;
        DStack_1._current.value.gameObject = (pDVar3->_current).value.gameObject;
        DStack_1._current.value.collider = (pDVar3->_current).value.collider;
        DStack_1._current.value.renderer = (pDVar3->_current).value.renderer;
        DStack_1._32_8_ = *(undefined8 *)&(pDVar3->_current).value.filter;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
        WorldObject::IntVector,ChunkInstances+ChunkInstanceVariables]::
        Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__MoveNext
                  (&DStack_1,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                  );
        return;
      }
    }
  }
  uVar15 = func_?();
code_?:
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    pGStack_8 = (pDVar1->_current).value.gameObject;
    pBStack_9 = (pDVar1->_current).value.collider;
    pMStack_10 = (pDVar1->_current).value.renderer;
    uStack_11 = *(undefined8 *)&(pDVar1->_current).value.filter;
    pIVar12 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&pDStack_3);
    return pIVar12;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pIVar12 = (IEnumerator *)(*pcVar13)();
  return pIVar12;
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
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).chunkInstances = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  a = (this->fields).Changed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ChunkInstancesChanged_ *)
             func_?(&(this->fields).Changed,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
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
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
    pGStack_8 = (pDVar1->_current).value.gameObject;
    pBStack_9 = (pDVar1->_current).value.collider;
    pMStack_10 = (pDVar1->_current).value.renderer;
    uVar11 = *(undefined8 *)&(pDVar1->_current).value.filter;
    uStack_12._0_4_ = (pDVar1->_current).value.renderer;
    uStack_12._4_4_ = (pDVar1->_current).value.filter;
    uStack_13 = (undefined4)uVar11;
    uStack_14 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_15 = uStack_6;
    uStack_16 = uStack_7;
    pGStack_17 = pGStack_8;
    pBStack_18 = pBStack_9;
    pOVar19 = (Object *)
             func_?(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&uStack_15);
    return pOVar19;
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pOVar19 = (Object *)(*pcVar20)();
  return pOVar19;
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
  source = (this->fields).Changed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ChunkInstancesChanged>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ChunkInstancesChanged_ *)
             func_?(&(this->fields).Changed,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

