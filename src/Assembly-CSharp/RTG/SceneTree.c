
/* Boolean CanRegisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_CanRegisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((gameObject->fields)._.m_CachedPtr != (void *)0x0) &&
       (bVar1 = SceneTree_IsObjectRegistered(this,gameObject,(MethodInfo *)0x0), bVar1 == 0)) {
      if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      RTG__IRLDApplication_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRLDApplication>__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (((pTVar2 != (Transform *)0x0) &&
          (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                              (pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar2,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_00,
                            RTG__IRLDApplication_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRLDApplication>__
                           );
        if (pOVar3 != (Object *)0x0) {
          return 0;
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (gameObject,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                           );
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
        if (pOVar3 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar3[1].klass != (Object__Class *)0x0) {
            return 0;
          }
        }
        return 1;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar1 = (*pcVar4)();
      return bVar1;
    }
  }
  return 0;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_DebugDraw(SceneTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__DebugDraw__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__DebugDraw__;
  pSVar2 = (this->fields)._objectTree;
  if (pSVar2 == (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    LOCK();
    UNLOCK();
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    LOCK();
    UNLOCK();
    auStack_4._24_8_ = &UNK_?;
    FUN_?(&StringLiteral__IsLit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
    auStack_4._24_8_ = &UNK_?;
    FUN_?();
  }
  auStack_4._24_8_ = &UNK_?;
  this_01 = (MaterialPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
  if (this_01 != (MaterialPool *)0x0) {
    auStack_4._24_8_ = &UNK_?;
    this_02 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_01,(MethodInfo *)0x0);
    if (this_02 != (Material *)0x0) {
      auStack_4._24_8_ = &UNK_?;
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__IsLit,(MethodInfo *)0x0);
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (this_02,name,0.0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        auStack_4._24_8_ = &UNK_?;
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_5.r = _UNK_?;
      CStack_5.g = _UNK_?;
      CStack_5.b = _UNK_?;
      CStack_5.a = _UNK_?;
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_02,StringLiteral__Color,&CStack_5,(MethodInfo *)0x0);
      auStack_4._24_8_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (this_02,0,(MethodInfo *)0x0);
      pSVar6 = (pSVar2->fields)._root;
      if (pSVar6 != (SphereTreeNode_1_UnityEngine_GameObject_ *)0x0) {
        pMVar1 = pMVar1->klass->rgctx_data[4].method;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Graphics);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar7._0_4_ = (pSVar6->fields)._sphere._center.x;
        uVar7._4_4_ = (pSVar6->fields)._sphere._center.y;
        fVar8 = (pSVar6->fields)._sphere._center.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fStack_9 = (pSVar6->fields)._sphere._radius;
        uStack_10 = CONCAT44(fStack_9,fStack_9);
        pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
        uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
        uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
        uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
        auStack_14._0_4_ = 0.0;
        auStack_14._4_4_ = 0.0;
        auStack_14._8_4_ = 0.0;
        auStack_14._12_4_ = 0.0;
        auStack_14._16_4_ = 0.0;
        auStack_14._20_4_ = 0.0;
        puStack_15 = (undefined *)0x0;
        uStack_16._0_4_ = 0.0;
        uStack_16._4_4_ = 0.0;
        puStack_17 = (undefined *)0x0;
        uStack_18._0_4_ = 0.0;
        uStack_18._4_4_ = 0.0;
        uStack_19._0_4_ = 0.0;
        uStack_19._4_4_ = 0.0;
        pcVar3 = pcRam_?;
        uStack_20 = uVar7;
        fStack_21 = fVar8;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(&uStack_20,&uStack_12,&uStack_10);
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (this_00 != (MeshPool *)0x0) {
          mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Graphics);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_4._0_8_ = auStack_14._0_8_;
          auStack_4._8_8_ = auStack_14._8_8_;
          auStack_4._16_8_ = auStack_14._16_8_;
          auStack_4._24_8_ = puStack_15;
          auStack_4._32_4_ = (float)uStack_16;
          auStack_4._36_4_ = uStack_16._4_4_;
          puStack_22 = puStack_17;
          fStack_23 = (float)uStack_18;
          fStack_24 = uStack_18._4_4_;
          fStack_25 = (float)uStack_19;
          fStack_26 = uStack_19._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (mesh,(Matrix4x4 *)auStack_4,-1,(MethodInfo *)0x0);
          pSVar27 = (pSVar6->fields)._children;
          uVar28 = 0;
          if (pSVar27 != (SphereTreeNode_1_UnityEngine_GameObject___Array *)0x0) {
            ppSVar29 = pSVar27->vector;
            while( true ) {
              if ((int)pSVar27->max_length <= (int)uVar28) {
                return;
              }
              if ((uint)pSVar27->max_length <= uVar28) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*ppSVar29 == (SphereTreeNode_1_UnityEngine_GameObject_ *)0x0) break;
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__DebugDraw
                        ((SphereTreeNode_1_System_Object_ *)*ppSVar29,
                         pMVar1->klass->rgctx_data[10].method);
              uVar28 = uVar28 + 1;
              ppSVar29 = ppSVar29 + 1;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  auStack_4._24_8_ = &UNK_?;
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsObjectRegistered(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_IsObjectRegistered
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._objectToNode;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnObjectTransformChanged(Transform) */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_OnObjectTransformChanged
               (SceneTree *this,Transform *objectTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__set_Sphere_RTG__Sphere_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OnNodeSphereUpdated_RTG__SphereTreeNode<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_1[0].ObjectTypes = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if (*(int *)&(TypeInfo__RTG__SceneTree->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__SceneTree);
  }
  aOStack_1[0].NoVolumeSize.z = TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize;
  aOStack_1[0].NoVolumeSize.x = aOStack_1[0].NoVolumeSize.z;
  aOStack_1[0].NoVolumeSize.y = aOStack_1[0].NoVolumeSize.z;
  if (objectTransform != (Transform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)objectTransform,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar3 = ObjectBounds::ObjectBounds_CalcWorldAABB
                       (aAStack_4,pGVar2,aOStack_1,(MethodInfo *)0x0);
    fVar5 = (pAVar3->_center).x;
    uStack_6._0_4_ = (pAVar3->_center).y;
    uStack_6._4_4_ = (pAVar3->_center).z;
    aOStack_1[0].NoVolumeSize.x = (pAVar3->_size).y * _UNK_?;
    aOStack_1[0].ObjectTypes = (int32_t)((pAVar3->_size).x * _UNK_?);
    aOStack_1[0].NoVolumeSize.y = (pAVar3->_size).z * _UNK_?;
    fVar7 = (float)FUN_?(aOStack_1);
    this_00 = (this->fields)._objectToNode;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)objectTransform,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)0x0) {
      this_02 = (SphereTreeNode_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pGVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                          );
      fVar8 = (float)uStack_6;
      aOStack_1[0].NoVolumeSize.x = fVar8;
      aOStack_1[0].ObjectTypes = (int32_t)fVar5;
      aOStack_1[0].NoVolumeSize.z = fVar7;
      aOStack_1[0].NoVolumeSize.y = uStack_6._4_4_;
      if (this_02 != (SphereTreeNode_1_System_Object_ *)0x0) {
        (this_02->fields)._sphere._center.x = fVar5;
        (this_02->fields)._sphere._center.y = fVar8;
        (this_02->fields)._sphere._center.z = uStack_6._4_4_;
        (this_02->fields)._sphere._radius = fVar7;
        pMVar9 = 
        MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OnNodeSphereUpdated_RTG__SphereTreeNode<UnityEngine::GameObject>_
        ;
        this_01 = (this->fields)._objectTree;
        if (this_01 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
          if (((this_02->fields)._data != (Object *)0x0) &&
             ((this_02->fields)._parent != (SphereTreeNode_1_System_Object_ *)0x0)) {
            pSVar10 = (this_02->fields)._parent;
            uVar11 = (pSVar10->fields)._sphere._center.x;
            uVar12 = (pSVar10->fields)._sphere._center.y;
            aOStack_1[0].NoVolumeSize.x = fVar8 - (float)uVar12;
            aOStack_1[0].ObjectTypes = (int32_t)(fVar5 - (float)uVar11);
            aOStack_1[0].NoVolumeSize.y =
                 (this_02->fields)._sphere._center.z - (pSVar10->fields)._sphere._center.z;
            fVar5 = (float)FUN_?(aOStack_1);
            pSVar10 = (this_02->fields)._parent;
            if (pSVar10 == (SphereTreeNode_1_System_Object_ *)0x0) goto code_?;
            fVar5 = fVar5 + (this_02->fields)._sphere._radius;
            pfVar13 = &(pSVar10->fields)._sphere._radius;
            if (*pfVar13 <= fVar5 && fVar5 != *pfVar13) {
              SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__SetParent
                        (this_02,(SphereTreeNode_1_System_Object_ *)0x0,
                         pMVar9->klass->rgctx_data[7].method);
              if ((pSVar10->fields)._numChildren == 0) {
                SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                          ((SphereTree_1_System_Object_ *)this_01,pSVar10,
                           pMVar9->klass->rgctx_data[0xc].method);
              }
              else {
                SphereTreeNode`1[System::Object]::
                SphereTreeNode_1_System_Object__EncapsulateChildrenBottomUp
                          (pSVar10,pMVar9->klass->rgctx_data[9].method);
              }
              SphereTree`1[System::Object]::SphereTree_1_System_Object__InsertNode
                        ((SphereTree_1_System_Object_ *)this_01,this_02,
                         pMVar9->klass->rgctx_data[5].method);
            }
          }
          if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar14 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (pOVar14 != (Object *)0x0) {
            *(undefined1 *)&pOVar14[9].klass = 1;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean OverlapBox(OBB, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_OverlapBox
               (SceneTree *this,OBB *obb,List_1_UnityEngine_GameObject_ *gameObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__get_Data__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    piVar1 = &(gameObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (gameObjects->fields)._size;
    (gameObjects->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(gameObjects->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._objectTree;
    if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
      auStack_2._0_4_ = (obb->_size).x;
      auStack_2._4_4_ = (obb->_size).y;
      auStack_2._8_8_ = *(undefined8 *)&(obb->_size).z;
      uStack_3._0_4_ = (obb->_center).y;
      uStack_3._4_4_ = (obb->_center).z;
      QStack_4.x = (obb->_rotation).x;
      QStack_4.y = (obb->_rotation).y;
      QStack_4.z = (obb->_rotation).z;
      QStack_4.w = (obb->_rotation).w;
      uStack_5._0_1_ = obb->_isValid;
      uStack_5._1_3_ = *(undefined3 *)&obb->field_0x29;
      bVar6 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                        ((SphereTree_1_System_Object_ *)this_00,(OBB *)auStack_2,
                         (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                         MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>_
                        );
      if (bVar6 == 0) {
        bVar7 = false;
      }
      else {
        if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
          FUN_?();
        }
        OStack_8.ObjectTypes = FUN_?();
        if (*(int *)&(TypeInfo__RTG__SceneTree->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__RTG__SceneTree);
        }
        OStack_8.NoVolumeSize.z = TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize;
        OStack_8.NoVolumeSize.x = OStack_8.NoVolumeSize.z;
        uVar9 = OStack_8._0_8_;
        OStack_8.NoVolumeSize.y = OStack_8.NoVolumeSize.z;
        uVar10 = OStack_8.NoVolumeSize._4_8_;
        pLVar11 = (this->fields)._nodeBuffer;
        if (pLVar11 == (List_1_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)auStack_2 >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar14 == *puVar15;
            if (bVar7) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        auStack_2._8_8_ = (ulonglong)(uint)(pLVar11->fields)._version << 0x20;
        uStack_3._0_4_ = 0.0;
        uStack_3._4_4_ = 0.0;
        LStack_16._index = auStack_2._8_4_;
        LStack_16._version = auStack_2._12_4_;
        LStack_16._current = (Object *)0x0;
        auStack_2._0_4_ = 0.0;
        auStack_2._4_4_ = 0.0;
        auStack_2._8_8_ = &LStack_16;
        LStack_16._list = (List_1_System_Object_ *)pLVar11;
        while (bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_16,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                                 ), bVar6 != 0) {
          if (LStack_16._current == (Object *)0x0) goto code_?;
          this_01 = LStack_16._current[3].klass;
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
          if (this_01 != (Object__Class *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (((((GameObject__Fields *)&(this_01->_0).name)->_).m_CachedPtr != (void *)0x0) &&
               (bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeInHierarchy((GameObject *)this_01,(MethodInfo *)0x0),
               bVar6 != 0)) {
              if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                FUN_?();
              }
              OStack_8._0_8_ = uVar9;
              OStack_8.NoVolumeSize._4_8_ = uVar10;
              pOVar17 = ObjectBounds::ObjectBounds_CalcWorldOBB
                                 (&OStack_18,(GameObject *)this_01,&OStack_8,(MethodInfo *)0x0);
              OStack_19._size.x = (pOVar17->_size).x;
              OStack_19._size.y = (pOVar17->_size).y;
              OStack_19._8_8_ = *(undefined8 *)&(pOVar17->_size).z;
              OStack_19._center.y = (pOVar17->_center).y;
              OStack_19._center.z = (pOVar17->_center).z;
              OStack_19._rotation.x = (pOVar17->_rotation).x;
              OStack_19._rotation.y = (pOVar17->_rotation).y;
              OStack_19._rotation.z = (pOVar17->_rotation).z;
              OStack_19._rotation.w = (pOVar17->_rotation).w;
              OStack_19._isValid = pOVar17->_isValid;
              OStack_19._41_3_ = *(undefined3 *)&pOVar17->field_0x29;
              bVar6 = OBB::OBB_IntersectsOBB(obb,&OStack_19,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                FUN_?(gameObjects,this_01);
              }
            }
          }
        }
        bVar7 = (gameObjects->fields)._size != 0;
      }
      return bVar7;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar6 = (*pcVar20)();
  return bVar6;
}


/* Boolean RaycastAll(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastAll
               (SceneTree *this,Ray *ray,SceneRaycastPrecision__Enum raycastPresicion,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNodeRayHit<UnityEngine::GameObject>__get_HitNode__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__get_Data__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  afStack_3[0] = 0.0;
  if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
    piVar4 = &(hits->fields)._version;
    *piVar4 = *piVar4 + 1;
    length = (hits->fields)._size;
    (hits->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._objectTree;
    if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      auStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      uStack_6._0_4_ = (ray->m_Direction).y;
      uStack_6._4_4_ = (ray->m_Direction).z;
      bVar7 = SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
                         ((SphereTree_1_System_Object_ *)this_00,(Ray *)auStack_5,
                          (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)
                          (this->fields)._nodeHitBuffer,
                          MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>_
                         );
      if (bVar7 == 0) {
        bVar8 = false;
      }
      else {
        if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
          FUN_?();
        }
        QStack_9.x = (float)FUN_?();
        if (*(int *)&(TypeInfo__RTG__SceneTree->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__RTG__SceneTree);
        }
        QStack_9.w = TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize;
        QStack_9.y = QStack_9.w;
        QStack_9.z = QStack_9.w;
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar10 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if ((pOVar10 == (Object *)0x0) || (pOVar10[5].klass == (Object__Class *)0x0))
        goto code_?;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_12,(Transform *)pOVar10[5].klass,(MethodInfo *)0x0);
        uVar13 = QStack_9._8_8_;
        uVar14 = QStack_9._0_8_;
        uVar15._0_4_ = pVVar11->x;
        uVar15._4_4_ = pVVar11->y;
        fVar16 = pVVar11->z;
        if (raycastPresicion == SceneRaycastPrecision__Enum_BestFit) {
          pLVar17 = (this->fields)._nodeHitBuffer;
          if (pLVar17 == (List_1_RTG_SphereTreeNodeRayHit_1_UnityEngine_GameObject_ *)0x0)
          goto code_?;
          if (iRam_? != 0) {
            uVar18 = (uint)((ulonglong)auStack_5 >> 0xc);
            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
            do {
              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar20 == *puVar21;
              if (bVar8) {
                *puVar21 = uVar20 | 1L << (ulonglong)(uVar18 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          auStack_5._8_8_ = (ulonglong)(uint)(pLVar17->fields)._version << 0x20;
          uStack_6._0_4_ = 0.0;
          uStack_6._4_4_ = 0.0;
          LStack_22._index = auStack_5._8_4_;
          LStack_22._version = auStack_5._12_4_;
          LStack_22._current = (Object *)0x0;
          auStack_5._0_4_ = 0.0;
          auStack_5._4_4_ = 0.0;
          auStack_5._8_8_ = &LStack_22;
          LStack_22._list = (List_1_System_Object_ *)pLVar17;
code_?:
          bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_22,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                             );
          if (bVar7 != 0) {
            if (LStack_22._current == (Object *)0x0) goto code_?;
            if (LStack_22._current[1].klass == (Object__Class *)0x0) goto code_?;
            pIVar23 = ((LStack_22._current[1].klass)->_0).this_arg.data.generic_class;
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
            if (pIVar23 != (Il2CppGenericClass *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (((((GameObject__Fields *)&(pIVar23->context).method_inst)->_).m_CachedPtr !=
                   (void *)0x0) &&
                 (bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_activeInHierarchy((GameObject *)pIVar23,(MethodInfo *)0x0)
                 , bVar7 != 0)) {
                pRVar24 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    ((GameObject *)pIVar23,
                                     UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                    );
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
                if (pRVar24 == (Renderer *)0x0) {
                  bVar8 = false;
                }
                else {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar8 = (pRVar24->fields)._._.m_CachedPtr != (void *)0x0;
                }
                if (bVar8) {
                  if (pRVar24 == (Renderer *)0x0) goto code_?;
                  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                                     (pRVar24,(MethodInfo *)0x0);
                  if (bVar7 == 0) goto code_?;
                }
                if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
                  FUN_?();
                }
                GVar25 = GameObjectEx::GameObjectEx_GetGameObjectType
                                   ((GameObject *)pIVar23,(MethodInfo *)0x0);
                if (GVar25 == GameObjectType__Enum_Mesh) {
                  OStack_26._size.x = (ray->m_Origin).x;
                  OStack_26._size.y = (ray->m_Origin).y;
                  OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                  OStack_26._center.y = (ray->m_Direction).y;
                  OStack_26._center.z = (ray->m_Direction).z;
                  pGVar27 = SceneTree_RaycastMeshObject
                                      (this,(Ray *)&OStack_26,(GameObject *)pIVar23,
                                       (MethodInfo *)0x0);
                  if (pGVar27 != (GameObjectRayHit *)0x0) {
                    FUN_?(hits,pGVar27);
                  }
                }
                else if (GVar25 == GameObjectType__Enum_Sprite) {
                  OStack_26._size.x = (ray->m_Origin).x;
                  OStack_26._size.y = (ray->m_Origin).y;
                  OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                  OStack_26._center.y = (ray->m_Direction).y;
                  OStack_26._center.z = (ray->m_Direction).z;
                  pGVar27 = SceneTree_RaycastSpriteObject
                                      (this,(Ray *)&OStack_26,(GameObject *)pIVar23,
                                       (MethodInfo *)0x0);
                  if (pGVar27 != (GameObjectRayHit *)0x0) {
                    FUN_?(hits,pGVar27);
                  }
                }
                else {
                  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  QStack_9._0_8_ = uVar14;
                  QStack_9._8_8_ = uVar13;
                  pOVar28 = ObjectBounds::ObjectBounds_CalcWorldOBB
                                      (&OStack_26,(GameObject *)pIVar23,
                                       (ObjectBounds_QueryConfig *)&QStack_9,(MethodInfo *)0x0);
                  fStack_29 = (pOVar28->_size).x;
                  fStack_30 = (pOVar28->_size).y;
                  uVar31._0_4_ = (pOVar28->_size).x;
                  uVar31._4_4_ = (pOVar28->_size).y;
                  uVar32._0_4_ = (pOVar28->_size).x;
                  uVar32._4_4_ = (pOVar28->_size).y;
                  fVar33 = (pOVar28->_size).z;
                  fStack_34 = (pOVar28->_center).x;
                  fStack_35 = (pOVar28->_center).y;
                  fVar36 = (pOVar28->_center).z;
                  fStack_37 = (pOVar28->_rotation).x;
                  fStack_38 = (pOVar28->_rotation).y;
                  fStack_39 = (pOVar28->_rotation).z;
                  fStack_40 = (pOVar28->_rotation).w;
                  fStack_41 = fVar33;
                  fStack_42 = fVar36;
                  if (pOVar28->_isValid != 0) {
                    VStack_2.x = 0.0;
                    VStack_2.y = 0.0;
                    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uVar43 = _fStack_f0;
                    VStack_44.x = VStack_2.x;
                    VStack_44.y = VStack_2.y;
                    VStack_44.z = 0.0;
                    uVar45._4_4_ = fStack_38;
                    uVar45._0_4_ = fStack_37;
                    QStack_9.z = fStack_39;
                    QStack_9.w = fStack_40;
                    uVar46._4_4_ = fStack_35;
                    uVar46._0_4_ = fStack_34;
                    OStack_26._size.x = (ray->m_Origin).x;
                    OStack_26._size.y = (ray->m_Origin).y;
                    OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                    OStack_26._center.y = (ray->m_Direction).y;
                    OStack_26._center.z = (ray->m_Direction).z;
                    QStack_9._0_8_ = uVar45;
                    VStack_47._0_8_ = uVar32;
                    VStack_47.z = fVar33;
                    VStack_48._0_8_ = uVar46;
                    VStack_48.z = fVar36;
                    bVar7 = BoxMath::BoxMath_Raycast_1
                                       ((Ray *)&OStack_26,&fStack_1,&VStack_48,&VStack_47,
                                        &QStack_9,(BoxEpsilon *)&VStack_44,(MethodInfo *)0x0);
                    if (bVar7 != 0) {
                      uVar49 = (ray->m_Direction).x;
                      uVar50 = (ray->m_Direction).y;
                      QStack_9.x = (ray->m_Origin).x;
                      QStack_9.y = (ray->m_Origin).y;
                      fVar51 = (float)uVar49 * fStack_1 + QStack_9.x;
                      fVar52 = (float)uVar50 * fStack_1 + QStack_9.y;
                      fVar53 = (ray->m_Direction).z * fStack_1;
                      fVar54 = (ray->m_Origin).z;
                      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      uVar55 = _fStack_f0;
                      fStack_39 = (float)uVar43;
                      fStack_40 = SUB84(uVar43,4);
                      QStack_9.z = fStack_39;
                      QStack_9.w = fStack_40;
                      VStack_56.y = fVar52;
                      VStack_56.x = fVar51;
                      QStack_9._0_8_ = uVar45;
                      VStack_57._0_8_ = uVar15;
                      VStack_57.z = fVar16;
                      VStack_58._0_8_ = uVar31;
                      VStack_58.z = fVar33;
                      VStack_59._0_8_ = uVar46;
                      VStack_59.z = fVar36;
                      VStack_56.z = fVar53 + fVar54;
                      _fStack_f0 = uVar55;
                      pBVar60 = BoxMath::BoxMath_GetFaceClosestToPoint_1
                                          ((BoxFaceDesc *)&OStack_26,&VStack_56,&VStack_59,
                                           &VStack_58,&QStack_9,&VStack_57,(MethodInfo *)0x0);
                      fVar36 = fStack_1;
                      iStack_61 = pBVar60->Face;
                      fStack_62 = (pBVar60->Plane).m_Normal.x;
                      fStack_63 = (pBVar60->Plane).m_Normal.y;
                      fVar33 = (pBVar60->Plane).m_Normal.z;
                      fStack_64 = fVar33;
                      pGVar27 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
                      VStack_12.y = fStack_63;
                      VStack_12.x = fStack_62;
                      OStack_26._size.x = (ray->m_Origin).x;
                      OStack_26._size.y = (ray->m_Origin).y;
                      OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                      OStack_26._center.y = (ray->m_Direction).y;
                      OStack_26._center.z = (ray->m_Direction).z;
                      VStack_12.z = fVar33;
                      GameObjectRayHit::GameObjectRayHit__ctor_2
                                (pGVar27,(Ray *)&OStack_26,(GameObject *)pIVar23,&VStack_12,fVar36
                                 ,(MethodInfo *)0x0);
                      FUN_?(hits,pGVar27);
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
        else if (raycastPresicion == SceneRaycastPrecision__Enum_Box) {
          pLVar17 = (this->fields)._nodeHitBuffer;
          if (pLVar17 == (List_1_RTG_SphereTreeNodeRayHit_1_UnityEngine_GameObject_ *)0x0)
          goto code_?;
          if (iRam_? != 0) {
            uVar18 = (uint)((ulonglong)auStack_5 >> 0xc);
            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
            do {
              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar20 == *puVar21;
              if (bVar8) {
                *puVar21 = uVar20 | 1L << (ulonglong)(uVar18 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          auStack_5._8_8_ = (ulonglong)(uint)(pLVar17->fields)._version << 0x20;
          uStack_6._0_4_ = 0.0;
          uStack_6._4_4_ = 0.0;
          LStack_22._index = auStack_5._8_4_;
          LStack_22._version = auStack_5._12_4_;
          LStack_22._current = (Object *)0x0;
          auStack_5._0_4_ = 0.0;
          auStack_5._4_4_ = 0.0;
          auStack_5._8_8_ = &LStack_22;
          LStack_22._list = (List_1_System_Object_ *)pLVar17;
code_?:
          bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_22,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                             );
          if (bVar7 != 0) {
            if (LStack_22._current == (Object *)0x0) goto code_?;
            if (LStack_22._current[1].klass == (Object__Class *)0x0) goto code_?;
            pIVar23 = ((LStack_22._current[1].klass)->_0).this_arg.data.generic_class;
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
            if (pIVar23 != (Il2CppGenericClass *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (((((GameObject__Fields *)&(pIVar23->context).method_inst)->_).m_CachedPtr !=
                   (void *)0x0) &&
                 (bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_activeInHierarchy((GameObject *)pIVar23,(MethodInfo *)0x0)
                 , bVar7 != 0)) {
                pRVar24 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    ((GameObject *)pIVar23,
                                     UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                    );
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
                if (pRVar24 == (Renderer *)0x0) {
                  bVar8 = false;
                }
                else {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar8 = (pRVar24->fields)._._.m_CachedPtr != (void *)0x0;
                }
                if (bVar8) {
                  if (pRVar24 == (Renderer *)0x0) goto code_?;
                  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                                     (pRVar24,(MethodInfo *)0x0);
                  if (bVar7 == 0) goto code_?;
                }
                if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                  FUN_?();
                }
                QStack_9._0_8_ = uVar14;
                QStack_9._8_8_ = uVar13;
                pOVar28 = ObjectBounds::ObjectBounds_CalcWorldOBB
                                    (&OStack_26,(GameObject *)pIVar23,
                                     (ObjectBounds_QueryConfig *)&QStack_9,(MethodInfo *)0x0);
                fStack_29 = (pOVar28->_size).x;
                fStack_30 = (pOVar28->_size).y;
                uVar55._0_4_ = (pOVar28->_size).x;
                uVar55._4_4_ = (pOVar28->_size).y;
                uVar43._0_4_ = (pOVar28->_size).x;
                uVar43._4_4_ = (pOVar28->_size).y;
                fVar33 = (pOVar28->_size).z;
                fStack_34 = (pOVar28->_center).x;
                fStack_35 = (pOVar28->_center).y;
                fVar36 = (pOVar28->_center).z;
                fStack_37 = (pOVar28->_rotation).x;
                fStack_38 = (pOVar28->_rotation).y;
                fStack_39 = (pOVar28->_rotation).z;
                fStack_40 = (pOVar28->_rotation).w;
                fStack_41 = fVar33;
                fStack_42 = fVar36;
                if (pOVar28->_isValid != 0) {
                  VStack_2.x = 0.0;
                  VStack_2.y = 0.0;
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  uVar32 = _fStack_f0;
                  VStack_12.x = VStack_2.x;
                  VStack_12.y = VStack_2.y;
                  VStack_12.z = 0.0;
                  uVar65._4_4_ = fStack_38;
                  uVar65._0_4_ = fStack_37;
                  QStack_9.z = fStack_39;
                  QStack_9.w = fStack_40;
                  uVar66._4_4_ = fStack_35;
                  uVar66._0_4_ = fStack_34;
                  OStack_26._size.x = (ray->m_Origin).x;
                  OStack_26._size.y = (ray->m_Origin).y;
                  OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                  OStack_26._center.y = (ray->m_Direction).y;
                  OStack_26._center.z = (ray->m_Direction).z;
                  QStack_9._0_8_ = uVar65;
                  VStack_59._0_8_ = uVar66;
                  VStack_59.z = fVar36;
                  VStack_56._0_8_ = uVar43;
                  VStack_56.z = fVar33;
                  bVar7 = BoxMath::BoxMath_Raycast_1
                                     ((Ray *)&OStack_26,afStack_3,&VStack_59,&VStack_56,
                                      &QStack_9,(BoxEpsilon *)&VStack_12,(MethodInfo *)0x0);
                  if (bVar7 != 0) {
                    uVar67 = (ray->m_Direction).x;
                    uVar68 = (ray->m_Direction).y;
                    QStack_9.x = (ray->m_Origin).x;
                    QStack_9.y = (ray->m_Origin).y;
                    fVar51 = (float)uVar67 * afStack_3[0] + QStack_9.x;
                    fVar52 = (float)uVar68 * afStack_3[0] + QStack_9.y;
                    fVar53 = (ray->m_Direction).z * afStack_3[0];
                    fVar54 = (ray->m_Origin).z;
                    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uVar43 = _fStack_f0;
                    fStack_39 = (float)uVar32;
                    fStack_40 = SUB84(uVar32,4);
                    QStack_9.z = fStack_39;
                    QStack_9.w = fStack_40;
                    VStack_47.y = fVar52;
                    VStack_47.x = fVar51;
                    QStack_9._0_8_ = uVar65;
                    VStack_47.z = fVar53 + fVar54;
                    VStack_48._0_8_ = uVar66;
                    VStack_48.z = fVar36;
                    VStack_57._0_8_ = uVar55;
                    VStack_57.z = fVar33;
                    VStack_58._0_8_ = uVar15;
                    VStack_58.z = fVar16;
                    _fStack_f0 = uVar43;
                    pBVar60 = BoxMath::BoxMath_GetFaceClosestToPoint_1
                                        ((BoxFaceDesc *)&OStack_26,&VStack_47,&VStack_48,
                                         &VStack_57,&QStack_9,&VStack_58,(MethodInfo *)0x0);
                    fVar36 = afStack_3[0];
                    iStack_61 = pBVar60->Face;
                    fStack_62 = (pBVar60->Plane).m_Normal.x;
                    fStack_63 = (pBVar60->Plane).m_Normal.y;
                    fVar33 = (pBVar60->Plane).m_Normal.z;
                    fStack_64 = fVar33;
                    pGVar27 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
                    VStack_44.y = fStack_63;
                    VStack_44.x = fStack_62;
                    OStack_26._size.x = (ray->m_Origin).x;
                    OStack_26._size.y = (ray->m_Origin).y;
                    OStack_26._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                    OStack_26._center.y = (ray->m_Direction).y;
                    OStack_26._center.z = (ray->m_Direction).z;
                    VStack_44.z = fVar33;
                    GameObjectRayHit::GameObjectRayHit__ctor_2
                              (pGVar27,(Ray *)&OStack_26,(GameObject *)pIVar23,&VStack_44,fVar36,
                               (MethodInfo *)0x0);
                    FUN_?(hits,pGVar27);
                  }
                }
              }
            }
            goto code_?;
          }
        }
        bVar8 = (hits->fields)._size != 0;
      }
      return bVar8;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar69 = (code *)swi(3);
  bVar7 = (*pcVar69)();
  return bVar7;
}


/* GameObjectRayHit RaycastMeshObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastMeshObject
          (SceneTree *this,Ray *ray,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  auStack_2._0_4_ = 0.0;
  auStack_2._4_4_ = 0.0;
  auStack_2._8_4_ = 0.0;
  auStack_2._12_4_ = 0.0;
  uStack_3 = (ulonglong)(uint)uStack_3._4_4_ << 0x20;
  auStack_2._16_4_ = 0.0;
  auStack_2._20_4_ = 0.0;
  auStack_2._24_4_ = 0.0;
  auStack_2._28_4_ = 0.0;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  unityMesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (RTMeshDb *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
  if ((this_01 != (RTMeshDb *)0x0) &&
     (pRVar4 = RTMeshDb::RTMeshDb_GetRTMesh(this_01,unityMesh,(MethodInfo *)0x0),
     gameObject != (GameObject *)0x0)) {
    if (pRVar4 == (RTMesh *)0x0) {
      this_02 = (Collider *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (gameObject,
                           UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                          );
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
      if (this_02 != (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_02->fields)._._.m_CachedPtr != (void *)0x0) {
          RStack_5.m_Origin.x = (ray->m_Origin).x;
          RStack_5.m_Origin.y = (ray->m_Origin).y;
          RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_5.m_Direction.y = (ray->m_Direction).y;
          RStack_5.m_Direction.z = (ray->m_Direction).z;
          bVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (this_02,&RStack_5,(RaycastHit *)auStack_2,_UNK_?,
                             (MethodInfo *)0x0);
          if (bVar6 != 0) {
            pGVar7 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
            uStack_8 = CONCAT44(uStack_8._4_4_,(float)uStack_3);
            auStack_9._0_8_ = auStack_2._0_8_;
            auStack_9._8_8_ = auStack_2._8_8_;
            VStack_10 = VStack_1;
            RStack_5.m_Origin.x = (ray->m_Origin).x;
            RStack_5.m_Origin.y = (ray->m_Origin).y;
            RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            auStack_9._16_8_ = auStack_2._16_8_;
            auStack_9._24_8_ = auStack_2._24_8_;
            RStack_5.m_Direction.y = (ray->m_Direction).y;
            RStack_5.m_Direction.z = (ray->m_Direction).z;
            GameObjectRayHit::GameObjectRayHit__ctor
                      (pGVar7,&RStack_5,(RaycastHit *)auStack_9,(MethodInfo *)0x0);
            return pGVar7;
          }
        }
      }
      return (GameObjectRayHit *)0x0;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (gameObject,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      auStack_9._8_4_ = 0.0;
      auStack_9._12_4_ = 0.0;
      auStack_9._16_4_ = 0.0;
      auStack_9._20_4_ = 0.0;
      auStack_9._24_4_ = 0.0;
      auStack_9._28_4_ = 0.0;
      VStack_10.x = 0.0;
      VStack_10.y = 0.0;
      uStack_8._0_4_ = 0.0;
      uStack_8._4_4_ = 0.0;
      uStack_11._0_4_ = 0.0;
      uStack_11._4_4_ = 0.0;
      uStack_12._0_4_ = 0.0;
      uStack_12._4_4_ = 0.0;
      pvVar13 = (obj->fields)._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        pGVar7 = (GameObjectRayHit *)(*pcVar14)();
        return pGVar7;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar14 = (code *)swi(3);
        pGVar7 = (GameObjectRayHit *)(*pcVar14)();
        return pGVar7;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(pvVar13,auStack_9);
      this_00 = (pRVar4->fields)._meshTree;
      if (this_00 != (MeshTree *)0x0) {
        auStack_2._0_8_ = auStack_9._0_8_;
        auStack_2._8_8_ = auStack_9._8_8_;
        auStack_2._16_8_ = auStack_9._16_8_;
        auStack_2._24_8_ = auStack_9._24_8_;
        VStack_1 = VStack_10;
        uStack_3._0_4_ = (float)uStack_8;
        uStack_3._4_4_ = uStack_8._4_4_;
        RStack_5.m_Origin.x = (ray->m_Origin).x;
        RStack_5.m_Origin.y = (ray->m_Origin).y;
        RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        fStack_16 = (float)uStack_11;
        fStack_17 = uStack_11._4_4_;
        fStack_18 = (float)uStack_12;
        fStack_19 = uStack_12._4_4_;
        RStack_5.m_Direction.y = (ray->m_Direction).y;
        RStack_5.m_Direction.z = (ray->m_Direction).z;
        meshRayHit = MeshTree::MeshTree_RaycastClosest
                               (this_00,&RStack_5,(Matrix4x4 *)auStack_2,(MethodInfo *)0x0);
        if (meshRayHit == (MeshRayHit *)0x0) {
          return (GameObjectRayHit *)0x0;
        }
        pGVar7 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
        RStack_5.m_Origin.x = (ray->m_Origin).x;
        RStack_5.m_Origin.y = (ray->m_Origin).y;
        RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
        RStack_5.m_Direction.y = (ray->m_Direction).y;
        RStack_5.m_Direction.z = (ray->m_Direction).z;
        GameObjectRayHit::GameObjectRayHit__ctor_3
                  (pGVar7,&RStack_5,gameObject,meshRayHit,(MethodInfo *)0x0);
        return pGVar7;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pGVar7 = (GameObjectRayHit *)(*pcVar14)();
  return pGVar7;
}


/* GameObjectRayHit RaycastSpriteObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastSpriteObject
          (SceneTree *this,Ray *ray,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectRayHit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_18[0] = 0.0;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = ObjectBounds::ObjectBounds_CalcSpriteWorldOBB(&OStack_2,gameObject,(MethodInfo *)0x0);
  VStack_3.x = (pOVar1->_size).x;
  VStack_3.y = (pOVar1->_size).y;
  VStack_3.z = (pOVar1->_size).z;
  OStack_4._center.x = (pOVar1->_center).x;
  OStack_4._center.y = (pOVar1->_center).y;
  VStack_5.z = (pOVar1->_center).z;
  OStack_4._rotation.x = (pOVar1->_rotation).x;
  OStack_4._rotation.y = (pOVar1->_rotation).y;
  OStack_4._rotation.z = (pOVar1->_rotation).z;
  OStack_4._rotation.w = (pOVar1->_rotation).w;
  OStack_4._isValid = pOVar1->_isValid;
  OStack_4._41_3_ = *(undefined3 *)&pOVar1->field_0x29;
  if (OStack_4._isValid == 0) {
    this_00 = (GameObjectRayHit *)0x0;
  }
  else {
    VStack_5.x = 0.0;
    VStack_5.y = 0.0;
    OStack_4._size.x = VStack_3.x;
    OStack_4._size.y = VStack_3.y;
    OStack_4._size.z = VStack_3.z;
    OStack_4._center.z = VStack_5.z;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    OStack_2._center.y = (ray->m_Direction).y;
    OStack_2._center.z = (ray->m_Direction).z;
    VStack_6.x = VStack_5.x;
    VStack_6.y = VStack_5.y;
    aQStack_7[0].y = OStack_4._rotation.y;
    aQStack_7[0].x = OStack_4._rotation.x;
    aQStack_7[0].z = OStack_4._rotation.z;
    aQStack_7[0].w = OStack_4._rotation.w;
    VStack_5.y = OStack_4._center.y;
    VStack_5.x = OStack_4._center.x;
    OStack_2._size.x = (ray->m_Origin).x;
    OStack_2._size.y = (ray->m_Origin).y;
    OStack_2._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_6.z = 0.0;
    bVar8 = BoxMath::BoxMath_Raycast_1
                      ((Ray *)&OStack_2,afStackX_18,&VStack_5,&VStack_3,aQStack_7,
                       (BoxEpsilon *)&VStack_6,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      this_00 = (GameObjectRayHit *)0x0;
    }
    else {
      uVar9 = (ray->m_Direction).x;
      uVar10 = (ray->m_Direction).y;
      uVar11 = (ray->m_Origin).x;
      uVar12 = (ray->m_Origin).y;
      VStack_5.z = (ray->m_Direction).z * afStackX_18[0] + (ray->m_Origin).z;
      VStack_5.y = (float)uVar10 * afStackX_18[0] + (float)uVar12;
      VStack_5.x = (float)uVar9 * afStackX_18[0] + (float)uVar11;
      pVVar13 = OBB::OBB_GetPointFaceNormal(&VStack_3,&OStack_4,&VStack_5,(MethodInfo *)0x0);
      hitEnter = afStackX_18[0];
      uVar14._0_4_ = pVVar13->x;
      uVar14._4_4_ = pVVar13->y;
      fVar15 = pVVar13->z;
      this_00 = (GameObjectRayHit *)FUN_?(TypeInfo__RTG__GameObjectRayHit);
      OStack_2._size.x = (ray->m_Origin).x;
      OStack_2._size.y = (ray->m_Origin).y;
      OStack_2._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      OStack_2._center.y = (ray->m_Direction).y;
      OStack_2._center.z = (ray->m_Direction).z;
      VStack_5._0_8_ = uVar14;
      VStack_5.z = fVar15;
      GameObjectRayHit::GameObjectRayHit__ctor_2
                (this_00,(Ray *)&OStack_2,gameObject,&VStack_5,hitEnter,(MethodInfo *)0x0);
    }
  }
  return this_00;
}


/* Boolean RegisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RegisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__AddNode_UnityEngine__GameObject__RTG__Sphere_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = SceneTree_CanRegisterObject(this,gameObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_2.ObjectTypes = FUN_?();
  if (*(int *)&(TypeInfo__RTG__SceneTree->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__SceneTree);
  }
  OStack_2.NoVolumeSize.y = TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize;
  OStack_2.NoVolumeSize.x = OStack_2.NoVolumeSize.y;
  OStack_2.NoVolumeSize.z = OStack_2.NoVolumeSize.y;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar3 = ObjectBounds::ObjectBounds_CalcWorldAABB
                     (aAStack_4,gameObject,&OStack_2,(MethodInfo *)0x0);
  uVar5 = (pAVar3->_center).z;
  uVar6._0_4_ = (int32_t)(pAVar3->_center).x;
  uVar6._4_4_ = (pAVar3->_center).y;
  OStack_2.NoVolumeSize.x = (pAVar3->_size).y * _UNK_?;
  OStack_2.ObjectTypes = (int32_t)((pAVar3->_size).x * _UNK_?);
  OStack_2.NoVolumeSize.y = (pAVar3->_size).z * _UNK_?;
  OStack_2.NoVolumeSize.z = (float)FUN_?(&OStack_2);
  this_00 = (this->fields)._objectTree;
  OStack_2.NoVolumeSize.y = (float)uVar5;
  OStack_2._0_8_ = uVar6;
  if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
    pMVar7 = 
    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__AddNode_UnityEngine__GameObject__RTG__Sphere_
    ;
    value = SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
                      ((SphereTree_1_System_Object_ *)this_00,(Object *)gameObject,
                       (Sphere *)&OStack_2,
                       MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__AddNode_UnityEngine__GameObject__RTG__Sphere_
                      );
    this_01 = (this->fields)._objectToNode;
    if (this_01 !=
        (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)gameObject,
                 (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar7 >> 8),2)
                 ,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                  ->klass->rgctx_data[0x22].method);
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar8 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (pOVar8 != (Object *)0x0) {
        *(undefined1 *)&pOVar8[9].klass = 1;
        return 1;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar1 = (*pcVar9)();
  return bVar1;
}


/* Void RemoveNodesWithNullObjects() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RemoveNodesWithNullObjects
               (SceneTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
            );
  pDVar1 = (this->fields)._objectToNode;
  if (pDVar1 != (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
                0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current.key = (Object *)0x0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                             ), node = DStack_12._current.value, key = DStack_12._current.key,
          bVar13 != 0) {
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
      if (key == (Object *)0x0) {
code_?:
        this_00 = (this->fields)._objectTree;
        if (this_00 == (SphereTree_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                  ((SphereTree_1_System_Object_ *)this_00,(SphereTreeNode_1_System_Object_ *)node,
                   MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                  );
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (key[1].klass == (Object__Class *)0x0) goto code_?;
        if (this_02 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) goto code_?;
        pDVar1 = (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *
                 )CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_02,key,node,
                   (InsertionBehavior__Enum)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                   ->klass->rgctx_data[0x22].method);
      }
    }
    this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields)._objectToNode;
    if (this_01 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Clear__
                );
      (this->fields)._objectToNode =
           (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
           this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields)._objectToNode >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean UnregisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_UnregisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = SceneTree_IsObjectRegistered(this,gameObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  pDVar2 = (this->fields)._objectToNode;
  this_00 = (this->fields)._objectTree;
  if (pDVar2 != (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
                0x0) {
    node = (SphereTreeNode_1_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)gameObject,
                      MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                     );
    if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
      SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                ((SphereTree_1_System_Object_ *)this_00,node,
                 MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                );
      pDVar2 = (this->fields)._objectToNode;
      if (pDVar2 != (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)gameObject,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                  );
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pOVar3 != (Object *)0x0) {
          *(undefined1 *)&pOVar3[9].klass = 1;
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* SceneTree() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__SceneTree);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize = 0.0001;
  return;
}


/* SceneTree() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree__ctor(SceneTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__SphereTree__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SphereTree<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SphereTree_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__RTG__SphereTree<UnityEngine::GameObject>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__SphereTree__);
  bVar1 = iRam_? != 0;
  (this->fields)._objectTree = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  this_01 = (List_1_RTG_SphereTreeNodeRayHit_1_UnityEngine_GameObject_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._nodeHitBuffer = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._nodeHitBuffer >> 0xc);
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
  this_02 = (List_1_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._nodeBuffer = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._nodeBuffer >> 0xc);
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
  this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._objectToNode =
       (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._objectToNode >> 0xc);
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

