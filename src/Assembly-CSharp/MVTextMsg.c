
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
                         ((Bounds *)&fStack_4,pRVar2,(MethodInfo *)0x0);
      fStack_4 = (pBVar3->m_Extents).x;
      uVar5 = (pBVar3->m_Extents).y;
      uVar6 = (pBVar3->m_Extents).z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      if (this_00 != (CullingSubscriberBase *)0x0) {
        method_00 = (MethodInfo *)0x0;
        dVar7 = (double)((float)uVar5 * (float)uVar5 + fStack_4 * fStack_4 +
                        (float)uVar6 * (float)uVar6);
        if (dVar7 < 0.0) {
          func_?();
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        CullingSubscriberBase::CullingSubscriberBase_set_Radius(this_00,(float)dVar7,method_00);
        MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                  func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]
        ::UnityAction_2_System_Int32_System_Int32___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar8 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                            (MethodInfo *)0x0);
        ppIVar9 = &(this->fields)._InputSignalReceiver_k__BackingField;
        *ppIVar9 = pIVar8;
        func_?(ppIVar9,pIVar8);
        if (*ppIVar9 != (IInputSignalReceiver *)0x0) {
          func_?(1,TypeInfo__IInputSignalReceiver,*ppIVar9);
          pMVar1 = (this->fields).msgObject;
          if ((pMVar1 != (MVTextMsgObject *)0x0) &&
             (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar2,(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_02,bStack_10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  pMStack_2 = (MethodInfo *)0x0;
  pMStack_3 = (MethodInfo *)0x0;
  pMStack_4 = (MVTextMsgObject *)0x0;
  pDVar5 = (this->fields)._._._.data;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__TryGetValue
                     (pDVar5,(Object *)StringLiteral_text,(Object **)&pMStack_2,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                     );
  pMVar7 = unaff_EBX;
  if (bVar6 == 0) {
code_?:
    pDVar5 = (this->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      pMVar8 = extraout_ECX;
      pSVar9 = extraout_EDX;
      pMVar7 = unaff_EBX;
      goto code_?;
    }
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (pDVar5,(Object *)StringLiteral_textSize,(Object **)&pMStack_3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    if (bVar6 != 0) {
      if (pMStack_3 != (MethodInfo *)0x0) {
        pMVar8 = pMStack_3;
        pSVar9 = (String__Class *)TypeInfo__System__Single;
        if (*(Il2CppClass **)(pMStack_3->methodPointer + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar10 = (float *)func_?(pMStack_3);
        pMVar11 = (MVTextMsg *)*pfVar10;
        pMVar7 = (this->fields).msgObject;
        this = pMVar11;
        if ((pMVar7 != (MVTextMsgObject *)0x0) &&
           (pTVar12 = (pMVar7->fields).textMesh, pTVar12 != (TextMesh *)0x0)) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pTVar12,(MethodInfo *)0x0);
          stack0xffffffe0 = (float)pMVar11;
          pMStack_13 = pMVar11;
          goto code_?;
        }
      }
      goto code_?;
    }
    pMVar7 = (this->fields).msgObject;
    if ((pMVar7 == (MVTextMsgObject *)0x0) ||
       (pTVar12 = (pMVar7->fields).textMesh, pTVar12 == (TextMesh *)0x0)) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar12,(MethodInfo *)0x0);
    pMStack_13 = (MVTextMsg *)0x3e4ccccd;
    stack0xffffffe0 = 0.2;
    pMVar11 = (MVTextMsg *)0x3e4ccccd;
code_?:
    if (this_01 == (Transform *)0x0) goto code_?;
    value_00.z = (float)pMVar11;
    value_00.x = (float)pMStack_13;
    value_00.y = stack0xffffffe0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_01,value_00,(MethodInfo *)0x0);
    if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MessageBoxSettings);
    }
    pSVar14 = TypeInfo__MessageBoxSettings->static_fields->defaultColor;
    pDVar5 = (pMVar1->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (pDVar5,(Object *)StringLiteral_textColor,(Object **)&pMStack_4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    pMVar7 = pMStack_4;
    if (bVar6 == 0) {
code_?:
      pMVar7 = (pMVar1->fields).msgObject;
      if ((pMVar7 != (MVTextMsgObject *)0x0) &&
         (pTVar12 = (pMVar7->fields).textMesh, pSVar14 != (Single__Array *)0x0)) {
        uVar15 = pSVar14->max_length;
        if ((uVar15 == 0) || ((fVar16 = pSVar14->vector[0], uVar15 < 2 || (uVar15 < 3))))
        goto code_?;
        stack0xffffffe0 = pSVar14->vector[2];
        pMStack_13 = (MVTextMsg *)pSVar14->vector[1];
        fStack_17 = fVar16;
        if (pTVar12 != (TextMesh *)0x0) {
          value.g = pSVar14->vector[1];
          value.r = fVar16;
          value.b = pSVar14->vector[2];
          value.a = 1.0;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_color
                    (pTVar12,value,(MethodInfo *)0x0);
          pMVar7 = (pMVar1->fields).msgObject;
          if ((pMVar7 != (MVTextMsgObject *)0x0) &&
             (pRVar18 = (pMVar7->fields).textMeshRenderer, pRVar18 != (Renderer *)0x0)) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (pRVar18,(MethodInfo *)0x0);
            pMVar7 = (pMVar1->fields).msgObject;
            if ((pMVar7 != (MVTextMsgObject *)0x0) &&
               ((pTVar12 = (pMVar7->fields).textMesh, pTVar12 != (TextMesh *)0x0 &&
                (pCVar19 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::
                           TextMesh_get_color((Color *)&fStack_17,pTVar12,(MethodInfo *)0x0),
                this_02 != (Material *)0x0)))) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_02,*pCVar19,(MethodInfo *)0x0);
              pDVar5 = (pMVar1->fields)._._._.data;
              if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                stack0xffffffe0 = (float)pDVar5;
                pMVar8 = 
                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                ;
                bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::
                         Dictionary_2_System_Object_System_Object__TryGetValue
                                   (pDVar5,(Object *)StringLiteral_billboard,
                                    (Object **)&stack0xffffffec,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                   );
                if (bVar6 == 0) goto code_?;
                if (pMVar8 != (MethodInfo *)0x0) {
                  pSVar9 = (String__Class *)TypeInfo__System__Boolean;
                  pMVar7 = unaff_EBX;
                  if (*(Il2CppClass **)(pMVar8->methodPointer + 0x20) !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pcVar20 = (char *)func_?();
                  unaff_EBX = (pMVar1->fields).msgObject;
                  cVar21 = *pcVar20;
                  this = (MVTextMsg *)CONCAT13(cVar21,this._0_3_);
                  if (unaff_EBX != (MVTextMsgObject *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&
                                      LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                     );
                      func_?(&TypeInfo__UnityEngine__Object);
                      cRam_? = '\x01';
                    }
                    pLVar22 = (unaff_EBX->fields).billboardScript;
                    ppLVar23 = &(unaff_EBX->fields).billboardScript;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)pLVar22,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if ((cVar21 == '\0') || (bVar6 != 0)) {
                      bVar24 = 0;
                      if (cVar21 == '\0') {
                        bVar24 = bVar6;
                      }
                      if (bVar24 != 0) {
                        pLVar22 = *ppLVar23;
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                                  ((Object_1 *)pLVar22,(MethodInfo *)0x0);
                      }
                    }
                    else {
                      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)unaff_EBX,(MethodInfo *)0x0);
                      if (this_03 == (GameObject *)0x0) goto code_?;
                      pLVar22 = (LookAtMainCamera *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (this_03,
                                           LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                          );
                      *ppLVar23 = pLVar22;
                      func_?(ppLVar23,pLVar22);
                    }
code_?:
                    this_00 = (pMVar1->fields)._.cullingSubscriberBase;
                    if (this_00 == (CullingSubscriberBase *)0x0) {
                      return;
                    }
                    pMVar7 = (pMVar1->fields).msgObject;
                    if ((pMVar7 != (MVTextMsgObject *)0x0) &&
                       (pRVar18 = (pMVar7->fields).textMeshRenderer, pRVar18 != (Renderer *)0x0)) {
                      pBVar25 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_bounds((Bounds *)&stack0xffffffd0,pRVar18,
                                                    (MethodInfo *)0x0);
                      pMStack_13 = (MVTextMsg *)(pBVar25->m_Extents).x;
                      unique0x100005b2 = (pBVar25->m_Extents).y;
                      fVar26 = (float10)func_?(&pMStack_13,0);
                      CullingSubscriberBase::CullingSubscriberBase_set_Radius
                                (this_00,(float)fVar26,(MethodInfo *)0x0);
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
    unaff_EBX = pMVar7;
    if (pMStack_4 == (MVTextMsgObject *)0x0) {
      pSVar14 = (Single__Array *)0x0;
      goto code_?;
    }
    pSVar14 = (Single__Array *)func_?(pMStack_4,TypeInfo__System__Single);
    if (pSVar14 != (Single__Array *)0x0) goto code_?;
  }
  else {
    pMVar27 = (this->fields).msgObject;
    if ((pMVar27 == (MVTextMsgObject *)0x0) ||
       (pTVar12 = (pMVar27->fields).textMesh, pTVar12 == (TextMesh *)0x0)) goto code_?;
    value_01 = (MethodInfo *)0x0;
    if (pMStack_2 == (MethodInfo *)0x0) {
code_?:
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar12,(String *)value_01,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((String__Class *)pMStack_2->methodPointer == TypeInfo__System__String) {
      value_01 = pMStack_2;
    }
    pMVar8 = pMStack_2;
    pSVar9 = TypeInfo__System__String;
    if (value_01 != (MethodInfo *)0x0) goto code_?;
code_?:
    func_?(pMVar8,pSVar9);
  }
  func_?(pMVar7,this);
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
    BStack_2.m_Center.y = (float)extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTextMsgPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x80;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x100;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x200;
    BStack_2.m_Center.y = (float)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if ((MVTextMsgObject *)BStack_2.m_Center.y == (MVTextMsgObject *)0x0) {
      (this->fields).msgObject = (MVTextMsgObject *)0x0;
code_?:
      unaff_EDI = (MVTextMsgObject__Class *)&(this->fields).msgObject;
      BStack_2.m_Center.x = (float)unaff_EDI;
      func_?();
      this_00 = (this->fields)._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&BStack_2.m_Extents,this_01,(MethodInfo *)0x0);
          if (*(MVTextMsgObject **)unaff_EDI != (MVTextMsgObject *)0x0) {
            pBVar5 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                                (&BStack_2,(MVLogicObject *)this,*pVVar4,
                                 ((*(MVTextMsgObject **)unaff_EDI)->fields)._.meshRenderers,
                                 (MethodInfo *)0x0);
            fVar6 = (pBVar5->m_Center).y;
            fVar7 = (pBVar5->m_Center).z;
            fVar8 = (pBVar5->m_Extents).x;
            fVar9 = (pBVar5->m_Extents).y;
            fVar10 = (pBVar5->m_Extents).z;
            (this->fields).localBounds.m_Center.x = (pBVar5->m_Center).x;
            (this->fields).localBounds.m_Center.y = fVar6;
            (this->fields).localBounds.m_Center.z = fVar7;
            (this->fields).localBounds.m_Extents.x = fVar8;
            (this->fields).localBounds.m_Extents.y = fVar9;
            (this->fields).localBounds.m_Extents.z = fVar10;
            return;
          }
        }
      }
      goto code_?;
    }
    bVar11 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
    unaff_EDI = TypeInfo__MVTextMsgObject;
    if (((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_2.m_Center.y)->klass)->_1).
         naturalAligment < bVar11) ||
       ((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_2.m_Center.y)->klass)->_1).
        typeHierarchy[bVar11 - 1] != (Il2CppClass *)TypeInfo__MVTextMsgObject))
    goto code_?;
    (this->fields).msgObject = (MVTextMsgObject *)BStack_2.m_Center.y;
    unaff_EDI = (MVTextMsgObject__Class *)&(this->fields).msgObject;
    bVar11 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
    unaff_EBX = TypeInfo__MVTextMsgObject;
    if ((bVar11 <= (((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_2.m_Center.y)->klass)->_1).
                  naturalAligment) &&
       ((((ObjectPrefab__Class *)((MVTextMsgObject *)BStack_2.m_Center.y)->klass)->_1).
        typeHierarchy[bVar11 - 1] == (Il2CppClass *)TypeInfo__MVTextMsgObject))
    goto code_?;
  }
  BStack_2.m_Center.x = BStack_2.m_Center.y;
  BStack_2.m_Center.y = (float)unaff_EBX;
  func_?();
  BStack_2.m_Center.y = (float)extraout_EDX_00;
code_?:
  BStack_2.m_Center.x = BStack_2.m_Center.y;
  BStack_2.m_Center.y = (float)unaff_EDI;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

