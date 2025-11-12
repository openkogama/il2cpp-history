
/* Void AddBoundingSphere() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_AddBoundingSphere(MethodInfo *method)

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
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->zeroVector).x;
  uVar5 = (pVVar3->zeroVector).y;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    fVar6 = (pVVar3->zeroVector).z;
    if ((uint)pBVar1->max_length <= uVar2) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar8 = cRam_? == '\0';
    pBVar9 = pBVar1->vector + (int)uVar2;
    (pBVar9->position).x = (float)uVar4;
    (pBVar9->position).y = (float)uVar5;
    (pBVar9->position).z = fVar6;
    pBVar9->radius = 1.0;
    if (bVar8) {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    FUN_?(TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField + 1);
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
    if (obj != (CullingGroup *)0x0) {
      pvVar10 = (obj->fields).m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar10,iVar11);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ChangeDistances(Single, Camera) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_ChangeDistances
               (float newBaseDistance,Camera *camera,MethodInfo *method)

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
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
  pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
  if (pSVar1 == (Single__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar3 = FUN_?(TypeInfo__System__Single,(int)pSVar1->max_length);
  lVar4 = 0x20;
  uVar5 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar1 == (Single__Array *)0x0) goto code_?;
    uVar6 = (uint)uVar5;
    if ((int)pSVar1->max_length <= (int)uVar6) break;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar1 == (Single__Array *)0x0) goto code_?;
    if (((uint)pSVar1->max_length <= uVar6) || ((int)pSVar1->max_length == 0))
    goto code_?;
    if (lVar3 == 0) goto code_?;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto code_?;
    uVar5 = (ulonglong)(uVar6 + 1);
    *(float *)(lVar3 + lVar4) =
         (*(float *)((longlong)pSVar1->vector + lVar4 + -0x20) / pSVar1->vector[0]) *
         newBaseDistance;
    lVar4 = lVar4 + 4;
  }
  obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (obj == (CullingGroup *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Span<float>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<float>__Span_System__Single____);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<float>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj->fields).m_Ptr;
  uStack_8 = 0;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (lVar3 == 0) {
    uStack_9 = 0;
    uStack_10 = 0;
    uVar5 = 0;
    iStack_11 = 0;
  }
  else {
    iStack_11 = *(int *)(lVar3 + 0x18);
    uVar5 = lVar3 + 0x20;
  }
  uStack_12 = 0;
  if (iStack_11 != 0) {
    uStack_12 = uVar5;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7,&uStack_12);
  if (lVar3 == 0) goto code_?;
  lVar4 = (longlong)*(int *)(lVar3 + 0x18) + -1;
  if ((uint)lVar4 < *(uint *)(lVar3 + 0x18)) {
    pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar1 == (Single__Array *)0x0) goto code_?;
    iVar14 = (int)pSVar1->max_length;
    if (iVar14 - 1U < (uint)pSVar1->max_length) {
      if (camera != (Camera *)0x0) {
        fVar15 = (*(float *)(lVar3 + 0x20 + lVar4 * 4) + pSVar1->vector[(longlong)iVar14 + -1]) *
                 _UNK_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                        ,pSVar1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (camera == (Camera *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar7 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,fVar15);
        return;
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DebugCullingEvent(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugCullingEvent
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  CStackX_8 = cullingGroupEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cullingGroupEvent_u000AcurrentDistan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?(TypeInfo__System__Object,6);
  CVar2 = CStackX_8;
  auStackX_18[0] = CStackX_8.m_ThisState & 0x7f;
  lVar3 = FUN_?(uRam_?,auStackX_18);
  if (plVar1 == (longlong *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,0,lVar3);
  CVar7 = CStackX_8;
  uVar8 = (uint)CStackX_8.m_PrevState;
  CStackX_8 = (CullingGroupEvent)(CONCAT44(CStackX_8._4_4_,uVar8) & 0xffffffff0000007f);
  lVar3 = FUN_?(uRam_?,&CStackX_8);
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,1,lVar3);
  CStackX_8.m_Index._0_1_ =
       ((ulonglong)CVar2 & 0x800000000000) != 0 && ((ulonglong)CVar7 & 0x8000000000) == 0;
  lVar3 = FUN_?(uRam_?,&CStackX_8);
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,2,lVar3);
  CStackX_8.m_Index._0_1_ =
       ((ulonglong)CVar2 & 0x800000000000) == 0 && ((ulonglong)CVar7 & 0x8000000000) != 0;
  lVar3 = FUN_?(uRam_?,&CStackX_8);
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,3,lVar3);
  CStackX_8.m_Index._0_1_ = ((ulonglong)CVar2 & 0x800000000000) != 0;
  lVar3 = FUN_?(uRam_?,&CStackX_8);
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,4,lVar3);
  CStackX_8.m_Index._0_1_ = ((ulonglong)CVar7 & 0x8000000000) != 0;
  lVar3 = FUN_?(uRam_?,&CStackX_8);
  if ((lVar3 != 0) && (lVar5 = FUN_?(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_?();
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(plVar1,5,lVar3);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,plVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger != (ILogger_1 *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DebugVisualize() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_DebugVisualize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0;
  while( true ) {
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
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= (int)uVar1)
    {
      return;
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar3 == (BoundingSphere__Array *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uint)pBVar3->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_5 = *(undefined8 *)((longlong)&pBVar3->vector[0].position.x + lVar2);
    uStack_6 = *(undefined4 *)((longlong)&pBVar3->vector[0].position.z + lVar2);
    uVar7 = *(undefined4 *)
             ((longlong)&TypeInfo__CullingApiWrapper->static_fields->spheres->vector[0].radius +
             lVar2);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) break;
    pcRam_? = pcVar4;
    (*pcRam_?)(&uStack_5,uVar7);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 0x10;
  }
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8,0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Destroy(MethodInfo *method)

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
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    bVar2 = iRam_? != 0;
    (pCVar1->fields).m_OnStateChanged = (CullingGroup_StateChanged *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pCVar1->fields).m_OnStateChanged >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (pCVar1 != (CullingGroup *)0x0) {
      pvVar7 = (pCVar1->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      (pCVar1->fields).m_Ptr = (void *)0x0;
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      if (iRam_? == 0) {
        return;
      }
      uVar3 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->cullingGroup >> 0xc);
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
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 GetDistance(Int32) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistance
                  (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (obj == (CullingGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*pcRam_?)(pvVar3,index);
  return iVar2;
}


/* Int32 GetDistanceBand(Single) */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_GetDistanceBand
                  (float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0x20;
  pCVar3 = TypeInfo__CullingApiWrapper;
  while( true ) {
    if (*(int *)&(pCVar3->_1).field_0x1c == 0) {
      FUN_?();
      pCVar3 = TypeInfo__CullingApiWrapper;
    }
    pSVar4 = pCVar3->static_fields->sizes;
    if (pSVar4 == (Single__Array *)0x0) break;
    if ((int)pSVar4->max_length <= (int)uVar1) {
      if (*(int *)&(pCVar3->_1).field_0x1c == 0) {
        FUN_?();
        pCVar3 = TypeInfo__CullingApiWrapper;
      }
      pSVar4 = pCVar3->static_fields->sizes;
      if (pSVar4 != (Single__Array *)0x0) {
        return (int)pSVar4->max_length + -1;
      }
      break;
    }
    if (*(int *)&(pCVar3->_1).field_0x1c == 0) {
      FUN_?();
      pCVar3 = TypeInfo__CullingApiWrapper;
    }
    pSVar4 = pCVar3->static_fields->sizes;
    if (pSVar4 == (Single__Array *)0x0) break;
    if ((uint)pSVar4->max_length <= uVar1) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
    if (radius < *(float *)((longlong)pSVar4->vector + lVar2 + -0x20)) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Init(Int32, Camera, Single) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Init
               (int32_t initialSphereCount,Camera *camera,float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__BoundingSphere);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__CullingGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__CullingGroup__StateChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BoundingSphere__Array *)FUN_?(TypeInfo__UnityEngine__BoundingSphere);
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__CullingApiWrapper->static_fields->spheres = pBVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->spheres >> 0xc);
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
  pCVar7 = (CullingGroup *)FUN_?(TypeInfo__UnityEngine__CullingGroup);
  pCVar8 = (CullingGroup_StateChanged *)0x0;
  bVar6 = iRam_? != 0;
  (pCVar7->fields).m_OnStateChanged = (CullingGroup_StateChanged *)0x0;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(pCVar7->fields).m_OnStateChanged >> 0xc);
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
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  pvVar11 = (void *)(*pcRam_?)(pCVar7);
  (pCVar7->fields).m_Ptr = pvVar11;
  TypeInfo__CullingApiWrapper->static_fields->cullingGroup = pCVar7;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->cullingGroup >> 0xc);
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
  pCVar7 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar7 != (CullingGroup *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar11 = (pCVar7->fields).m_Ptr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar11);
    if (camera != (Camera *)0x0) {
      distanceReferencePoint =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
      CullingApiWrapper_SetDistanceReferencePoint(distanceReferencePoint,(MethodInfo *)0x0);
      pCVar7 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if (pCVar7 != (CullingGroup *)0x0) {
        pvVar11 = (pCVar7->fields).m_Ptr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar11);
        pCVar7 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (pCVar7 != (CullingGroup *)0x0) {
          pvVar11 = (pCVar7->fields).m_Ptr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar11,0);
          pCVar7 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
          if (pCVar7 != (CullingGroup *)0x0) {
            pCVar12 = (pCVar7->fields).m_OnStateChanged;
            b = (Delegate *)FUN_?(TypeInfo__UnityEngine__CullingGroup__StateChanged);
            pMVar13 = MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_;
            bVar6 = iRam_? != 0;
            (b->fields).method_ptr =
                 MethodInfo__CullingApiWrapper__OnStateChanged_UnityEngine__CullingGroupEvent_->
                 virtualMethodPointer;
            (b->fields).method = pMVar13;
            (b->fields).m_target = (Object *)0x0;
            if (bVar6) {
              uVar2 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
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
            uVar14 = pMVar13->parameters_count;
            (b->fields).method_code = b;
            if ((pMVar13->flags & 0x10) == 0) {
              uVar10 = func_?();
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (uVar14 == 1) {
              puVar15 = &UNK_?;
            }
            else {
              (b->fields).method_code = (b->fields).m_target;
              puVar15 = (b->fields).method_ptr;
            }
            (b->fields).invoke_impl = puVar15;
            (b->fields).extra_arg = FUN_?;
            pCVar12 = (CullingGroup_StateChanged *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pCVar12,b,(MethodInfo *)0x0);
            if (pCVar12 != (CullingGroup_StateChanged *)0x0) {
              if (pCVar12->klass == TypeInfo__UnityEngine__CullingGroup__StateChanged) {
                pCVar8 = pCVar12;
              }
              if (pCVar8 == (CullingGroup_StateChanged *)0x0) {
                FUN_?(pCVar12);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            bVar6 = iRam_? != 0;
            (pCVar7->fields).m_OnStateChanged = pCVar8;
            if (bVar6) {
              uVar2 = (uint)((ulonglong)&(pCVar7->fields).m_OnStateChanged >> 0xc);
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
            TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
            fVar16 = TypeInfo__CullingApiWrapper->static_fields->baseDistance;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper,camera,0);
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
              FUN_?(&TypeInfo__System__Single);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            TypeInfo__CullingApiWrapper->static_fields->baseDistance = fVar16;
            pSVar17 = TypeInfo__CullingApiWrapper->static_fields->sizes;
            if (pSVar17 == (Single__Array *)0x0) {
code_?:
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar18 = FUN_?(TypeInfo__System__Single,(int)pSVar17->max_length);
            lVar19 = 0x20;
            uVar3 = 0;
            while( true ) {
              if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar17 = TypeInfo__CullingApiWrapper->static_fields->sizes;
              if (pSVar17 == (Single__Array *)0x0) goto code_?;
              uVar2 = (uint)uVar3;
              if ((int)pSVar17->max_length <= (int)uVar2) break;
              if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              pSVar17 = TypeInfo__CullingApiWrapper->static_fields->sizes;
              if (pSVar17 == (Single__Array *)0x0) goto code_?;
              if (((uint)pSVar17->max_length <= uVar2) || ((int)pSVar17->max_length == 0))
              goto code_?;
              if (lVar18 == 0) goto code_?;
              if (*(uint *)(lVar18 + 0x18) <= uVar2) goto code_?;
              uVar3 = (ulonglong)(uVar2 + 1);
              *(float *)(lVar18 + lVar19) =
                   (*(float *)((longlong)pSVar17->vector + lVar19 + -0x20) / pSVar17->vector[0]) *
                   fVar16;
              lVar19 = lVar19 + 4;
            }
            pCVar7 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
            if (pCVar7 == (CullingGroup *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Span<float>__GetPinnableReference__);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Span<float>__Span_System__Single____);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Span<float>__get_Length__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar11 = (pCVar7->fields).m_Ptr;
            uStack_20 = 0;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (lVar18 == 0) {
              uStack_21 = 0;
              uStack_22 = 0;
              uVar3 = 0;
              iStack_23 = 0;
            }
            else {
              iStack_23 = *(int *)(lVar18 + 0x18);
              uVar3 = lVar18 + 0x20;
            }
            uStack_24 = 0;
            if (iStack_23 != 0) {
              uStack_24 = uVar3;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar11,&uStack_24);
            if (lVar18 == 0) goto code_?;
            lVar19 = (longlong)*(int *)(lVar18 + 0x18) + -1;
            if ((uint)lVar19 < *(uint *)(lVar18 + 0x18)) {
              pSVar17 = TypeInfo__CullingApiWrapper->static_fields->sizes;
              if (pSVar17 == (Single__Array *)0x0) goto code_?;
              iVar25 = (int)pSVar17->max_length;
              if (iVar25 - 1U < (uint)pSVar17->max_length) {
                if (camera != (Camera *)0x0) {
                  fVar16 = (*(float *)(lVar18 + 0x20 + lVar19 * 4) +
                           pSVar17->vector[(longlong)iVar25 + -1]) * _UNK_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                  ,pSVar17,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (camera == (Camera *)0x0) {
                    FUN_?();
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pvVar11 = (camera->fields)._._._.m_CachedPtr;
                  if (pvVar11 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar10 = func_?(&UNK_?);
                    FUN_?(uVar10,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar11,fVar16);
                  return;
                }
                goto code_?;
              }
            }
code_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsVisible(Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_IsVisible
               (int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (obj == (CullingGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3,index);
  return bVar2;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_OnStateChanged
               (CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  this = (Dictionary_2_System_Int32_System_Object_ *)
         TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (this != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       (this,cullingGroupEvent.m_Index,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar2 = pOVar1->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pOVar2->_1).rank;
      uVar4._1_1_ = (pOVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pOVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar5 = &(pOVar2->vtable).Equals + pOVar2->interfaceOffsets[uVar3].offset;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      pVVar5 = (VirtualInvokeData *)FUN_?(pOVar1,TypeInfo__ICullingSubscriber,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pOVar1,cullingGroupEvent,pVVar5->method,pVVar5->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_ICullingSubscriber>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ICullingSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__subscribers_are_never_unsubs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_1._8_8_ = 0;
  pOStack_2 = (Object *)0x0;
  this = (Dictionary_2_System_UInt32_System_Object_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<ICullingSubscriber>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
            ((List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)this,0,MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__List_int_
            );
  pDStackX_10 = this;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pDVar3 = (Dictionary_2_System_UInt32_System_Object_ *)
           TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (pDVar3 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 (ulonglong)(uint)(pDVar3->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._8_8_ = pDStack_10;
    DStack_14._current.key = 0;
    DStack_14._current._4_4_ = 0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_5 = 0;
    pDStack_10 = &DStack_14;
    DStack_14._dictionary = pDVar3;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_14,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ICullingSubscriber>__MoveNext__
                             ),
          pMVar16 = 
          MethodInfo__System__Collections__Generic__List<ICullingSubscriber>__Add_ICullingSubscriber_
          , bVar15 != 0) {
      if (this == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      piVar17 = (int32_t *)((longlong)&(this->fields)._entries + 4);
      *piVar17 = *piVar17 + 1;
      pRVar18 = (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)
               (this->fields)._buckets;
      uVar4 = *(uint *)&(this->fields)._entries;
      if (pRVar18 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
      goto code_?;
      if (uVar4 < (uint)pRVar18->max_length) {
        *(uint *)&(this->fields)._entries = uVar4 + 1;
        FUN_?(pRVar18,(longlong)(int)uVar4,DStack_14._current.value);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this,DStack_14._current.value,
                   pMVar16->klass->rgctx_data[0xe].method);
      }
    }
    if (this != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                   ((ulonglong)(uint)*(int32_t *)((longlong)&(this->fields)._entries + 4) << 0x20);
      uStack_12 = 0;
      auStack_1._8_8_ = pDStack_10;
      pOStack_2 = (Object *)0x0;
      uStack_5 = 0;
      pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)auStack_1;
      auStack_1._0_8_ = this;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ICullingSubscriber>__MoveNext__
                               ), unSubscriber = pOStack_2, bVar15 != 0) {
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        CullingApiWrapper_UnSubscribe((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
      }
      if (0 < *(int *)&(this->fields)._entries) {
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        pDStackX_10 = (Dictionary_2_System_UInt32_System_Object_ *)
                      CONCAT44(pDStackX_10._4_4_,*(int32_t *)&(this->fields)._entries);
        lVar6 = FUN_?(uRam_?,&pDStackX_10);
        if (args == (Object__Array *)0x0) goto code_?;
        if ((lVar6 != 0) &&
           (lVar6 = FUN_?(lVar6,(args->klass->_0).element_class), lVar6 == 0)) {
          uVar19 = FUN_?();
          FUN_?(uVar19,0);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        FUN_?(args,0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarningFormat
                  (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetDistanceReferencePoint(Transform) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
               (Transform *distanceReferencePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (obj == (CullingGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields).m_Ptr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (distanceReferencePoint == (Transform *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (distanceReferencePoint->fields)._._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,pvVar3);
  return;
}


/* Void Subscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Subscribe
               (ICullingSubscriber *iCullingGroupSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if ((int)pBVar1->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_105
              ((BindingRestrictions_TestBuilder_AndNode__Array **)
               &TypeInfo__CullingApiWrapper->static_fields->spheres,(int)pBVar1->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (obj == (CullingGroup *)0x0) goto code_?;
    pvVar2 = (obj->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
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
    (*pcRam_?)(pvVar2,pBVar1);
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  this = (Dictionary_2_System_Int32_System_Object_ *)
         TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if (this != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              (this,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               (Object *)iCullingGroupSubscriber,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
               ->klass->rgctx_data[0x22].method);
    CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    if (iCullingGroupSubscriber != (ICullingSubscriber *)0x0) {
      iVar5 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
      uVar6 = 0;
      pIVar7 = iCullingGroupSubscriber->klass;
      uVar8._0_1_ = (pIVar7->_1).rank;
      uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar9 = &(pIVar7->vtable).OnStateChanged + (pIVar7->interfaceOffsets[uVar6].offset + 2)
            ;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      pVVar9 = (VirtualInvokeData *)FUN_?(iCullingGroupSubscriber);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar9->methodPtr)
                (iCullingGroupSubscriber,(ulonglong)(iVar5 - 1),pVVar9->method,pVVar9->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSubscribe(ICullingSubscriber) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UnSubscribe
               (ICullingSubscriber *unSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
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
  if (unSubscriber == (ICullingSubscriber *)0x0) goto code_?;
  iVar1 = FUN_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
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
      uVar4 = FUN_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
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
      iVar13 = FUN_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
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
      uVar14 = FUN_?(1,TypeInfo__ICullingSubscriber,unSubscriber);
      if (value == (Object *)0x0) goto code_?;
      FUN_?(2,TypeInfo__ICullingSubscriber,value,uVar14);
    }
    FUN_?(2,TypeInfo__ICullingSubscriber,unSubscriber,0xffffffff);
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


/* Single[] UpdateDistances(Single) */

Single__Array *
Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_UpdateDistances
          (float newBaseDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = newBaseDistance;
  pSVar1 = TypeInfo__CullingApiWrapper->static_fields->sizes;
  if (pSVar1 == (Single__Array *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar1 = (Single__Array *)(*pcVar2)();
    return pSVar1;
  }
  pSVar1 = (Single__Array *)FUN_?(TypeInfo__System__Single,(int)pSVar1->max_length);
  uVar3 = 0;
  lVar4 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar5 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar5 == (Single__Array *)0x0) goto DAT_?;
    if ((int)pSVar5->max_length <= (int)uVar3) {
      return pSVar1;
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar5 = TypeInfo__CullingApiWrapper->static_fields->sizes;
    if (pSVar5 == (Single__Array *)0x0) goto DAT_?;
    if (((uint)pSVar5->max_length <= uVar3) || ((int)pSVar5->max_length == 0)) break;
    if (pSVar1 == (Single__Array *)0x0) goto DAT_?;
    if ((uint)pSVar1->max_length <= uVar3) break;
    uVar3 = uVar3 + 1;
    *(float *)((longlong)pSVar1->vector + lVar4 + -0x20) =
         (*(float *)((longlong)pSVar5->vector + lVar4 + -0x20) / pSVar5->vector[0]) *
         newBaseDistance;
    lVar4 = lVar4 + 4;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (Single__Array *)(*pcVar2)();
  return pSVar1;
}


/* Boolean Visible(CullingGroupEvent, Int32) */

bool Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_Visible
               (CullingGroupEvent cullingGroupEvent,int32_t distanceBandIndex,MethodInfo *method)

{
  if ((((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) != 0) ||
       (((ulonglong)cullingGroupEvent >> 0x20 & 0x80) == 0)) &&
      ((uVar1 = cullingGroupEvent._4_4_, (int)(uVar1 >> 8 & 0x7f) <= distanceBandIndex ||
       (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0)))) &&
     (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) != 0)) {
    if ((((ulonglong)cullingGroupEvent >> 0x20 & 0x80) != 0) &&
       (distanceBandIndex < (int)(uVar1 >> 8 & 0x7f))) {
      return (int)(uVar1 >> 8 & 0x7f) <= distanceBandIndex;
    }
    return 1;
  }
  return 0;
}


/* CullingApiWrapper() */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&C1C288957BE7B49A6A9994351091D0E2D605B5A5E77624DCE2A9491DF0AA7633_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__CullingApiWrapper->static_fields->baseDistance = 2.5;
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Dictionary__
            );
  TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers =
       (Dictionary_2_System_Int32_ICullingSubscriber_ *)this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers >> 0xc
                  );
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
  array = (Single__Array *)FUN_?(TypeInfo__System__Single,7);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,_C1C288957BE7B49A6A9994351091D0E2D605B5A5E77624DCE2A9491DF0AA7633_Field,
             (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  TypeInfo__CullingApiWrapper->static_fields->sizes = array;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&TypeInfo__CullingApiWrapper->static_fields->sizes >> 0xc);
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
  return;
}


/* Int32 get_NumBoundSpheres() */

int32_t Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_NumBoundSpheres
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  return TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
}


/* Camera get_TargetCamera() */

Camera * Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_get_TargetCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (obj == (CullingGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (Camera *)(*pcVar1)();
    return pCVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pCVar2 = (Camera *)(*pcVar1)();
    return pCVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pCVar2 = (Camera *)(*pcVar1)();
    return pCVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
  ;
  if ((
      UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__Camera_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Camera>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pCVar2 = (Camera *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pCVar2 != (Camera *)0x0) {
        return pCVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pCVar2 = (Camera *)(*pcVar1)();
      return pCVar2;
    }
  }
  return (Camera *)0x0;
}


/* Void set_NumBoundSpheres(Int32) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_set_NumBoundSpheres
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = value;
  return;
}


/* Void set_TargetCamera(Camera) */

void Assembly-CSharp.dll::CullingApiWrapper::CullingApiWrapper_set_TargetCamera
               (Camera *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (pCVar1 != (CullingGroup *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pCVar1->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
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
    (*pcRam_?)(pvVar2);
    if (value != (Camera *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pCVar1 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
      if (pCVar1 != (CullingGroup *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (pCVar1->fields).m_Ptr;
        if (pvVar2 != (void *)0x0) {
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar5 == (Transform *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar2,pvVar6);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

