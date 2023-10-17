
/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Collider[], RaycastHit[], Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
          (Collider__Array *overlapResult,RaycastHit__Array *hits,Vector3 origin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
                   );
    func_?(&TypeInfo__System__Comparison<UnityEngine::RaycastHit>);
    func_?(&TypeInfo__SharedCollisionFunctions);
    func_?(&
                    MethodInfo__SharedCollisionFunctions____c___GetPhysicsCollisionData_b__2_0_UnityEngine__RaycastHit__UnityEngine__RaycastHit_
                   );
    func_?(&TypeInfo__SharedCollisionFunctions____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar1 != (PhysicsCollisionDatasWrapper *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar1,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCollisionFunctions____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCollisionFunctions____c);
    }
    this = TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0;
    if (this == (Comparison_1_UnityEngine_RaycastHit_ *)0x0) {
      if ((TypeInfo__SharedCollisionFunctions____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCollisionFunctions____c);
      }
      object = TypeInfo__SharedCollisionFunctions____c->static_fields->__9;
      this = (Comparison_1_UnityEngine_RaycastHit_ *)
             func_?(TypeInfo__System__Comparison<UnityEngine::RaycastHit>);
      if (this == (Comparison_1_UnityEngine_RaycastHit_ *)0x0) goto code_?;
      mscorlib.dll::System::Comparison`1[UnityEngine::RaycastHit]::
      Comparison_1_UnityEngine_RaycastHit___ctor
                (this,(Object *)object,
                 MethodInfo__SharedCollisionFunctions____c___GetPhysicsCollisionData_b__2_0_UnityEngine__RaycastHit__UnityEngine__RaycastHit_
                 ,(MethodInfo *)0x0);
      TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0 = this;
      method_00 = (MethodInfo *)&UNK_?;
      func_?(&TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0,this);
    }
    mscorlib.dll::System::Array::Array_Sort_13
              (hits,this,
               void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
              );
    uVar2 = 0;
    if (overlapResult != (Collider__Array *)0x0) {
      ppCVar3 = overlapResult->vector;
      for (; pMVar4 = (MethodInfo *)origin.y, (int)uVar2 < (int)overlapResult->max_length;
          uVar2 = uVar2 + 1) {
        if (overlapResult->max_length <= uVar2) goto code_?;
        pCVar5 = *ppCVar3;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar1,pCVar5,origin,(MethodInfo *)0x0);
        ppCVar3 = ppCVar3 + 1;
        method_00 = pMVar4;
      }
      uVar2 = 0;
      if (hits != (RaycastHit__Array *)0x0) {
        this_00 = hits->vector;
        while( true ) {
          if ((int)hits->max_length <= (int)uVar2) {
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          }
          if (hits->max_length <= uVar2) break;
          pRVar6 = this_00;
          fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                            (this_00,(MethodInfo *)0x0);
          if (fVar7 == 0.0) {
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
            pRVar6 = (RaycastHit *)func_?();
            pCVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               (pRVar6,method_00);
            if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
            method_00 = pMVar4;
            PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                      (pPVar1,pCVar5,origin,(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
            this_00 = this_00 + 1;
          }
          else {
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
            puVar8 = &UNK_?;
            func_?();
            if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
            method_00 = (MethodInfo *)((ulonglong)uStack_9 >> 0x20);
            hit.m_Point.y = (float)pRVar6;
            hit.m_Point.x = (float)puStack_10;
            hit.m_Point.z = (float)puVar8;
            hit.m_Normal.x = (float)&puStack_10;
            hit.m_Normal.y = (float)uVar2;
            hit.m_Normal.z = (float)uStack_11;
            hit.m_FaceID = uStack_12;
            hit.m_Distance = (float)uStack_13;
            hit.m_UV.x = (float)(int)uStack_9;
            hit.m_UV.y = (float)method_00;
            hit.m_Collider = iStack_14;
            PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
                      (pPVar1,hit,(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
            this_00 = this_00 + 1;
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar15)();
  return pPVar1;
}


/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Int32, Collider[], Int32, RaycastHit[],
   Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
          (int32_t overlapAmount,Collider__Array *overlapResult,int32_t hitAmount,
          RaycastHit__Array *hits,Vector3 origin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
                   );
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar2)();
    return pPVar1;
  }
  PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar1,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)hitAmount;
  mscorlib.dll::System::Array::Array_Sort_43
            (hits,0,hitAmount,
             (IComparer_1_UnityEngine_RaycastHit_ *)
             TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer,
             void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
            );
  if (0 < overlapAmount) {
    ppCVar3 = overlapResult->vector;
    uVar4 = 0;
    if (overlapResult == (Collider__Array *)0x0) goto code_?;
    do {
      if (overlapResult->max_length <= uVar4) goto code_?;
      pCVar5 = *ppCVar3;
      if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
      if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
      method_00 = (MethodInfo *)origin.y;
      PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                (pPVar1,pCVar5,origin,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      ppCVar3 = ppCVar3 + 1;
    } while ((int)uVar4 < overlapAmount);
  }
  if (0 < hitAmount) {
    this = hits->vector;
    uVar4 = 0;
    if (hits == (RaycastHit__Array *)0x0) goto code_?;
    do {
      if (hits->max_length <= uVar4) goto code_?;
      pRVar6 = this;
      fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                        (this,(MethodInfo *)0x0);
      if (fVar7 == 0.0) {
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        pRVar6 = (RaycastHit *)func_?();
        pCVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           (pRVar6,method_00);
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        method_00 = (MethodInfo *)origin.y;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar1,pCVar5,origin,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        puVar8 = &UNK_?;
        func_?();
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        method_00 = (MethodInfo *)((ulonglong)uStack_9 >> 0x20);
        hit.m_Point.y = (float)pRVar6;
        hit.m_Point.x = (float)puStack_10;
        hit.m_Point.z = (float)puVar8;
        hit.m_Normal.x = (float)&puStack_10;
        hit.m_Normal.y = (float)uVar4;
        hit.m_Normal.z = (float)uStack_11;
        hit.m_FaceID = uStack_12;
        hit.m_Distance = (float)uStack_13;
        hit.m_UV.x = (float)(int)uStack_9;
        hit.m_UV.y = (float)method_00;
        hit.m_Collider = iStack_14;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add(pPVar1,hit,(MethodInfo *)0x0)
        ;
      }
      uVar4 = uVar4 + 1;
      this = this + 1;
    } while ((int)uVar4 < hitAmount);
  }
  if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
}


/* Void GetVoxelBounds(IntVector ByRef, IntVector ByRef, Bounds) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
               (IntVector *min,IntVector *max,Bounds localSpaceBounds,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                     ((Vector3 *)&stack0xffffffb8,&localSpaceBounds,(MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fVar3 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_5.x = (pVVar4->oneVector).x;
  VStack_5.y = (pVVar4->oneVector).y;
  VStack_5.z = (pVVar4->oneVector).z;
  fVar6 = VStack_5.x * _UNK_?;
  fVar7 = VStack_5.y * _UNK_?;
  fVar3 = fVar3 + VStack_5.z * _UNK_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                     ((Vector3 *)&stack0xffffffc8,&localSpaceBounds,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).y;
  fStack_9 = VStack_5.y + (float)uVar8 * _UNK_?;
  fVar10 = VStack_5.z + (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * _UNK_?
  ;
  vector.y = SUB84(uVar2,4) + fVar7;
  vector.x = (float)uVar2 + fVar6;
  vector.z = fVar3;
  pVVar1 = MathFunctions::MathFunctions_FloorVector(&VStack_5,vector,(MethodInfo *)0x0);
  uStack_11._0_4_ = pVVar1->x;
  puStack_12 = (undefined *)pVVar1->y;
  pIVar13 = (IntVector *)pVVar1->z;
  vector_00.y = fStack_9;
  vector_00.x = fVar3;
  vector_00.z = fVar10;
  pVVar1 = MathFunctions::MathFunctions_FloorVector
                     (&VStack_5,vector_00,(MethodInfo *)(float)uStack_11);
  key = 0;
  fVar3 = pVVar1->z;
  do {
    if (key == 0) {
      fVar7 = (float)((int)(float)uStack_11 & 0xffff);
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (min,0,(int16_t)(int)(float)uStack_11,(MethodInfo *)0x0);
    }
    else {
      if (key != 1) {
        if (key == 2) {
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                    (min,2,(int16_t)(int)(float)pIVar13,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                    (max,2,(int16_t)(int)fVar3,(MethodInfo *)0x0);
          return;
        }
        func_?();
        this = (IndexOutOfRangeException *)func_?();
        func_?();
        method_00 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,method_00);
        fVar3 = (float)func_?();
        VStack_5.x = fVar3;
        func_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar15 = (ulonglong)(uint)(int)(float)puStack_12 & 0xffffffff0000ffff;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (min,1,(int16_t)uVar15,(MethodInfo *)0x0);
      fVar7 = (float)(uVar15 >> 0x20);
    }
    pIVar13 = max;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
              (max,key,(int16_t)(int)fVar7,(MethodInfo *)0x0);
    key = key + 1;
  } while( true );
}


/* Boolean IgnoreCollision(MVWorldObjectClient, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
               (MVWorldObjectClient *wo,HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    return 1;
  }
  if ((ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) &&
     (bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__Contains
                        (ignoreWoIds,(wo->fields)._.id,
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
    pCVar1 = (hit->fields).collider;
    voxelHit->collider = pCVar1;
    func_?(&voxelHit->collider,pCVar1);
    pTVar2 = (hit->fields).transform;
    voxelHit->transform = pTVar2;
    func_?(&voxelHit->transform,pTVar2);
    voxelHit->distance = (hit->fields).distance;
    fVar3 = (hit->fields).point.y;
    fVar4 = (hit->fields).point.z;
    (voxelHit->point).x = (hit->fields).point.x;
    (voxelHit->point).y = fVar3;
    (voxelHit->point).z = fVar4;
    fVar3 = (hit->fields).normal.y;
    fVar4 = (hit->fields).normal.z;
    (voxelHit->normal).x = (hit->fields).normal.x;
    (voxelHit->normal).y = fVar3;
    (voxelHit->normal).z = fVar4;
    voxelHit->woId = woId;
    voxelHit->isCubeHit = 0;
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this,woId,(MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObject *)0x0) {
        fVar4 = pMVar5[1].fields.scale.z;
        *(float *)&voxelHit->interactionFlags = pMVar5[1].fields.scale.y;
        *(float *)((int)&voxelHit->interactionFlags + 4) = fVar4;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetToVoxelHit(VoxelHit ByRef, VoxelHit ByRef) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
               (VoxelHit *voxelHit0,VoxelHit *voxelHit1,MethodInfo *method)

{
  fVar1 = (voxelHit1->point).y;
  fVar2 = (voxelHit1->point).z;
  (voxelHit0->point).x = (voxelHit1->point).x;
  (voxelHit0->point).y = fVar1;
  (voxelHit0->point).z = fVar2;
  pTVar3 = voxelHit1->transform;
  voxelHit0->transform = pTVar3;
  func_?(&voxelHit0->transform,pTVar3);
  fVar1 = (voxelHit1->normal).y;
  fVar2 = (voxelHit1->normal).z;
  (voxelHit0->normal).x = (voxelHit1->normal).x;
  (voxelHit0->normal).y = fVar1;
  (voxelHit0->normal).z = fVar2;
  voxelHit0->distance = voxelHit1->distance;
  voxelHit0->face = voxelHit1->face;
  iVar4 = (voxelHit1->cubePos).y;
  iVar5 = (voxelHit1->cubePos).z;
  (voxelHit0->cubePos).x = (voxelHit1->cubePos).x;
  (voxelHit0->cubePos).y = iVar4;
  (voxelHit0->cubePos).z = iVar5;
  pCVar6 = voxelHit1->cube;
  voxelHit0->cube = pCVar6;
  func_?(&voxelHit0->cube,pCVar6);
  voxelHit0->woId = voxelHit1->woId;
  voxelHit0->isCubeHit = 1;
  pCVar7 = voxelHit1->collider;
  voxelHit0->collider = pCVar7;
  func_?(&voxelHit0->collider,pCVar7);
  uVar8 = *(undefined4 *)((int)&voxelHit1->interactionFlags + 4);
  *(int *)&voxelHit0->interactionFlags = (int)voxelHit1->interactionFlags;
  *(undefined4 *)((int)&voxelHit0->interactionFlags + 4) = uVar8;
  return;
}


/* SharedCollisionFunctions() */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PhysicsCollisionDatasWrapper);
    func_?(&TypeInfo__RaycastHitComparer);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  this = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__RaycastHitComparer);
  if (this != (TweenRunner_1_FloatTween_ *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
                     );
      cRam_? = '\x01';
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor
              (this,
               MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
              );
    TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer = (RaycastHitComparer *)this;
    func_?(TypeInfo__SharedCollisionFunctions->static_fields,this);
    value = (PhysicsCollisionDatasWrapper *)func_?(TypeInfo__PhysicsCollisionDatasWrapper);
    if (value != (PhysicsCollisionDatasWrapper *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                       );
        func_?(&TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
        in_stack_1 = &TypeInfo__PhysicsCollisionData;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                  (this_00,100,
                   MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_);
        (value->fields).physicsCollisionDatas = (List_1_PhysicsCollisionData_ *)this_00;
        func_?(&(value->fields).physicsCollisionDatas,this_00);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,in_stack_2);
        pLVar3 = (value->fields).physicsCollisionDatas;
        iStack_4 = 0;
        while (pLVar3 != (List_1_PhysicsCollisionData_ *)0x0) {
          iVar5 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]
                  ::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                            ((SparselyPopulatedArrayFragment_1_System_Object_ *)pLVar3,
                             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                            );
          if (iVar5 <= iStack_4) {
            TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper = value;
            func_?(&TypeInfo__SharedCollisionFunctions->static_fields->
                             physicsCollisionWrapper,value);
            return;
          }
          pLVar3 = (value->fields).physicsCollisionDatas;
          value_00 = (MethodInfo *)func_?(TypeInfo__PhysicsCollisionData);
          if ((value_00 == (MethodInfo *)0x0) ||
             (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)value_00,ExceptionArgument__Enum_obj,
                         (MethodInfo *)in_stack_1),
             pLVar3 == (List_1_PhysicsCollisionData_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar3,(Object *)value_00,
                     MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
                    );
          iStack_4 = iStack_4 + 1;
          in_stack_1 = (PhysicsCollisionData__Class **)value_00;
          pLVar3 = (value->fields).physicsCollisionDatas;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

