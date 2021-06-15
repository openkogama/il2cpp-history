
/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Collider[], RaycastHit[], Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData
          (Collider__Array *overlapResult,RaycastHit__Array *hits,Vector3 origin,MethodInfo *method)

{
  code *pcVar1;
  RaycastHit hit;
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *this;
  undefined1 (*pauVar2) [36];
  Collider *pCVar3;
  undefined4 uVar4;
  PhysicsCollisionDatasWrapper *pPVar5;
  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *this_00;
  uint uVar6;
  RaycastHit__Array *pRVar7;
  Collider **ppCVar8;
  float fVar9;
  
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar5 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar5 != (PhysicsCollisionDatasWrapper *)0x0) {
    PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar5,(MethodInfo *)0x0);
    if (TypeInfo__SharedCollisionFunctions->static_fields->__f__am_cache0 ==
        (Comparison_1_UnityEngine_RaycastHit_ *)0x0) {
      this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Comparison<UnityEngine::RaycastHit>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this,(Object *)0x0,
                 MethodInfo__SharedCollisionFunctions___GetPhysicsCollisionData_m__0_UnityEngine__RaycastHit__UnityEngine__RaycastHit_
                 ,
                 MethodInfo__System__Comparison<UnityEngine::RaycastHit>__Comparison_System__Object__void__
                );
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      TypeInfo__SharedCollisionFunctions->static_fields->__f__am_cache0 =
           (Comparison_1_UnityEngine_RaycastHit_ *)this;
    }
    if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCollisionFunctions);
    }
    mscorlib.dll::System::Array::Array_Sort_19
              (hits,TypeInfo__SharedCollisionFunctions->static_fields->__f__am_cache0,
               void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____System__Comparison<UnityEngine::RaycastHit>_
              );
    uVar6 = 0;
    if (overlapResult != (Collider__Array *)0x0) {
      ppCVar8 = overlapResult->vector;
      for (; (int)uVar6 < (int)overlapResult->max_length; uVar6 = uVar6 + 1) {
        if (overlapResult->max_length <= uVar6) goto code_?;
        pCVar3 = *ppCVar8;
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar5 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        if (pPVar5 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar5,pCVar3,origin,(MethodInfo *)0x0);
        ppCVar8 = ppCVar8 + 1;
      }
      if (hits != (RaycastHit__Array *)0x0) {
        this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)
                  hits->vector;
        pRVar7 = (RaycastHit__Array *)0x0;
        while( true ) {
          if ((int)hits->max_length <= (int)pRVar7) {
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
          }
          if ((RaycastHit__Array *)hits->max_length <= pRVar7) break;
          fVar9 = System.Core.dll::System::Linq::
                  Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                            (this_00,(MethodInfo *)0x0);
          if (fVar9 == 0.0) {
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            pPVar5 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
            func_?();
            pCVar3 = (Collider *)func_?();
            if (pPVar5 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
            PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                      (pPVar5,pCVar3,origin,(MethodInfo *)0x0);
            hits = (RaycastHit__Array *)0x0;
            pRVar7 = (RaycastHit__Array *)((int)&pRVar7->klass + 1);
            this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *
                      )&this_00[1].monitor;
          }
          else {
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            pPVar5 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
            pauVar2 = (undefined1 (*) [36])func_?();
            if (pPVar5 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
            hit.m_UV.y = (float)(int)((ulonglong)*(undefined8 *)(*pauVar2 + 0x20) >> 0x20);
            hit._0_36_ = *pauVar2;
            hit.m_Collider = *(int32_t *)(pauVar2[1] + 4);
            PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
                      (pPVar5,hit,(MethodInfo *)0x0);
            this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *
                      )&this_00[1].monitor;
            hits = pRVar7;
            pRVar7 = (RaycastHit__Array *)((int)&pRVar7->klass + 1);
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar1 = (code *)swi(3);
  pPVar5 = (PhysicsCollisionDatasWrapper *)(*pcVar1)();
  return pPVar5;
}


/* PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Int32, Collider[], Int32, RaycastHit[],
   Vector3) */

PhysicsCollisionDatasWrapper *
Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
          (int32_t overlapAmount,Collider__Array *overlapResult,int32_t hitAmount,
          RaycastHit__Array *hits,Vector3 origin,MethodInfo *method)

{
  code *pcVar1;
  RaycastHit hit;
  Collider **ppCVar2;
  undefined1 (*pauVar3) [36];
  Collider *pCVar4;
  undefined4 uVar5;
  PhysicsCollisionDatasWrapper *pPVar6;
  uint uVar7;
  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *this;
  float fVar8;
  
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCollisionFunctions);
  }
  pPVar6 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
  if (pPVar6 == (PhysicsCollisionDatasWrapper *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
    pcVar1 = (code *)swi(3);
    pPVar6 = (PhysicsCollisionDatasWrapper *)(*pcVar1)();
    return pPVar6;
  }
  PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear(pPVar6,(MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Sort_20
            (hits,0,hitAmount,
             (IComparer_1_UnityEngine_RaycastHit_ *)
             TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer,
             void_MethodInfo__System__Array__Sort<UnityEngine::RaycastHit>_UnityEngine__RaycastHit_____int__int__System__Collections__Generic__IComparer<UnityEngine::RaycastHit>_
            );
  uVar7 = 0;
  if (0 < overlapAmount) {
    ppCVar2 = overlapResult->vector;
    do {
      if (overlapResult == (Collider__Array *)0x0) goto code_?;
      if (overlapResult->max_length <= uVar7) goto code_?;
      pCVar4 = *ppCVar2;
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
      }
      pPVar6 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
      if (pPVar6 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
      PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                (pPVar6,pCVar4,origin,(MethodInfo *)0x0);
      uVar7 = uVar7 + 1;
      ppCVar2 = ppCVar2 + 1;
    } while ((int)uVar7 < overlapAmount);
  }
  uVar7 = 0;
  if (0 < hitAmount) {
    this = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)
           hits->vector;
    do {
      if (hits == (RaycastHit__Array *)0x0) goto code_?;
      if (hits->max_length <= uVar7) goto code_?;
      fVar8 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Object,System::Single]::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                        (this,(MethodInfo *)0x0);
      if (fVar8 == 0.0) {
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar6 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        uVar5 = func_?(uVar7,0);
        pCVar4 = (Collider *)func_?(uVar5);
        if (pPVar6 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
                  (pPVar6,pCVar4,origin,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        pPVar6 = TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
        pauVar3 = (undefined1 (*) [36])func_?(uVar7);
        if (pPVar6 == (PhysicsCollisionDatasWrapper *)0x0) goto code_?;
        hit.m_UV.y = (float)(int)((ulonglong)*(undefined8 *)(*pauVar3 + 0x20) >> 0x20);
        hit._0_36_ = *pauVar3;
        hit.m_Collider = *(int32_t *)(pauVar3[1] + 4);
        PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add(pPVar6,hit,(MethodInfo *)0x0)
        ;
      }
      uVar7 = uVar7 + 1;
      this = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)
             &this[1].monitor;
    } while ((int)uVar7 < hitAmount);
  }
  if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCollisionFunctions);
  }
  return TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper;
}


/* Void GetVoxelBounds(IntVector ByRef, IntVector ByRef, Bounds) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
               (IntVector *min,IntVector *max,Bounds localSpaceBounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&stack0xffffffd0,&localSpaceBounds,0);
  fVar2 = *(float *)(puVar1 + 1);
  uVar3 = (undefined4)*puVar1;
  uVar4 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd0,*pVVar5,0.51,(MethodInfo *)0x0);
  a_00.y = (float)uVar4;
  a_00.x = (float)uVar3;
  a_00.z = fVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd0,a_00,*pVVar5,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar5->x;
  uStack_6._4_4_ = pVVar5->y;
  puStack_7 = (undefined *)pVVar5->z;
  iVar8 = func_?();
  fVar2 = *(float *)(iVar8 + 8);
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
  uVar10 = pVVar9->x;
  pVVar5 = (Vector3 *)&stack0xffffffd0;
  fVar11 = (float)uVar10;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (pVVar5,*pVVar9,0.49,(MethodInfo *)0x0);
  localSpaceBounds.m_Center.x = fVar11;
  localSpaceBounds.m_Center.z = pVVar9->x;
  localSpaceBounds.m_Extents.x = pVVar9->y;
  localSpaceBounds.m_Extents.y = pVVar9->z;
  localSpaceBounds.m_Extents.z = 0.0;
  a.y = localSpaceBounds.m_Center.x;
  a.x = (float)pVVar5;
  a.z = fVar2;
  localSpaceBounds.m_Center.y = fVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd0,a,*pVVar9,(MethodInfo *)0x0);
  uVar3 = pVVar5->x;
  uVar4 = pVVar5->y;
  fVar2 = pVVar5->z;
  vector.z = (float)puStack_7;
  vector.x = (float)(undefined4)uStack_6;
  vector.y = (float)uStack_6._4_4_;
  pVVar5 = MathFunctions::MathFunctions_FloorVector
                     ((Vector3 *)&stack0xffffffd0,vector,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar5->x;
  uStack_6._4_4_ = pVVar5->y;
  puStack_7 = (undefined *)pVVar5->z;
  vector_00.y = (float)uVar4;
  vector_00.x = (float)uVar3;
  vector_00.z = fVar2;
  MathFunctions::MathFunctions_FloorVector((Vector3 *)&stack0xffffffd0,vector_00,(MethodInfo *)0x0);
  iVar8 = 0;
  do {
    uStack12 = 0;
    puStack13 = &uStack_6;
    iStack14 = iVar8;
    func_?();
    puStack15 = (undefined *)0x0;
    func_?();
    func_?();
    func_?();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  return;
}


/* Boolean IgnoreCollision(MVWorldObjectClient, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
               (MVWorldObjectClient *wo,HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    return 1;
  }
  if (ignoreWoIds != (HashSet_1_System_Int32_ *)0x0) {
    item = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)ignoreWoIds,
                       (NativeAdType__Enum)item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* Void SetToNoneVoxelHit(VoxelHit ByRef, PhysicsCollisionData, Int32) */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
               (VoxelHit *voxelHit,PhysicsCollisionData *hit,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hit != (PhysicsCollisionData *)0x0) {
    voxelHit->collider = (hit->fields).collider;
    voxelHit->transform = (hit->fields).transform;
    voxelHit->distance = (hit->fields).distance;
    fVar1 = (hit->fields).point.y;
    fVar2 = (hit->fields).point.z;
    (voxelHit->point).x = (hit->fields).point.x;
    (voxelHit->point).y = fVar1;
    (voxelHit->point).z = fVar2;
    fVar1 = (hit->fields).normal.y;
    fVar2 = (hit->fields).normal.z;
    (voxelHit->normal).x = (hit->fields).normal.x;
    (voxelHit->normal).y = fVar1;
    (voxelHit->normal).z = fVar2;
    voxelHit->woId = woId;
    voxelHit->isCubeHit = 0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this,woId,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        IVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                          (this_00,(MethodInfo *)0x0);
        *(InteractionFlags__Enum *)&voxelHit->interactionFlags = IVar3;
        *(undefined4 *)((int)&voxelHit->interactionFlags + 4) = extraout_EDX;
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  voxelHit0->transform = voxelHit1->transform;
  fVar1 = (voxelHit1->normal).y;
  fVar2 = (voxelHit1->normal).z;
  (voxelHit0->normal).x = (voxelHit1->normal).x;
  (voxelHit0->normal).y = fVar1;
  (voxelHit0->normal).z = fVar2;
  voxelHit0->distance = voxelHit1->distance;
  voxelHit0->face = voxelHit1->face;
  iVar3 = (voxelHit1->cubePos).y;
  iVar4 = (voxelHit1->cubePos).z;
  (voxelHit0->cubePos).x = (voxelHit1->cubePos).x;
  (voxelHit0->cubePos).y = iVar3;
  (voxelHit0->cubePos).z = iVar4;
  voxelHit0->cube = voxelHit1->cube;
  voxelHit0->woId = voxelHit1->woId;
  voxelHit0->isCubeHit = 1;
  voxelHit0->collider = voxelHit1->collider;
  *(int *)&voxelHit0->interactionFlags = (int)voxelHit1->interactionFlags;
  *(undefined4 *)((int)&voxelHit0->interactionFlags + 4) =
       *(undefined4 *)((int)&voxelHit1->interactionFlags + 4);
  return;
}


/* Int32 <GetPhysicsCollisionData>m__0(RaycastHit, RaycastHit) */

int32_t Assembly-CSharp.dll::SharedCollisionFunctions::
        SharedCollisionFunctions__GetPhysicsCollisionData_m__0
                  (RaycastHit hit0,RaycastHit hit1,MethodInfo *method)

{
  ppuStack_1 = (undefined4 **)0x0;
  ppuStack_1 = (undefined4 **)
               System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                           *)&hit0,(MethodInfo *)0x0);
  System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
  Object,System::Single]::
  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
            ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)&hit1,
             (MethodInfo *)0x0);
  ppuStack_1 = &ppuStack_1;
  iVar2 = func_?();
  return iVar2;
}


/* SharedCollisionFunctions() */

void Assembly-CSharp.dll::SharedCollisionFunctions::SharedCollisionFunctions__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (RaycastHitComparer *)func_?(TypeInfo__RaycastHitComparer);
  RaycastHitComparer::RaycastHitComparer__ctor(this,(MethodInfo *)0x0);
  TypeInfo__SharedCollisionFunctions->static_fields->rayHitComparer = this;
  this_00 = (PhysicsCollisionDatasWrapper *)func_?(TypeInfo__PhysicsCollisionDatasWrapper);
  PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper__ctor(this_00,(MethodInfo *)0x0);
  TypeInfo__SharedCollisionFunctions->static_fields->physicsCollisionWrapper = this_00;
  return;
}

