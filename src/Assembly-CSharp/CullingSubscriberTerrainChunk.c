
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Destroy
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper,unaff_EBP);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                   );
    func_?(&TypeInfo__ICullingSubscriber);
    func_?(&StringLiteral_Trying_to_unsubscribe_object_wit);
    cRam_? = '\x01';
  }
  if (this != (CullingSubscriberTerrainChunk *)0x0) {
    iVar1 = func_?(1,TypeInfo__ICullingSubscriber,this);
    if (iVar1 < 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_unsubscribe_object_wit,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField < 2) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                          _NumBoundSpheres_k__BackingField + -1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                  );
code_?:
        func_?(2,TypeInfo__ICullingSubscriber,this);
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        iVar1 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar1 + -1;
        if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
          return;
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        this_00 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (this_00 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSphereCount
                    (this_00,TypeInfo__CullingApiWrapper->static_fields->
                             _NumBoundSpheres_k__BackingField,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      uVar4 = func_?(1,TypeInfo__ICullingSubscriber,this);
      pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (pBVar5 != (BoundingSphere__Array *)0x0) {
        iVar1 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (pBVar5->max_length <= iVar1 - 1U) goto code_?;
        if (pBVar3 != (BoundingSphere__Array *)0x0) {
          pBVar6 = pBVar5->vector + iVar1 + -1;
          fVar7 = (pBVar6->position).y;
          fVar8 = (pBVar6->position).z;
          fVar9 = pBVar6->radius;
          if (pBVar3->max_length <= uVar4) goto code_?;
          pBVar10 = pBVar3->vector + uVar4;
          (pBVar10->position).x = (pBVar6->position).x;
          (pBVar10->position).y = fVar7;
          (pBVar10->position).z = fVar8;
          pBVar10->radius = fVar9;
          pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
                   TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
            value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                                      _NumBoundSpheres_k__BackingField + -1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                              );
            pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
                     TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
            key = func_?(1,TypeInfo__ICullingSubscriber,this);
            if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__set_Item
                        (pDVar2,key,value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__set_Item_int__ICullingSubscriber_
                        );
              pDVar2 = (Dictionary_2_System_Int32_System_Object_ *)
                       TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__CullingApiWrapper);
                cRam_? = '\x01';
              }
              if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CullingApiWrapper);
              }
              if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          (pDVar2,TypeInfo__CullingApiWrapper->static_fields->
                                  _NumBoundSpheres_k__BackingField + -1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Remove_int_
                          );
                uVar11 = func_?(1,TypeInfo__ICullingSubscriber,this);
                if (value != (Object *)0x0) {
                  func_?(2,TypeInfo__ICullingSubscriber,value,uVar11);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleChange() */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_HandleChange
               (CullingSubscriberTerrainChunk *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._CullingIndex_k__BackingField;
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  bVar2 = CullingApiWrapper::CullingApiWrapper_IsVisible(iVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    iVar1 = (this->fields)._CullingIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    iVar1 = CullingApiWrapper::CullingApiWrapper_GetDistance(iVar1,(MethodInfo *)0x0);
    if (iVar1 <= (this->fields).distanceBand) {
      pMVar3 = (this->fields).cubeModelBase;
      if ((pMVar3 != (MVCubeModelBase *)0x0) &&
         (this_00 = (pMVar3->fields).chunkInstances, this_00 != (ChunkInstances *)0x0)) {
        pCVar4 = ChunkInstances::ChunkInstances_GetChunk
                           ((ChunkInstances_ChunkInstanceVariables *)&stack0xffffffb4,this_00,
                            (this->fields).chunkPosition,(MethodInfo *)0x0);
        if (pCVar4->renderer != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)pCVar4->renderer,1,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::
     CullingSubscriberTerrainChunk_OnStateChanged
               (CullingSubscriberTerrainChunk *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModelBase;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (this_00 = (pMVar1->fields).chunkInstances, this_00 != (ChunkInstances *)0x0)) {
    intVector.z._1_1_ = (char)((ushort)(this->fields).chunkPosition.z >> 8);
    intVector._0_5_ = *(undefined5 *)&(this->fields).chunkPosition;
    pCVar2 = ChunkInstances::ChunkInstances_GetChunk
                       ((ChunkInstances_ChunkInstanceVariables *)auStack_3,this_00,intVector,
                        (MethodInfo *)0x0);
    distanceBandIndex = (this->fields).distanceBand;
    iStack_4 = (pCVar2->guid)._a;
    uStack_5._0_2_ = (pCVar2->guid)._b;
    uStack_5._2_2_ = (pCVar2->guid)._c;
    uStack_6._0_1_ = (pCVar2->guid)._d;
    uStack_6._1_1_ = (pCVar2->guid)._e;
    uStack_6._2_1_ = (pCVar2->guid)._f;
    uStack_6._3_1_ = (pCVar2->guid)._g;
    uStack_7._0_1_ = (pCVar2->guid)._h;
    uStack_7._1_1_ = (pCVar2->guid)._i;
    uStack_7._2_1_ = (pCVar2->guid)._j;
    uStack_7._3_1_ = (pCVar2->guid)._k;
    pGStack_8 = pCVar2->gameObject;
    pBStack_9 = pCVar2->collider;
    pMStack_10 = pCVar2->renderer;
    pMStack_11 = pCVar2->filter;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      pCStack_12 = TypeInfo__CullingApiWrapper;
      auStack_3._8_4_ = &UNK_?;
      func_?();
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    if (pMStack_10 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pMStack_10,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Setup(Bounds) */

void Assembly-CSharp.dll::CullingSubscriberTerrainChunk::CullingSubscriberTerrainChunk_Setup
               (CullingSubscriberTerrainChunk *this,Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  VStack_1.z = bounds.m_Extents.z;
  VStack_1.x = bounds.m_Extents.x;
  VStack_1.y = bounds.m_Extents.y;
  fVar2 = (float10)func_?(&VStack_1,0);
  fStack_3 = (float)fVar2;
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar4 != (BoundingSphere__Array *)0x0) {
    uVar5 = (this->fields)._CullingIndex_k__BackingField;
    if (pBVar4->max_length <= uVar5) goto code_?;
    pBVar6 = pBVar4->vector + uVar5;
    (pBVar6->position).x = bounds.m_Center.x;
    (pBVar6->position).y = bounds.m_Center.y;
    (pBVar6->position).z = bounds.m_Center.z;
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar4 != (BoundingSphere__Array *)0x0) {
      uVar5 = (this->fields)._CullingIndex_k__BackingField;
      if (uVar5 < pBVar4->max_length) {
        pBVar4->vector[uVar5].radius = fStack_3;
        iVar7 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(fStack_3,(MethodInfo *)0x0);
        (this->fields).distanceBand = iVar7;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    auVar4._8_4_ = &TypeInfo__CullingApiWrapper;
    auVar5._8_12_ = auVar4._8_12_;
    auVar5._0_8_ = 0x1035398700000000;
    func_?();
    auVar1 = auVar5._0_16_;
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,auVar1._12_4_);
  (this->fields).chunkPosition.x = chunkPosition.x;
  (this->fields).chunkPosition.y = chunkPosition.y;
  (this->fields).chunkPosition.z = chunkPosition.z;
  (this->fields).cubeModelBase = cubeModelBase;
  func_?();
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  CullingSubscriberTerrainChunk_Setup(this,bounds,(MethodInfo *)0x0);
  return;
}

