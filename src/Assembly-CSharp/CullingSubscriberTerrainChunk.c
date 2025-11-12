
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Destroy
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unsubscribe_object_wit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (CullingSubscriberTerrainChunk *)0x0) goto code_?;
  iVar1 = FUN_?(1,TypeInfo__ICullingSubscriber,this);
  if (iVar1 < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Trying_to_unsubscribe_object_wit,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = FUN_?();
    if (iVar1 < 2) {
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pDVar2 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                (pDVar2,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField
                        + -1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                );
    }
    else {
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      uVar4 = FUN_?(1,TypeInfo__ICullingSubscriber,this);
      pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      iVar1 = FUN_?();
      if (pBVar5 == (BoundingSphere__Array *)0x0) goto code_?;
      if ((uint)pBVar5->max_length <= iVar1 - 1U) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pBVar3 == (BoundingSphere__Array *)0x0) goto code_?;
      if ((uint)pBVar3->max_length <= uVar4) goto code_?;
      pBVar7 = pBVar5->vector + (longlong)iVar1 + -1;
      fVar8 = (pBVar7->position).y;
      fVar9 = (pBVar7->position).z;
      fVar10 = pBVar7->radius;
      bVar11 = cRam_? == '\0';
      pBVar12 = pBVar3->vector + (int)uVar4;
      (pBVar12->position).x = (pBVar7->position).x;
      (pBVar12->position).y = fVar8;
      (pBVar12->position).z = fVar9;
      pBVar12->radius = fVar10;
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (bVar11) {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pDVar2 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                                _NumBoundSpheres_k__BackingField + -1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                        );
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      iVar13 = FUN_?(1,TypeInfo__ICullingSubscriber,this);
      if (pDVar2 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                (pDVar2,iVar13,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                 ->klass->rgctx_data[0x22].method);
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pDVar2 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                (pDVar2,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField
                        + -1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                );
      uVar14 = FUN_?(1,TypeInfo__ICullingSubscriber,this);
      if (value == (Object *)0x0) goto code_?;
      FUN_?(2,TypeInfo__ICullingSubscriber,value,uVar14);
    }
    FUN_?(2,TypeInfo__ICullingSubscriber,this,0xffffffff);
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = FUN_?();
    FUN_?(iVar1 + -1);
    if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup != (CullingGroup *)0x0) {
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (obj == (CullingGroup *)0x0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar15 = (obj->fields).m_Ptr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar15,iVar13);
    }
  }
  return;
}


/* Void HandleChange() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    pvVar2 = (pCVar1->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 == '\0') {
      return;
    }
    iVar6 = (this->fields)._CullingIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (pCVar1 != (CullingGroup *)0x0) {
      pvVar2 = (pCVar1->fields).m_Ptr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      iVar7 = (*pcRam_?)(pvVar2,iVar6);
      if ((this->fields).distanceBand < iVar7) {
        return;
      }
      pMVar8 = (this->fields).cubeModelBase;
      if ((pMVar8 != (MVCubeModelBase *)0x0) &&
         (pCVar9 = (pMVar8->fields).chunkInstances, pCVar9 != (ChunkInstances *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pCVar9->fields).chunkInstances !=
            (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
          lVar10 = FUN_?(auStack_11);
          if (*(Renderer **)(lVar10 + 0x20) != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (*(Renderer **)(lVar10 + 0x20),1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::
     CullingSubscriberTerrainChunk_OnStateChanged
               (CullingSubscriberTerrainChunk *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModelBase;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pCVar2 = (pMVar1->fields).chunkInstances, pCVar2 != (ChunkInstances *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pCVar2->fields).chunkInstances !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      lVar3 = FUN_?(auStack_4);
      distanceBandIndex = (this->fields).distanceBand;
      obj = *(Object **)(lVar3 + 0x20);
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (obj != (Object *)0x0) {
        bVar5 = CullingApiWrapper::CullingApiWrapper_Visible
                          (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                        ,bVar5,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (Object *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pOVar7 = obj[1].klass;
        if (pOVar7 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          pcVar6 = (code *)FUN_?(&UNK_?);
          if (pcVar6 == (code *)0x0) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pOVar7,bVar5);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Setup(Bounds) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
               (CullingSubscriberTerrainChunk *this,Bounds *bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (bounds->m_Extents).x;
  uStack_1._4_4_ = (bounds->m_Extents).y;
  fStack_2 = (bounds->m_Extents).z;
  radius = (float)FUN_?(&uStack_1);
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar3 != (BoundingSphere__Array *)0x0) {
    uVar4 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar4 < (uint)pBVar3->max_length) {
      fVar5 = (bounds->m_Center).y;
      fVar6 = (bounds->m_Center).z;
      pBVar3->vector[(int)uVar4].position.x = (bounds->m_Center).x;
      pBVar3->vector[(int)uVar4].position.y = fVar5;
      pBVar3->vector[(int)uVar4].position.z = fVar6;
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar3 == (BoundingSphere__Array *)0x0) goto code_?;
      uVar4 = (this->fields)._CullingIndex_k__BackingField;
      if (uVar4 < (uint)pBVar3->max_length) {
        pBVar3->vector[(int)uVar4].radius = radius;
        iVar7 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(radius,(MethodInfo *)0x0);
        (this->fields).distanceBand = iVar7;
        return;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CullingSubscriberTerrainChunk(MVCubeModelBase, IntVector, Bounds) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk__ctor
               (CullingSubscriberTerrainChunk *this,MVCubeModelBase *cubeModelBase,
               IntVector *chunkPosition,Bounds *bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  iVar2 = chunkPosition->y;
  (this->fields).chunkPosition.x = chunkPosition->x;
  (this->fields).chunkPosition.y = iVar2;
  (this->fields).chunkPosition.z = chunkPosition->z;
  (this->fields).cubeModelBase = cubeModelBase;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&(this->fields).cubeModelBase >> 0xc);
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
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  BStack_7.m_Center.x = (bounds->m_Center).x;
  BStack_7.m_Center.y = (bounds->m_Center).y;
  BStack_7._8_8_ = *(undefined8 *)&(bounds->m_Center).z;
  BStack_7.m_Extents.y = (bounds->m_Extents).y;
  BStack_7.m_Extents.z = (bounds->m_Extents).z;
  CullingSubscriberTerrainChunk_Setup(this,&BStack_7,(MethodInfo *)0x0);
  return;
}

