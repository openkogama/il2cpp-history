
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
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  uVar4._0_4_ = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  center.y = fVar3;
  center.x = fVar2;
  center.z = (float)uVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,center,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector
             ,(MethodInfo *)0x0);
  if (meshRenderers == (Renderer__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    pBVar6 = (Bounds *)(*pcVar5)();
    return pBVar6;
  }
  if (meshRenderers->max_length == 0) {
    context = (this->fields)._.gameObject;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
              ((Object *)StringLiteral_Mesh_filters_required_for_correc,(Object_1 *)context,
               (MethodInfo *)0x0);
  }
  else {
    if (meshRenderers->vector[0] == (Renderer *)0x0) goto code_?;
    pBVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                       ((Bounds *)&puStack_7,meshRenderers->vector[0],(MethodInfo *)0x0);
    uVar4._0_4_ = (pBVar6->m_Extents).y;
    fStack_8 = (pBVar6->m_Extents).z;
    pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)&stack0xffffffe4,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&stack0xffffffb4,(MethodInfo *)0x0);
    uVar10 = pRVar9->_options;
    uVar11 = pRVar9->_cultureKey;
    pSVar12 = (String *)((float)uVar10 - origin.x);
    pSVar13 = (String *)((float)uVar11 - origin.y);
    pOVar14 = (Object *)((float)pRVar9->_pattern - origin.z);
    uVar4 = uVar4 & 0xffffffff00000000;
    this_00 = (ParticleSystem_Particle *)&stack0xffffffb4;
    value.y = (float)pSVar13;
    value.x = (float)pSVar12;
    value.z = (float)pOVar14;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
    ParticleSystem_Particle_set_position(this_00,value,(MethodInfo *)0x0);
    ppRVar15 = meshRenderers->vector + 1;
    (__return_storage_ptr__->m_Center).x = (float)this_00;
    (__return_storage_ptr__->m_Center).y = (float)pSVar12;
    (__return_storage_ptr__->m_Center).z = (float)pSVar13;
    (__return_storage_ptr__->m_Extents).x = (float)pOVar14;
    fStack_8 = (float)(uVar4 >> 0x20);
    (__return_storage_ptr__->m_Extents).y = (float)uVar4;
    (__return_storage_ptr__->m_Extents).z = fStack_8;
    for (uVar16 = 1; (int)uVar16 < (int)meshRenderers->max_length; uVar16 = uVar16 + 1) {
      if (meshRenderers->max_length <= uVar16) goto code_?;
      if (*ppRVar15 == (Renderer *)0x0) goto code_?;
      pBVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         ((Bounds *)&stack0xffffff9c,*ppRVar15,(MethodInfo *)0x0);
      fVar2 = (pBVar6->m_Center).x;
      pSVar13 = (String *)(pBVar6->m_Center).y;
      pSVar12 = (String *)(pBVar6->m_Center).z;
      pOVar14 = (Object *)(pBVar6->m_Extents).x;
      uVar4._0_4_ = (pBVar6->m_Extents).y;
      fStack_8 = (pBVar6->m_Extents).z;
      pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&stack0xffffffd8,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&stack0xffffffb4,(MethodInfo *)0x0);
      uVar17 = pRVar9->_options;
      uVar18 = pRVar9->_cultureKey;
      value_00.y = (float)uVar18 - origin.y;
      value_00.x = (float)uVar17 - origin.x;
      value_00.z = (float)pRVar9->_pattern - origin.z;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_position
                ((ParticleSystem_Particle *)&stack0xffffffb4,value_00,(MethodInfo *)0x0);
      bounds.m_Extents.z = SUB84(uVar4,4);
      bounds.m_Extents.y = (float)uVar4;
      bounds.m_Center.y = (float)pSVar13;
      bounds.m_Center.x = fVar2;
      bounds.m_Center.z = (float)pSVar12;
      bounds.m_Extents.x = (float)pOVar14;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
                (__return_storage_ptr__,bounds,(MethodInfo *)0x0);
      ppRVar15 = (Renderer **)0x4;
    }
  }
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_DeSelect
               (MVLogicObject *this,MethodInfo *method)

{
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)
            (this,(this->klass->vtable).RemoveSelectionBox.method);
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
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields).cullingSubscriberBase,0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)
                    (this,(this->klass->vtable).get_HasInputConnector.method);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)
                    (this,(this->klass->vtable).get_HasOutputConnector.method);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    this_00 = (this->fields).lodGameObject;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
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
  (this->fields).lodGameObject = lodGameObject;
  func_?(&(this->fields).lodGameObject,lodGameObject);
  this_01 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
            (this->fields)._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  pDVar2 = (Delegate *)0x0;
  if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)this_01,(Delegate *)this_00,(MethodInfo *)0x0);
    this_01 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      (this->fields)._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      iVar3 = 0;
    }
    else {
      uStack_4 = CONCAT44(uStack_4._4_4_,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
      pDStack_5 = pDVar2;
      pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this->fields)._.PositionChanged = pUVar6;
      this_01 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      uStack_4 = CONCAT44(uStack_4._4_4_,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
      pDStack_5 = pDVar2;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    uStack_4 = CONCAT44(uStack_4._4_4_,iVar3);
    pDStack_5 = (Delegate *)&(this->fields)._.PositionChanged;
    func_?();
    pMStack_7 = (this->klass->vtable).get_WorldPosition_1.method;
    pMStack_8 = this;
    puVar9 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(&pMStack_8);
    uStack_4 = *puVar9;
    fVar10 = *(float *)(puVar9 + 1);
    this_01 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    if (this_01 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                ((UnityAction_1_UnityEngine_Vector2_ *)this_01,(Object *)this,
                 (this->klass->vtable).OnStateChanged.method,(MethodInfo *)0x0);
      pCVar11 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
      pDVar2 = (Delegate *)0x0;
      if (pCVar11 != (CullingSubscriberBase *)0x0) {
        position.z = fVar10;
        position.x = (float)(undefined4)uStack_4;
        position.y = (float)uStack_4._4_4_;
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar11,cullingRadius,position,
                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,(MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = pCVar11;
        func_?(&(this->fields).cullingSubscriberBase,pCVar11);
        return (this->fields).cullingSubscriberBase;
      }
    }
  }
  func_?();
code_?:
  uStack_4 = CONCAT44(uStack_4._4_4_,this_01);
  pDStack_5 = pDVar2;
  func_?();
  pcVar12 = (code *)swi(3);
  pCVar11 = (CullingSubscriberBase *)(*pcVar12)();
  return pCVar11;
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
  (*(this->klass->vtable).OnUpdate.methodPtr)(this,(this->klass->vtable).OnUpdate.method);
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
  uVar4._0_4_ = 0.0;
  uVar4._4_4_ = 0.0;
  puStack_5 = (undefined *)0x0;
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  center.z = fVar3;
  center.x = (float)uVar2;
  center.y = SUB84(uVar2,4);
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            ((Bounds *)&puStack_5,center,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
             (MethodInfo *)0x0);
  (this->fields).localBounds.m_Center.x = (float)puStack_5;
  (this->fields).localBounds.m_Center.y = fVar6;
  (this->fields).localBounds.m_Center.z = fVar7;
  (this->fields).localBounds.m_Extents.x = fVar8;
  (this->fields).localBounds.m_Extents.y = (float)uVar4;
  (this->fields).localBounds.m_Extents.z = SUB84(uVar4,4);
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._.gameObject;
  *(undefined4 *)&(this->fields)._.interactionFlags = 0x2101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = 0;
  (this->fields)._._PlayInteractionType_k__BackingField = 3;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  if (pGVar9 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar9,value,(MethodInfo *)0x0);
    piVar10 = &(this->fields)._.previewLayerMask;
    *piVar10 = *piVar10 | 0x800;
    pGVar9 = (this->fields)._.gameObject;
    if (pGVar9 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar9,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_12,this_00,(MethodInfo *)0x0);
        pOVar13 = (this->fields)._.component;
        if (pOVar13 != (ObjectPrefab *)0x0) {
          pBVar14 = MVLogicObject_ComputeLocalBounds
                             ((Bounds *)&stack0xffffffe4,this,*pVVar11,(pOVar13->fields).meshRenderers
                              ,(MethodInfo *)0x0);
          fVar3 = (pBVar14->m_Center).y;
          fVar6 = (pBVar14->m_Center).z;
          fVar7 = (pBVar14->m_Extents).x;
          fVar8 = (pBVar14->m_Extents).y;
          fVar15 = (pBVar14->m_Extents).z;
          (this->fields).localBounds.m_Center.x = (pBVar14->m_Center).x;
          (this->fields).localBounds.m_Center.y = fVar3;
          (this->fields).localBounds.m_Center.z = fVar6;
          (this->fields).localBounds.m_Extents.x = fVar7;
          (this->fields).localBounds.m_Extents.y = fVar8;
          (this->fields).localBounds.m_Extents.z = fVar15;
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

