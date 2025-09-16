
/* Void Add(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Add
               (TerrainLODComponent_TriangleCounter *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__System_Collections_Generic_ICollection_T__Add
              (this_00,localPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 GetEnabledTriangleCount(RuntimePrototypeCubeModel) */

int32_t Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
        TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                  (TerrainLODComponent_TriangleCounter *this,
                  RuntimePrototypeCubeModel *prototypeCubeModel,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    cRam_? = '\x01';
  }
  pMVar4 = (MonitorData *)0x0;
  pMVar5 = (MethodInfo *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar5,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pHVar6 = (this->fields).enabledChunks;
  if (pHVar6 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff8c,pHVar6,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pHVar7->_index;
    key = pHVar7->_current;
    IVar8 = pHVar7->_current;
    uStack_1 = 1;
    while( true ) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[MV::WorldObject
              ::IntVector]::HashSet_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                        ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if ((prototypeCubeModel == (RuntimePrototypeCubeModel *)0x0) ||
         (this_00 = (prototypeCubeModel->fields).chunks,
         this_00 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0))
      goto code_?;
      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,IVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar9 == 0) {
        if (pMVar5 == (MethodInfo *)0x0) goto code_?;
        in_stack_10 = pMVar5;
        func_?();
      }
      else {
        in_stack_10 = (MethodInfo *)(prototypeCubeModel->fields).chunks;
        if (in_stack_10 == (MethodInfo *)0x0) goto code_?;
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                            in_stack_10,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                           );
        if (pOVar11 == (Object *)0x0) goto code_?;
        pMVar4 = pMVar4 + (int)pOVar11[7].monitor;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
               ,in_stack_10);
    uStack_1 = 0xffffffff;
    if (pMVar5 != (MethodInfo *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
               List_1_MV_WorldObject_IntVector__GetEnumerator
                         ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff8c,
                          (List_1_MV_WorldObject_IntVector_ *)pMVar5,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      iVar13 = (int16_t)*(undefined4 *)&(pLVar12->_current).z;
      uStack_1 = 4;
      while( true ) {
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
        ;
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject::
                IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (int32_t)pMVar4;
        }
        pHVar6 = (this->fields).enabledChunks;
        if (pHVar6 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) break;
        IVar8.z = iVar13;
        IVar8._0_4_ = pMVar5;
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
        HashSet_1_MV_WorldObject_IntVector__Remove
                  (pHVar6,IVar8,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                  );
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Remove
               (TerrainLODComponent_TriangleCounter *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Remove
              (this_00,localPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* TerrainLODComponent+TriangleCounter() */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter__ctor
               (TerrainLODComponent_TriangleCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MV_WorldObject_IntVector_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
  HashSet_1_MV_WorldObject_IntVector___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).enabledChunks = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

