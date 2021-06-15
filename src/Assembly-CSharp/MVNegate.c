
/* Void Initialize() */

void Assembly-CSharp.dll::MVNegate::MVNegate_Initialize(MVNegate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
  this_00 = (this->fields)._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar5 = (Vector3__Class *)0x0;
    puVar6 = (undefined *)0x0;
    uVar7 = 0x3a83126f;
    func_?();
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      pVVar5 = TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    a.y = (float)uVar3;
    a.x = (float)uVar2;
    a.z = fVar4;
    b.y = (float)puVar6;
    b.x = (float)uVar7;
    b.z = (float)pVVar5;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
    object = pVVar1->x;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar1,(MethodInfo *)0x0);
    pGVar8 = (this->fields)._._.gameObject;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    cVar9 = (*(code *)(this->klass->vtable).get_HasVisualsInPlaymode.method)();
    if (cVar9 == '\0') {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar10 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar10 == (IEditModeUI *)0x0) goto code_?;
    }
    pUVar11 = (this->fields)._._.PositionChanged;
    (this->fields)._.lodGameObject = pGVar8;
    pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar12,(Object *)this,
               MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar13 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,(Delegate *)pUVar12,(MethodInfo *)0x0);
    pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar13 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUVar13->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar11 = pUVar13;
      }
      if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (this->fields)._._.PositionChanged = pUVar11;
    puVar14 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
    fVar4 = *(float *)(puVar14 + 1);
    uVar2 = (undefined4)*puVar14;
    uVar3 = (undefined4)((ulonglong)*puVar14 >> 0x20);
    this = (MVNegate *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )this,(Object *)object,
               ((*(MVNegate__Class **)object)->vtable).UpdateControllerUpdate_1.methodPtr,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_01 = (CullingSubscriberBase *)func_?();
    position.y = (float)uVar3;
    position.x = (float)uVar2;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this,
               (MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = this_01;
code_?:
    pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar12,(Object *)this,
               MethodInfo__MVNegate__SignalCallback_bool__bool__LogicObjectManager_,
               MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
              );
    pIVar15 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                        ((MVWorldObject *)this,0,
                         (Action_3_Boolean_Boolean_LogicObjectManager_ *)pUVar12,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar15;
    woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    this_02 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
    WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
              (this_02,(int32_t)woId,(MethodInfo *)0x0);
    (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_02;
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVNegate::MVNegate_SignalCallback
               (MVNegate *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,b ^ 1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVNegate(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVNegate::MVNegate__ctor
               (MVNegate *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pOVar1 = PrefabPool::PrefabPool_get_MVNegatePrefab(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        (&BStack_3.m_Extents,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                        (&BStack_3.m_Extents,(MethodInfo *)0x0);
    uVar6 = pVVar2->x;
    uVar7 = pVVar2->y;
    fVar8 = pVVar2->z;
    func_?(&stack0xffffffc4,(int)uStack_4,(int)((ulonglong)uStack_4 >> 0x20));
    (this->fields)._.localBounds.m_Center.x = fVar5;
    (this->fields)._.localBounds.m_Center.y = (float)uVar6;
    (this->fields)._.localBounds.m_Center.z = (float)uVar7;
    (this->fields)._.localBounds.m_Extents.x = fVar8;
    (this->fields)._.localBounds.m_Extents.y = 0.0;
    (this->fields)._.localBounds.m_Extents.z = 0.0;
    if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVWorldObjectClient);
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor_1
              ((MVWorldObjectClient *)this,data,pOVar1,worldObjects,(MethodInfo *)0x0);
    *(undefined4 *)&(this->fields)._._.interactionFlags = 0x2101;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
    MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
              ((MVWorldObjectClient *)this,PlayInteractionType__Enum_ExcludeFromInteraction,
               (MethodInfo *)0x0);
    pGVar9 = (this->fields)._._.gameObject;
    value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    if (pGVar9 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar9,value,(MethodInfo *)0x0);
      piVar10 = &(this->fields)._._.previewLayerMask;
      *piVar10 = *piVar10 | 0x800;
      pGVar9 = (this->fields)._._.gameObject;
      if ((pGVar9 != (GameObject *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar9,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&BStack_3.m_Extents,this_01,(MethodInfo *)0x0);
        uStack_4._0_4_ = pVVar2->x;
        uStack_4._4_4_ = pVVar2->y;
        fVar5 = pVVar2->z;
        pOVar1 = (this->fields)._._.component;
        if (pOVar1 != (ObjectPrefab *)0x0) {
          meshRenderers =
               (Renderer__Array *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pOVar1,
                          (MethodInfo *)0x0);
          origin.z = fVar5;
          origin.x = (float)(undefined4)uStack_4;
          origin.y = (float)uStack_4._4_4_;
          pBVar11 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                              (&BStack_3,(MVLogicObject *)this,origin,meshRenderers,
                               (MethodInfo *)0x0);
          fVar5 = (pBVar11->m_Center).x;
          fVar8 = (pBVar11->m_Center).y;
          fVar12 = (pBVar11->m_Center).z;
          fVar13 = (pBVar11->m_Extents).x;
          fVar14 = (pBVar11->m_Extents).y;
          fVar15 = (pBVar11->m_Extents).z;
          uVar16 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          piVar17 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar17 = (uint)*piVar17 | 0x10000;
          (this->fields)._.localBounds.m_Center.x = fVar5;
          (this->fields)._.localBounds.m_Center.y = fVar8;
          (this->fields)._.localBounds.m_Center.z = fVar12;
          (this->fields)._.localBounds.m_Extents.x = fVar13;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar16;
          (this->fields)._.localBounds.m_Extents.y = fVar14;
          (this->fields)._.localBounds.m_Extents.z = fVar15;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVNegate::MVNegate_get_DocumentationType(MVNegate *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Negate;
}

