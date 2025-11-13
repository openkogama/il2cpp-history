
/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVTextMsg::MVTextMsg_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVTextMsg *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

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

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_Initialize(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 != (MVTextMsgObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    pMVar1 = (this->fields).msgObject;
    this_00 = (this->fields)._.cullingSubscriberBase;
    if ((pMVar1 != (MVTextMsgObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      uStack_4 = 0;
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      pvVar8 = (pRVar2->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar8);
      uStack_11 = CONCAT44(uStack_6,uStack_5);
      puStack_12 = (undefined *)CONCAT44(puStack_12._4_4_,uStack_7);
      value = (float)FUN_?(&uStack_11);
      if (this_00 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius(this_00,value,(MethodInfo *)0x0);
        MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
        this_01 = (Action_2_Int32Enum_Object_ *)
                  FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar13 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                            (MethodInfo *)0x0);
        bVar14 = iRam_? != 0;
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar13;
        if (bVar14) {
          uVar15 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
          uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
          do {
            uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
            puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar17 == *puVar18;
            if (bVar14) {
              *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
          uVar19 = FUN_?(1);
          pMVar1 = (this->fields).msgObject;
          if (((pMVar1 != (MVTextMsgObject *)0x0) &&
              (pRVar2 = (pMVar1->fields).textMeshRenderer, pRVar2 != (Renderer *)0x0)) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar2,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,uVar19,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (GameObject *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pvVar8 = (obj->fields)._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar9 = (code *)FUN_?(&UNK_?);
              if (pcVar9 == (code *)0x0) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,uVar19);
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


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InitializeInventory
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_40 = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackY_40 = &UNK_?;
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puStackY_40 = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puStackY_40 = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (pDVar1,(Object *)StringLiteral_text,(Object *)::StringLiteral__,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  pSVar3 = (Single__Array *)0x0;
  apSStackX_8[0] = (Single__Array *)0x0;
  pOStackX_18 = (Object *)0x0;
  pSStackX_20 = (Single__Array *)0x0;
  apOStackY_78[0] = (Object *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_text,(Object **)apSStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar4 != 0) {
    pMVar5 = (this->fields).msgObject;
    if ((pMVar5 == (MVTextMsgObject *)0x0) ||
       (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) goto code_?;
    pSVar7 = pSVar3;
    if (apSStackX_8[0] != (Single__Array *)0x0) {
      if (apSStackX_8[0]->klass == pSRam0000000182db2520) {
        pSVar7 = apSStackX_8[0];
      }
      if (pSVar7 == (Single__Array *)0x0) {
        FUN_?(apSStackX_8[0],pSRam0000000182db2520);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar6,(String *)pSVar7,(MethodInfo *)0x0);
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_textSize,&pOStackX_18,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar4 == 0) {
    pMVar5 = (this->fields).msgObject;
    if (((pMVar5 == (MVTextMsgObject *)0x0) ||
        (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) ||
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStackY_68 = CONCAT44(_UNK_?,_UNK_?);
    fStackY_60 = _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (pOStackX_18 == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pOStackX_18->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_18);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar5 = (this->fields).msgObject;
    fVar11 = *(float *)&pOStackX_18[1].klass;
    if (((pMVar5 == (MVTextMsgObject *)0x0) ||
        (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) ||
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0))
    goto code_?;
    uStackY_68 = CONCAT44(fVar11,fVar11);
    fStackY_60 = fVar11;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar9,&uStackY_68);
  if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MessageBoxSettings);
  }
  pDVar1 = (this->fields)._._._.data;
  pSVar7 = TypeInfo__MessageBoxSettings->static_fields->defaultColor;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_textColor,(Object **)&pSStackX_20,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  pSVar12 = pSStackX_20;
  pSVar13 = TypeInfo__System__Single;
  if ((bVar4 != 0) && (pSVar7 = pSVar3, pSStackX_20 != (Single__Array *)0x0)) {
    pSVar14 = pSStackX_20->klass;
    cVar15 = FUN_?(TypeInfo__System__Single);
    pSVar7 = pSVar12;
    if (cVar15 == '\0') {
      if (((pSVar14->_1).field_0x6e & 0x10) == 0) goto code_?;
      if ((((((((pSVar13->_1).token & 0x20) == 0) && ((pSVar13->_0).byval_arg.type != 0x13)) &&
            ((pSVar13->_0).byval_arg.type != 0x1e)) ||
           (((pSVar13->_0).interopData == (Il2CppInteropData *)0x0 ||
            (((pSVar13->_0).interopData)->guid == (Il2CppGuid *)0x0)))) ||
          (lVar16 = FUN_?(pSVar12), lVar16 == 0)) &&
         (pSVar7 = (Single__Array *)0x0, pSVar13 == pSRam0000000182db24a0)) {
        pSVar7 = pSVar12;
      }
    }
    if (pSVar7 == (Single__Array *)0x0) {
code_?:
      FUN_?(pSVar12,pSVar13);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pMVar5 = (this->fields).msgObject;
  if ((pMVar5 != (MVTextMsgObject *)0x0) &&
     (pTVar6 = (pMVar5->fields).textMesh, pSVar7 != (Single__Array *)0x0)) {
    if (((int)pSVar7->max_length == 0) ||
       (((uint)pSVar7->max_length < 2 || ((uint)pSVar7->max_length < 3)))) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar6 != (TextMesh *)0x0) {
      uStackY_68 = CONCAT44(pSVar7->vector[1],pSVar7->vector[0]);
      uStackY_5c = 0x3f800000;
      fStackY_60 = pSVar7->vector[2];
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar9);
      pMVar5 = (this->fields).msgObject;
      if ((pMVar5 != (MVTextMsgObject *)0x0) &&
         (pRVar17 = (pMVar5->fields).textMeshRenderer, pRVar17 != (Renderer *)0x0)) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (pRVar17,(MethodInfo *)0x0);
        pMVar5 = (this->fields).msgObject;
        if ((pMVar5 != (MVTextMsgObject *)0x0) &&
           (pTVar6 = (pMVar5->fields).textMesh, pTVar6 != (TextMesh *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CStackY_58.r = 0.0;
          CStackY_58.g = 0.0;
          CStackY_58.b = 0.0;
          CStackY_58.a = 0.0;
          pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar9,&CStackY_58);
          if (this_01 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_01,&CStackY_58,(MethodInfo *)0x0);
            pDVar1 = (this->fields)._._._.data;
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                                (pDVar1,(Object *)StringLiteral_billboard,apOStackY_78,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                );
              if (bVar4 != 0) {
                if (apOStackY_78[0] == (Object *)0x0) goto code_?;
                if ((apOStackY_78[0]->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(apOStackY_78[0]);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pMVar5 = (this->fields).msgObject;
                if (pMVar5 == (MVTextMsgObject *)0x0) goto code_?;
                MVTextMsgObject::MVTextMsgObject_Billboard
                          (pMVar5,*(bool *)&apOStackY_78[0][1].klass,(MethodInfo *)0x0);
              }
              if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
                pMVar5 = (this->fields).msgObject;
                this_00 = (this->fields)._.cullingSubscriberBase;
                if ((pMVar5 == (MVTextMsgObject *)0x0) ||
                   (pRVar17 = (pMVar5->fields).textMeshRenderer, pRVar17 == (Renderer *)0x0))
                goto code_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                CStackY_58.r = 0.0;
                CStackY_58.g = 0.0;
                CStackY_58.b = 0.0;
                CStackY_58.a = 0.0;
                uStackY_48 = 0;
                uStackY_44 = 0;
                pvVar9 = (pRVar17->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar17,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar2;
                (*pcRam_?)(pvVar9,&CStackY_58);
                uStackY_68 = CONCAT44(uStackY_48,CStackY_58.a);
                fStackY_60 = (float)uStackY_44;
                fVar11 = (float)FUN_?(&uStackY_68);
                CullingSubscriberBase::CullingSubscriberBase_set_Radius
                          (this_00,fVar11,(MethodInfo *)0x0);
              }
              return;
            }
          }
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar2,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      uVar3 = 1;
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,uVar3,0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,uVar3);
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
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar2,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      uVar3 = 0;
      goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_OnDataUpdate(MVTextMsg *this,MethodInfo *method)

{
  MVTextMsg_UpdateText(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ToggleText(Boolean) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_ToggleText
               (MVTextMsg *this,bool visible,MethodInfo *method)

{
  pMVar1 = (this->fields).msgObject;
  if (((pMVar1 == (MVTextMsgObject *)0x0) ||
      (this_00 = (pMVar1->fields).textMeshRenderer, this_00 == (Renderer *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,visible,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,visible);
  return;
}


/* Void UpdateText() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateText(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  pSVar2 = (Single__Array *)0x0;
  pSStackX_8 = (Single__Array *)0x0;
  pOStackX_18 = (Object *)0x0;
  pSStackX_20 = (Single__Array *)0x0;
  apOStack_3[0] = (Object *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_text,(Object **)&pSStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar4 != 0) {
    pMVar5 = (this->fields).msgObject;
    if ((pMVar5 == (MVTextMsgObject *)0x0) ||
       (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) goto code_?;
    pSVar7 = pSVar2;
    if (pSStackX_8 != (Single__Array *)0x0) {
      if (pSStackX_8->klass == pSRam0000000182db2520) {
        pSVar7 = pSStackX_8;
      }
      if (pSVar7 == (Single__Array *)0x0) {
        FUN_?(pSStackX_8,pSRam0000000182db2520);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar6,(String *)pSVar7,(MethodInfo *)0x0);
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_textSize,&pOStackX_18,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar4 == 0) {
    pMVar5 = (this->fields).msgObject;
    if (((pMVar5 == (MVTextMsgObject *)0x0) ||
        (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uStack_10 = CONCAT44(_UNK_?,_UNK_?);
    fStack_11 = _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    if (pOStackX_18 == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pOStackX_18->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_18);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar5 = (this->fields).msgObject;
    fVar14 = *(float *)&pOStackX_18[1].klass;
    if (((pMVar5 == (MVTextMsgObject *)0x0) ||
        (pTVar6 = (pMVar5->fields).textMesh, pTVar6 == (TextMesh *)0x0)) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    uStack_10 = CONCAT44(fVar14,fVar14);
    fStack_11 = fVar14;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar12,&uStack_10);
  if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MessageBoxSettings);
  }
  pDVar1 = (this->fields)._._._.data;
  pSVar7 = TypeInfo__MessageBoxSettings->static_fields->defaultColor;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_textColor,(Object **)&pSStackX_20,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  pSVar15 = pSStackX_20;
  pSVar16 = TypeInfo__System__Single;
  if ((bVar4 != 0) && (pSVar7 = pSVar2, pSStackX_20 != (Single__Array *)0x0)) {
    pSVar17 = pSStackX_20->klass;
    cVar18 = FUN_?(TypeInfo__System__Single);
    pSVar7 = pSVar15;
    if (cVar18 == '\0') {
      if (((pSVar17->_1).field_0x6e & 0x10) == 0) goto code_?;
      if ((((((((pSVar16->_1).token & 0x20) == 0) && ((pSVar16->_0).byval_arg.type != 0x13)) &&
            ((pSVar16->_0).byval_arg.type != 0x1e)) ||
           (((pSVar16->_0).interopData == (Il2CppInteropData *)0x0 ||
            (((pSVar16->_0).interopData)->guid == (Il2CppGuid *)0x0)))) ||
          (lVar19 = FUN_?(pSVar15), lVar19 == 0)) &&
         (pSVar7 = (Single__Array *)0x0, pSVar16 == pSRam0000000182db24a0)) {
        pSVar7 = pSVar15;
      }
    }
    if (pSVar7 == (Single__Array *)0x0) {
code_?:
      FUN_?(pSVar15,pSVar16);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pMVar5 = (this->fields).msgObject;
  if ((pMVar5 != (MVTextMsgObject *)0x0) &&
     (pTVar6 = (pMVar5->fields).textMesh, pSVar7 != (Single__Array *)0x0)) {
    if (((int)pSVar7->max_length == 0) ||
       (((uint)pSVar7->max_length < 2 || ((uint)pSVar7->max_length < 3)))) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar6 != (TextMesh *)0x0) {
      uStack_10 = CONCAT44(pSVar7->vector[1],pSVar7->vector[0]);
      uStack_20 = 0x3f800000;
      fStack_11 = pSVar7->vector[2];
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar12);
      pMVar5 = (this->fields).msgObject;
      if ((pMVar5 != (MVTextMsgObject *)0x0) &&
         (pRVar21 = (pMVar5->fields).textMeshRenderer, pRVar21 != (Renderer *)0x0)) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (pRVar21,(MethodInfo *)0x0);
        pMVar5 = (this->fields).msgObject;
        if ((pMVar5 != (MVTextMsgObject *)0x0) &&
           (pTVar6 = (pMVar5->fields).textMesh, pTVar6 != (TextMesh *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CStack_22.r = 0.0;
          CStack_22.g = 0.0;
          CStack_22.b = 0.0;
          CStack_22.a = 0.0;
          pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar12,&CStack_22);
          if (this_01 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_01,&CStack_22,(MethodInfo *)0x0);
            pDVar1 = (this->fields)._._._.data;
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                                (pDVar1,(Object *)StringLiteral_billboard,apOStack_3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                );
              if (bVar4 != 0) {
                if (apOStack_3[0] == (Object *)0x0) goto code_?;
                if ((apOStack_3[0]->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(apOStack_3[0]);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pMVar5 = (this->fields).msgObject;
                if (pMVar5 == (MVTextMsgObject *)0x0) goto code_?;
                MVTextMsgObject::MVTextMsgObject_Billboard
                          (pMVar5,*(bool *)&apOStack_3[0][1].klass,(MethodInfo *)0x0);
              }
              if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
                pMVar5 = (this->fields).msgObject;
                this_00 = (this->fields)._.cullingSubscriberBase;
                if ((pMVar5 == (MVTextMsgObject *)0x0) ||
                   (pRVar21 = (pMVar5->fields).textMeshRenderer, pRVar21 == (Renderer *)0x0))
                goto code_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                CStack_22.r = 0.0;
                CStack_22.g = 0.0;
                CStack_22.b = 0.0;
                CStack_22.a = 0.0;
                uStack_23 = 0;
                uStack_24 = 0;
                pvVar12 = (pRVar21->fields)._._.m_CachedPtr;
                if (pvVar12 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar21,(MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(pvVar12,&CStack_22);
                uStack_10 = CONCAT44(uStack_23,CStack_22.a);
                fStack_11 = (float)uStack_24;
                fVar14 = (float)FUN_?(&uStack_10);
                CullingSubscriberBase::CullingSubscriberBase_set_Radius
                          (this_00,fVar14,(MethodInfo *)0x0);
              }
              return;
            }
          }
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVTextMsg(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg__ctor
               (MVTextMsg *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTextMsgObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTextMsgPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x18380;
    pMVar3 = (MVTextMsgObject *)(this->fields)._._.component;
    if (pMVar3 == (MVTextMsgObject *)0x0) {
      (this->fields).msgObject = (MVTextMsgObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).msgObject = pMVar3;
      bVar4 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).msgObject >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    this_00 = (this->fields)._._.gameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BStack_10.m_Center.x = 0.0;
      BStack_10.m_Center.y = 0.0;
      BStack_10.m_Center.z = 0.0;
      pvVar11 = (obj->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar11,&BStack_10);
      pMVar3 = (this->fields).msgObject;
      if (pMVar3 != (MVTextMsgObject *)0x0) {
        VStack_13.x = BStack_10.m_Center.x;
        VStack_13.y = BStack_10.m_Center.y;
        VStack_13.z = BStack_10.m_Center.z;
        pBVar14 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                            (&BStack_10,(MVLogicObject *)this,&VStack_13,
                             (pMVar3->fields)._.meshRenderers,(MethodInfo *)0x0);
        fVar15 = (pBVar14->m_Center).y;
        uVar12 = *(undefined8 *)&(pBVar14->m_Center).z;
        fVar16 = (pBVar14->m_Extents).y;
        fVar17 = (pBVar14->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar14->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar15;
        *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar12;
        (this->fields).localBounds.m_Extents.y = fVar16;
        (this->fields).localBounds.m_Extents.z = fVar17;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

