
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
  pWStack_7 = (WorldObjectClientRef *)0x0;
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).removeSet;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    pLVar8 = (this->fields).targets;
    if (pLVar8 != (List_1_WorldObjectClientRef_ *)0x0) {
      length = (MethodInfo *)(pLVar8->fields)._size;
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      (pLVar8->fields)._size = 0;
      if (0 < (int)length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar8->fields)._items,0,(int32_t)length,(MethodInfo *)0x0);
        unaff_EDI = length;
      }
      pHVar10 = (HashSet_1_System_UInt32_ *)(this->fields).potentialTargets;
      if (pHVar10 != (HashSet_1_System_UInt32_ *)0x0) {
        pHVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           (&HStack_12,pHVar10,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        HStack_13._set = pHVar11->_set;
        HStack_13._index = pHVar11->_index;
        HStack_13._version = pHVar11->_version;
        HStack_13._current = pHVar11->_current;
        HStack_12._version = 0;
        uStack_1 = 1;
        HStack_12._current = (uint32_t)&HStack_13;
        while( true ) {
          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            (&HStack_13,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar14 == 0) break;
          uStack_15 = HStack_13._current;
          bVar14 = OptimizedPerception_GetValidTarget
                            (this,HStack_13._current,alliedTeam,&pWStack_7,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            this_01 = (this->fields).removeSet;
            if (this_01 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this_01,uStack_15,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          }
          else {
            pLVar8 = (this->fields).targets;
            if (pLVar8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar8,(Object *)pWStack_7,
                       MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                      );
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&HStack_13,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        pHVar10 = (HashSet_1_System_UInt32_ *)(this->fields).removeSet;
        if (pHVar10 != (HashSet_1_System_UInt32_ *)0x0) {
          pHVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             (&HStack_12,pHVar10,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_13._set = pHVar11->_set;
          HStack_13._index = pHVar11->_index;
          HStack_13._version = pHVar11->_version;
          HStack_13._current = pHVar11->_current;
          HStack_12._version = 0;
          uStack_1 = 4;
          HStack_12._current = (uint32_t)&HStack_13;
          while( true ) {
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                              (&HStack_13,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&HStack_13,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                         ,unaff_EDI);
              pLVar8 = (this->fields).targets;
              *unaff_FS_OFFSET = uStack_3;
              return pLVar8;
            }
            pHVar10 = (HashSet_1_System_UInt32_ *)(this->fields).potentialTargets;
            if (pHVar10 == (HashSet_1_System_UInt32_ *)0x0) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__Remove
                      (pHVar10,HStack_13._current,
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
  pLVar8 = (List_1_WorldObjectClientRef_ *)(*pcVar17)();
  return pLVar8;
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
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&woID,(MethodInfo *)0x0);
      message = (MethodInfo *)
                mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Does_not_contain_woid_,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      wo = (WorldObjectClientRef **)&UNK_?;
      method = message;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      method = (MethodInfo *)wo;
      *wo = (WorldObjectClientRef *)0x0;
      wo = (WorldObjectClientRef **)&UNK_?;
      func_?();
    }
    else {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      woID = 0;
      woID = (int32_t)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar1,0,(MethodInfo *)0x0);
      ppWVar3 = wo;
      *wo = (WorldObjectClientRef *)woID;
      func_?();
      if (*ppWVar3 != (WorldObjectClientRef *)0x0) {
        pOVar4 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)*ppWVar3,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar4 != (Object *)0x0) {
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pMVar6 = (pMVar5->fields).teamManager;
            if (*ppWVar3 != (WorldObjectClientRef *)0x0) {
              pOVar4 = WorldObjectClientRef`1[System::Object]::
                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                 ((WorldObjectClientRef_1_System_Object_ *)*ppWVar3,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 );
              if ((pOVar4 != (Object *)0x0) && (pMVar6 != (MVTeamManager *)0x0)) {
                MVar7 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                                  (pMVar6,(int32_t)pOVar4[4].monitor,(MethodInfo *)0x0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar5 != (MVNetworkGame *)0x0) &&
                   (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
                  iVar8 = MVTeamManager::MVTeamManager_TeamCount(pMVar6,(MethodInfo *)0x0);
                  bVar9 = MVar7 != alliedTeam;
                  if (*ppWVar3 != (WorldObjectClientRef *)0x0) {
                    pMVar10 = (MVWorldObjectClient *)
                              WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)*ppWVar3,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if (pMVar10 != (MVWorldObjectClient *)0x0) {
                      pIVar11 = MVWorldObjectClient::
                                MVWorldObjectClient_get_InteractionDataHandlerBase
                                          (pMVar10,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)pIVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar2 == 0) {
                        return 0;
                      }
                      if (*ppWVar3 != (WorldObjectClientRef *)0x0) {
                        pMVar10 = (MVWorldObjectClient *)
                                  WorldObjectClientRef`1[System::Object]::
                                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                            ((WorldObjectClientRef_1_System_Object_ *)*ppWVar3,
                                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                            );
                        if (pMVar10 != (MVWorldObjectClient *)0x0) {
                          pIVar11 = MVWorldObjectClient::
                                    MVWorldObjectClient_get_InteractionDataHandlerBase
                                              (pMVar10,(MethodInfo *)0x0);
                          if (pIVar11 != (InteractionDataHandlerBase *)0x0) {
                            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                    Behaviour_get_enabled((Behaviour *)pIVar11,(MethodInfo *)0x0);
                            return bVar2 & (iVar8 < 2 || bVar9);
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
  pcVar12 = (code *)swi(3);
  bVar2 = (*pcVar12)();
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
  ppHVar2 = &(this->fields).potentialTargets;
  *ppHVar2 = pHVar1;
  func_?(ppHVar2,pHVar1);
  pHVar1 = (HashSet_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  ppHVar2 = &(this->fields).removeSet;
  *ppHVar2 = pHVar1;
  func_?(ppHVar2,pHVar1);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x10,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_);
  ppLVar3 = &(this->fields).targets;
  *ppLVar3 = (List_1_WorldObjectClientRef_ *)this_00;
  func_?(ppLVar3,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_4);
  return;
}

