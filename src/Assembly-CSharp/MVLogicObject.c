
/* Bounds ComputeLocalBounds(Vector3, Renderer[]) */

Bounds * Assembly-CSharp.dll::MVLogicObject::MVLogicObject_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,MVLogicObject *this,Vector3 origin,
                   Renderer__Array *meshRenderers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  ppuStack_2 = (undefined **)0x0;
  puStack_3 = (undefined *)0x0;
  puStack_4 = (undefined *)0x0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  puStack_7 = (undefined *)0x0;
  puStack_8 = (undefined *)0x0;
  puStack_9 = (undefined *)0x0;
  puStack_10 = (undefined *)0x0;
  uStack_11 = 0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_13,(MethodInfo *)0x0);
  uStack_14._0_4_ = pVVar12->x;
  uStack_14._4_4_ = pVVar12->y;
  fVar15 = pVVar12->z;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_13,(MethodInfo *)0x0);
  uVar16 = pVVar12->x;
  uVar17 = pVVar12->y;
  func_?(&puStack_1,uStack_14,fVar15,uVar16,uVar17,pVVar12->z);
  if (meshRenderers != (Renderer__Array *)0x0) {
    if ((int)meshRenderers->max_length < 1) {
      context = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                ((Object *)StringLiteral_Mesh_filters_required_for_correc,(Object_1 *)context,
                 (MethodInfo *)0x0);
    }
    else {
      if (meshRenderers->vector[0] == (Renderer *)0x0) goto code_?;
      pBVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                          (&BStack_19,meshRenderers->vector[0],(MethodInfo *)0x0);
      puStack_7 = (undefined *)(pBVar18->m_Center).x;
      puStack_8 = (undefined *)(pBVar18->m_Center).y;
      puStack_9 = (undefined *)(pBVar18->m_Center).z;
      puStack_10 = (undefined *)(pBVar18->m_Extents).x;
      uStack_11._0_4_ = (pBVar18->m_Extents).y;
      uStack_11._4_4_ = (pBVar18->m_Extents).z;
      puVar20 = (undefined8 *)func_?(&VStack_13,&puStack_7);
      uStack_14 = *puVar20;
      fVar15 = *(float *)(puVar20 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar15;
      a.x = (float)(undefined4)uStack_14;
      a.y = (float)uStack_14._4_4_;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_13,a,origin,(MethodInfo *)0x0);
      uVar21 = pVVar12->x;
      uVar22 = pVVar12->y;
      fStack_5 = pVVar12->z;
      uStack_6 = 0;
      ppuStack_2 = &puStack_7;
      puStack_3 = (undefined *)uVar21;
      puStack_4 = (undefined *)uVar22;
      func_?();
      ppRVar23 = meshRenderers->vector;
      puStack_1 = puStack_7;
      ppuStack_2 = (undefined **)puStack_8;
      puStack_3 = puStack_9;
      puStack_4 = puStack_10;
      fStack_5 = (float)uStack_11;
      uStack_6 = (undefined4)((ulonglong)uStack_11 >> 0x20);
      for (uVar24 = 1; ppRVar23 = ppRVar23 + 1, (int)uVar24 < (int)meshRenderers->max_length;
          uVar24 = uVar24 + 1) {
        if (meshRenderers->max_length <= uVar24) goto code_?;
        if (*ppRVar23 == (Renderer *)0x0) goto code_?;
        pBVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            ((Bounds *)&stack0xffffff88,*ppRVar23,(MethodInfo *)0x0);
        puStack_7 = (undefined *)(pBVar18->m_Center).x;
        puStack_8 = (undefined *)(pBVar18->m_Center).y;
        puStack_9 = (undefined *)(pBVar18->m_Center).z;
        puStack_10 = (undefined *)(pBVar18->m_Extents).x;
        uStack_11._0_4_ = (pBVar18->m_Extents).y;
        uStack_11._4_4_ = (pBVar18->m_Extents).z;
        puVar20 = (undefined8 *)func_?(&VStack_13,&puStack_7);
        uStack_14 = *puVar20;
        fVar15 = *(float *)(puVar20 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_00.z = fVar15;
        a_00.x = (float)(undefined4)uStack_14;
        a_00.y = (float)uStack_14._4_4_;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&BStack_19.m_Extents,a_00,origin,(MethodInfo *)0x0);
        uVar25 = pVVar12->x;
        uVar26 = pVVar12->y;
        fStack_5 = pVVar12->z;
        uStack_6 = 0;
        ppuStack_2 = &puStack_7;
        puStack_3 = (undefined *)uVar25;
        puStack_4 = (undefined *)uVar26;
        func_?();
        uStack_6 = 0;
        puStack_1 = puStack_8;
        ppuStack_2 = (undefined **)puStack_9;
        puStack_3 = puStack_10;
        puStack_4 = (undefined *)uStack_11;
        fStack_5 = (float)((ulonglong)uStack_11 >> 0x20);
        func_?();
      }
    }
    (__return_storage_ptr__->m_Center).x = (float)puStack_1;
    (__return_storage_ptr__->m_Center).y = (float)ppuStack_2;
    (__return_storage_ptr__->m_Center).z = (float)puStack_3;
    (__return_storage_ptr__->m_Extents).x = (float)puStack_4;
    (__return_storage_ptr__->m_Extents).y = fStack_5;
    (__return_storage_ptr__->m_Extents).z = (float)uStack_6;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
code_?:
  uVar27 = func_?(0);
  func_?(uVar27);
  pcVar28 = (code *)swi(3);
  pBVar18 = (Bounds *)(*pcVar28)();
  return pBVar18;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,1.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,1,
             (MethodInfo *)0x0);
  this_00 = (this->fields)._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    puVar4 = (undefined *)0x0;
    uVar5 = 0x3a83126f;
    uVar6 = 0;
    func_?();
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      puVar4 = &UNK_?;
      func_?();
    }
    auVar7._4_4_ = fVar3;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = 0;
    b.y = (float)uVar5;
    b.x = (float)uVar6;
    b.z = (float)puVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffdc,(Vector3)(auVar7 << 0x20),b,(MethodInfo *)0x0);
    uVar8 = pVVar1->y;
    fStack9 = pVVar1->z;
    uStack10 = uVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVLogicObject::MVLogicObject_InitializeInventory
               (MVLogicObject *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
      func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    this_01 = (this->fields).lodGameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CullingSubscriberBase SetupCulling(GameObject, Single) */

CullingSubscriberBase *
Assembly-CSharp.dll::MVLogicObject::MVLogicObject_SetupCulling
          (MVLogicObject *this,GameObject *lodGameObject,float cullingRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).OnStateChanged.methodPtr);
  if (cVar1 == '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar2 == (IEditModeUI *)0x0) {
      return (CullingSubscriberBase *)0x0;
    }
  }
  pUVar3 = (this->fields)._.PositionChanged;
  (this->fields).lodGameObject = lodGameObject;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,
             MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
            );
  pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  if (pUVar5 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    if (pUVar5->klass ==
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>) {
      pUVar3 = pUVar5;
    }
    if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      pCVar7 = (CullingSubscriberBase *)(*pcVar6)();
      return pCVar7;
    }
  }
  (this->fields)._.PositionChanged = pUVar3;
  puVar8 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
  fVar9 = *(float *)(puVar8 + 1);
  uVar10 = (undefined4)*puVar8;
  uVar11 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  pCVar7 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  position.y = (float)uVar11;
  position.x = (float)uVar10;
  position.z = fVar9;
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            (pCVar7,cullingRadius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar4,
             (MethodInfo *)0x0);
  pCRam000000e8 = pCVar7;
  return pCVar7;
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3,uVar1);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar1._0_4_ = pVVar2->x;
  uVar1._4_4_ = pVVar2->y;
  fVar3 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar2->x;
  uVar4._4_4_ = pVVar2->y;
  fVar5 = pVVar2->z;
  fVar6 = 0.0;
  func_?(&stack0xffffffc4,uVar1,fVar3,uVar4);
  (this->fields).localBounds.m_Center.x = fVar5;
  (this->fields).localBounds.m_Center.y = fVar6;
  (this->fields).localBounds.m_Center.z = 0.0;
  (this->fields).localBounds.m_Extents.x = 0.0;
  (this->fields).localBounds.m_Extents.y = 0.0;
  (this->fields).localBounds.m_Extents.z = 0.0;
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields)._.interactionFlags = 0x2101;
  *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = 0;
  MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
            ((MVWorldObjectClient *)this,PlayInteractionType__Enum_ExcludeFromInteraction,
             (MethodInfo *)0x0);
  pGVar7 = (this->fields)._.gameObject;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  if (pGVar7 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar7,value,(MethodInfo *)0x0);
    piVar8 = &(this->fields)._.previewLayerMask;
    *piVar8 = *piVar8 | 0x800;
    pGVar7 = (this->fields)._.gameObject;
    if (pGVar7 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar7,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
        origin = *pVVar2;
        this_00 = (this->fields)._.component;
        if (this_00 != (ObjectPrefab *)0x0) {
          meshRenderers =
               (Renderer__Array *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          (MethodInfo *)0x0);
          pBVar9 = MVLogicObject_ComputeLocalBounds
                             ((Bounds *)&stack0xffffffdc,this,origin,meshRenderers,(MethodInfo *)0x0
                             );
          fVar3 = (pBVar9->m_Center).y;
          fVar5 = (pBVar9->m_Center).z;
          fVar6 = (pBVar9->m_Extents).x;
          fVar10 = (pBVar9->m_Extents).y;
          fVar11 = (pBVar9->m_Extents).z;
          (this->fields).localBounds.m_Center.x = (pBVar9->m_Center).x;
          (this->fields).localBounds.m_Center.y = fVar3;
          (this->fields).localBounds.m_Center.z = fVar5;
          (this->fields).localBounds.m_Extents.x = fVar6;
          (this->fields).localBounds.m_Extents.y = fVar10;
          (this->fields).localBounds.m_Extents.z = fVar11;
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

