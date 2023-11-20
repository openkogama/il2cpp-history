
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
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&
                    MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 != (MVTextMsgObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).msgObject;
    this_00 = (this->fields)._.cullingSubscriberBase;
    if ((pMVar1 != (MVTextMsgObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) {
      pBVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_4,pRVar2,(MethodInfo *)0x0);
      uVar5 = (pBVar3->m_Extents).z;
      BStack_4.m_Extents.x = (pBVar3->m_Extents).x;
      BStack_4.m_Extents.y = (pBVar3->m_Extents).y;
      BStack_4.m_Extents.z = (float)uVar5;
      fVar6 = (float10)func_?(&BStack_4.m_Extents,0);
      if (this_00 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius
                  (this_00,(float)fVar6,(MethodInfo *)0x0);
        MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                  func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]
        ::UnityAction_2_System_Int32_System_Int32___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar7 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar7;
        func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar7);
        pIVar7 = (this->fields)._InputSignalReceiver_k__BackingField;
        if (pIVar7 != (IInputSignalReceiver *)0x0) {
          value = func_?(1,TypeInfo__IInputSignalReceiver,pIVar7);
          pMVar1 = (this->fields).msgObject;
          if ((pMVar1 != (MVTextMsgObject *)0x0) &&
             (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar2,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InitializeInventory
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_text);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_text,(Object *)::StringLiteral__,
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
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
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
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff8);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_OnDataUpdate(MVTextMsg *this,MethodInfo *method)

{
  MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void ToggleText(Boolean) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_ToggleText
               (MVTextMsg *this,bool visible,MethodInfo *method)

{
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 != (MVTextMsgObject *)0x0) &&
     (this_00 = (pMVar1->fields).textMeshRenderer, this_00 != (Renderer *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateText() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateText(MVTextMsg *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__MessageBoxSettings);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_textColor);
    func_?(&StringLiteral_billboard);
    func_?(&StringLiteral_text);
    func_?(&StringLiteral_textSize);
    cRam_? = '\x01';
  }
  pSStack_2 = (String__Class *)0x0;
  pSStack_3 = (String__Class *)0x0;
  pOVar4 = (Object *)0x0;
  pDVar5 = (this->fields)._._._.data;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar5,(Object *)StringLiteral_text,(Object **)&pSStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  pOVar7 = unaff_EBX;
  if (bVar6 == 0) {
code_?:
    pDVar5 = (this->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      value_02 = extraout_ECX;
      pSVar8 = extraout_EDX;
      pOVar7 = unaff_EBX;
      goto code_?;
    }
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar5,(Object *)StringLiteral_textSize,(Object **)&pSStack_3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar6 != 0) {
      if (pSStack_3 != (String__Class *)0x0) {
        value_02 = pSStack_3;
        pSVar8 = (String__Class *)TypeInfo__System__Single;
        if ((((String__Class *)(pSStack_3->_0).image)->_0).element_class !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar9 = (float *)func_?(pSStack_3);
        pMVar10 = (MVTextMsg *)*pfVar9;
        pMVar11 = (this->fields).msgObject;
        this = pMVar10;
        if ((pMVar11 != (MVTextMsgObject *)0x0) &&
           (pTVar12 = (pMVar11->fields).textMesh, pTVar12 != (TextMesh *)0x0)) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pTVar12,(MethodInfo *)0x0);
          stack0xffffffe4 = (float)pMVar10;
          pMStack_13 = pMVar10;
          goto code_?;
        }
      }
      goto code_?;
    }
    pMVar11 = (this->fields).msgObject;
    if ((pMVar11 == (MVTextMsgObject *)0x0) ||
       (pTVar12 = (pMVar11->fields).textMesh, pTVar12 == (TextMesh *)0x0)) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar12,(MethodInfo *)0x0);
    pMStack_13 = (MVTextMsg *)0x3e4ccccd;
    stack0xffffffe4 = 0.2;
    pMVar10 = (MVTextMsg *)0x3e4ccccd;
code_?:
    if (this_01 == (Transform *)0x0) goto code_?;
    value_00.z = (float)pMVar10;
    value_00.x = (float)pMStack_13;
    value_00.y = stack0xffffffe4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_01,value_00,(MethodInfo *)0x0);
    pOVar7 = pOVar4;
    if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MessageBoxSettings);
      pOVar7 = pOVar4;
    }
    pSVar14 = TypeInfo__MessageBoxSettings->static_fields->defaultColor;
    pDVar5 = (pMVar1->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar5,(Object *)StringLiteral_textColor,(Object **)&stack0xfffffff0,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar6 == 0) {
code_?:
      pMVar11 = (pMVar1->fields).msgObject;
      if ((pMVar11 != (MVTextMsgObject *)0x0) &&
         (pTVar12 = (pMVar11->fields).textMesh, pSVar14 != (Single__Array *)0x0)) {
        if ((pSVar14->max_length == 0) ||
           ((fVar15 = pSVar14->vector[0], pSVar14->max_length < 2 || (pSVar14->max_length < 3))))
        goto code_?;
        stack0xffffffe4 = pSVar14->vector[2];
        pMStack_13 = (MVTextMsg *)pSVar14->vector[1];
        fStack_16 = fVar15;
        if (pTVar12 != (TextMesh *)0x0) {
          value.g = pSVar14->vector[1];
          value.r = fVar15;
          value.b = pSVar14->vector[2];
          value.a = 1.0;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_color
                    (pTVar12,value,(MethodInfo *)0x0);
          pMVar11 = (pMVar1->fields).msgObject;
          if ((pMVar11 != (MVTextMsgObject *)0x0) &&
             (pRVar17 = (pMVar11->fields).textMeshRenderer, pRVar17 != (Renderer *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (pRVar17,(MethodInfo *)0x0);
            pMVar11 = (pMVar1->fields).msgObject;
            if ((pMVar11 != (MVTextMsgObject *)0x0) &&
               ((pTVar12 = (pMVar11->fields).textMesh, pTVar12 != (TextMesh *)0x0 &&
                (pCVar18 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::
                           TextMesh_get_color((Color *)&fStack_16,pTVar12,(MethodInfo *)0x0),
                this_02 != (Material *)0x0)))) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_02,*pCVar18,(MethodInfo *)0x0);
              pDVar5 = (pMVar1->fields)._._._.data;
              if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                value_02 = (String__Class *)&stack0xffffffec;
                stack0xffffffe4 = (float)pDVar5;
                bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::
                        Dictionary_2_System_Object_System_Object__TryGetValue
                                  (pDVar5,(Object *)StringLiteral_billboard,(Object **)value_02,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if (bVar6 == 0) goto code_?;
                if (value_02 != (String__Class *)0x0) {
                  pSVar8 = (String__Class *)TypeInfo__System__Boolean;
                  pOVar7 = unaff_EBX;
                  if ((((String__Class *)(value_02->_0).image)->_0).element_class !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pbVar19 = (byte *)func_?();
                  pMVar11 = (pMVar1->fields).msgObject;
                  bVar20 = *pbVar19;
                  unaff_EBX = (Object *)(uint)bVar20;
                  if (pMVar11 != (MVTextMsgObject *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&
                                      LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                     );
                      func_?(&TypeInfo__UnityEngine__Object);
                      cRam_? = '\x01';
                    }
                    this = (MVTextMsg *)(pMVar11->fields).billboardScript;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if ((bVar20 == 0) || (bVar6 != 0)) {
                      bVar21 = 0;
                      if (bVar20 == 0) {
                        bVar21 = bVar6;
                      }
                      if (bVar21 != 0) {
                        pLVar22 = (pMVar11->fields).billboardScript;
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                                  ((Object_1 *)pLVar22,(MethodInfo *)0x0);
                      }
                    }
                    else {
                      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pMVar11,(MethodInfo *)0x0);
                      if (this_03 == (GameObject *)0x0) goto code_?;
                      pLVar22 = (LookAtMainCamera *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (this_03,
                                           LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                          );
                      (pMVar11->fields).billboardScript = pLVar22;
                      func_?(&(pMVar11->fields).billboardScript,pLVar22);
                    }
code_?:
                    if ((pMVar1->fields)._.cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
                      return;
                    }
                    pMVar11 = (pMVar1->fields).msgObject;
                    this_00 = (pMVar1->fields)._.cullingSubscriberBase;
                    if ((pMVar11 != (MVTextMsgObject *)0x0) &&
                       (pRVar17 = (pMVar11->fields).textMeshRenderer, pRVar17 != (Renderer *)0x0)) {
                      pBVar23 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_bounds((Bounds *)&stack0xffffffd4,pRVar17,
                                                    (MethodInfo *)0x0);
                      pMStack_13 = (MVTextMsg *)(pBVar23->m_Extents).x;
                      unique0x100005ba = (pBVar23->m_Extents).y;
                      fVar24 = (float10)func_?(&pMStack_13,0);
                      CullingSubscriberBase::CullingSubscriberBase_set_Radius
                                (this_00,(float)fVar24,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    this = (MVTextMsg *)TypeInfo__System__Single;
    unaff_EBX = pOVar7;
    if (pOVar7 == (Object *)0x0) {
      pSVar14 = (Single__Array *)0x0;
      goto code_?;
    }
    pSVar14 = (Single__Array *)func_?(pOVar7,TypeInfo__System__Single);
    if (pSVar14 != (Single__Array *)0x0) goto code_?;
  }
  else {
    pMVar11 = (this->fields).msgObject;
    if ((pMVar11 == (MVTextMsgObject *)0x0) ||
       (pTVar12 = (pMVar11->fields).textMesh, pTVar12 == (TextMesh *)0x0)) goto code_?;
    value_01 = (String__Class *)0x0;
    if (pSStack_2 == (String__Class *)0x0) {
code_?:
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar12,(String *)value_01,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((String__Class *)(pSStack_2->_0).image == TypeInfo__System__String) {
      value_01 = pSStack_2;
    }
    value_02 = pSStack_2;
    pSVar8 = TypeInfo__System__String;
    if (value_01 != (String__Class *)0x0) goto code_?;
code_?:
    func_?(value_02,pSVar8);
  }
  func_?(pOVar7,this);
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* MVTextMsg(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg__ctor
               (MVTextMsg *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVTextMsgObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTextMsgPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x80;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x100;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x200;
    BStack_3.m_Center.y = (float)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    unaff_EDI = TypeInfo__MVTextMsgObject;
    if ((MVTextMsgObject *)BStack_3.m_Center.y == (MVTextMsgObject *)0x0) {
      (this->fields).msgObject = (MVTextMsgObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_3.m_Center.y)->klass)->_1).
           naturalAligment < (TypeInfo__MVTextMsgObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_3.m_Center.y)->klass)->_1).
          typeHierarchy[(TypeInfo__MVTextMsgObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) goto code_?;
      (this->fields).msgObject = (MVTextMsgObject *)BStack_3.m_Center.y;
      unaff_EDI = TypeInfo__MVTextMsgObject;
      if (((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_3.m_Center.y)->klass)->_1).
           naturalAligment < (TypeInfo__MVTextMsgObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_3.m_Center.y)->klass)->_1).
          typeHierarchy[(TypeInfo__MVTextMsgObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) goto code_?;
    }
    BStack_3.m_Center.x = (float)&(this->fields).msgObject;
    func_?();
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&BStack_3.m_Extents,this_01,(MethodInfo *)0x0);
        pMVar5 = (this->fields).msgObject;
        if (pMVar5 != (MVTextMsgObject *)0x0) {
          pBVar6 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                              (&BStack_3,(MVLogicObject *)this,*pVVar4,
                               (pMVar5->fields)._.meshRenderers,(MethodInfo *)0x0);
          fVar7 = (pBVar6->m_Center).y;
          fVar8 = (pBVar6->m_Center).z;
          fVar9 = (pBVar6->m_Extents).x;
          fVar10 = (pBVar6->m_Extents).y;
          fVar11 = (pBVar6->m_Extents).z;
          (this->fields).localBounds.m_Center.x = (pBVar6->m_Center).x;
          (this->fields).localBounds.m_Center.y = fVar7;
          (this->fields).localBounds.m_Center.z = fVar8;
          (this->fields).localBounds.m_Extents.x = fVar9;
          (this->fields).localBounds.m_Extents.y = fVar10;
          (this->fields).localBounds.m_Extents.z = fVar11;
          return;
        }
      }
    }
  }
  func_?();
  BStack_3.m_Center.y = (float)extraout_EDX;
code_?:
  BStack_3.m_Center.x = BStack_3.m_Center.y;
  BStack_3.m_Center.y = (float)unaff_EDI;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

