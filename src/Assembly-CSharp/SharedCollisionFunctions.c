
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
      mscorlib.dll::System::Comparison`1[UnityEngine::RaycastHit]::
      Comparison_1_UnityEngine_RaycastHit___ctor
                (this,(Object *)object,
                 MethodInfo__SharedCollisionFunctions____c___GetPhysicsCollisionData_b__2_0_UnityEngine__RaycastHit__UnityEngine__RaycastHit_
                 ,(MethodInfo *)0x0);
      TypeInfo__SharedCollisionFunctions____c->static_fields->__9__2_0 = this;
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
        this_01 = (Touch *)hits->vector;
        while( true ) {
          if ((int)hits->max_length <= (int)uVar2) {
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          }
          if (hits->max_length <= uVar2) break;
          pTVar6 = this_01;
          fVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                            (this_01,(MethodInfo *)0x0);
          if (fVar7 == 0.0) {
            if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
            this_00 = (RaycastHit *)func_?();
            pCVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               (this_00,method_00);
            if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
            method_00 = pMVar4;
            PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                      (pPVar1,pCVar5,origin,(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
            this_01 = (Touch *)&this_01->m_Pressure;
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
            hit.m_Point.y = (float)pTVar6;
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
            this_01 = (Touch *)&this_01->m_Pressure;
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
  if (pPVar1 != (PhysicsCollisionDatasWrapper *)0x0) {
    PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar1,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)hitAmount;
    mscorlib.dll::System::Array::Array_Sort_77
              (hits,0,hitAmount,
               (IComparer_1_UnityEngine_RaycastHit_ *)
               TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer,
               void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
              );
    if (0 < overlapAmount) {
      ppCVar2 = overlapResult->vector;
      uVar3 = 0;
      if (overlapResult == (Collider__Array *)0x0) goto code_?;
      do {
        if (overlapResult->max_length <= uVar3) goto code_?;
        pCVar4 = *ppCVar2;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        method_00 = (MethodInfo *)origin.y;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar1,pCVar4,origin,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppCVar2 = ppCVar2 + 1;
      } while ((int)uVar3 < overlapAmount);
    }
    if (0 < hitAmount) {
      this_00 = (Touch *)hits->vector;
      uVar3 = 0;
      if (hits == (RaycastHit__Array *)0x0) goto code_?;
      do {
        if (hits->max_length <= uVar3) goto code_?;
        pTVar5 = this_00;
        fVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                          (this_00,(MethodInfo *)0x0);
        if (fVar6 == 0.0) {
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          this = (RaycastHit *)func_?();
          pCVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                             (this,method_00);
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          method_00 = (MethodInfo *)origin.y;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                    (pPVar1,pCVar4,origin,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pPVar1 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          puVar7 = &UNK_?;
          func_?();
          if (pPVar1 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
          method_00 = (MethodInfo *)((ulonglong)uStack_8 >> 0x20);
          hit.m_Point.y = (float)pTVar5;
          hit.m_Point.x = (float)puStack_9;
          hit.m_Point.z = (float)puVar7;
          hit.m_Normal.x = (float)&puStack_9;
          hit.m_Normal.y = (float)uVar3;
          hit.m_Normal.z = (float)uStack_10;
          hit.m_FaceID = uStack_11;
          hit.m_Distance = (float)uStack_12;
          hit.m_UV.x = (float)(int)uStack_8;
          hit.m_UV.y = (float)method_00;
          hit.m_Collider = iStack_13;
          PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
                    (pPVar1,hit,(MethodInfo *)0x0);
        }
        uVar3 = uVar3 + 1;
        this_00 = (Touch *)&this_00->m_Pressure;
      } while ((int)uVar3 < hitAmount);
    }
    if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pPVar1 = (PhysicsCollisionDatasWrapper *)(*pcVar14)();
  return pPVar1;
}


/* Void GetVoxelBounds(IntVector ByRef, IntVector ByRef, Bounds) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
               (IntVector *min,IntVector *max,Bounds localSpaceBounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar1->oneVector).x;
  uVar8 = (pVVar1->oneVector).y;
  fVar9 = (float)uVar8 * _UNK_?;
  fVar10 = (pVVar1->oneVector).z * _UNK_?;
  fVar11 = (float)uVar7 * _UNK_? + localSpaceBounds.m_Extents.x + localSpaceBounds.m_Center.x
  ;
  vector.z = (localSpaceBounds.m_Center.z - localSpaceBounds.m_Extents.z) + fVar6;
  vector.x = fVar4 + (localSpaceBounds.m_Center.x - localSpaceBounds.m_Extents.x);
  vector.y = fVar5 + (localSpaceBounds.m_Center.y - localSpaceBounds.m_Extents.y);
  pVVar12 = MathFunctions::MathFunctions_FloorVector
                      ((Vector3 *)&stack0xffffffb8,vector,(MethodInfo *)0x0);
  uVar13 = pVVar12->x;
  uVar14 = pVVar12->y;
  fVar6 = pVVar12->z;
  vector_00.y = fVar9 + localSpaceBounds.m_Extents.y + localSpaceBounds.m_Center.y;
  vector_00.x = fVar11;
  vector_00.z = fVar10 + localSpaceBounds.m_Extents.z + localSpaceBounds.m_Center.z;
  pVVar12 = MathFunctions::MathFunctions_FloorVector
                      ((Vector3 *)&stack0xffffffb8,vector_00,(MethodInfo *)0x0);
  key = 0;
  uVar15 = pVVar12->x;
  uVar16 = pVVar12->y;
  fVar5 = pVVar12->z;
  do {
    if (key == 0) {
      fVar4 = (float)uVar13;
    }
    else if (key == 1) {
      fVar4 = (float)uVar14;
    }
    else {
      fVar4 = fVar6;
      if (key != 2) goto code_?;
    }
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
              (min,key,(int16_t)(int)fVar4,(MethodInfo *)0x0);
    if (key == 0) {
      fVar4 = (float)uVar15;
    }
    else {
      if (key != 1) {
        if (key == 2) {
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                    (max,2,(int16_t)(int)fVar5,(MethodInfo *)0x0);
          return;
        }
code_?:
        uVar17 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar17);
        method_00 = (MethodInfo *)0x0;
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,method_00);
        func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        func_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      fVar4 = (float)uVar16;
    }
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
              (max,key,(int16_t)(int)fVar4,(MethodInfo *)0x0);
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RaycastHitComparer);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
                   );
    cRam_? = '\x01';
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
            );
  TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer = (RaycastHitComparer *)this_00;
  func_?(TypeInfo__SharedCollisionFunctions->static_fields,this_00);
  value = (PhysicsCollisionDatasWrapper *)func_?(TypeInfo__PhysicsCollisionDatasWrapper);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>);
    func_?(&TypeInfo__PhysicsCollisionData);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>;
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,100,
             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_);
  pMVar1 = (MethodInfo *)&(value->fields).physicsCollisionDatas;
  (value->fields).physicsCollisionDatas = (List_1_PhysicsCollisionData_ *)this_01;
  func_?(pMVar1,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
  puVar2 = (undefined1 *)0x0;
  this = (value->fields).physicsCollisionDatas;
  while (this != (List_1_PhysicsCollisionData_ *)0x0) {
    iVar3 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
            SparselyPopulatedArrayFragment_1_System_Object__get_Length
                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)this,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                      );
    if (iVar3 <= (int)puVar2) {
      TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper = value;
      func_?();
      return;
    }
    this_02 = (List_1_PhysicsCollisionData___Class *)(value->fields).physicsCollisionDatas;
    value_00 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    if (this_02 == (List_1_PhysicsCollisionData___Class *)0x0) break;
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_02,value_00,
               MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
              );
    puVar2 = (undefined1 *)((int)&pMVar1->methodPointer + 1);
    method_00 = this_02;
    this = (value->fields).physicsCollisionDatas;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

