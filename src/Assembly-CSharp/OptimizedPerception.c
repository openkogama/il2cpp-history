
/* List`1[WorldObjectClientRef] GetTargets(MVTeam) */

List_1_WorldObjectClientRef_ *
Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetTargets
          (OptimizedPerception *this,MVTeam__Enum alliedTeam,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    in_stack_6 = &MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Clear__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_7._set = (HashSet_1_System_UInt32_ *)0x0;
  HStack_7._index = 0;
  HStack_7._version = 0;
  HStack_7._current = 0;
  pWStack_8 = (WorldObjectClientRef *)0x0;
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).removeSet;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    pLVar9 = (this->fields).targets;
    if (pLVar9 != (List_1_WorldObjectClientRef_ *)0x0) {
      length = (MethodInfo *)(pLVar9->fields)._size;
      piVar10 = &(pLVar9->fields)._version;
      *piVar10 = *piVar10 + 1;
      (pLVar9->fields)._size = 0;
      if (0 < (int)length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar9->fields)._items,0,(int32_t)length,(MethodInfo *)0x0);
        unaff_EDI = length;
      }
      pHVar11 = (HashSet_1_System_UInt32_ *)(this->fields).potentialTargets;
      if (pHVar11 != (HashSet_1_System_UInt32_ *)0x0) {
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           (&HStack_13,pHVar11,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        HStack_7._set = pHVar12->_set;
        HStack_7._index = pHVar12->_index;
        HStack_7._version = pHVar12->_version;
        HStack_7._current = pHVar12->_current;
        HStack_13._version = 0;
        uStack_1 = 1;
        HStack_13._current = (uint32_t)&HStack_7;
        while( true ) {
          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            (&HStack_7,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar14 == 0) break;
          IStack_15 = HStack_7._current;
          bVar14 = OptimizedPerception_GetValidTarget
                            (this,HStack_7._current,alliedTeam,&pWStack_8,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            this_01 = (this->fields).removeSet;
            if (this_01 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_01,IStack_15,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          }
          else {
            pLVar9 = (this->fields).targets;
            if (pLVar9 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar9,(Object *)pWStack_8,
                       MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                      );
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&HStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        pHVar11 = (HashSet_1_System_UInt32_ *)(this->fields).removeSet;
        if (pHVar11 != (HashSet_1_System_UInt32_ *)0x0) {
          pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             (&HStack_13,pHVar11,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_7._set = pHVar12->_set;
          HStack_7._index = pHVar12->_index;
          HStack_7._version = pHVar12->_version;
          HStack_7._current = pHVar12->_current;
          HStack_13._version = 0;
          uStack_1 = 4;
          HStack_13._current = (uint32_t)&HStack_7;
          while( true ) {
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                              (&HStack_7,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&HStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                         ,unaff_EDI);
              pLVar9 = (this->fields).targets;
              *unaff_FS_OFFSET = uStack_3;
              return pLVar9;
            }
            this_02 = (HashSet_1_System_Int32Enum_ *)(this->fields).potentialTargets;
            if (this_02 == (HashSet_1_System_Int32Enum_ *)0x0) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Remove
                      (this_02,HStack_7._current,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
          }
        }
      }
    }
  }
code_?:
  uVar16 = func_?();
  uVar16 = func_?(uVar16);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pLVar9 = (List_1_WorldObjectClientRef_ *)(*pcVar17)();
  return pLVar9;
}


/* Boolean GetValidTarget(Int32, MVTeam, WorldObjectClientRef ByRef) */

bool Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetValidTarget
               (OptimizedPerception *this,int32_t woID,MVTeam__Enum alliedTeam,
               WorldObjectClientRef **wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    func_?(&StringLiteral_Does_not_contain_woid_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (pMVar1,woID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&woID,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Does_not_contain_woid_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
        wo = (WorldObjectClientRef **)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      alliedTeam = (MVTeam__Enum)&UNK_?;
      wo = (WorldObjectClientRef **)pSVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      *wo = (WorldObjectClientRef *)0x0;
      alliedTeam = (MVTeam__Enum)&UNK_?;
      func_?();
    }
    else {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                         (pMVar1,woID,(MethodInfo *)0x0);
      ppWVar5 = wo;
      *wo = pWVar4;
      func_?();
      if (*ppWVar5 != (WorldObjectClientRef *)0x0) {
        pOVar6 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)*ppWVar5,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar6 != (Object *)0x0) {
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pMVar8 = (pMVar7->fields).teamManager;
            if (*ppWVar5 != (WorldObjectClientRef *)0x0) {
              pOVar6 = WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)*ppWVar5,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 );
              if ((pOVar6 != (Object *)0x0) && (pMVar8 != (MVTeamManager *)0x0)) {
                MVar9 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                                  (pMVar8,(int32_t)pOVar6[4].monitor,(MethodInfo *)0x0);
                pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar7 != (MVNetworkGame *)0x0) &&
                   (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
                  iVar10 = MVTeamManager::MVTeamManager_TeamCount(pMVar8,(MethodInfo *)0x0);
                  if (*ppWVar5 != (WorldObjectClientRef *)0x0) {
                    pMVar11 = (MVWorldObjectClient *)
                              WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)*ppWVar5,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if (pMVar11 != (MVWorldObjectClient *)0x0) {
                      pIVar12 = MVWorldObjectClient::
                                MVWorldObjectClient_get_InteractionDataHandlerBase
                                          (pMVar11,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)pIVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar2 == 0) {
                        bVar2 = 0;
code_?:
                        return (MVar9 != alliedTeam || iVar10 < 2) & bVar2;
                      }
                      if (*ppWVar5 != (WorldObjectClientRef *)0x0) {
                        pMVar11 = (MVWorldObjectClient *)
                                  WorldObjectClientRef`1[System::Object]::
                                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                            ((WorldObjectClientRef_1_System_Object_ *)*ppWVar5,
                                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                            );
                        if (pMVar11 != (MVWorldObjectClient *)0x0) {
                          pIVar12 = MVWorldObjectClient::
                                    MVWorldObjectClient_get_InteractionDataHandlerBase
                                              (pMVar11,(MethodInfo *)0x0);
                          if (pIVar12 != (InteractionDataHandlerBase *)0x0) {
                            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_get_enabled((Behaviour *)pIVar12,(MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar2 = (*pcVar13)();
  return bVar2;
}


/* Void Update(Vector3, Single) */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_Update
               (OptimizedPerception *this,Vector3 position,float radius,MethodInfo *method)

{
  (this->fields).position.x = position.x;
  (this->fields).position.y = position.y;
  (this->fields).position.z = position.z;
  (this->fields).radius = radius;
  OptimizedPerception_UpdatePotentialTargets(this,(MethodInfo *)0x0);
  return;
}


/* Void UpdatePotentialTargets() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_UpdatePotentialTargets
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).potentialTargets;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    position = (this->fields).position;
    radius = (this->fields).radius;
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CollisionDetectionGlobalBuffers);
    }
    pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Physics);
    }
    iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                      (position,radius,pCVar1,1 << ((byte)iVar2 & 0x1f),(MethodInfo *)0x0);
    uVar3 = 0;
    if (0 < iVar2) {
      iVar4 = 0x10;
      do {
        if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CollisionDetectionGlobalBuffers);
        }
        pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        if (pCVar1 == (Collider__Array *)0x0) goto code_?;
        if (pCVar1->max_length <= uVar3) goto code_?;
        this_01 = *(Component **)((int)pCVar1->vector + iVar4 + -0x10);
        if (this_01 == (Component *)0x0) goto code_?;
        t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      (this_01,(MethodInfo *)0x0);
        this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (t,(MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClient *)0x0) {
          pOStack_5 = (Object_1__Class *)(this_03->fields)._.id;
          this_04 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              (this_03,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            pOStack_5 = TypeInfo__UnityEngine__Object;
            func_?();
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            if (this_04 == (InteractionDataHandlerBase *)0x0) goto code_?;
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)this_04,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              this_02 = (this->fields).potentialTargets;
              if (this_02 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                        (this_02,(int32_t)pOStack_5,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            }
          }
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while ((int)uVar3 < iVar2);
    }
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* OptimizedPerception() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception__ctor
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).potentialTargets = pHVar1;
  func_?(&(this->fields).potentialTargets,pHVar1);
  pHVar1 = (HashSet_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).removeSet = pHVar1;
  func_?(&(this->fields).removeSet,pHVar1);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x10,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_);
  (this->fields).targets = (List_1_WorldObjectClientRef_ *)this_00;
  func_?(&(this->fields).targets,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_2);
  return;
}

