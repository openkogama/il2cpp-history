
/* Void Add(IntVector, ChunkInstances+ChunkInstanceVariables) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Add
               (ChunkInstances *this,IntVector intVector,
               ChunkInstances_ChunkInstanceVariables gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    uVar1 = intVector._0_4_;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    IntVector,ChunkInstances+ChunkInstanceVariables]::
    Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__Add
              (this_00,intVector,gameObject,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Add_MV__WorldObject__IntVector__ChunkInstances__ChunkInstanceVariables_
              );
    if ((this->fields).Changed != (EventHandler_1_ChunkInstancesChanged_ *)0x0) {
      intVector.z = (int16_t)TypeInfo__ChunkInstancesChanged;
      uStack2 = (undefined2)((uint)TypeInfo__ChunkInstancesChanged >> 0x10);
      this_01 = (ChunkInstancesChanged *)func_?();
      uStack2 = 0;
      chunkPos.z = intVector.z;
      chunkPos.x = (short)uVar1;
      chunkPos.y = (short)((uint)uVar1 >> 0x10);
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_01,ChunkInstancesChanged_ChangeType__Enum_Added,chunkPos,(MethodInfo *)0x0);
      uStack2 =
           (undefined2)
           ((uint)
            MethodInfo__System__EventHandler<ChunkInstancesChanged>__Invoke_System__Object__ChunkInstancesChanged_
           >> 0x10);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)this,(Object *)this,
                 (InitializedGameQueryDataEventArgs *)this_01,
                 MethodInfo__System__EventHandler<ChunkInstancesChanged>__Invoke_System__Object__ChunkInstancesChanged_
                );
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Clear
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).chunkInstances;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Clear__
              );
    this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).Changed;
    if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      chunkPos = TypeInfo__MV__WorldObject__IntVector->static_fields->One;
      this_02 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_02,ChunkInstancesChanged_ChangeType__Enum_Clear,chunkPos,(MethodInfo *)0x0);
      if (this_01 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
      goto code_?;
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_01,(Object *)this,(InitializedGameQueryDataEventArgs *)this_02,
                 MethodInfo__System__EventHandler<ChunkInstancesChanged>__Invoke_System__Object__ChunkInstancesChanged_
                );
    }
    return;
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Contains(IntVector) */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Contains
               (ChunkInstances *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* ChunkInstances+ChunkInstanceVariables GetChunk(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_GetChunk
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,ChunkInstances *this,
          IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  pCVar1 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar6)();
  return pCVar1;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ChunkInstances::ChunkInstances_MoveNext
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *
               )0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  this_00 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
            (this->fields).chunkInstances;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             InteractionPackageType,MV::WorldObject::InteractionData]::
             Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_1 = pDVar10->dictionary;
    iStack_2 = pDVar10->next;
    iStack_3 = pDVar10->stamp;
    uStack_4 = *(undefined4 *)&pDVar10->current;
    fStack_6 = (pDVar10->current).value.damage;
    fStack_7 = (pDVar10->current).value.impulse.x;
    fStack_8 = (pDVar10->current).value.impulse.y;
    fStack_9 = (pDVar10->current).value.impulse.z;
    uStack_5._0_1_ = (pDVar10->current).value.interactionType;
    uStack_5._1_1_ = (pDVar10->current).value.playerKilledByType;
    uStack_5._2_2_ = *(undefined2 *)&(pDVar10->current).value.field_0x12;
    bVar12 = func_?(&pDStack_1,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                           );
    return bVar12;
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Remove
               (ChunkInstances *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).Changed;
    if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      this_02 = (ChunkInstancesChanged *)func_?(TypeInfo__ChunkInstancesChanged);
      ChunkInstancesChanged::ChunkInstancesChanged__ctor
                (this_02,ChunkInstancesChanged_ChangeType__Enum_Removed,intVector,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_01,(Object *)this,(InitializedGameQueryDataEventArgs *)this_02,
                 MethodInfo__System__EventHandler<ChunkInstancesChanged>__Invoke_System__Object__ChunkInstancesChanged_
                );
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_Reset
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *
               )0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  pDVar10 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
           (this->fields).chunkInstances;
  if (pDVar10 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                 *)0x0) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             InteractionPackageType,MV::WorldObject::InteractionData]::
             Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__GetEnumerator
                       (&DStack_12,pDVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_13 = pDVar11->dictionary;
    iStack_14 = pDVar11->next;
    iStack_15 = pDVar11->stamp;
    uStack_16 = *(undefined4 *)&pDVar11->current;
    fStack_17 = (pDVar11->current).value.damage;
    fStack_18 = (pDVar11->current).value.impulse.x;
    fStack_19 = (pDVar11->current).value.impulse.y;
    fStack_20 = (pDVar11->current).value.impulse.z;
    uStack_21._0_1_ = (pDVar11->current).value.interactionType;
    uStack_21._1_1_ = (pDVar11->current).value.playerKilledByType;
    uStack_21._2_2_ = *(undefined2 *)&(pDVar11->current).value.field_0x12;
    piVar22 = (int *)func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                    ,&pDStack_13);
    uVar23 = CONCAT44(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                     ,piVar22);
    if (piVar22 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar22 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      uVar24 = func_?(piVar22);
      func_?(uVar24,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__System_Collections_IEnumerator_Reset__
                     );
      pDVar10 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *
               )(this->fields).chunkInstances;
      if (pDVar10 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                     *)0x0) {
        pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 InteractionPackageType,MV::WorldObject::InteractionData]::
                 Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__GetEnumerator
                           (&DStack_12,pDVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                           );
        pDStack_1 = pDVar11->dictionary;
        iStack_2 = pDVar11->next;
        iStack_3 = pDVar11->stamp;
        uStack_4 = *(undefined4 *)&pDVar11->current;
        fStack_6 = (pDVar11->current).value.damage;
        fStack_7 = (pDVar11->current).value.impulse.x;
        fStack_8 = (pDVar11->current).value.impulse.y;
        fStack_9 = (pDVar11->current).value.impulse.z;
        uStack_5._0_1_ = (pDVar11->current).value.interactionType;
        uStack_5._1_1_ = (pDVar11->current).value.playerKilledByType;
        uStack_5._2_2_ = *(undefined2 *)&(pDVar11->current).value.field_0x12;
        func_?(&pDStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__MoveNext__
                       );
        return;
      }
    }
  }
  uVar23 = func_?(0);
code_?:
  func_?(uVar23);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::ChunkInstances::ChunkInstances_System_Collections_IEnumerable_GetEnumerator
          (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
            (this->fields).chunkInstances;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             InteractionPackageType,MV::WorldObject::InteractionData]::
             Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__GetEnumerator
                       (&DStack_2,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_3 = pDVar1->dictionary;
    iStack_4 = pDVar1->next;
    iStack_5 = pDVar1->stamp;
    uStack_6 = *(undefined4 *)&pDVar1->current;
    fStack_7 = (pDVar1->current).value.damage;
    fStack_8 = (pDVar1->current).value.impulse.x;
    fStack_9 = (pDVar1->current).value.impulse.y;
    fStack_10 = (pDVar1->current).value.impulse.z;
    uStack_11._0_1_ = (pDVar1->current).value.interactionType;
    uStack_11._1_1_ = (pDVar1->current).value.playerKilledByType;
    uStack_11._2_2_ = *(undefined2 *)&(pDVar1->current).value.field_0x12;
    pIVar12 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&pDStack_3);
    return pIVar12;
  }
  func_?(0);
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
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* ChunkInstances() */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances__ctor
               (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__Dictionary__
            );
  (this->fields).chunkInstances = this_00;
  return;
}


/* Void add_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_add_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ChunkInstancesChanged___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ChunkInstancesChanged>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ChunkInstancesChanged_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Count
                  (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chunkInstances;
  if (this_00 != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
     ) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::ChunkInstances::ChunkInstances_get_Current
                   (ChunkInstances *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *
               )0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  this_00 = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
            (this->fields).chunkInstances;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
             InteractionPackageType,MV::WorldObject::InteractionData]::
             Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__GetEnumerator
                       (&DStack_11,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__GetEnumerator__
                       );
    pDStack_1 = pDVar10->dictionary;
    iStack_2 = pDVar10->next;
    iStack_3 = pDVar10->stamp;
    uStack_4 = *(undefined4 *)&pDVar10->current;
    fStack_6 = (pDVar10->current).value.damage;
    fStack_7 = (pDVar10->current).value.impulse.x;
    fStack_8 = (pDVar10->current).value.impulse.y;
    fStack_9 = (pDVar10->current).value.impulse.z;
    uStack_5._0_1_ = (pDVar10->current).value.interactionType;
    uStack_5._1_1_ = (pDVar10->current).value.playerKilledByType;
    uStack_5._2_2_ = *(undefined2 *)&(pDVar10->current).value.field_0x12;
    puVar12 = (undefined4 *)
             func_?(&DStack_11.current,&pDStack_1,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Current__
                            );
    uStack_13 = *puVar12;
    uStack_14 = puVar12[1];
    uStack_15 = puVar12[2];
    uStack_16 = puVar12[3];
    uStack_17 = *(undefined8 *)(puVar12 + 4);
    pOVar18 = (Object *)
             func_?(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                             ,&uStack_13);
    return pOVar18;
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  pOVar18 = (Object *)(*pcVar19)();
  return pOVar18;
}


/* Void remove_Changed(EventHandler`1[ChunkInstancesChanged]) */

void Assembly-CSharp.dll::ChunkInstances::ChunkInstances_remove_Changed
               (ChunkInstances *this,EventHandler_1_ChunkInstancesChanged_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Changed;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ChunkInstancesChanged___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ChunkInstancesChanged>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ChunkInstancesChanged>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ChunkInstancesChanged_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

