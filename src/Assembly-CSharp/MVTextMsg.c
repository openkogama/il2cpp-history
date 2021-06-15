
/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVTextMsg::MVTextMsg_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVTextMsg *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

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

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_Initialize(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar3 = (this->fields).msgObject;
  if (pMVar3 != (MVTextMsgObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar3->fields).visualObject,2.0,(MethodInfo *)0x0);
    pMVar3 = (this->fields).msgObject;
    this_00 = (this->fields)._.cullingSubscriberBase;
    if ((pMVar3 != (MVTextMsgObject *)0x0) &&
       (pRVar4 = (pMVar3->fields).textMeshRenderer, pRVar4 != (Renderer *)0x0)) {
      pBVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_6,pRVar4,(MethodInfo *)0x0);
      pVVar7 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         (&BStack_6.m_Extents,(InputToPlayerMovementAndroid *)&stack0xffffffc0,
                          (MethodInfo *)(pBVar5->m_Extents).x);
      uStack_2._0_4_ = pVVar7->x;
      uStack_2._4_4_ = pVVar7->y;
      fStack_1 = pVVar7->z;
      fVar8 = (float10)func_?();
      if (this_00 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius
                  (this_00,(float)fVar8,(MethodInfo *)0x0);
        MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,
                   MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                  );
        pIVar9 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar9;
        if (pIVar9 != (IInputSignalReceiver *)0x0) {
          value = func_?();
          pMVar3 = (this->fields).msgObject;
          if ((pMVar3 != (MVTextMsgObject *)0x0) &&
             (pRVar4 = (pMVar3->fields).textMeshRenderer, pRVar4 != (Renderer *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pRVar4,(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_02,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InitializeInventory
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_text,(Theme *)TypeInfo__System__String->static_fields->Empty,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InputStateUpdateCallback
               (MVTextMsg *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pMVar1 = (this->fields).msgObject;
    if (((pMVar1 != (MVTextMsgObject *)0x0) &&
        (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    pMVar1 = (this->fields).msgObject;
    if (((pMVar1 != (MVTextMsgObject *)0x0) &&
        (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_OnDataUpdate(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void ToggleText(Boolean) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_ToggleText
               (MVTextMsg *this,bool visible,MethodInfo *method)

{
  pMVar1 = (this->fields).msgObject;
  if (((pMVar1 != (MVTextMsgObject *)0x0) &&
      (this_00 = (pMVar1->fields).textMeshRenderer, this_00 != (Renderer *)0x0)) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)func_?(), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?,0);
      func_?(uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateText() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateText(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (InputToPlayerMovementAndroid__Class *)0x0;
  pDVar2 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar2 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar2,StringLiteral_text,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
code_?:
      pDVar2 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (pDVar2,StringLiteral_textSize,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          pMVar4 = (this->fields).msgObject;
          if ((pMVar4 != (MVTextMsgObject *)0x0) &&
             (pTVar5 = (pMVar4->fields).textMesh, pTVar5 != (TextMesh *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar5,(MethodInfo *)0x0);
            fVar6 = 0.2;
            puStack_7 = (undefined1 *)&stack0xffffffec;
            uStack_8._0_4_ = (float)&UNK_?;
            func_?();
joined_?:
            if (this_02 != (Transform *)0x0) {
              value.z = fVar6;
              value.x = (float)uStack_8;
              value.y = SUB84(uStack_8,4);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (this_02,value,(MethodInfo *)0x0);
              this_00 = (this->fields)._.cullingSubscriberBase;
              if (this_00 == (CullingSubscriberBase *)0x0) {
                return;
              }
              pMVar4 = (this->fields).msgObject;
              if ((pMVar4 != (MVTextMsgObject *)0x0) &&
                 (this_01 = (pMVar4->fields).textMeshRenderer, this_01 != (Renderer *)0x0)) {
                pBVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                                   ((Bounds *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
                pIStack_1 = (InputToPlayerMovementAndroid__Class *)(pBVar9->m_Center).x;
                InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffffec,(InputToPlayerMovementAndroid *)&pIStack_1,
                           (MethodInfo *)0x0);
                fVar10 = (float10)func_?();
                if (this_00 != (CullingSubscriberBase *)0x0) {
                  CullingSubscriberBase::CullingSubscriberBase_set_Radius
                            (this_00,(float)fVar10,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          pDVar11 = (Dictionary_2_System_Type_Pool_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if ((pDVar11 != (Dictionary_2_System_Type_Pool_ *)0x0) &&
             (pPVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (pDVar11,(Type *)StringLiteral_textSize,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pPVar12 != (Pool *)0x0)) {
            if ((pPVar12->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              func_?();
              pMVar4 = (this->fields).msgObject;
              if ((pMVar4 != (MVTextMsgObject *)0x0) &&
                 (pTVar5 = (pMVar4->fields).textMesh, pTVar5 != (TextMesh *)0x0)) {
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pTVar5,(MethodInfo *)0x0);
                fVar6 = 0.0;
                uStack_8._0_4_ = 0.0;
                puStack_7 = (undefined1 *)0x0;
                func_?();
                goto joined_?;
              }
            }
            else {
              func_?();
            }
          }
        }
      }
    }
    else {
      pMVar4 = (this->fields).msgObject;
      if (pMVar4 != (MVTextMsgObject *)0x0) {
        pTVar5 = (pMVar4->fields).textMesh;
        pDVar11 = (Dictionary_2_System_Type_Pool_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if ((pDVar11 != (Dictionary_2_System_Type_Pool_ *)0x0) &&
           (pPVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (pDVar11,(Type *)StringLiteral_text,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pTVar5 != (TextMesh *)0x0)) {
          value_00 = (Pool *)0x0;
          if (pPVar12 != (Pool *)0x0) {
            if ((String__Class *)pPVar12->klass == TypeInfo__System__String) {
              value_00 = pPVar12;
            }
            if (value_00 == (Pool *)0x0) goto code_?;
          }
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar5,(String *)value_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVTextMsg(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg__ctor
               (MVTextMsg *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    pMVar1 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_02,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)pMVar1,worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x18000;
    pMVar1 = (MVTextMsgObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar1 == (MVTextMsgObject *)0x0) {
      pMVar3 = (MVTextMsgObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar3 = (MVTextMsgObject *)0x0;
      if (bVar5) {
        pMVar3 = pMVar1;
      }
      if (pMVar3 == (MVTextMsgObject *)0x0) goto code_?;
    }
    (this->fields).msgObject = pMVar3;
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_03 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_7,this_03,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar6->x;
        uVar8._4_4_ = pVVar6->y;
        fVar9 = pVVar6->z;
        pMVar1 = (this->fields).msgObject;
        if (pMVar1 != (MVTextMsgObject *)0x0) {
          meshRenderers =
               (Renderer__Array *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                          (MethodInfo *)0x0);
          fVar10 = (float)uVar8;
          this = (MVTextMsg *)fVar9;
          fVar11 = (float)(int)((ulonglong)uVar8 >> 0x20);
          origin = (Vector3)CONCAT84(uVar12,fVar10);
          pBVar13 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                              ((Bounds *)&stack0xffffffdc,(MVLogicObject *)this_01,origin,
                               meshRenderers,(MethodInfo *)0x0);
          fVar9 = (pBVar13->m_Center).y;
          fVar14 = (pBVar13->m_Center).z;
          fVar15 = (pBVar13->m_Extents).x;
          fVar16 = (pBVar13->m_Extents).y;
          fVar17 = (pBVar13->m_Extents).z;
          (this_01->fields).localBounds.m_Center.x = (pBVar13->m_Center).x;
          (this_01->fields).localBounds.m_Center.y = fVar9;
          (this_01->fields).localBounds.m_Center.z = fVar14;
          (this_01->fields).localBounds.m_Extents.x = fVar15;
          (this_01->fields).localBounds.m_Extents.y = fVar16;
          (this_01->fields).localBounds.m_Extents.z = fVar17;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVTextMsg::MVTextMsg_get_DocumentationType(MVTextMsg *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Text;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::MVTextMsg::MVTextMsg_get_InputSignalReceiver
          (MVTextMsg *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_set_InputSignalReceiver
               (MVTextMsg *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}

