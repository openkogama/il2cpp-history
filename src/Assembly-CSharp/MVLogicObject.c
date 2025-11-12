
/* Bounds ComputeLocalBounds(Vector3, Renderer[]) */

Bounds * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_ComputeLocalBounds(Bounds *__return_storage_ptr__,MVLogicObject *this,Vector3 *origin,Renderer__Array *meshRenderers,MethodInfo *method)

{
  method_00 = (MethodInfo *)origin;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mesh_filters_required_for_correc);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).x;
  fVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  aVStack_6[0].x = (pVVar2->zeroVector).x;
  aVStack_6[0].y = (pVVar2->zeroVector).y;
  fVar7 = (pVVar2->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = fVar3;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = aVStack_6[0].x * 0.5;
  (__return_storage_ptr__->m_Extents).y = aVStack_6[0].y * 0.5;
  (__return_storage_ptr__->m_Extents).z = fVar7 * 0.5;
  if (meshRenderers == (Renderer__Array *)0x0) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    pBVar9 = (Bounds *)(*pcVar8)();
    return pBVar9;
  }
  if (meshRenderers->max_length == 0) {
    context = (this->fields)._.gameObject;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1((Object *)StringLiteral_Mesh_filters_required_for_correc,(Object_1 *)context,(MethodInfo *)0x0);
  }
  else {
    if ((int)meshRenderers->max_length == 0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      pBVar9 = (Bounds *)(*pcVar8)();
      return pBVar9;
    }
    pRVar10 = meshRenderers->vector[0];
    if (pRVar10 == (Renderer *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    pvVar14 = (pRVar10->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pBVar9 = (Bounds *)(*pcVar8)();
      return pBVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar8 = (code *)swi(3);
      pBVar9 = (Bounds *)(*pcVar8)();
      return pBVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar14);
    fVar5 = (float)((ulonglong)uStack_12 >> 0x20);
    aVStack_6[0].x = origin->x;
    aVStack_6[0].y = origin->y;
    ppRVar16 = meshRenderers->vector;
    fVar3 = (float)uStack_12 - origin->z;
    (__return_storage_ptr__->m_Center).x = (float)uStack_11 - aVStack_6[0].x;
    (__return_storage_ptr__->m_Center).y = uStack_11._4_4_ - aVStack_6[0].y;
    (__return_storage_ptr__->m_Center).z = fVar3;
    (__return_storage_ptr__->m_Extents).x = fVar5;
    uStack_17 = CONCAT44(uStack_11._4_4_ - aVStack_6[0].y,(float)uStack_11 - aVStack_6[0].x);
    uStack_18 = CONCAT44(fVar5,fVar3);
    (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_13;
    (__return_storage_ptr__->m_Extents).z = (float)uStack_13._4_4_;
    for (uVar19 = 1; ppRVar16 = ppRVar16 + 1, (int)uVar19 < (int)meshRenderers->max_length; uVar19 = uVar19 + 1) {
      if ((uint)meshRenderers->max_length <= uVar19) goto code_?;
      pRVar10 = *ppRVar16;
      if (pRVar10 == (Renderer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      pvVar14 = (pRVar10->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        pBVar9 = (Bounds *)(*pcVar8)();
        return pBVar9;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar8 = (code *)swi(3);
        pBVar9 = (Bounds *)(*pcVar8)();
        return pBVar9;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar14,&uStack_17);
      uVar21 = origin->x;
      uVar22 = origin->y;
      fVar23 = (float)uStack_17 - (float)uVar21;
      fVar7 = (float)uStack_18 - origin->z;
      fVar24 = uStack_17._4_4_ - (float)uVar22;
      fVar5 = uStack_18._4_4_;
      fVar3 = (float)uStack_20;
      fVar4 = uStack_20._4_4_;
      VStack_25.z = fVar7 - uStack_20._4_4_;
      VStack_25.y = fVar24 - (float)uStack_20;
      VStack_25.x = fVar23 - uStack_18._4_4_;
      pBVar9 = __return_storage_ptr__;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate(__return_storage_ptr__,&VStack_25,method_00);
      aVStack_6[0].z = fVar4 + fVar7;
      aVStack_6[0].y = fVar3 + fVar24;
      aVStack_6[0].x = fVar5 + fVar23;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate(pBVar9,aVStack_6,method_00);
    }
  }
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_DeSelect(MVLogicObject *this,MethodInfo *method)

{
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)(this,(this->klass->vtable).RemoveSelectionBox.method);
  (this->fields)._.selectedConnector = 0;
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_Destroy(MVLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = (this->fields)._.gameObject;
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
  if (pGVar6 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar6 = (this->fields)._.gameObject;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 != (MVGameControllerBase *)0x0) && (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
    pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._.id;
    if (pRVar9 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar9->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::HashSet_1_System_Int32Enum__Contains(this_00,item,MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar10 != 0) {
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 == (MVNetworkGame *)0x0) || (pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager, pRVar9 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables(pRVar9,(this->fields)._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_GetClosestGridPoint(Vector3 *__return_storage_ptr__,MVLogicObject *this,float gridSize,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->oneVector).x;
  uVar2._4_4_ = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  this_00 = (this->fields)._.gameObject;
  VStack_4._0_8_ = uVar2;
  if ((this_00 != (GameObject *)0x0) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_5.x = 0.0;
    QStack_5.y = 0.0;
    QStack_5.z = 0.0;
    QStack_5.w = 0.0;
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&QStack_5);
    fVar9 = VStack_4.y;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_4.z = position->z;
    VStack_4.x = position->x;
    VStack_4.y = position->y;
    VStack_10.y = fVar9;
    VStack_10.x = (float)uVar2;
    aQStack_11[0].x = QStack_5.x;
    aQStack_11[0].y = QStack_5.y;
    aQStack_11[0].z = QStack_5.z;
    aQStack_11[0].w = QStack_5.w;
    VStack_10.z = fVar3;
    pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint((Vector3 *)&QStack_5,&VStack_4,aQStack_11,gridSize,&VStack_10,(MethodInfo *)0x0);
    fVar9 = pVVar8->y;
    fVar3 = pVVar8->z;
    __return_storage_ptr__->x = pVVar8->x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_GetLocalBounds(Bounds *__return_storage_ptr__,MVLogicObject *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  uVar2 = *(undefined8 *)&(this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.y;
  fVar4 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar2;
  (__return_storage_ptr__->m_Extents).y = fVar3;
  (__return_storage_ptr__->m_Extents).z = fVar4;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_Initialize(MVLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.previewOwnerProfileId != 0) {
    (*(this->klass->vtable).AddPreviewBox.methodPtr)(this);
    piVar1 = &(this->fields)._.interactionFlags;
    *piVar1 = *piVar1 | 0x20000;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
  obj = (this->fields)._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3);
  uStack_5 = 0;
  uStack_6 = 0x3a83126f00000000;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3,&uStack_6);
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_InitializeInventory(MVLogicObject *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    return;
  }
  pGVar2 = (this->fields)._.outputConnectorObject;
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_OnStateChanged(MVLogicObject *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible(cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    cVar3 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
    if (cVar3 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) goto code_?;
        cVar3 = FUN_?(1,TypeInfo__IEditModeUI);
        if (cVar3 != '\0') {
          bVar2 = 1;
        }
      }
    }
    obj = (this->fields).lodGameObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,bVar2,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (obj->fields)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,bVar2);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLocalBounds() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetLocalBounds(MVLogicObject *this,MethodInfo *method)

{
  this_00 = (this->fields)._.gameObject;
  if ((this_00 != (GameObject *)0x0) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    BStack_1.m_Center.x = 0.0;
    BStack_1.m_Center.y = 0.0;
    BStack_1.m_Center.z = 0.0;
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&BStack_1);
    pOVar5 = (this->fields)._.component;
    if (pOVar5 != (ObjectPrefab *)0x0) {
      VStack_6.x = BStack_1.m_Center.x;
      VStack_6.y = BStack_1.m_Center.y;
      VStack_6.z = BStack_1.m_Center.z;
      pBVar7 = MVLogicObject_ComputeLocalBounds(&BStack_1,this,&VStack_6,(pOVar5->fields).meshRenderers,(MethodInfo *)0x0);
      fVar8 = (pBVar7->m_Center).y;
      uVar4 = *(undefined8 *)&(pBVar7->m_Center).z;
      fVar9 = (pBVar7->m_Extents).y;
      fVar10 = (pBVar7->m_Extents).z;
      (this->fields).localBounds.m_Center.x = (pBVar7->m_Center).x;
      (this->fields).localBounds.m_Center.y = fVar8;
      *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar4;
      (this->fields).localBounds.m_Extents.y = fVar9;
      (this->fields).localBounds.m_Extents.z = fVar10;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CullingSubscriberBase SetupCulling(GameObject, Single) */

CullingSubscriberBase * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetupCulling(MVLogicObject *this,GameObject *lodGameObject,float cullingRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  if (cVar1 == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) {
      return (CullingSubscriberBase *)0x0;
    }
  }
  bVar2 = iRam_? != 0;
  (this->fields).lodGameObject = lodGameObject;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).lodGameObject >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pUVar7 = (this->fields)._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(this_00,(Object *)this,MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pUVar7,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._.PositionChanged = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      pCVar11 = (CullingSubscriberBase *)(*pcVar10)();
      return pCVar11;
    }
    (this->fields)._.PositionChanged = pUVar7;
    pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar12 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    if (lVar12 == 0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      pCVar11 = (CullingSubscriberBase *)(*pcVar10)();
      return pCVar11;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.PositionChanged >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  puVar13 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(aVStack_14,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar15 = *puVar13;
  fVar16 = *(float *)(puVar13 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
  FUN_?(callback,this);
  pCVar11 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar11,callback,(MethodInfo *)0x0);
  aVStack_14[0]._0_8_ = uVar15;
  aVStack_14[0].z = fVar16;
  CullingSubscriberBase::CullingSubscriberBase_Setup(pCVar11,cullingRadius,aVStack_14,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = pCVar11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return (this->fields).cullingSubscriberBase;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetupTierInventory(MVLogicObject *this,MethodInfo *method)

{
  (*(this->klass->vtable).HideConnectors.methodPtr)(this,(this->klass->vtable).HideConnectors.method);
  obj = (this->fields).lodGameObject;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void StopCulling() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_StopCulling(MVLogicObject *this,MethodInfo *method)

{
  obj = (this->fields).lodGameObject;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_UpdateControllerUpdate(MVLogicObject *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnUpdate.methodPtr)(this,(this->klass->vtable).OnUpdate.method);
  return;
}


/* MVLogicObject(Dictionary`2[System.Object,System.Object], ObjectPrefab, Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject__ctor(MVLogicObject *this,Dictionary_2_System_Object_System_Object_ *data,ObjectPrefab *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar1->oneVector).y;
  uVar6 = (pVVar1->oneVector).x;
  fVar7 = (pVVar1->oneVector).z;
  (this->fields).localBounds.m_Center.x = fVar2;
  (this->fields).localBounds.m_Center.y = fVar3;
  (this->fields).localBounds.m_Center.z = fVar4;
  (this->fields).localBounds.m_Extents.x = (float)uVar6 * 0.5;
  (this->fields).localBounds.m_Extents.y = fVar5 * 0.5;
  (this->fields).localBounds.m_Extents.z = fVar7 * 0.5;
  BStack_8.m_Center.z = fVar4;
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._.gameObject;
  (this->fields)._.interactionFlags = 0x2101;
  (this->fields)._._PlayInteractionType_k__BackingField = 3;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
  if (pGVar9 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer(pGVar9,value,(MethodInfo *)0x0);
    piVar10 = &(this->fields)._.previewLayerMask;
    *piVar10 = *piVar10 | 0x800;
    pGVar9 = (this->fields)._.gameObject;
    if ((pGVar9 != (GameObject *)0x0) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar9,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BStack_8.m_Center.x = 0.0;
      BStack_8.m_Center.y = 0.0;
      BStack_8.m_Center.z = 0.0;
      pvVar11 = (obj->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&BStack_8);
      pOVar14 = (this->fields)._.component;
      if (pOVar14 != (ObjectPrefab *)0x0) {
        VStack_15.x = BStack_8.m_Center.x;
        VStack_15.y = BStack_8.m_Center.y;
        VStack_15.z = BStack_8.m_Center.z;
        pBVar16 = MVLogicObject_ComputeLocalBounds(&BStack_8,this,&VStack_15,(pOVar14->fields).meshRenderers,(MethodInfo *)0x0);
        fVar4 = (pBVar16->m_Center).y;
        uVar13 = *(undefined8 *)&(pBVar16->m_Center).z;
        fVar2 = (pBVar16->m_Extents).y;
        fVar3 = (pBVar16->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar16->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar4;
        *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar13;
        (this->fields).localBounds.m_Extents.y = fVar2;
        (this->fields).localBounds.m_Extents.z = fVar3;
        return;
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

