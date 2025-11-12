
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddPreviewBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PreviewBox);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__;
  pGVar2 = (this->fields)._._.gameObject;
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  if ((PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__->
      field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                 );
  }
  this_00 = (PreviewBox *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                      (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
  if (this_00 == (PreviewBox *)0x0) {
code_?:
    pGVar2 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                       ((MVWorldObjectClient *)this,StringLiteral_PreviewBox,_UNK_?,
                        (MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto DAT_?;
    this_00 = (PreviewBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__)
    ;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds
                     (aBStack_4,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  uVar5._0_4_ = (pBVar3->m_Extents).y;
  uVar5._4_4_ = (pBVar3->m_Extents).z;
  uVar6._0_4_ = (pBVar3->m_Center).x;
  uVar6._4_4_ = (pBVar3->m_Center).y;
  uVar7 = *(undefined8 *)&(pBVar3->m_Center).z;
  if (this_00 != (PreviewBox *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      VStack_8.z = (float)uVar7;
      VStack_8._0_8_ = uVar6;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9,&VStack_8);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar11 != (PrefabPool *)0x0) {
        material = (pPVar11->fields).previewBoxMaterial;
        aBStack_4[0].m_Center._0_8_ = uVar6;
        aBStack_4[0]._8_8_ = uVar7;
        aBStack_4[0].m_Extents._4_8_ = uVar5;
        corners = MVCubeModelInstance_GetCorners(this,aBStack_4,(MethodInfo *)0x0);
        PreviewBox::PreviewBox_Show(this_00,material,corners,(MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddSelectionBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SelectionBox);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__;
  pGVar2 = (this->fields)._._.gameObject;
  if (pGVar2 == (GameObject *)0x0) goto DAT_?;
  if ((SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__->
      field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                 );
  }
  this_00 = (SelectionBox *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                      (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
  if (this_00 == (SelectionBox *)0x0) {
code_?:
    pGVar2 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                       ((MVWorldObjectClient *)this,StringLiteral_SelectionBox,_UNK_?,
                        (MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto DAT_?;
    this_00 = (SelectionBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                        );
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds
                     (aBStack_4,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  uVar5._0_4_ = (pBVar3->m_Extents).y;
  uVar5._4_4_ = (pBVar3->m_Extents).z;
  uVar6._0_4_ = (pBVar3->m_Center).x;
  uVar6._4_4_ = (pBVar3->m_Center).y;
  uVar7 = *(undefined8 *)&(pBVar3->m_Center).z;
  if (this_00 != (SelectionBox *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      VStack_8.z = (float)uVar7;
      VStack_8._0_8_ = uVar6;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9,&VStack_8);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar11 != (PrefabPool *)0x0) {
        material = (pPVar11->fields).selectBoxMaterial;
        aBStack_4[0].m_Center._0_8_ = uVar6;
        aBStack_4[0]._8_8_ = uVar7;
        aBStack_4[0].m_Extents._4_8_ = uVar5;
        corners = MVCubeModelInstance_GetCorners(this,aBStack_4,(MethodInfo *)0x0);
        SelectionBox::SelectionBox_FadeIn(this_00,_UNK_?,material,corners,(MethodInfo *)0x0)
        ;
        return;
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ChangeLODVisible() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_ChangeLODVisible
               (MVCubeModelInstance *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if (this_00 == (RuntimePrototypeCubeModel *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (this->fields).isVisible == 0;
  if (bVar2) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (this_00,(MethodInfo *)0x0);
  }
  else {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
              (this_00,(MethodInfo *)0x0);
  }
  bVar2 = !bVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,bVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.chunkInstances == (ChunkInstances *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar3 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar4 == '\0') {
      lVar5 = FUN_?(plVar3,TypeInfo__System__IDisposable);
      if (lVar5 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar5);
      }
      return;
    }
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar5 = *plVar3;
    uVar6 = 0;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) * 0x10
                    + 0x138 + lVar5);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_?(plVar3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar8 = (longlong *)(*(code *)*puVar7)(plVar3,puVar7[1]);
    if (plVar8 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar9 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar8 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar8,pKVar9);
      goto code_?;
    }
    obj = (Object *)plVar8[7];
    if (obj == (Object *)0x0) {
code_?:
      plVar8 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar10 = obj[1].klass;
    if (pOVar10 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11);
      goto code_?;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pOVar10,bVar2);
  } while( true );
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Compare
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if ((wo->fields)._.type == (this->fields)._._._.type) {
      bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((wo->klass->_1).naturalAligment < bVar1) ||
         ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(wo);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (this->fields)._.prototypeCubeModel;
      if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometryDetailed
                (this_00,(RuntimePrototypeCubeModel *)wo[1].klass,visibleCubesOnly,matchingCubeCount
                 ,investigatedCubeCount,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_CompareWithKoGaMaPackage
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_protoTypeID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (((((pRVar1 != (RuntimePrototypeCubeModel *)0x0) &&
        (*insertedByProfileId = (pRVar1->fields)._AuthorProfileID_k__BackingField,
        koGaMaPackageClient != (KoGaMaPackageClient *)0x0)) &&
       (this_00 = (koGaMaPackageClient->fields).prototypes, wo != (MVWorldObjectClient *)0x0)) &&
      ((this_01 = (wo->fields)._.data, this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0
       && (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_01,(Object *)StringLiteral_protoTypeID,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ),
          this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)))) &&
     (pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    rpcm = (RuntimePrototypeCubeModel *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                      *(int32_t *)&pOVar2[1].klass,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                     );
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      bVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
                        (pRVar1,rpcm,(MethodInfo *)0x0);
      puVar5 = (undefined8 *)
               (*(this->klass->vtable).get_Scale.methodPtr)
                         (auStack_6,this,(this->klass->vtable).get_Scale.method);
      if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
        fStack_7 = (float)*puVar5;
        if (((fStack_7 == (rpcm->fields)._Scale_k__BackingField) &&
            (lVar8 = (*(this->klass->vtable).get_Scale.methodPtr)
                               (auStack_6,this,(this->klass->vtable).get_Scale.method),
            *(float *)(lVar8 + 4) == (rpcm->fields)._Scale_k__BackingField)) &&
           (lVar8 = (*(this->klass->vtable).get_Scale.methodPtr)
                              (auStack_6,this,(this->klass->vtable).get_Scale.method),
           *(float *)(lVar8 + 8) == (rpcm->fields)._Scale_k__BackingField)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        return bVar9 & bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_DeSelect
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)(this);
  pTVar1 = (this->fields).transformGizmo;
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
  if (pTVar1 != (TransformGizmo *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).transformGizmo;
      if (pTVar1 != (TransformGizmo *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar1,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  if ((this->fields)._._.selected != 0) {
    pMVar3 = this->klass;
    (this->fields)._._.selected = 0;
    (*(pMVar3->vtable).OnSelectedChanged.methodPtr)
              (this,0,(pMVar3->vtable).OnSelectedChanged.method);
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Destroy
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                (pRVar1,(this->fields)._._._.id,(MethodInfo *)0x0);
      if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy
                  ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      source = (this->fields)._.BeingEditedChanged;
      do {
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
        pEVar8 = TypeInfo__System__EventHandler<EditStateEventArgs>;
        if (pDVar7 == (Delegate *)0x0) {
          pEVar9 = (EventHandler_1_EditStateEventArgs_ *)0x0;
        }
        else {
          pEVar9 = (EventHandler_1_EditStateEventArgs_ *)FUN_?(pDVar7);
          if (pEVar9 == (EventHandler_1_EditStateEventArgs_ *)0x0) {
            FUN_?(pDVar7,pEVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        ppEVar11 = &(this->fields)._.BeingEditedChanged;
        LOCK();
        pEVar12 = *ppEVar11;
        bVar2 = source == pEVar12;
        if (bVar2) {
          *ppEVar11 = pEVar9;
          pEVar12 = source;
        }
        UNLOCK();
        pEVar9 = source;
        if (!bVar2) {
          pEVar9 = pEVar12;
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields)._.BeingEditedChanged >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        bVar2 = pEVar9 != source;
        source = pEVar9;
      } while (bVar2);
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MVWorldObjectClient::MVWorldObjectClient_Destroy
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      pRVar1 = (this->fields)._.prototypeCubeModel;
      if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pAVar13 = (pRVar1->fields).DirtyChunksRegenerated;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).DirtyChunksRegeneratedHandler.method,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar13,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar14 = 
      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
      if (pDVar7 == (Delegate *)0x0) {
        (pRVar1->fields).DirtyChunksRegenerated =
             (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      }
      else {
        pAVar13 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                 FUN_?(pDVar7,
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                              );
        if (pAVar13 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0
           ) {
          FUN_?(pDVar7,pAVar14);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pRVar1->fields).DirtyChunksRegenerated = pAVar13;
        pAVar14 = 
        TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
        ;
        lVar4 = FUN_?(pDVar7,
                               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                              );
        if (lVar4 == 0) {
          FUN_?(pDVar7,pAVar14);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pRVar1->fields).DirtyChunksRegenerated >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar15 = *puVar6;
          LOCK();
          uVar5 = *puVar6;
          if (uVar15 == uVar5) {
            *puVar6 = uVar15 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar15 != uVar5);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DrawTransformGizmo() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_DrawTransformGizmo
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__Object__Instantiate<IngameController::MVEditor::TransformGizmo>_IngameController__MVEditor__TransformGizmo__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
  ;
  pGVar2 = (this->fields)._._.gameObject;
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  if ((
      IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
                 );
  }
  pTVar3 = (TransformGizmo *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                     (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
  bVar4 = iRam_? != 0;
  (this->fields).transformGizmo = pTVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).transformGizmo >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pTVar3 = (this->fields).transformGizmo;
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
  if (pTVar3 != (TransformGizmo *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar3 = (this->fields).transformGizmo;
      if ((pTVar3 == (TransformGizmo *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar3,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pBVar9 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (&BStack_10,(MVCubeModelBase *)this,(MethodInfo *)0x0);
      pTVar3 = (this->fields).transformGizmo;
      uStack_11._0_4_ = (pBVar9->m_Center).x;
      uStack_11._4_4_ = (pBVar9->m_Center).y;
      uStack_12 = *(undefined8 *)&(pBVar9->m_Center).z;
      BStack_10.m_Extents.y = (pBVar9->m_Extents).y;
      BStack_10.m_Extents.z = (pBVar9->m_Extents).z;
      if (pTVar3 == (TransformGizmo *)0x0) goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar3,(MethodInfo *)0x0);
      if (pTVar13 == (Transform *)0x0) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (pTVar13->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar17 != (PrefabPool *)0x0) {
    pGVar2 = (this->fields)._._.gameObject;
    pTVar3 = (pPVar17->fields).transformGizmo;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar3 = (TransformGizmo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                         ((Object *)pTVar3,pTVar13,
                          IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__Object__Instantiate<IngameController::MVEditor::TransformGizmo>_IngameController__MVEditor__TransformGizmo__UnityEngine__Transform_
                         );
      bVar4 = iRam_? != 0;
      (this->fields).transformGizmo = pTVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).transformGizmo >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pBVar9 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (&BStack_10,(MVCubeModelBase *)this,(MethodInfo *)0x0);
      pTVar3 = (this->fields).transformGizmo;
      uStack_11._0_4_ = (pBVar9->m_Center).x;
      uStack_11._4_4_ = (pBVar9->m_Center).y;
      uStack_12 = *(undefined8 *)&(pBVar9->m_Center).z;
      BStack_10.m_Extents.y = (pBVar9->m_Extents).y;
      BStack_10.m_Extents.z = (pBVar9->m_Extents).z;
      if (pTVar3 != (TransformGizmo *)0x0) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pTVar13 == (Transform *)0x0) {
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (pTVar13->fields)._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
code_?:
        pcRam_? = pcVar14;
        (*pcRam_?)(pvVar15,&uStack_11);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void EnableCulling() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_EnableCulling
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  pUVar6 = (this->fields)._._.PositionChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._._.PositionChanged = pUVar6;
    pUVar9 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar11 = (this->fields)._._.RotationChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar11,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
  }
  else {
    pUVar11 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
              FUN_?(pDVar8,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                           );
    if (pUVar11 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._._.RotationChanged = pUVar11;
    pUVar12 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.RotationChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar13 = (this->fields)._.ChunksChanged;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar13,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar14 = 
  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._.ChunksChanged =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  }
  else {
    pAVar13 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
              FUN_?(pDVar8,
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                           );
    if (pAVar13 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._.ChunksChanged = pAVar13;
    pAVar14 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.ChunksChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array *
Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_GetCorners
          (MVCubeModelInstance *this,Bounds *bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    fVar2 = _UNK_?;
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto DAT_?;
      cVar3 = FUN_?(0);
      fVar2 = _UNK_?;
      if (cVar3 != '\0') {
        fVar2 = _UNK_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (pVVar4->oneVector).x;
    uVar6 = (pVVar4->oneVector).y;
    fVar7 = (float)uVar5 * _UNK_?;
    fVar8 = (pVVar4->oneVector).z * _UNK_?;
    fVar9 = (float)uVar6 * _UNK_?;
    uVar10 = (bounds->m_Extents).x;
    uVar11 = (bounds->m_Extents).y;
    uVar12 = (bounds->m_Center).x;
    uVar13 = (bounds->m_Center).y;
    fVar14 = (bounds->m_Center).z;
    fVar15 = (bounds->m_Extents).z;
    aVStack_16[0].x = (bounds->m_Center).x;
    aVStack_16[0].y = (bounds->m_Center).y;
    fVar17 = (bounds->m_Extents).z;
    fVar18 = (bounds->m_Center).z;
    fVar19 = (float)uVar10 + aVStack_16[0].x;
    fVar20 = (float)uVar11 + aVStack_16[0].y;
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
      VStack_21.x = 0.0;
      VStack_21.y = 0.0;
      VStack_21.z = 0.0;
      pvVar22 = (obj->fields)._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar23 = (code *)swi(3);
        pVVar24 = (Vector3__Array *)(*pcVar23)();
        return pVVar24;
      }
      pcVar23 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
        uVar25 = func_?(&UNK_?);
        FUN_?(uVar25,0);
        pcVar23 = (code *)swi(3);
        pVVar24 = (Vector3__Array *)(*pcVar23)();
        return pVVar24;
      }
      pcRam_? = pcVar23;
      (*pcRam_?)(pvVar22,&VStack_21);
      fVar2 = fVar2 / VStack_21.y;
      dVar26 = MathFunctions::MathFunctions_Truncate
                         ((double)((((float)uVar12 - (float)uVar10) + fVar7) / fVar2),5,
                          (MethodInfo *)0x0);
      dVar27 = MathFunctions::MathFunctions_Truncate
                         ((double)((((float)uVar13 - (float)uVar11) + fVar9) / fVar2),5,
                          (MethodInfo *)0x0);
      dVar28 = MathFunctions::MathFunctions_Truncate
                         ((double)(((fVar14 - fVar15) + fVar8) / fVar2),5,(MethodInfo *)0x0);
      dVar29 = MathFunctions::MathFunctions_Truncate
                         ((double)((fVar19 + fVar7) / fVar2),5,(MethodInfo *)0x0);
      dVar30 = MathFunctions::MathFunctions_Truncate
                         ((double)((fVar20 + fVar9) / fVar2),5,(MethodInfo *)0x0);
      dVar31 = MathFunctions::MathFunctions_Truncate
                         ((double)((fVar17 + fVar18 + fVar8) / fVar2),5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Math);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar25._0_4_ = (bounds->m_Center).x;
      uVar25._4_4_ = (bounds->m_Center).y;
      dVar26 = (double)func_?((double)(float)dVar26);
      dVar27 = (double)func_?((double)(float)dVar27);
      aVStack_16[0]._0_8_ = uVar25;
      dVar28 = (double)func_?((double)(float)dVar28);
      fVar14 = (bounds->m_Center).z;
      fVar17 = (float)func_?((float)dVar29);
      fVar18 = (float)func_?((float)dVar30);
      aVStack_16[0]._0_8_ = uVar25;
      fVar20 = (float)func_?((float)dVar31);
      fVar15 = (bounds->m_Center).z;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_21.y = (fVar18 * fVar2 - fVar9) - uVar25._4_4_;
      VStack_21.x = (fVar17 * fVar2 - fVar7) - (float)uVar25;
      aVStack_16[0].y = ((float)dVar27 * fVar2 - fVar9) - uVar25._4_4_;
      aVStack_16[0].x = ((float)dVar26 * fVar2 - fVar7) - (float)uVar25;
      VStack_21.z = (fVar20 * fVar2 - fVar8) - fVar15;
      aVStack_16[0].z = ((float)dVar28 * fVar2 - fVar8) - fVar14;
      pVVar24 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
                          (aVStack_16,&VStack_21,(MethodInfo *)0x0);
      return pVVar24;
    }
  }
DAT_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  pVVar24 = (Vector3__Array *)(*pcVar23)();
  return pVVar24;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Initialize
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  iVar1 = (this->fields)._._._.groupId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      ((pMVar3->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((pMVar3->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                       (this_00,(MethodInfo *)0x0);
    if (pMVar4 != (MVGroup *)0x0) {
      if (iVar1 == (pMVar4->fields)._._.id) {
        MVCubeModelInstance_EnableCulling(this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   ,(MethodInfo *)0x0);
        MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                  ((MVCubeModelBase *)this,(EventHandler_1_EditStateEventArgs_ *)this_01,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsLodVisible(CullingGroupEvent) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) != 0) ||
       (((ulonglong)cullingGroupEvent >> 0x20 & 0x80) == 0)) &&
      ((uVar5 = cullingGroupEvent._4_4_, (int)(uVar5 >> 8 & 0x7f) <= iVar4 ||
       (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0)))) &&
     (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) != 0)) {
    if ((((ulonglong)cullingGroupEvent >> 0x20 & 0x80) != 0) && (iVar4 < (int)(uVar5 >> 8 & 0x7f)))
    {
      return (int)(uVar5 >> 8 & 0x7f) <= iVar4;
    }
    return 1;
  }
  return 0;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVCubeModelInstance::
     MVCubeModelInstance_MVCubeModelBase_BeingEditedChanged
               (Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sender == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
  if (((sender->klass->_1).naturalAligment < bVar2) ||
     ((MVCubeModelBase__Class *)(sender->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
      TypeInfo__MVCubeModelBase)) {
    FUN_?(sender);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVar3 = MVCubeModelBase::MVCubeModelBase_CalculateCurrentTransparencySettings
                    ((MVCubeModelBase *)sender,(MethodInfo *)0x0);
  if ((ChunkInstances *)sender[0x14].monitor != (ChunkInstances *)0x0) {
    ChunkInstances::ChunkInstances_SetTransparent
              ((ChunkInstances *)sender[0x14].monitor,MVar3.active,(MethodInfo *)0x0);
    if (sender[0x14].monitor != (MonitorData *)0x0) {
      plVar4 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
      fStackX_24 = MVar3.alphaToUse;
code_?:
      do {
        if (plVar4 == (longlong *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar5 == '\0') {
          lVar6 = FUN_?(plVar4,TypeInfo__System__IDisposable);
          if (lVar6 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar6);
          }
          return;
        }
        if (plVar4 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar6 = *plVar4;
        uVar7 = 0;
        if (*(ushort *)(lVar6 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 1) *
                        0x10 + 0x138 + lVar6);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_?(plVar4,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar9 = (longlong *)(*(code *)*puVar8)(plVar4,puVar8[1]);
        if (plVar9 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pKVar10 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar9 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
code_?:
          FUN_?(plVar9,pKVar10);
          goto code_?;
        }
        this = (Renderer *)plVar9[7];
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (MVar3.active == 0) {
          if (pMVar11 != (MaterialLoader *)0x0) {
            if (this != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                        (this,(pMVar11->fields)._CubeModelMaterial_k__BackingField,(MethodInfo *)0x0)
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                        (this,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
              goto code_?;
            }
            FUN_?();
          }
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          plVar9 = (longlong *)FUN_?();
          goto code_?;
        }
        if (pMVar11 == (MaterialLoader *)0x0) goto code_?;
        if (this == (Renderer *)0x0) goto code_?;
        pKVar10 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (this,(pMVar11->fields)._CubeModelMaterialTransp_k__BackingField,(MethodInfo *)0x0)
        ;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVCubeModelBase);
        }
        if (this_00 == (Material *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                  (this_00,TypeInfo__MVCubeModelBase->static_fields->TransparencyShaderProperty,
                   fStackX_24,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                  (this,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnChanged
               (MVCubeModelInstance *this,HashSet_1_MV_WorldObject_IntVector_ *chunks,
               MethodInfo *method)

{
  pBVar1 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                      (&BStack_2,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  fVar3 = (pBVar1->m_Center).x;
  fVar4 = (pBVar1->m_Center).y;
  uVar5._0_4_ = (pBVar1->m_Center).x;
  uVar5._4_4_ = (pBVar1->m_Center).y;
  fVar6 = (pBVar1->m_Center).z;
  pVVar7 = &pBVar1->m_Extents;
  fStack_8 = pVVar7->x;
  uVar9 = (pBVar1->m_Extents).y;
  uVar10 = (pBVar1->m_Extents).z;
  BStack_2.m_Center.x = pVVar7->x;
  BStack_2.m_Center.y = pVVar7->y;
  BStack_2.m_Center.z = (float)uVar10;
  fStack_11 = fVar3;
  fStack_12 = fVar4;
  fStack_13 = fVar6;
  uStack_14 = uVar9;
  fStack_15 = (float)uVar10;
  fVar16 = (float)FUN_?(&BStack_2);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    BStack_2.m_Center._0_8_ = uVar5;
    BStack_2.m_Center.z = fVar6;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,fVar16,&BStack_2.m_Center,(MethodInfo *)0x0);
    puVar17 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&BStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
    fVar16 = *(float *)((longlong)puVar17 + 4);
    fVar18 = *(float *)(puVar17 + 1);
    (this->fields).positionOffset.x = (float)*puVar17 - fVar3;
    (this->fields).positionOffset.y = fVar16 - fVar4;
    (this->fields).positionOffset.z = fVar18 - fVar6;
    return;
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnContextMenu() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnContextMenu
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transformGizmo;
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
  if (pTVar1 != (TransformGizmo *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).transformGizmo;
      if ((pTVar1 != (TransformGizmo *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnEnterObject
               (MVCubeModelInstance *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnEnter_called_with_no_seletect_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  value = (Object *)0x0;
  if (pMVar3 == (MVWorldObjectClient *)0x0) {
    this_00 = (e->fields).selectionController;
    if (this_00 == (SelectionController *)0x0) goto code_?;
    SelectionController::SelectionController_SelectWO
              (this_00,(this->fields)._._._.id,0,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnEnter_called_with_no_seletect_,(MethodInfo *)0x0);
  }
  uStackX_10 = 0;
  iVar4._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
  iVar4._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
  iVar4._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
  if (iVar4 < 0) {
    if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
      value = (Object *)FUN_?(TypeInfo__EditorEvent);
      FUN_?(value + 1,&uStackX_10);
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)(value + 1) >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
  }
  else {
    value = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  return 1;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnPositionChanged
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    uVar2 = (this->fields).positionOffset.x;
    uVar3 = (this->fields).positionOffset.y;
    uVar4 = (positionChangedEventArgs->fields).NewPos.x;
    fVar5 = (positionChangedEventArgs->fields).NewPos.y;
    fVar6 = (positionChangedEventArgs->fields).NewPos.z;
    fVar7 = (this->fields).positionOffset.z;
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar8 != (BoundingSphere__Array *)0x0) {
        uVar9 = (pCVar1->fields)._CullingIndex_k__BackingField;
        if (uVar9 < (uint)pBVar8->max_length) {
          pBVar8->vector[(int)uVar9].position.x = (float)uVar4 - (float)uVar2;
          pBVar8->vector[(int)uVar9].position.y = fVar5 - (float)uVar3;
          pBVar8->vector[(int)uVar9].position.z = fVar6 - fVar7;
          return;
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnStateChanged
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  bVar1 = MVCubeModelInstance_IsLodVisible(this,cullingGroupEvent,(MethodInfo *)0x0);
  this_00 = (this->fields)._.prototypeCubeModel;
  (this->fields).isVisible = bVar1;
  if (this_00 == (RuntimePrototypeCubeModel *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bVar1 == 0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (this_00,(MethodInfo *)0x0);
  }
  else {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
              (this_00,(MethodInfo *)0x0);
  }
  bVar3 = bVar1 != 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,bVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.chunkInstances == (ChunkInstances *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar4 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar5 == '\0') {
      lVar6 = FUN_?(plVar4,TypeInfo__System__IDisposable);
      if (lVar6 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar6);
      }
      return;
    }
    if (plVar4 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar6 = *plVar4;
    uVar7 = 0;
    if (*(ushort *)(lVar6 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 1) *
                    0x10 + 0x138 + lVar6);
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_?(plVar4,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar9 = (longlong *)(*(code *)*puVar8)(plVar4,puVar8[1]);
    if (plVar9 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar10 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar9 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar9,pKVar10);
      goto code_?;
    }
    obj = (Object *)plVar9[7];
    if (obj == (Object *)0x0) {
code_?:
      plVar9 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = obj[1].klass;
    if (pOVar11 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar11,bVar3);
  } while( true );
}


/* Void Rebuild() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Rebuild
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_4 = (pRVar1->fields).chunks;
  if (pDStack_4 == (Dictionary_2_MV_WorldObject_IntVector_CubeModelChunk_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_5 = 0;
  uStack_6 = 0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_4 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  uStack_12 = (ulonglong)(uint)(pDStack_4->fields)._version;
  uStack_13 = 2;
  auStack_2._8_8_ = uStack_12;
  KStack_14.key.x = 0;
  KStack_14.key.y = 0;
  KStack_14.key.z = 0;
  KStack_14._6_2_ = 0;
  KStack_14.value = (Object *)0x0;
  uStack_15._0_4_ = 2;
  uStack_15._4_4_ = 0;
  auStack_2._0_8_ = pDStack_4;
  while( true ) {
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
            WorldObject::IntVector,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                        *)auStack_2,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                      );
    if (bVar16 == 0) {
      return;
    }
    if ((CubeModelChunk *)KStack_14.value == (CubeModelChunk *)0x0) break;
    CubeModelChunk::CubeModelChunk_RebuildChunk
              ((CubeModelChunk *)KStack_14.value,(pRVar1->fields)._Scale_k__BackingField,
               (MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCullDistanceBand(Int32) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetCullDistanceBand
               (MVCubeModelInstance *this,int32_t distanceBandIndex,MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    (pCVar1->fields)._DistanceBandIndex_k__BackingField = distanceBandIndex;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullSphereToMeshBounds() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetCullSphereToMeshBounds
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pBVar1 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                      (&BStack_2,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  fVar3 = (pBVar1->m_Center).x;
  fVar4 = (pBVar1->m_Center).y;
  uVar5._0_4_ = (pBVar1->m_Center).x;
  uVar5._4_4_ = (pBVar1->m_Center).y;
  fVar6 = (pBVar1->m_Center).z;
  pVVar7 = &pBVar1->m_Extents;
  fStack_8 = pVVar7->x;
  uVar9 = (pBVar1->m_Extents).y;
  uVar10 = (pBVar1->m_Extents).z;
  BStack_2.m_Center.x = pVVar7->x;
  BStack_2.m_Center.y = pVVar7->y;
  BStack_2.m_Center.z = (float)uVar10;
  fStack_11 = fVar3;
  fStack_12 = fVar4;
  fStack_13 = fVar6;
  uStack_14 = uVar9;
  fStack_15 = (float)uVar10;
  fVar16 = (float)FUN_?(&BStack_2);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    BStack_2.m_Center._0_8_ = uVar5;
    BStack_2.m_Center.z = fVar6;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,fVar16,&BStack_2.m_Center,(MethodInfo *)0x0);
    puVar17 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&BStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
    fVar16 = *(float *)((longlong)puVar17 + 4);
    fVar18 = *(float *)(puVar17 + 1);
    (this->fields).positionOffset.x = (float)*puVar17 - fVar3;
    (this->fields).positionOffset.y = fVar16 - fVar4;
    (this->fields).positionOffset.z = fVar18 - fVar6;
    return;
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetLod(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetLod
               (MVCubeModelInstance *this,bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,CONCAT71(in_register_00000011,enabled));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.chunkInstances == (ChunkInstances *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar2 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar2 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      lVar4 = FUN_?(plVar2,TypeInfo__System__IDisposable);
      if (lVar4 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar4);
      }
      return;
    }
    if (plVar2 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar4 = *plVar2;
    uVar5 = 0;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 1) * 0x10
                    + 0x138 + lVar4);
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_?(plVar2,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar7 = (longlong *)(*(code *)*puVar6)(plVar2,puVar6[1]);
    if (plVar7 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar8 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar7 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar7,pKVar8);
      goto code_?;
    }
    obj = (Object *)plVar7[7];
    if (obj == (Object *)0x0) {
code_?:
      plVar7 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar9 = obj[1].klass;
    if (pOVar9 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10);
      goto code_?;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pOVar9,enabled);
  } while( true );
}


/* Void SetupCulling(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetupCulling
               (MVCubeModelInstance *this,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *onStateChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,onStateChanged,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  pUVar6 = (this->fields)._._.PositionChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._._.PositionChanged = pUVar6;
    pUVar9 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar9);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar11 = (this->fields)._._.RotationChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                        );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar11,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
  ;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
  }
  else {
    pUVar11 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
              FUN_?(pDVar8,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                           );
    if (pUVar11 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._._.RotationChanged = pUVar11;
    pUVar12 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pUVar12);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.RotationChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar13 = (this->fields)._.ChunksChanged;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar13,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar14 = 
  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._.ChunksChanged =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  }
  else {
    pAVar13 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
              FUN_?(pDVar8,
                            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                           );
    if (pAVar13 == (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._.ChunksChanged = pAVar13;
    pAVar14 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    lVar3 = FUN_?(pDVar8,
                           TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar8,pAVar14);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.ChunksChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* MVCubeModelInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance__ctor
               (MVCubeModelInstance *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
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
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).positionOffset.x = (pVVar1->zeroVector).x;
  (this->fields).positionOffset.y = fVar2;
  (this->fields).positionOffset.z = fVar3;
  if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  piVar4 = &(this->fields)._._.interactionFlags;
  *piVar4 = *piVar4 | 0x4000803383;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar7 != (MVLocalPlayer *)0x0) {
      if (((pMVar7->fields)._._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
         ((((pMVar7->fields)._._UserProfileData_k__BackingField)->fields).IsAdmin != 0)) {
        piVar4 = &(this->fields)._._.interactionFlags;
        *piVar4 = *piVar4 | 0x8000000000;
      }
      iVar8 = (pMVar7->fields)._._ProfileID_k__BackingField;
      if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      pRVar9 = (this->fields)._.prototypeCubeModel;
      if (pRVar9 != (RuntimePrototypeCubeModel *)0x0) {
        uVar10 = (this->fields)._._.interactionFlags;
        if (iVar8 == (pRVar9->fields)._AuthorProfileID_k__BackingField) {
          uVar10 = uVar10 | 0x4000;
        }
        else {
          uVar10 = uVar10 & 0xffffffffffffbfff;
        }
        (this->fields)._._.interactionFlags = uVar10;
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean get_IsVisibleSet() */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_get_IsVisibleSet
               (MVCubeModelInstance *this,MethodInfo *method)

{
  return (this->fields).isVisible;
}

