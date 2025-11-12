
/* List`1[WorldObjectClientRef] GetTargets(MVTeam) */

List_1_WorldObjectClientRef_ *
Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetTargets
          (OptimizedPerception *this,MVTeam__Enum alliedTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWStackX_20 = (WorldObjectClientRef *)0x0;
  pMVar1 = (MethodInfo *)(this->fields).removeSet;
  if (pMVar1 != (MethodInfo *)0x0) {
    if (0 < *(int *)((longlong)&pMVar1->klass + 4)) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)pMVar1->name,0,*(int32_t *)((longlong)&pMVar1->klass + 4),
                 (MethodInfo *)0x0);
      if (pMVar1->invoker_method == (InvokerMethod)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)pMVar1->invoker_method,0,*(int32_t *)(pMVar1->invoker_method + 0x18),
                 (MethodInfo *)0x0);
      pMVar1->klass = (Il2CppClass *)0x0;
      *(undefined4 *)&pMVar1->return_type = 0xffffffff;
    }
    *(int *)&pMVar1->field7_0x38 = *(int *)&pMVar1->field7_0x38 + 1;
    pLVar2 = (this->fields).targets;
    if (pLVar2 != (List_1_WorldObjectClientRef_ *)0x0) {
      piVar3 = &(pLVar2->fields)._version;
      *piVar3 = *piVar3 + 1;
      length = (pLVar2->fields)._size;
      (pLVar2->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pHVar4 = (this->fields).potentialTargets;
      if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        ppHStack_11 = (HashSet_1_System_Int32_ **)
                      ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
        uStack_12 = 0;
        uStack_13 = (longlong)ppHStack_11;
        uStack_14 = 0;
        uStack_6 = 0;
        ppHStack_11 = &pHStack_15;
        pHStack_15 = pHVar4;
        while (cVar16 = FUN_?(&pHStack_15,
                                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                    ), cVar16 != '\0') {
          value = (int32_t)uStack_14;
          pMVar1 = (MethodInfo *)(uStack_14 & 0xffffffff);
          bVar17 = OptimizedPerception_GetValidTarget
                            (this,(int32_t)uStack_14,alliedTeam,&pWStackX_20,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            pHVar4 = (this->fields).removeSet;
            if (pHVar4 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (pHVar4,value,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
          }
          else {
            pLVar2 = (this->fields).targets;
            if (pLVar2 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
            FUN_?(pLVar2,pWStackX_20);
          }
        }
        pHVar4 = (this->fields).removeSet;
        if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
            lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          ppHStack_11 = (HashSet_1_System_Int32_ **)
                        ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
          uStack_12 = 0;
          uStack_13 = (longlong)ppHStack_11;
          uStack_14 = 0;
          uStack_6 = 0;
          ppHStack_11 = &pHStack_15;
          pHStack_15 = pHVar4;
          while (pHStack_15 != (HashSet_1_System_Int32_ *)0x0) {
            pMVar1 = 
            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
            if (uStack_13._4_4_ != (pHStack_15->fields)._version) goto code_?;
            uVar5 = (uint)uStack_13;
            while( true ) {
              if (pHStack_15 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
              if ((pHStack_15->fields)._lastIndex <= (int)uVar5) {
                return (this->fields).targets;
              }
              pHVar18 = (pHStack_15->fields)._slots;
              if (pHVar18 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
              if ((uint)pHVar18->max_length <= uVar5) goto code_?;
              if (-1 < pHVar18->vector[(int)uVar5].hashCode) break;
              uVar5 = uVar5 + 1;
              uStack_13 = CONCAT44(uStack_13._4_4_,uVar5);
            }
            if (pHVar18 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
            if ((uint)pHVar18->max_length <= uVar5) goto code_?;
            item = pHVar18->vector[(int)uVar5].value;
            uStack_14 = CONCAT44(uStack_14._4_4_,item);
            uStack_13 = CONCAT44(uStack_13._4_4_,uVar5 + 1);
            this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).potentialTargets;
            if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Remove
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar19 = func_?(&TypeInfo__System__InvalidOperationException);
  this_01 = (ProtocolViolationException *)func_?(uVar19);
  message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
  System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
            (this_01,message,(MethodInfo *)0x0);
  FUN_?(this_01,pMVar1);
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pLVar2 = (List_1_WorldObjectClientRef_ *)(*pcVar20)();
  return pLVar2;
}


/* Boolean GetValidTarget(Int32, MVTeam, WorldObjectClientRef ByRef) */

bool Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetValidTarget
               (OptimizedPerception *this,int32_t woID,MVTeam__Enum alliedTeam,
               WorldObjectClientRef **wo,MethodInfo *method)

{
  aIStackX_10[0].m_value = woID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                    (pMVar1,woID,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Does_not_contain_woid_,pSVar4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0)
    ;
    bVar5 = iRam_? != 0;
    *wo = (WorldObjectClientRef *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)wo >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    return 0;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pWVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                     (pMVar1,woID,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  *wo = pWVar10;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)wo >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (*wo == (WorldObjectClientRef *)0x0) {
    return 0;
  }
  lVar7 = FUN_?();
  if (lVar7 == 0) {
    return 0;
  }
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar11 == (MVNetworkGame *)0x0) ||
       (pMVar12 = (pMVar11->fields).teamManager, *wo == (WorldObjectClientRef *)0x0)) ||
      (lVar7 = FUN_?(), lVar7 == 0)) || (pMVar12 == (MVTeamManager *)0x0))
  goto code_?;
  MVar13 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                    (pMVar12,*(int32_t *)(lVar7 + 0x38),(MethodInfo *)0x0);
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar11 == (MVNetworkGame *)0x0) ||
      (pMVar12 = (pMVar11->fields).teamManager, pMVar12 == (MVTeamManager *)0x0)) ||
     ((iVar14 = MVTeamManager::MVTeamManager_TeamCount(pMVar12,(MethodInfo *)0x0),
      *wo == (WorldObjectClientRef *)0x0 ||
      (pMVar15 = (MVWorldObjectClient *)FUN_?(), pMVar15 == (MVWorldObjectClient *)0x0))))
  goto code_?;
  pIVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (pMVar15,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar16 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar16->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (((*wo == (WorldObjectClientRef *)0x0) ||
          (pMVar15 = (MVWorldObjectClient *)FUN_?(), pMVar15 == (MVWorldObjectClient *)0x0))
         || (pIVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                 (pMVar15,(MethodInfo *)0x0),
            pIVar16 == (InteractionDataHandlerBase *)0x0)) goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pIVar16,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  bVar3 = 0;
code_?:
  return (MVar13 != alliedTeam || iVar14 < 2) & bVar3;
}


/* Void Update(Vector3, Single) */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_Update
               (OptimizedPerception *this,Vector3 *position,float radius,MethodInfo *method)

{
  fVar1 = position->y;
  fVar2 = position->z;
  (this->fields).position.x = position->x;
  (this->fields).position.y = fVar1;
  (this->fields).position.z = fVar2;
  (this->fields).radius = radius;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar3 = (this->fields).potentialTargets;
  if (pHVar3 == (HashSet_1_System_Int32_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = 0;
  if (0 < (pHVar3->fields)._lastIndex) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar3->fields)._slots,0,(pHVar3->fields)._lastIndex,(MethodInfo *)0x0);
    pIVar6 = (pHVar3->fields)._buckets;
    if (pIVar6 == (Int32__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar3->fields)._buckets,0,(int32_t)pIVar6->max_length,(MethodInfo *)0x0);
    (pHVar3->fields)._count = 0;
    (pHVar3->fields)._lastIndex = 0;
    (pHVar3->fields)._freeList = -1;
  }
  piVar7 = &(pHVar3->fields)._version;
  *piVar7 = *piVar7 + 1;
  fVar1 = (this->fields).position.z;
  uVar8._0_4_ = (this->fields).position.x;
  uVar8._4_4_ = (this->fields).position.y;
  fVar2 = (this->fields).radius;
  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  pCVar9 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_11[0]._0_8_ = uVar8;
  aVStack_11[0].z = fVar1;
  iVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (aVStack_11,fVar2,pCVar9,1 << ((byte)iVar10 & 0x1f),(MethodInfo *)0x0);
  if (0 < iVar10) {
    lVar12 = 0x20;
    uVar13 = uVar5;
    do {
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar9 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar9 == (Collider__Array *)0x0) goto code_?;
      if ((uint)pCVar9->max_length <= (uint)uVar13) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      obj = *(Object **)((longlong)pCVar9->vector + lVar12 + -0x20);
      if (obj == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar14 = obj[1].klass;
      if (pOVar14 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar14);
      t = (Transform *)
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
          Unmarshal_UnmarshalUnityObject
                    (gcHandlePtr,
                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                    );
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        value = (this_00->fields)._.id;
        this_01 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_01 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (((this_01->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
             (bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)this_01,(MethodInfo *)0x0), bVar15 != 0)) {
            pHVar3 = (this->fields).potentialTargets;
            if (pHVar3 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (pHVar3,value,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
          }
        }
      }
      uVar13 = (ulonglong)((uint)uVar13 + 1);
      uVar5 = uVar5 + 1;
      lVar12 = lVar12 + 8;
    } while ((longlong)uVar5 < (longlong)iVar10);
  }
  return;
}


/* Void UpdatePotentialTargets() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_UpdatePotentialTargets
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).potentialTargets;
  if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if (0 < (pHVar1->fields)._lastIndex) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0);
    pIVar4 = (pHVar1->fields)._buckets;
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar4->max_length,(MethodInfo *)0x0);
    (pHVar1->fields)._count = 0;
    (pHVar1->fields)._lastIndex = 0;
    (pHVar1->fields)._freeList = -1;
  }
  piVar5 = &(pHVar1->fields)._version;
  *piVar5 = *piVar5 + 1;
  fVar6 = (this->fields).position.z;
  uVar7._0_4_ = (this->fields).position.x;
  uVar7._4_4_ = (this->fields).position.y;
  radius = (this->fields).radius;
  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_10[0]._0_8_ = uVar7;
  aVStack_10[0].z = fVar6;
  iVar9 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (aVStack_10,radius,pCVar8,1 << ((byte)iVar9 & 0x1f),(MethodInfo *)0x0);
  if (0 < iVar9) {
    lVar11 = 0x20;
    uVar12 = uVar3;
    do {
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar8 == (Collider__Array *)0x0) goto code_?;
      if ((uint)pCVar8->max_length <= (uint)uVar12) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = *(Object **)((longlong)pCVar8->vector + lVar11 + -0x20);
      if (obj == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar13 = obj[1].klass;
      if (pOVar13 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar13);
      t = (Transform *)
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
          Unmarshal_UnmarshalUnityObject
                    (gcHandlePtr,
                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                    );
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        value = (this_00->fields)._.id;
        this_01 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_01 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (((this_01->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
             (bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)this_01,(MethodInfo *)0x0), bVar14 != 0)) {
            pHVar1 = (this->fields).potentialTargets;
            if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (pHVar1,value,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
          }
        }
      }
      uVar12 = (ulonglong)((uint)uVar12 + 1);
      uVar3 = uVar3 + 1;
      lVar11 = lVar11 + 8;
    } while ((longlong)uVar3 < (longlong)iVar9);
  }
  return;
}


/* OptimizedPerception() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception__ctor
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).potentialTargets = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).potentialTargets >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).removeSet = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).removeSet >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = (List_1_WorldObjectClientRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  pvVar8 = MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
    pvVar8 = (void *)FUN_?(pvVar8);
  }
  pWVar9 = (WorldObjectClientRef__Array *)FUN_?(pvVar8,0x10);
  (pLVar7->fields)._items = pWVar9;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pLVar7->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar10 = iRam_?;
  (this->fields).targets = pLVar7;
  if (iVar10 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).targets >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

