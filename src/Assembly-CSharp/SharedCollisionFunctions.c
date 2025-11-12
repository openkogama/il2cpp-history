
/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Collider[], RaycastHit[], Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
          (Collider__Array *overlapResult,RaycastHit__Array *hits,Vector3 *origin,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Comparison<UnityEngine::RaycastHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SharedCollisionFunctions____c___GetPhysicsCollisionData_b__2_0_UnityEngine__RaycastHit__UnityEngine__RaycastHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar1 != (PhysicsCollisionDatasWrapper *)0x0) {
    PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SharedCollisionFunctions____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    comparer = TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0;
    if (comparer == (Comparison_1_UnityEngine_RaycastHit_ *)0x0) {
      if (*(int *)&(TypeInfo__SharedCollisionFunctions____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      comparer = (Comparison_1_UnityEngine_RaycastHit_ *)
                 FUN_?(TypeInfo__System__Comparison<UnityEngine::RaycastHit>);
      FUN_?(comparer);
      TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0 = comparer;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0
                       >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    pMVar7 = 
    void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
    ;
    if ((
        void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
                   );
    }
    if (hits == (RaycastHit__Array *)0x0) {
      uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar9 = (ArgumentNullException *)func_?(uVar8);
      pSVar10 = (String *)func_?(&StringLiteral_array);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar9,pSVar10,(MethodInfo *)0x0);
      FUN_?(pAVar9,pMVar7);
      pcVar11 = (code *)swi(3);
      pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar11)();
      return pPVar1;
    }
    if (comparer == (Comparison_1_UnityEngine_RaycastHit_ *)0x0) {
      uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar9 = (ArgumentNullException *)func_?(uVar8);
      pSVar10 = (String *)func_?(&StringLiteral_comparison);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar9,pSVar10,(MethodInfo *)0x0);
      FUN_?(pAVar9,pMVar7);
      pcVar11 = (code *)swi(3);
      pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar11)();
      return pPVar1;
    }
    pvVar12 = (pMVar7->field7_0x38).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
      pvVar12 = (void *)FUN_?(pvVar12);
    }
    if (*(int *)((longlong)pvVar12 + 0xe4) == 0) {
      FUN_?(pvVar12);
    }
    mscorlib.dll::System::Collections::Generic::ArraySortHelper`1[UnityEngine::RaycastHit]::
    ArraySortHelper_1_UnityEngine_RaycastHit__Sort
              (hits,0,(int32_t)hits->max_length,comparer,(pMVar7->field7_0x38).rgctx_data[2].method)
    ;
    uVar2 = 0;
    uVar13 = 0;
    if (overlapResult != (Collider__Array *)0x0) {
      ppCVar14 = overlapResult->vector;
      for (; (int)uVar13 < (int)overlapResult->max_length; uVar13 = uVar13 + 1) {
        if ((uint)overlapResult->max_length <= uVar13) goto code_?;
        pCVar15 = *ppCVar14;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        VStack_16.x = origin->x;
        VStack_16.y = origin->y;
        VStack_16.z = origin->z;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar1,pCVar15,&VStack_16,(MethodInfo *)0x0);
        ppCVar14 = ppCVar14 + 1;
      }
      pRVar17 = hits->vector;
      while( true ) {
        if ((int)hits->max_length <= (int)uVar2) {
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SharedCollisionFunctions);
          }
          return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        }
        if ((uint)hits->max_length <= uVar2) break;
        if (pRVar17->m_Distance == 0.0) {
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SharedCollisionFunctions);
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          if ((uint)hits->max_length <= uVar2) break;
          pCVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                             (hits->vector + (int)uVar2,(MethodInfo *)0x0);
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          VStack_16.z = origin->z;
          VStack_16.x = origin->x;
          VStack_16.y = origin->y;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                    (pPVar1,pCVar15,&VStack_16,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          pRVar17 = pRVar17 + 1;
        }
        else {
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SharedCollisionFunctions);
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          if ((uint)hits->max_length <= uVar2) break;
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          RStack_18.m_Point.x = (pRVar17->m_Point).x;
          RStack_18.m_Point.y = (pRVar17->m_Point).y;
          RStack_18._8_8_ = *(undefined8 *)&(pRVar17->m_Point).z;
          RStack_18.m_Collider = pRVar17->m_Collider;
          RStack_18.m_Normal.y = (pRVar17->m_Normal).y;
          RStack_18.m_Normal.z = (pRVar17->m_Normal).z;
          RStack_18.m_FaceID = pRVar17->m_FaceID;
          RStack_18.m_Distance = pRVar17->m_Distance;
          RStack_18.m_UV = pRVar17->m_UV;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
                    (pPVar1,&RStack_18,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          pRVar17 = pRVar17 + 1;
        }
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar11)();
      return pPVar1;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar11)();
  return pPVar1;
}


/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Int32, Collider[], Int32, RaycastHit[],
   Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
          (int32_t overlapAmount,Collider__Array *overlapResult,int32_t hitAmount,
          RaycastHit__Array *hits,Vector3 *origin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar1 != (PhysicsCollisionDatasWrapper *)0x0) {
    PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar1,(MethodInfo *)0x0);
    FUN_?(hits,0,hitAmount,TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer
                  ,
                  void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
                 );
    uVar2 = 0;
    if (0 < overlapAmount) {
      ppCVar3 = overlapResult->vector;
      uVar4 = 0;
      lVar5 = 0;
      if (overlapResult == (Collider__Array *)0x0) goto code_?;
      do {
        if ((uint)overlapResult->max_length <= uVar4) goto code_?;
        pCVar6 = *ppCVar3;
        if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        VStack_7.x = origin->x;
        VStack_7.y = origin->y;
        VStack_7.z = origin->z;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar1,pCVar6,&VStack_7,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 1;
        ppCVar3 = ppCVar3 + 1;
      } while (lVar5 < overlapAmount);
    }
    if (0 < hitAmount) {
      pRVar8 = hits->vector;
      if (hits == (RaycastHit__Array *)0x0) goto code_?;
      do {
        if ((uint)hits->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar9)();
          return pPVar1;
        }
        if (pRVar8->m_Distance == 0.0) {
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SharedCollisionFunctions);
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          if ((uint)hits->max_length <= uVar2) goto code_?;
          pCVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                             (hits->vector + (int)uVar2,(MethodInfo *)0x0);
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          VStack_7.z = origin->z;
          VStack_7.x = origin->x;
          VStack_7.y = origin->y;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                    (pPVar1,pCVar6,&VStack_7,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SharedCollisionFunctions);
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          if ((uint)hits->max_length <= uVar2) goto code_?;
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          RStack_10.m_Point.x = (pRVar8->m_Point).x;
          RStack_10.m_Point.y = (pRVar8->m_Point).y;
          RStack_10._8_8_ = *(undefined8 *)&(pRVar8->m_Point).z;
          RStack_10.m_Collider = pRVar8->m_Collider;
          RStack_10.m_Normal.y = (pRVar8->m_Normal).y;
          RStack_10.m_Normal.z = (pRVar8->m_Normal).z;
          RStack_10.m_FaceID = pRVar8->m_FaceID;
          RStack_10.m_Distance = pRVar8->m_Distance;
          RStack_10.m_UV = pRVar8->m_UV;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
                    (pPVar1,&RStack_10,(MethodInfo *)0x0);
        }
        pRVar8 = pRVar8 + 1;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < hitAmount);
    }
    if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SharedCollisionFunctions);
    }
    return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar9)();
  return pPVar1;
}


/* Void GetVoxelBounds(IntVector ByRef, IntVector ByRef, Bounds) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
               (IntVector *min,IntVector *max,Bounds *localSpaceBounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (localSpaceBounds->m_Extents).x;
  uVar2 = (localSpaceBounds->m_Extents).y;
  uVar3 = (localSpaceBounds->m_Center).x;
  fVar4 = (localSpaceBounds->m_Center).y;
  fVar5 = (localSpaceBounds->m_Center).z;
  fVar6 = (localSpaceBounds->m_Extents).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar7->oneVector).x;
  fVar9 = (float)uVar8 * _UNK_?;
  fVar10 = (pVVar7->oneVector).y * _UNK_?;
  fVar11 = (pVVar7->oneVector).z * _UNK_?;
  uVar12 = (localSpaceBounds->m_Center).x;
  uVar13 = (localSpaceBounds->m_Center).y;
  uVar14 = (localSpaceBounds->m_Extents).x;
  fVar15 = (localSpaceBounds->m_Extents).y;
  fVar16 = (localSpaceBounds->m_Extents).z;
  fVar17 = (localSpaceBounds->m_Center).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar18 = (pVVar7->oneVector).x;
  fVar19 = (float)uVar18 * _UNK_?;
  fVar20 = (pVVar7->oneVector).y * _UNK_?;
  fVar21 = (pVVar7->oneVector).z * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  cVar22 = cRam_?;
  dVar23 = (double)func_?((double)(fVar9 + ((float)uVar3 - (float)uVar1)));
  dVar24 = (double)func_?((double)(fVar10 + (fVar4 - (float)uVar2)));
  dVar25 = (double)func_?((double)(fVar11 + (fVar5 - fVar6)));
  if (cVar22 == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar26 = (double)func_?((double)(fVar19 + (float)uVar14 + (float)uVar12));
  dVar27 = (double)func_?((double)(fVar20 + fVar15 + (float)uVar13));
  dVar28 = (double)func_?((double)(fVar21 + fVar16 + fVar17));
  iVar29 = 0;
  while (((fVar4 = (float)dVar23, iVar29 == 0 || (fVar4 = (float)dVar24, iVar29 == 1)) ||
         (fVar4 = (float)dVar25, iVar29 == 2))) {
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (iVar29 == 0) {
      min->x = (int16_t)(int)fVar4;
      iVar29 = 1;
      max->x = (int16_t)(int)dVar26;
    }
    else {
      if (iVar29 != 1) {
        if (iVar29 != 2) {
          uVar30 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar31 = (IndexOutOfRangeException *)func_?(uVar30);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar31,(MethodInfo *)0x0);
          uVar30 = func_?(&MethodInfo__MV__WorldObject__IntVector__set_Item_int__short_
                                      );
          FUN_?(pIVar31,uVar30);
          pcVar32 = (code *)swi(3);
          (*pcVar32)();
          return;
        }
        min->z = (int16_t)(int)fVar4;
        max->z = (int16_t)(int)dVar28;
        return;
      }
      min->y = (int16_t)(int)fVar4;
      iVar29 = 2;
      max->y = (int16_t)(int)dVar27;
    }
  }
  uVar30 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar31 = (IndexOutOfRangeException *)func_?(uVar30);
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (pIVar31,message,(MethodInfo *)0x0);
  uVar30 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  FUN_?(pIVar31,uVar30);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean IgnoreCollision(MVWorldObjectClient, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
               (MVWorldObjectClient *wo,HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    return 1;
  }
  if ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) &&
     (bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_),
     bVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* Void SetToNoneVoxelHit(VoxelHit ByRef, PhysicsCollisionData, Int32) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
               (VoxelHit *voxelHit,PhysicsCollisionData *hit,int32_t woId,MethodInfo *method)

{
  if (hit != (PhysicsCollisionData *)0x0) {
    voxelHit->collider = (hit->fields).collider;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&voxelHit->collider >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar6 = iRam_?;
    voxelHit->transform = (hit->fields).transform;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&voxelHit->transform >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    voxelHit->distance = (hit->fields).distance;
    fVar7 = (hit->fields).point.y;
    fVar8 = (hit->fields).point.z;
    (voxelHit->point).x = (hit->fields).point.x;
    (voxelHit->point).y = fVar7;
    (voxelHit->point).z = fVar8;
    fVar7 = (hit->fields).normal.y;
    fVar8 = (hit->fields).normal.z;
    (voxelHit->normal).x = (hit->fields).normal.x;
    (voxelHit->normal).y = fVar7;
    (voxelHit->normal).z = fVar8;
    voxelHit->woId = woId;
    voxelHit->isCubeHit = 0;
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this != (MVWorldObjectClientManager *)0x0) &&
       (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this,woId,(MethodInfo *)0x0), pMVar9 != (MVWorldObjectClient *)0x0)) {
      voxelHit->interactionFlags = (pMVar9->fields).interactionFlags;
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetToVoxelHit(VoxelHit ByRef, VoxelHit ByRef) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
               (VoxelHit *voxelHit0,VoxelHit *voxelHit1,MethodInfo *method)

{
  fVar1 = (voxelHit1->point).z;
  fVar2 = (voxelHit1->point).y;
  (voxelHit0->point).x = (voxelHit1->point).x;
  (voxelHit0->point).y = fVar2;
  (voxelHit0->point).z = fVar1;
  iVar3 = iRam_?;
  voxelHit0->transform = voxelHit1->transform;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&voxelHit0->transform >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  fVar1 = (voxelHit1->normal).z;
  fVar2 = (voxelHit1->normal).y;
  (voxelHit0->normal).x = (voxelHit1->normal).x;
  (voxelHit0->normal).y = fVar2;
  (voxelHit0->normal).z = fVar1;
  voxelHit0->distance = voxelHit1->distance;
  voxelHit0->face = voxelHit1->face;
  iVar9 = (voxelHit1->cubePos).y;
  iVar10 = (voxelHit1->cubePos).z;
  (voxelHit0->cubePos).x = (voxelHit1->cubePos).x;
  (voxelHit0->cubePos).y = iVar9;
  (voxelHit0->cubePos).z = iVar10;
  voxelHit0->cube = voxelHit1->cube;
  iVar11 = 0;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&voxelHit0->cube >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar8);
  }
  voxelHit0->woId = voxelHit1->woId;
  voxelHit0->isCubeHit = 1;
  voxelHit0->collider = voxelHit1->collider;
  if (iVar11 != 0) {
    uVar4 = (uint)((ulonglong)&voxelHit0->collider >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  voxelHit0->interactionFlags = voxelHit1->interactionFlags;
  return;
}


/* SharedCollisionFunctions() */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PhysicsCollisionDatasWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RaycastHitComparer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RaycastHitComparer *)FUN_?(TypeInfo__RaycastHitComparer);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer = pRVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SharedCollisionFunctions->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this = (PhysicsCollisionDatasWrapper *)FUN_?(TypeInfo__PhysicsCollisionDatasWrapper);
  PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper__ctor(this,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper = this;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper >>
                  0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

