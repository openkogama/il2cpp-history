
/* Bounds ComputeLocalBounds(Vector3, Renderer[]) */

Bounds * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,MVLogicObject *this,Vector3 origin,
                   Renderer__Array *meshRenderers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Mesh_filters_required_for_correc);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->zeroVector).x;
  uStack_2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar4 = _UNK_?;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar1->zeroVector).x;
  uStack_5._4_4_ = (pVVar1->zeroVector).y;
  fStack_6 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_2;
  (__return_storage_ptr__->m_Center).y = uStack_2._4_4_;
  fStack_6 = fStack_6 * fVar4;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = (float)(undefined4)uStack_5 * fVar4;
  (__return_storage_ptr__->m_Extents).y = (float)uStack_5._4_4_ * fVar4;
  (__return_storage_ptr__->m_Extents).z = fStack_6;
  if (meshRenderers != (Renderer__Array *)0x0) {
    if (meshRenderers->max_length == 0) {
      context = (this->fields)._.gameObject;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral_Mesh_filters_required_for_correc,(Object_1 *)context,
                 (MethodInfo *)0x0);
    }
    else {
      if (meshRenderers->vector[0] == (Renderer *)0x0) goto code_?;
      pBVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_8,meshRenderers->vector[0],(MethodInfo *)0x0);
      fVar3 = (pBVar7->m_Center).y;
      fVar4 = (pBVar7->m_Extents).x;
      fVar9 = (pBVar7->m_Extents).y;
      fVar10 = (pBVar7->m_Extents).z;
      fStack_6 = (pBVar7->m_Center).z - origin.z;
      ppRStack_11 = meshRenderers->vector;
      uStack_12 = 1;
      (__return_storage_ptr__->m_Center).x = (pBVar7->m_Center).x - origin.x;
      (__return_storage_ptr__->m_Center).y = fVar3 - origin.y;
      (__return_storage_ptr__->m_Center).z = fStack_6;
      (__return_storage_ptr__->m_Extents).x = fVar4;
      (__return_storage_ptr__->m_Extents).y = fVar9;
      (__return_storage_ptr__->m_Extents).z = fVar10;
      while( true ) {
        ppRStack_11 = ppRStack_11 + 1;
        uStack_2 = CONCAT44(uStack_12,(undefined4)uStack_2);
        if ((int)meshRenderers->max_length <= (int)uStack_12) break;
        if (meshRenderers->max_length <= uStack_12) goto code_?;
        if (*ppRStack_11 == (Renderer *)0x0) goto code_?;
        pBVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           (&BStack_8,*ppRStack_11,(MethodInfo *)0x0);
        fVar3 = (pBVar7->m_Extents).y;
        fVar4 = (pBVar7->m_Extents).z;
        fStack_13 = (pBVar7->m_Center).y;
        BStack_8.m_Center.y = (pBVar7->m_Center).z;
        fStack_14 = (pBVar7->m_Extents).x;
        fVar9 = (pBVar7->m_Center).x - origin.x;
        fStack_15 = fStack_13 - origin.y;
        BStack_8.m_Center.x = BStack_8.m_Center.y - origin.z;
        uStack_2 = CONCAT44(fVar9,(undefined4)uStack_2);
        fStack_6 = BStack_8.m_Center.x - fVar4;
        point.y = fStack_15 - fVar3;
        point.x = fVar9 - fStack_14;
        point.z = fStack_6;
        BStack_8.m_Center.z = BStack_8.m_Center.y;
        BStack_8.m_Extents.x = BStack_8.m_Center.y;
        fStack_16 = fStack_13;
        fStack_17 = fStack_13;
        fStack_18 = fStack_14;
        fStack_19 = fStack_14;
        fStack_20 = fStack_14;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                  (__return_storage_ptr__,point,(MethodInfo *)0x0);
        fStack_21 = fVar4 + BStack_8.m_Center.x;
        point_00.y = fVar3 + fStack_15;
        point_00.x = fStack_14 + uStack_2._4_4_;
        point_00.z = fStack_21;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                  (__return_storage_ptr__,point_00,(MethodInfo *)0x0);
        uStack_12 = uStack_12 + 1;
      }
    }
    return __return_storage_ptr__;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pBVar7 = (Bounds *)(*pcVar22)();
  return pBVar7;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_DeSelect
               (MVLogicObject *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).RemoveSelectionBox.method)
            (this,(this->klass->vtable).RemovePreviewBox.methodPtr);
  (this->fields)._.selectedConnector = 0;
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_Destroy
               (MVLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    *ppCVar1 = (CullingSubscriberBase *)0x0;
    func_?(ppCVar1,0);
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVLogicObject *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
  scale = *pVVar1;
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.w = 0.0;
      rotation.x = pVVar1->x;
      rotation.y = pVVar1->y;
      rotation.z = pVVar1->z;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVLogicObject *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  fVar2 = (this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.x;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  (__return_storage_ptr__->m_Center).z = fVar2;
  (__return_storage_ptr__->m_Extents).x = fVar3;
  fVar1 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Extents).y = (this->fields).localBounds.m_Extents.y;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_Initialize
               (MVLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,1,
             (MethodInfo *)0x0);
  this_00 = (this->fields)._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    value.y = (float)uVar3 + _UNK_?;
    value.x = (float)uVar2 + 0.0;
    value.z = pVVar1->z + 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_InitializeInventory
               (MVLogicObject *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_OnStateChanged
               (MVLogicObject *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields).cullingSubscriberBase;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar2->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar3 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    cVar4 = (*(code *)(this->klass->vtable).__unknown.method)
                      (this,(this->klass->vtable).OnStateChanged.methodPtr);
    this._0_1_ = bVar3;
    if (cVar4 == '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
        if (pIVar5 == (IEditModeUI *)0x0) goto code_?;
        cVar4 = func_?(1,TypeInfo__IEditModeUI,pIVar5);
        if (cVar4 != '\0') {
          this._0_1_ = 1;
        }
      }
    }
    this_00 = (pMVar1->fields).lodGameObject;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetLocalBounds() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetLocalBounds
               (MVLogicObject *this,MethodInfo *method)

{
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      pOVar2 = (this->fields)._.component;
      if (pOVar2 != (ObjectPrefab *)0x0) {
        pBVar3 = MVLogicObject_ComputeLocalBounds
                           ((Bounds *)&stack0xffffffe4,this,*pVVar1,(pOVar2->fields).meshRenderers,
                            (MethodInfo *)0x0);
        fVar4 = (pBVar3->m_Center).y;
        fVar5 = (pBVar3->m_Center).z;
        fVar6 = (pBVar3->m_Extents).x;
        fVar7 = (pBVar3->m_Extents).y;
        fVar8 = (pBVar3->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar3->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar4;
        (this->fields).localBounds.m_Center.z = fVar5;
        (this->fields).localBounds.m_Extents.x = fVar6;
        (this->fields).localBounds.m_Extents.y = fVar7;
        (this->fields).localBounds.m_Extents.z = fVar8;
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CullingSubscriberBase SetupCulling(GameObject, Single) */

CullingSubscriberBase *
Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetupCulling
          (MVLogicObject *this,GameObject *lodGameObject,float cullingRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).OnStateChanged.methodPtr);
  if (cVar1 == '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      return (CullingSubscriberBase *)0x0;
    }
  }
  ppGVar2 = &(this->fields).lodGameObject;
  *ppGVar2 = lodGameObject;
  func_?(ppGVar2,lodGameObject);
  pUVar3 = (this->fields)._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar4 == (Delegate *)0x0) {
    (this->fields)._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
    pMStack_5 = this;
    puVar6 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&pMStack_5);
    fVar7 = *(float *)(puVar6 + 1);
    uVar8 = (undefined4)*puVar6;
    uVar9 = (undefined4)((ulonglong)*puVar6 >> 0x20);
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               (MethodInfo *)0x0);
    pCVar10 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar9;
    position.x = (float)uVar8;
    position.z = fVar7;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar10,cullingRadius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01
               ,(MethodInfo *)0x0);
    pCRam000000f0 = pCVar10;
    func_?();
    return pCRam000000f0;
  }
  pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
  if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    func_?();
  }
  else {
    (this->fields)._.PositionChanged = pUVar3;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pCVar10 = (CullingSubscriberBase *)(*pcVar12)();
  return pCVar10;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetupTierInventory
               (MVLogicObject *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).lodGameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopCulling() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_StopCulling
               (MVLogicObject *this,MethodInfo *method)

{
  this_00 = (this->fields).lodGameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_UpdateControllerUpdate
               (MVLogicObject *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).OnUpdate.method)(this,(this->klass->vtable).__unknown.methodPtr);
  return;
}


/* MVLogicObject(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject__ctor
               (MVLogicObject *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar1->oneVector).x;
  uVar5 = (pVVar1->oneVector).y;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  fVar7 = (float)uVar4 * _UNK_?;
  fVar8 = (float)uVar5 * _UNK_?;
  fStack_9 = (float)uVar2;
  puStack_10 = SUB84(uVar2,4);
  (this->fields).localBounds.m_Center.x = fStack_9;
  (this->fields).localBounds.m_Center.y = (float)puStack_10;
  (this->fields).localBounds.m_Center.z = fVar3;
  (this->fields).localBounds.m_Extents.x = fVar7;
  (this->fields).localBounds.m_Extents.y = fVar8;
  (this->fields).localBounds.m_Extents.z = fVar6;
  _fStack_28 = uVar2;
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pGVar11 = (this->fields)._.gameObject;
  *(undefined4 *)&(this->fields)._.interactionFlags = 0x2101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = 0;
  (this->fields)._._PlayInteractionType_k__BackingField = 3;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  if (pGVar11 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar11,value,(MethodInfo *)0x0);
    piVar12 = &(this->fields)._.previewLayerMask;
    *piVar12 = *piVar12 | 0x800;
    pGVar11 = (this->fields)._.gameObject;
    if (pGVar11 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar11,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
        pOVar14 = (this->fields)._.component;
        if (pOVar14 != (ObjectPrefab *)0x0) {
          pBVar15 = MVLogicObject_ComputeLocalBounds
                              ((Bounds *)&fStack_9,this,*pVVar13,(pOVar14->fields).meshRenderers,
                               (MethodInfo *)0x0);
          uVar2._0_4_ = (pBVar15->m_Center).y;
          uVar2._4_4_ = (pBVar15->m_Center).z;
          fVar3 = (pBVar15->m_Extents).x;
          fVar6 = (pBVar15->m_Extents).y;
          fVar8 = (pBVar15->m_Extents).z;
          (this->fields).localBounds.m_Center.x = (pBVar15->m_Center).x;
          (this->fields).localBounds.m_Center.y = (float)uVar2;
          (this->fields).localBounds.m_Center.z = uVar2._4_4_;
          (this->fields).localBounds.m_Extents.x = fVar3;
          (this->fields).localBounds.m_Extents.y = fVar6;
          (this->fields).localBounds.m_Extents.z = fVar8;
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

