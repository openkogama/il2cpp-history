
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddPreviewBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  pGVar6 = (this->fields)._._.gameObject;
  if (pGVar6 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar6,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pGVar6 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                         ((MVWorldObjectClient *)this,StringLiteral_PreviewBox,1.005,
                          (MethodInfo *)0x0);
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      this_00 = (UseInteratorVisualization__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar6,
                           PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__
                          );
    }
    pBVar8 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_9,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    fStack_1 = (pBVar8->m_Center).x;
    fStack_2 = (pBVar8->m_Center).y;
    fStack_3 = (pBVar8->m_Center).z;
    fStack_4 = (pBVar8->m_Extents).x;
    uStack_5._0_4_ = (pBVar8->m_Extents).y;
    uStack_5._4_4_ = (pBVar8->m_Extents).z;
    if (this_00 != (UseInteratorVisualization__Array *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pVVar10 = (Vector3 *)func_?(&BStack_9.m_Extents,&fStack_1,0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,*pVVar10,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 != (PrefabPool *)0x0) {
          material = PrefabPool::PrefabPool_get_PreviewBoxMaterial(this_02,(MethodInfo *)0x0);
          bounds.m_Center.y = fStack_2;
          bounds.m_Center.x = fStack_1;
          bounds.m_Center.z = fStack_3;
          bounds.m_Extents.x = fStack_4;
          bounds.m_Extents.y = (float)(int)uStack_5;
          bounds.m_Extents.z = (float)((ulonglong)uStack_5 >> 0x20);
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          PreviewBox::PreviewBox_Show((PreviewBox *)this_00,material,corners,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddSelectionBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  pGVar3 = (this->fields)._._.gameObject;
  if (pGVar3 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar3,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pGVar3 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                         ((MVWorldObjectClient *)this,StringLiteral_SelectionBox,1.001,
                          (MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      this_00 = (UseInteratorVisualization__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar3,
                           SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                          );
    }
    pBVar5 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       ((Bounds *)&stack0xffffffe4,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    fStack_1 = (pBVar5->m_Center).x;
    puStack_2 = (undefined *)(pBVar5->m_Center).y;
    fVar6 = (pBVar5->m_Center).z;
    fVar7 = (pBVar5->m_Extents).x;
    uVar8._0_4_ = (pBVar5->m_Extents).y;
    uVar8._4_4_ = (pBVar5->m_Extents).z;
    if (this_00 != (UseInteratorVisualization__Array *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pVVar9 = (Vector3 *)func_?(auStack_10,&fStack_1,0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,*pVVar9,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 != (PrefabPool *)0x0) {
          material = PrefabPool::PrefabPool_get_SelectBoxMaterial(this_02,(MethodInfo *)0x0);
          bounds.m_Center.y = (float)puStack_2;
          bounds.m_Center.x = fStack_1;
          bounds.m_Center.z = fVar6;
          bounds.m_Extents.x = fVar7;
          bounds.m_Extents.y = (float)(int)uVar8;
          bounds.m_Extents.z = (float)((ulonglong)uVar8 >> 0x20);
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          SelectionBox::SelectionBox_FadeIn
                    ((SelectionBox *)this_00,0.2,material,corners,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ChangeLODVisible() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_ChangeLODVisible
               (MVCubeModelInstance *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if ((this->fields).isVisible == 0) {
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                (this_00,(MethodInfo *)0x0);
      MVCubeModelInstance_SetLod(this,0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
              (this_00,(MethodInfo *)0x0);
    MVCubeModelInstance_SetLod(this,1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Compare
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)wo,(MethodInfo *)0x0);
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)this,(MethodInfo *)0x0);
    if (pOVar1 != pOVar2) {
      return;
    }
    pMVar3 = wo->klass;
    bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar3->_1).naturalAligment < bVar4) ||
       (bVar5 = true,
       (MVCubeModelInstance__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      bVar5 = false;
    }
    pMVar6 = (MVWorldObjectClient *)0x0;
    if (bVar5) {
      pMVar6 = wo;
    }
    pMVar7 = TypeInfo__MVCubeModelInstance;
    if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
    if (((pMVar3->_1).naturalAligment < bVar4) ||
       ((MVCubeModelInstance__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVWorldObjectClient *)0x0;
    if (bVar5) {
      pMVar6 = wo;
    }
    if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
    this_00 = (this->fields)._.prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometryDetailed
                (this_00,(RuntimePrototypeCubeModel *)pMVar6[1].klass,visibleCubesOnly,
                 matchingCubeCount,investigatedCubeCount,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pMVar7 = extraout_ECX;
code_?:
  func_?(wo,pMVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_CompareWithKoGaMaPackage
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
             Object]::
             Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)pRVar1,
                        (MethodInfo *)0x0);
    *insertedByProfileId = (int32_t)pOVar2;
    if (koGaMaPackageClient != (KoGaMaPackageClient *)0x0) {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(koGaMaPackageClient->fields).prototypes;
      if (wo != (MVWorldObjectClient *)0x0) {
        this_01 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
        if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_01,(Type *)StringLiteral_protoTypeID,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((this_00 !=
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0) && (pPVar3 != (Pool *)0x0)) {
            if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?();
            rpcm = (RuntimePrototypeCubeModel *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_00,*piVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                             );
            pRVar1 = (this->fields)._.prototypeCubeModel;
            if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
              bVar5 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
                                (pRVar1,rpcm,(MethodInfo *)0x0);
              return bVar5;
            }
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Destroy
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                (pRVar1,(this->fields)._._._.id,(MethodInfo *)0x0);
      this_00 = (this->fields).cullingSubscriberBase;
      if (this_00 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      }
      MVCubeModelBase::MVCubeModelBase_Destroy((MVCubeModelBase *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnableCulling() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_EnableCulling
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  MVCubeModelInstance_SetupCulling
            (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array *
Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_GetCorners
          (MVCubeModelInstance *this,Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
    cVar4 = func_?(0,TypeInfo__IEditModeUI,pIVar3);
    fVar2 = _UNK_?;
    if (cVar4 != '\0') {
      fVar2 = _UNK_?;
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                      ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffd0,*pVVar5,0.5,(MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  fVar8 = pVVar5->z;
  pVVar5 = (Vector3 *)func_?(&stack0xffffffd0,&bounds,0);
  b_02.y = (float)uVar7;
  b_02.x = (float)uVar6;
  b_02.z = fVar8;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffd0,*pVVar5,b_02,(MethodInfo *)0x0);
  uVar9 = pVVar5->x;
  uVar10 = pVVar5->y;
  uVar11._0_4_ = pVVar5->z;
  pVVar5 = (Vector3 *)func_?();
  b_01.y = (float)uVar7;
  b_01.x = (float)uVar6;
  b_01.z = fVar8;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffd0,*pVVar5,b_01,(MethodInfo *)0x0);
  fVar8 = pVVar5->z;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffc4,this_01,(MethodInfo *)0x0);
    uVar12 = pVVar5->y;
    a_03.y = (float)uVar10;
    a_03.x = (float)uVar9;
    a_03.z = (float)uVar11;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        ((Vector3 *)&stack0xffffffc4,a_03,fVar2 / (float)uVar12,(MethodInfo *)0x0);
    uVar9 = 0;
    uVar6 = 5;
    pVVar5 = MathFunctions::MathFunctions_TruncateVector
                        ((Vector3 *)&stack0xffffffc4,*pVVar5,5,(MethodInfo *)0x0);
    fVar2 = pVVar5->z;
    uVar11._4_4_ = 0.0;
    pVVar5 = (Vector3 *)&stack0xffffffc4;
    a_04.y = (float)uVar9;
    a_04.x = (float)uVar6;
    a_04.z = fVar8;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        (pVVar5,a_04,0.0,(MethodInfo *)0x0);
    bounds.m_Center.x = pVVar13->z;
    bounds.m_Center.z = 0.0;
    bounds.m_Center.y = 7.00649e-45;
    d = &UNK_?;
    pVVar13 = MathFunctions::MathFunctions_TruncateVector
                        ((Vector3 *)&stack0xffffffc4,*pVVar13,5,(MethodInfo *)0x0);
    bounds.m_Extents.z = (float)pVVar5;
    uVar14._0_4_ = pVVar13->x;
    uVar14._4_4_ = pVVar13->y;
    uVar11._0_4_ = pVVar13->z;
    bounds.m_Extents.y = (float)&stack0xffffffc4;
    bounds.m_Extents.x = (float)&UNK_?;
    vector.y = (float)uVar6;
    vector.x = bounds.m_Extents.z;
    vector.z = fVar2;
    fStack15 = fVar2;
    pVVar5 = MathFunctions::MathFunctions_FloorVector
                        ((Vector3 *)bounds.m_Extents.y,vector,(MethodInfo *)0x0);
    uVar16 = pVVar5->x;
    uVar17 = pVVar5->y;
    fVar18 = pVVar5->z;
    vector_00.z = (float)uVar11;
    vector_00.x = (float)(int)uVar14;
    vector_00.y = (float)(int)((ulonglong)uVar14 >> 0x20);
    pVVar5 = MathFunctions::MathFunctions_CeilVector
                        ((Vector3 *)&stack0xffffffc4,vector_00,(MethodInfo *)0x0);
    fVar2 = pVVar5->x;
    fVar19 = pVVar5->y;
    uVar11._0_4_ = pVVar5->z;
    a.y = (float)uVar17;
    a.x = (float)uVar16;
    a.z = fVar18;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffc4,a,(float)d,(MethodInfo *)0x0);
    b.y = fVar8;
    b.x = (float)uVar9;
    b.z = uVar11._4_4_;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc4,*pVVar5,b,(MethodInfo *)0x0);
    uVar20._0_4_ = pVVar5->x;
    uVar20._4_4_ = pVVar5->y;
    fVar18 = pVVar5->z;
    pVVar5 = (Vector3 *)func_?();
    a_00.z = fVar18;
    a_00.x = (float)(int)uVar20;
    a_00.y = (float)(int)((ulonglong)uVar20 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc4,a_00,*pVVar5,(MethodInfo *)0x0);
    uVar21._0_4_ = pVVar5->x;
    uVar21._4_4_ = pVVar5->y;
    fVar22 = pVVar5->z;
    a_01.y = fVar19;
    a_01.x = fVar2;
    a_01.z = (float)uVar11;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffc4,a_01,(float)d,(MethodInfo *)0x0);
    b_00.y = fVar8;
    b_00.x = (float)uVar9;
    b_00.z = uVar11._4_4_;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc4,*pVVar5,b_00,(MethodInfo *)0x0);
    fVar8 = pVVar5->x;
    fVar18 = pVVar5->y;
    fVar2 = pVVar5->z;
    pVVar5 = (Vector3 *)func_?();
    a_02.y = fVar18;
    a_02.x = fVar8;
    a_02.z = fVar2;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc4,a_02,*pVVar5,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar5->x;
    uVar11._4_4_ = pVVar5->y;
    fVar2 = pVVar5->z;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    min.z = fVar22;
    min.x = (float)(int)uVar21;
    min.y = (float)(int)((ulonglong)uVar21 >> 0x20);
    max.z = fVar2;
    max.x = (float)(int)uVar11;
    max.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    pVVar23 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
    return pVVar23;
  }
code_?:
  func_?(0);
  pcVar24 = (code *)swi(3);
  pVVar23 = (Vector3__Array *)(*pcVar24)();
  return pVVar23;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Initialize
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCubeModelBase::MVCubeModelBase_Initialize((MVCubeModelBase *)this,(MethodInfo *)0x0);
  pIVar1 = (IList_1_VoxelHit_ *)(this->fields)._._._.groupId;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (MVGroup *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        if (pIVar1 == pIVar2) {
          if (cRam_? == '\0') {
            pUStack3 = (UnityAction_1_UnityEngine_CullingGroupEvent___Class *)_UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pUStack3 =
               TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>;
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                    );
          MVCubeModelInstance_SetupCulling
                    (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_03,(MethodInfo *)0x0)
          ;
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsLodVisible(CullingGroupEvent) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

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
    bVar1 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnChanged
               (MVCubeModelInstance *this,HashSet_1_MV_WorldObject_IntVector_ *chunks,
               MethodInfo *method)

{
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnEnterObject
               (MVCubeModelInstance *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  this_00 = e;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)e,(MethodInfo *)0x0);
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)0x0,(MethodInfo *)0x0);
      EditorStateMachine::EditorStateMachine_SelectWO(this_00,(int32_t)id,0,1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_OnEnter_called_with_no_seletect_,(MethodInfo *)0x0);
    }
    ppEStack2 = &e;
    e = (EditorStateMachine *)0x0;
    pEStack3 = TypeInfo__EditorEvent;
    value = (Object *)func_?();
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnPositionChanged
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    uVar1._0_4_ = (this->fields).positionOffset.x;
    uVar1._4_4_ = (this->fields).positionOffset.y;
    fVar2 = (this->fields).positionOffset.z;
    uVar3._0_4_ = (positionChangedEventArgs->fields).NewPos.x;
    uVar3._4_4_ = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar4;
    a.x = (float)(int)uVar3;
    a.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    b.z = fVar2;
    b.x = (float)uVar1;
    b.y = SUB84(uVar1,4);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar5,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnStateChanged
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

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
    bVar1 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    this_01 = (this->fields)._.prototypeCubeModel;
    (this->fields).isVisible = bVar1;
    if (bVar1 == 0) {
      if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                  (this_01,(MethodInfo *)0x0);
        MVCubeModelInstance_SetLod(this,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
                (this_01,(MethodInfo *)0x0);
      MVCubeModelInstance_SetLod(this,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullSphereToMeshBounds() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetCullSphereToMeshBounds
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  MVCubeModelBase::MVCubeModelBase_GetWorldBounds
            ((Bounds *)&stack0xffffffc0,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  pVVar3 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     (&VStack_4,(InputToPlayerMovementAndroid *)&stack0xffffffa8,(MethodInfo *)0x0)
  ;
  uStack_2._0_4_ = pVVar3->x;
  uStack_2._4_4_ = pVVar3->y;
  fStack_1 = pVVar3->z;
  fVar5 = (float10)func_?(&uStack_2,0);
  pVVar3 = (Vector3 *)func_?(&VStack_4,&stack0xffffffa8,0);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,(float)fVar5,*pVVar3,(MethodInfo *)0x0);
    puVar6 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
    VStack_4._4_8_ = *puVar6;
    fVar7 = *(float *)(puVar6 + 1);
    puVar6 = (undefined8 *)func_?(&VStack_8,&stack0xffffffa8);
    uStack_9 = *puVar6;
    fVar10 = *(float *)(puVar6 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar7;
    a.x = VStack_4.y;
    a.y = VStack_4.z;
    b.z = fVar10;
    b.x = (float)(undefined4)uStack_9;
    b.y = (float)uStack_9._4_4_;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_8,a,b,(MethodInfo *)0x0);
    fVar10 = pVVar3->y;
    fVar7 = pVVar3->z;
    (this->fields).positionOffset.x = pVVar3->x;
    (this->fields).positionOffset.y = fVar10;
    (this->fields).positionOffset.z = fVar7;
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetLod(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetLod
               (MVCubeModelInstance *this,bool enabled,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0.0;
  auStack_6._12_4_ = 0.0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  func_?();
  pCVar7 = (this->fields)._.chunkInstances;
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if (pCVar7 != (ChunkInstances *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    piVar9 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar7);
    uStack_1 = 0;
    while (piVar9 != (int *)0x0) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_8 = 0x56;
        uStack_1 = 0xffffffff;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      iStack_12 = *piVar9;
      uVar13 = 0;
      uStack_14 = 0;
      uVar15 = *(ushort *)(iStack_12 + 0xb6);
      uStack_16 = (uint)uVar15;
      if (uVar15 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(iStack_12 + 0x58) + (uint)uVar13 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar17 = (undefined4 *)
                     (*piVar9 +
                     (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar13 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar15);
      }
      puVar17 = (undefined4 *)func_?();
code_?:
      piVar18 = (int *)(*(code *)*puVar17)();
      if (piVar18 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar18 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        func_?(piVar18,
                        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                       );
        break;
      }
      puVar17 = (undefined4 *)func_?(piVar18);
      auStack_6._0_4_ = *puVar17;
      auStack_6._4_4_ = puVar17[1];
      auStack_6._8_4_ = puVar17[2];
      auStack_6._12_4_ = puVar17[3];
      auStack_6._16_8_ = *(undefined8 *)(puVar17 + 4);
      pQVar19 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                          ((Quaternion *)(auStack_6 + 0x18),
                           (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)auStack_6,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                          );
      if ((Renderer *)pQVar19->z == (Renderer *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pQVar19->z,enabled,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetupCulling(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetupCulling
               (MVCubeModelInstance *this,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *onStateChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,onStateChanged,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_00;
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  pUVar1 = (this->fields)._._.PositionChanged;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
            );
  pUStack3 =
       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  if (pUStack3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    if (pUStack3->klass ==
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>) {
      pUVar1 = pUStack3;
    }
    pUStack4 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
  }
  a = (this->fields)._._.RotationChanged;
  (this->fields)._._.PositionChanged = pUVar1;
  pUStack4 =
       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>__UnityAction_System__Object__void__
            );
  pUStack3 =
       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)a,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  if (pUStack3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    if ((UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)pUStack3->klass
        == TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
       ) {
      pUVar1 = pUStack3;
    }
    pUStack4 =
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
  }
  a_00 = (this->fields)._.ChunksChanged;
  (this->fields)._._.RotationChanged =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)pUVar1;
  pUStack4 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
       TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
             ,
             MethodInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>__Action_System__Object__void__
            );
  pUStack3 =
       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)a_00,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  if (pUStack3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    if ((Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
        pUStack3->klass ==
        TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
       ) {
      pUVar1 = pUStack3;
    }
    pUStack4 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
    ;
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->fields)._.ChunksChanged =
       (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)pUVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).positionOffset.x = pVVar1->x;
  (this->fields).positionOffset.y = fVar3;
  (this->fields).positionOffset.z = fVar4;
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  uVar5 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
  piVar6 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar6 = (uint)*piVar6 | 0x803103;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar5;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0
                         );
      this_00 = (this->fields)._.prototypeCubeModel;
      if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
        pOVar8 = System.Core.dll::System::Linq::
                 Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                 Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                            (MethodInfo *)0x0);
        if (pOVar7 == pOVar8) {
          uVar9 = (uint)(this->fields)._._.interactionFlags;
          if ((uVar9 & 0x4000) != 0) {
            *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
                 *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
            *(uint *)&(this->fields)._._.interactionFlags = uVar9 | 0x4000;
            return;
          }
        }
        uVar5 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        piVar6 = &(this->fields)._._.interactionFlags;
        *(uint *)piVar6 = (uint)*piVar6 & 0xffffbfff;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar5;
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_IsVisibleSet() */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_get_IsVisibleSet
               (MVCubeModelInstance *this,MethodInfo *method)

{
  return (this->fields).isVisible;
}


/* Void set_IsVisibleSet(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_set_IsVisibleSet
               (MVCubeModelInstance *this,bool value,MethodInfo *method)

{
  (this->fields).isVisible = value;
  return;
}

