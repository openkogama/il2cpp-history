
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
  pSStack_2 = (String *)0x0;
  pOStack_3 = (Object__Class *)0x0;
  pOVar4 = (Object *)0x0;
  pDVar5 = (this->fields)._._._.data;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__TryGetValue
                     (pDVar5,(Object *)StringLiteral_text,(Object **)&pSStack_2,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                     );
  pSVar7 = TypeInfo__System__String;
  pOVar8 = pOVar4;
  if (bVar6 == 0) {
code_?:
    pDVar5 = (this->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (pDVar5,(Object *)StringLiteral_textSize,(Object **)&pOStack_3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    if (bVar6 == 0) {
      pMVar9 = (this->fields).msgObject;
      if ((pMVar9 == (MVTextMsgObject *)0x0) ||
         (pTVar10 = (pMVar9->fields).textMesh, pTVar10 == (TextMesh *)0x0)) {
code_?:
        func_?();
        pSVar11 = extraout_ECX;
        pOVar8 = unaff_EBX;
        goto code_?;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar10,(MethodInfo *)0x0);
      CStack_12._.m_CachedPtr = (Object_1__Fields)(void *)0x3e4ccccd;
      stack0xffffffe4 = 0.2;
      pMVar13 = (MVTextMsg *)0x3e4ccccd;
code_?:
      if (this_00 == (Transform *)0x0) goto code_?;
      value_00.z = (float)pMVar13;
      value_00.x = (float)CStack_12._.m_CachedPtr;
      value_00.y = stack0xffffffe4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_00,value_00,(MethodInfo *)0x0);
      if ((TypeInfo__MessageBoxSettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MessageBoxSettings);
      }
      unaff_EDI = (String__Class *)TypeInfo__MessageBoxSettings->static_fields->defaultColor;
      pDVar5 = (pMVar1->fields)._._._.data;
      if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                         (pDVar5,(Object *)StringLiteral_textColor,(Object **)&stack0xfffffff0,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                         );
      if (bVar6 == 0) {
code_?:
        pMVar9 = (pMVar1->fields).msgObject;
        if ((pMVar9 != (MVTextMsgObject *)0x0) &&
           (pTVar10 = (pMVar9->fields).textMesh, unaff_EDI != (String__Class *)0x0)) {
          if (((unaff_EDI->_0).namespaze == (char *)0x0) ||
             ((pvVar14 = (unaff_EDI->_0).byval_arg.data.dummy,
              (unaff_EDI->_0).namespaze < (char *)0x2 ||
              (fVar15 = *(float *)&(unaff_EDI->_0).byval_arg.attrs,
              (unaff_EDI->_0).namespaze < (char *)0x3)))) goto code_?;
          pvVar16 = (unaff_EDI->_0).this_arg.data.dummy;
          stack0xffffffe4 = (float)pvVar16;
          CStack_12._.m_CachedPtr = (Object_1__Fields)(Object_1__Fields)fVar15;
          pvStack_17 = pvVar14;
          if (pTVar10 != (TextMesh *)0x0) {
            value.g = fVar15;
            value.r = (float)pvVar14;
            value.b = (float)pvVar16;
            value.a = 1.0;
            UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_color
                      (pTVar10,value,(MethodInfo *)0x0);
            pMVar9 = (pMVar1->fields).msgObject;
            if ((pMVar9 != (MVTextMsgObject *)0x0) &&
               (pRVar18 = (pMVar9->fields).textMeshRenderer, pRVar18 != (Renderer *)0x0)) {
              unaff_EDI = (String__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    (pRVar18,(MethodInfo *)0x0);
              pMVar9 = (pMVar1->fields).msgObject;
              if ((pMVar9 != (MVTextMsgObject *)0x0) &&
                 ((pTVar10 = (pMVar9->fields).textMesh, pTVar10 != (TextMesh *)0x0 &&
                  (pCVar19 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::
                             TextMesh_get_color((Color *)&pvStack_17,pTVar10,(MethodInfo *)0x0),
                  unaff_EDI != (String__Class *)0x0)))) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          ((Material *)unaff_EDI,*pCVar19,(MethodInfo *)0x0);
                pDVar5 = (pMVar1->fields)._._._.data;
                if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  value_02 = (Object__Class *)&stack0xffffffec;
                  stack0xffffffe4 = (float)pDVar5;
                  CStack_12._.m_CachedPtr = (Object_1__Fields)(Object_1__Fields)&UNK_?;
                  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__TryGetValue
                                     (pDVar5,(Object *)StringLiteral_billboard,(Object **)value_02,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                     );
                  if (bVar6 == 0) goto code_?;
                  if (value_02 != (Object__Class *)0x0) {
                    pSVar20 = (Single__Class *)TypeInfo__System__Boolean;
                    if ((Il2CppClass *)((value_02->_0).image)->codeGenModule !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar21 = (byte *)func_?();
                    unaff_EDI = (String__Class *)(pMVar1->fields).msgObject;
                    bVar22 = *pbVar21;
                    unaff_EBX = (Object *)(uint)bVar22;
                    if (unaff_EDI != (String__Class *)0x0) {
                      if (cRam_? == '\0') {
                        func_?(&
                                        LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                       );
                        func_?(&TypeInfo__UnityEngine__Object);
                        cRam_? = '\x01';
                      }
                      this = (MVTextMsg *)(unaff_EDI->_0).castClass;
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_op_Inequality
                                         ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if ((bVar22 == 0) || (bVar6 != 0)) {
                        bVar23 = 0;
                        if (bVar22 == 0) {
                          bVar23 = bVar6;
                        }
                        if (bVar23 != 0) {
                          pIVar24 = (unaff_EDI->_0).castClass;
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                                    ((Object_1 *)pIVar24,(MethodInfo *)0x0);
                        }
                      }
                      else {
                        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)unaff_EDI,(MethodInfo *)0x0)
                        ;
                        if (this_01 == (GameObject *)0x0) goto code_?;
                        pIVar24 = (Il2CppClass *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            (this_01,
                                             LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                                            );
                        (unaff_EDI->_0).castClass = pIVar24;
                        func_?(&(unaff_EDI->_0).castClass,pIVar24);
                      }
code_?:
                      if ((pMVar1->fields)._.cullingSubscriberBase == (CullingSubscriberBase *)0x0)
                      {
                        return;
                      }
                      pMVar9 = (pMVar1->fields).msgObject;
                      unaff_EDI = (String__Class *)(pMVar1->fields)._.cullingSubscriberBase;
                      if ((pMVar9 != (MVTextMsgObject *)0x0) &&
                         (pRVar18 = (pMVar9->fields).textMeshRenderer, pRVar18 != (Renderer *)0x0)) {
                        pBVar25 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                  Renderer_get_bounds((Bounds *)&stack0xffffffd4,pRVar18,
                                                      (MethodInfo *)0x0);
                        CStack_12._.m_CachedPtr = (Object_1__Fields)(pBVar25->m_Extents).x;
                        unique0x100005c8 = (pBVar25->m_Extents).y;
                        fVar26 = (float10)func_?(&CStack_12,0);
                        CullingSubscriberBase::CullingSubscriberBase_set_Radius
                                  ((CullingSubscriberBase *)unaff_EDI,(float)fVar26,
                                   (MethodInfo *)0x0);
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
      unaff_EBX = pOVar8;
      if (pOVar8 == (Object *)0x0) {
        unaff_EDI = (String__Class *)0x0;
        goto code_?;
      }
      unaff_EDI = (String__Class *)func_?(pOVar8,TypeInfo__System__Single);
      if (unaff_EDI != (String__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (pOStack_3 == (Object__Class *)0x0) goto code_?;
    value_02 = pOStack_3;
    pSVar20 = TypeInfo__System__Single;
    if ((Il2CppClass *)((pOStack_3->_0).image)->codeGenModule ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar27 = (float *)func_?(pOStack_3);
      pMVar13 = (MVTextMsg *)*pfVar27;
      pMVar9 = (this->fields).msgObject;
      this = pMVar13;
      if ((pMVar9 != (MVTextMsgObject *)0x0) &&
         (pTVar10 = (pMVar9->fields).textMesh, pTVar10 != (TextMesh *)0x0)) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar10,(MethodInfo *)0x0);
        stack0xffffffe4 = (float)pMVar13;
        CStack_12._.m_CachedPtr = (Object_1__Fields)(Object_1__Fields)pMVar13;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar9 = (this->fields).msgObject;
    if ((pMVar9 == (MVTextMsgObject *)0x0) ||
       (pTVar10 = (pMVar9->fields).textMesh, pTVar10 == (TextMesh *)0x0)) goto code_?;
    value_01 = (String *)0x0;
    if (pSStack_2 == (String *)0x0) {
code_?:
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar10,value_01,(MethodInfo *)0x0);
      unaff_EDI = pSVar7;
      pOVar8 = pOVar4;
      goto code_?;
    }
    if (pSStack_2->klass == TypeInfo__System__String) {
      value_01 = pSStack_2;
    }
    pSVar11 = pSStack_2;
    pOVar8 = unaff_EBX;
    unaff_EDI = TypeInfo__System__String;
    if (value_01 != (String *)0x0) goto code_?;
code_?:
    func_?(pSVar11,unaff_EDI);
code_?:
    func_?(pOVar8,this);
    value_02 = extraout_ECX_00;
    pSVar20 = extraout_EDX;
  }
code_?:
  func_?(value_02,pSVar20);
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

