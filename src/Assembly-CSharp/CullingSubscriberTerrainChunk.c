
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Destroy
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if (this == (CullingSubscriberTerrainChunk *)0x0) {
code_?:
    func_?(0);
  }
  else {
    iVar1 = func_?(1,TypeInfo__ICullingSubscriber,this);
    if (iVar1 < 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_unsubscribe_object_wit,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField < 2) {
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      iVar3 = CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar2,iVar3 + -1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                  );
code_?:
        func_?(2,TypeInfo__ICullingSubscriber,this);
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        CullingApiWrapper::CullingApiWrapper_set_NumBoundSpheres
                  (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField + -1
                   ,(MethodInfo *)0x0);
        if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
          return;
        }
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        this_00 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        iVar3 = CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
        if (this_00 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                    (this_00,iVar3,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    uVar5 = func_?(1,TypeInfo__ICullingSubscriber,this);
    if (pBVar4 == (BoundingSphere__Array *)0x0) goto code_?;
    pBVar6 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    iVar3 = CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
    if (pBVar6 == (BoundingSphere__Array *)0x0) goto code_?;
    if (iVar3 - 1U < pBVar6->max_length) {
      pBVar7 = pBVar6->vector + iVar3 + -1;
      fVar8 = (pBVar7->position).y;
      fVar9 = (pBVar7->position).z;
      fVar10 = pBVar7->radius;
      if (pBVar4->max_length <= uVar5) goto code_?;
      pBVar11 = pBVar4->vector + uVar5;
      (pBVar11->position).x = (pBVar7->position).x;
      (pBVar11->position).y = fVar8;
      (pBVar11->position).z = fVar9;
      pBVar11->radius = fVar10;
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      iVar3 = CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,iVar3 + -1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                          );
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
        iVar3 = func_?(1,TypeInfo__ICullingSubscriber,this);
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                    (pDVar2,iVar3,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                    );
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
          iVar3 = CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres((MethodInfo *)0x0);
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar2,iVar3 + -1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                      );
            uVar12 = func_?(1,TypeInfo__ICullingSubscriber,this);
            if (value != (TerrainUtility_TerrainMap *)0x0) {
              func_?(2,TypeInfo__ICullingSubscriber,value,uVar12);
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar12 = func_?(0);
  func_?(uVar12);
code_?:
  uVar12 = func_?(0);
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HandleChange() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._CullingIndex_k__BackingField;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar2 != (CullingGroup *)0x0) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_IsVisible
                      (pCVar2,iVar1,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    iVar1 = (this->fields)._CullingIndex_k__BackingField;
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (pCVar2 != (CullingGroup *)0x0) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_GetDistance
                        (pCVar2,iVar1,(MethodInfo *)0x0);
      if ((this->fields).distanceBand < iVar1) {
        return;
      }
      this_00 = (this->fields).cubeModelBase;
      if ((this_00 != (MVCubeModelBase *)0x0) &&
         (this_01 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                              ((MVMovingPlatformNode *)this_00,(MethodInfo *)0x0),
         this_01 != (MVMovingPlatformNode *)0x0)) {
        pCVar4 = ChunkInstances::ChunkInstances_GetChunk
                           ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffec,
                            (ChunkInstances *)this_01,(this->fields).chunkPosition,(MethodInfo *)0x0
                           );
        if (pCVar4->renderer != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)pCVar4->renderer,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::
     CullingSubscriberTerrainChunk_OnStateChanged
               (CullingSubscriberTerrainChunk *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelBase;
  if (this_00 != (MVCubeModelBase *)0x0) {
    this_01 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                        ((MVMovingPlatformNode *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVMovingPlatformNode *)0x0) {
      pCVar1 = ChunkInstances::ChunkInstances_GetChunk
                         (&CStack_2,(ChunkInstances *)this_01,(this->fields).chunkPosition,
                          (MethodInfo *)0x0);
      distanceBandIndex = (this->fields).distanceBand;
      CStack_2.gameObject = pCVar1->gameObject;
      CStack_2.collider = pCVar1->collider;
      CStack_2.renderer = pCVar1->renderer;
      CStack_2.filter = pCVar1->filter;
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        CStack_2.filter = (MeshFilter *)&UNK_?;
        func_?();
      }
      value = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
      if (CStack_2.renderer != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)CStack_2.renderer,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Setup(Bounds) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
               (CullingSubscriberTerrainChunk *this,Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  pVVar3 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     ((Vector3 *)&stack0xffffffe0,(InputToPlayerMovementAndroid *)&bounds,
                      (MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar3->x;
  uStack_2._4_4_ = pVVar3->y;
  fStack_1 = pVVar3->z;
  fVar4 = (float10)func_?(&uStack_2,0);
  fStack_5 = (float)fVar4;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  pBVar6 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  uVar7 = (this->fields)._CullingIndex_k__BackingField;
  if (pBVar6 == (BoundingSphere__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    puVar8 = (undefined8 *)func_?(&stack0xffffffe0,&bounds,0);
    uVar9 = *puVar8;
    fVar10 = *(float *)(puVar8 + 1);
    if (uVar7 < pBVar6->max_length) {
      pBVar6->vector[uVar7].position.x = (float)(int)uVar9;
      pBVar6->vector[uVar7].position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
      pBVar6->vector[uVar7].position.z = fVar10;
      pBVar6 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar6 != (BoundingSphere__Array *)0x0) {
        uVar7 = (this->fields)._CullingIndex_k__BackingField;
        uVar11 = 0;
        if (uVar7 < pBVar6->max_length) {
          pBVar6->vector[uVar7].radius = fStack_5;
          iVar12 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(fStack_5,(MethodInfo *)0x0);
          (this->fields).distanceBand = iVar12;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar11 = 0;
  uVar13 = func_?(0,0);
  func_?(uVar13);
code_?:
  uVar13 = func_?(0,uVar11);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* CullingSubscriberTerrainChunk(MVCubeModelBase, IntVector, Bounds) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk__ctor
               (CullingSubscriberTerrainChunk *this,MVCubeModelBase *cubeModelBase,
               IntVector chunkPosition,Bounds bounds,MethodInfo *method)

{
  auVar1._0_12_ = in_stack_2._0_12_;
  auVar1._12_4_ = unaff_ESI;
  auVar3._16_4_ = unaff_EBP;
  auVar3._0_16_ = auVar1;
  if (cRam_? == '\0') {
    auVar4._12_8_ = auVar3._12_8_;
    auVar4._0_8_ = in_stack_2._0_8_;
    auVar4._8_4_ = _UNK_?;
    auVar5._8_12_ = auVar4._8_12_;
    auVar5._0_8_ = 0x1044d1e800000000;
    func_?();
    auVar1 = auVar5._0_16_;
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,auVar1._12_4_);
  (this->fields).chunkPosition.x = chunkPosition.x;
  (this->fields).chunkPosition.y = chunkPosition.y;
  (this->fields).chunkPosition.z = chunkPosition.z;
  (this->fields).cubeModelBase = cubeModelBase;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  CullingSubscriberTerrainChunk_Setup(this,bounds,(MethodInfo *)0x0);
  return;
}

