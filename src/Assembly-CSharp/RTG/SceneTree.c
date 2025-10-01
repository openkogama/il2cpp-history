
/* Boolean CanRegisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_CanRegisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._objectToNode;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = GameObjectEx::GameObjectEx_IsRTGAppObject(gameObject,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (gameObject == (GameObject *)0x0) goto code_?;
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (gameObject,
                       UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                      );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Void DebugDraw() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_DebugDraw(SceneTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._objectTree;
  if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
    SphereTree`1[System::Object]::SphereTree_1_System_Object__DebugDraw
              ((SphereTree_1_System_Object_ *)this_00,
               MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__DebugDraw__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsObjectRegistered(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_IsObjectRegistered
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._objectToNode;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OnObjectTransformChanged(Transform) */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_OnObjectTransformChanged
               (SceneTree *this,Transform *objectTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__SceneTree);
    func_?(&
                    MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__set_Sphere_RTG__Sphere_
                   );
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OnNodeSphereUpdated_RTG__SphereTreeNode<UnityEngine::GameObject>_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  fVar1 = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if ((TypeInfo__RTG__SceneTree->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__SceneTree);
  }
  pVVar2 = Vector3Ex::Vector3Ex_FromValue
                      (&VStack_3,TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize,
                       (MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  if (objectTransform != (Transform *)0x0) {
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)objectTransform,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    queryConfig.NoVolumeSize.x = (float)uVar4;
    queryConfig.ObjectTypes = (int32_t)fVar1;
    queryConfig.NoVolumeSize.y = (float)uVar5;
    queryConfig.NoVolumeSize.z = fVar6;
    pAVar8 = ObjectBounds::ObjectBounds_CalcWorldAABB
                        ((AABB *)&stack0xffffffd4,pGVar7,queryConfig,(MethodInfo *)0x0);
    fVar1 = (pAVar8->_size).x;
    fVar6 = (pAVar8->_size).y;
    fVar9 = (pAVar8->_size).z;
    uVar10 = (pAVar8->_center).z;
    uVar11 = (pAVar8->_size).x;
    uVar12 = (pAVar8->_size).y;
    uVar13 = (pAVar8->_size).z;
    aabb._size.z = (float)uVar13;
    aabb._size.y = (float)uVar12;
    aabb._size.x = (float)uVar11;
    uVar14 = (pAVar8->_center).x;
    uVar15 = (pAVar8->_center).y;
    aabb._center.y = (float)uVar15;
    aabb._center.x = (float)uVar14;
    this_03 = (Sphere *)&stack0xffffffc4;
    aabb._center.z = (float)uVar10;
    aabb._isValid = pAVar8->_isValid;
    aabb._25_3_ = *(undefined3 *)&pAVar8->field_0x19;
    Sphere::Sphere__ctor_1(this_03,aabb,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._objectToNode;
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)objectTransform,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      node = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)pGVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                       );
      if (node.m_Index != 0) {
        *(Sphere **)(node.m_Index + 0x10) = this_03;
        *(float *)(node.m_Index + 0x14) = fVar1;
        *(float *)(node.m_Index + 0x18) = fVar6;
        *(float *)(node.m_Index + 0x1c) = fVar9;
        this_01 = (this->fields)._objectTree;
        if (this_01 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
          SphereTree`1[System::Object]::SphereTree_1_System_Object__OnNodeSphereUpdated
                    ((SphereTree_1_System_Object_ *)this_01,
                     (SphereTreeNode_1_System_Object_ *)node.m_Index,
                     MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OnNodeSphereUpdated_RTG__SphereTreeNode<UnityEngine::GameObject>_
                    );
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_02 = (RTFocusCamera *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (this_02 != (RTFocusCamera *)0x0) {
            RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty(this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean OverlapBox(OBB, List`1[UnityEngine.GameObject]) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_OverlapBox
               (SceneTree *this,OBB obb,List_1_UnityEngine_GameObject_ *gameObjects,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__SceneTree);
    func_?(&MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__get_Data__);
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (gameObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar7 = (gameObjects->fields)._size;
    piVar8 = &(gameObjects->fields)._version;
    *piVar8 = *piVar8 + 1;
    (gameObjects->fields)._size = 0;
    if (0 < iVar7) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(gameObjects->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._objectTree;
    if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
      box._size.y = obb._size.y;
      box._size.x = obb._size.x;
      box._size.z = obb._size.z;
      box._center.x = obb._center.x;
      box._center.y = obb._center.y;
      box._center.z = obb._center.z;
      box._rotation.x = obb._rotation.x;
      box._rotation.y = obb._rotation.y;
      box._rotation.z = obb._rotation.z;
      box._rotation.w = obb._rotation.w;
      box._isValid = obb._isValid;
      box._41_3_ = obb._41_3_;
      bVar9 = SphereTree`1[System::Object]::SphereTree_1_System_Object__OverlapBox
                        ((SphereTree_1_System_Object_ *)this_00,box,
                         (List_1_RTG_SphereTreeNode_1_System_Object_ *)(this->fields)._nodeBuffer,
                         MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__OverlapBox_RTG__OBB__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>_
                        );
      if (bVar9 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      iStack_10 = 0;
      uStack_11 = 0;
      fStack_12 = 0.0;
      if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
        auStack_13._40_4_ = TypeInfo__RTG__GameObjectTypeHelper;
        auStack_13._36_4_ = &UNK_?;
        func_?();
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__GameObjectTypeHelper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__GameObjectTypeHelper);
      }
      iStack_10 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
      if ((TypeInfo__RTG__SceneTree->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__SceneTree);
      }
      pVVar14 = Vector3Ex::Vector3Ex_FromValue
                         ((Vector3 *)(auStack_15 + 4),
                          TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize,
                          (MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar14->x;
      uStack_11._4_4_ = pVVar14->y;
      fStack_12 = pVVar14->z;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._nodeBuffer;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)auStack_15,this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                           );
        LStack_6._list = (List_1_System_Object_ *)pLVar16->_list;
        LStack_6._index = pLVar16->_index;
        LStack_6._version = pLVar16->_version;
        LStack_6._current = *(Object **)&pLVar16->_current;
        iStack_17 = 0;
        uStack_1 = 1;
        RStack_18 = (RegexCharClass_SingleRange)&LStack_6;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                            );
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
                       ,unaff_EBX);
            iVar7 = (gameObjects->fields)._size;
            *unaff_FS_OFFSET = uStack_3;
            return iVar7 != 0;
          }
          if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
          break;
          this_02 = *(GameObject **)((int)LStack_6._current + 0x20);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            if (this_02 == (GameObject *)0x0) break;
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              queryConfig.NoVolumeSize.x = (float)(undefined4)uStack_11;
              queryConfig.ObjectTypes = iStack_10;
              queryConfig.NoVolumeSize.y = (float)uStack_11._4_4_;
              queryConfig.NoVolumeSize.z = fStack_12;
              pOVar19 = ObjectBounds::ObjectBounds_CalcWorldOBB
                                 ((OBB *)auStack_13,this_02,queryConfig,(MethodInfo *)0x0);
              bVar9 = OBB::OBB_IntersectsOBB(&obb,*pOVar19,(MethodInfo *)0x0);
              if (bVar9 != 0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)gameObjects,(Object *)this_02,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                          );
              }
            }
          }
        }
      }
    }
  }
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  bVar9 = (*pcVar21)();
  return bVar9;
}


/* Boolean RaycastAll(Ray, SceneRaycastPrecision, List`1[RTG.GameObjectRayHit]) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastAll
               (SceneTree *this,Ray ray,SceneRaycastPrecision__Enum raycastPresicion,
               List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffeac;
  puVar5 = &stack0xfffffeac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&
                    UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__get_Count__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__SceneTree);
    func_?(&MethodInfo__RTG__SphereTreeNodeRayHit<UnityEngine::GameObject>__get_HitNode__);
    func_?(&MethodInfo__RTG__SphereTreeNode<UnityEngine::GameObject>__get_Data__);
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  func_?(&stack0xfffffec8,0,0x2c);
  afStack_7[0] = 0.0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  fStack_9 = 0.0;
  if (hits == (List_1_RTG_GameObjectRayHit_ *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar10 = (code *)swi(3);
    bVar11 = (*pcVar10)();
    return bVar11;
  }
  iVar12 = (hits->fields)._size;
  piVar13 = &(hits->fields)._version;
  *piVar13 = *piVar13 + 1;
  (hits->fields)._size = 0;
  if (0 < iVar12) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(hits->fields)._items,0,iVar12,(MethodInfo *)0x0);
  }
  this_00 = (this->fields)._objectTree;
  if (this_00 == (SphereTree_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  ray_05.m_Origin.y = ray.m_Origin.y;
  ray_05.m_Origin.x = ray.m_Origin.x;
  ray_05.m_Origin.z = ray.m_Origin.z;
  ray_05.m_Direction.x = ray.m_Direction.x;
  ray_05.m_Direction.y = ray.m_Direction.y;
  ray_05.m_Direction.z = ray.m_Direction.z;
  bVar11 = SphereTree`1[System::Object]::SphereTree_1_System_Object__RaycastAll
                    ((SphereTree_1_System_Object_ *)this_00,ray_05,
                     (List_1_RTG_SphereTreeNodeRayHit_1_System_Object_ *)
                     (this->fields)._nodeHitBuffer,
                     MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RaycastAll_UnityEngine__Ray__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>_
                    );
  if (bVar11 == 0) {
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  iStack_14 = 0;
  uStack_15 = 0;
  fStack_16 = 0.0;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_17 = &UNK_?;
    in_stack_18 = TypeInfo__RTG__GameObjectTypeHelper;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iStack_14 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if ((TypeInfo__RTG__SceneTree->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar19 = Vector3Ex::Vector3Ex_FromValue
                      (&VStack_8,TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize,
                       (MethodInfo *)0x0);
  uStack_15._0_4_ = pVVar19->x;
  uStack_15._4_4_ = pVVar19->y;
  fStack_16 = pVVar19->z;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = (RTFocusCamera *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (this_01 == (RTFocusCamera *)0x0) goto code_?;
  pVVar19 = RTFocusCamera::RTFocusCamera_get_Look(&VStack_8,this_01,(MethodInfo *)0x0);
  uStack_20._0_4_ = pVVar19->x;
  uStack_20._4_4_ = pVVar19->y;
  fStack_21 = pVVar19->z;
  if (raycastPresicion == SceneRaycastPrecision__Enum_BestFit) {
    pLVar22 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._nodeHitBuffer;
    if (pLVar22 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pGVar23 = (GameObjectRayHit *)
              MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__GetEnumerator__
    ;
    pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&BStack_25.Plane.m_Distance,pLVar22,
                         MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__GetEnumerator__
                        );
    pLStack_26 = &LStack_6;
    afStack_7[1] = 0.0;
    LStack_6._list = (List_1_System_Object_ *)pLVar24->_list;
    LStack_6._index = pLVar24->_index;
    LStack_6._version = pLVar24->_version;
    LStack_6._current = *(Object **)&pLVar24->_current;
    uStack_1 = 1;
code_?:
    this_03 = &LStack_6;
    puVar27 = &UNK_?;
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (this_03,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                      );
    if (bVar11 != 0) {
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(int *)((int)LStack_6._current + 8) == 0)) goto code_?;
      pGVar28 = *(GameObject **)(*(int *)((int)LStack_6._current + 8) + 0x20);
      puVar29 = in_stack_17;
      pGVar30 = in_stack_18;
      fVar31 = in_stack_32;
      fVar33 = in_stack_34;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        puVar29 = &UNK_?;
        pGVar30 = (GameObjectTypeHelper__Class *)TypeInfo__UnityEngine__Object;
        func_?();
        fVar31 = in_stack_32;
        fVar33 = in_stack_34;
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar28,(Object_1 *)0x0,(MethodInfo *)0x0);
      in_stack_17 = puVar29;
      in_stack_18 = pGVar30;
      in_stack_32 = fVar31;
      in_stack_34 = fVar33;
      if (bVar11 == 0) {
        if (pGVar28 == (GameObject *)0x0) goto code_?;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar28,(MethodInfo *)0x0);
        in_stack_17 = puVar29;
        in_stack_18 = pGVar30;
        in_stack_32 = fVar31;
        in_stack_34 = fVar33;
        if (bVar11 != 0) {
          pGVar35 = (GameObjectRayHit *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar28,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGStack_36 = pGVar35;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pGVar35 = pGStack_36;
          }
          method_00 = (MethodInfo *)0x0;
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pGVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            if (pGStack_36 == (GameObjectRayHit *)0x0) goto code_?;
            puVar27 = (undefined *)0x0;
            pGVar23 = pGStack_36;
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                              ((Renderer *)pGStack_36,(MethodInfo *)0x0);
            in_stack_17 = puVar29;
            in_stack_18 = pGVar30;
            in_stack_32 = fVar31;
            in_stack_34 = fVar33;
            if (bVar11 == 0) goto code_?;
          }
          if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectEx);
          }
          GVar37 = GameObjectEx::GameObjectEx_GetGameObjectType(pGVar28,(MethodInfo *)0x0);
          if (GVar37 == GameObjectType__Enum_Mesh) {
            ray_02.m_Origin.y = ray.m_Origin.y;
            ray_02.m_Origin.x = ray.m_Origin.x;
            ray_02.m_Origin.z = ray.m_Origin.z;
            ray_02.m_Direction.x = ray.m_Direction.x;
            ray_02.m_Direction.y = ray.m_Direction.y;
            ray_02.m_Direction.z = ray.m_Direction.z;
            pGVar35 = SceneTree_RaycastMeshObject(this,ray_02,pGVar28,(MethodInfo *)0x0);
          }
          else {
            if (GVar37 == GameObjectType__Enum_Terrain) {
              this_02 = (Collider *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar28,
                                   UnityEngine__TerrainCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::TerrainCollider>__
                                  );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
              in_stack_17 = puVar29;
              in_stack_18 = pGVar30;
              in_stack_32 = fVar31;
              in_stack_34 = fVar33;
              if (bVar11 != 0) {
                if (this_02 == (Collider *)0x0) goto code_?;
                ray_04.m_Origin.y = ray.m_Origin.y;
                ray_04.m_Origin.x = ray.m_Origin.x;
                ray_04.m_Origin.z = ray.m_Origin.z;
                ray_04.m_Direction.x = ray.m_Direction.x;
                ray_04.m_Direction.y = ray.m_Direction.y;
                ray_04.m_Direction.z = ray.m_Direction.z;
                bVar11 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                                  (this_02,ray_04,(RaycastHit *)&stack0xfffffec8,3.4028235e+38,
                                   (MethodInfo *)0x0);
                in_stack_17 = puVar29;
                in_stack_18 = pGVar30;
                in_stack_32 = fVar31;
                in_stack_34 = fVar33;
                if (bVar11 != 0) {
                  BStack_25.Plane.m_Distance = ray.m_Origin.x;
                  BStack_25.Center.x = ray.m_Origin.y;
                  BStack_25.Center.y = ray.m_Origin.z;
                  BStack_25.Center.z = ray.m_Direction.x;
                  uStack_38._4_4_ = (Object *)fStack_39;
                  fStack_40 = ray.m_Direction.y;
                  pGStack_36 = (GameObjectRayHit *)ray.m_Direction.z;
                  VStack_8.y = VStack_41.x;
                  VStack_8.z = VStack_41.y;
                  pGVar42 = TypeInfo__RTG__GameObjectRayHit;
                  pGVar35 = (GameObjectRayHit *)func_?();
                  hitRay.m_Origin.y = BStack_25.Center.x;
                  hitRay.m_Origin.x = BStack_25.Plane.m_Distance;
                  hitRay.m_Origin.z = BStack_25.Center.y;
                  hitRay.m_Direction.x = BStack_25.Center.z;
                  hitRay.m_Direction.y = fStack_40;
                  hitRay.m_Direction.z = (float)pGStack_36;
                  hit3D.m_Point.y = (float)puVar27;
                  hit3D.m_Point.x = (float)pGVar23;
                  hit3D.m_Point.z = (float)this_03;
                  hit3D.m_Normal.x = (float)pGVar42;
                  hit3D.m_Normal.y = (float)puVar29;
                  hit3D.m_Normal.z = (float)pGVar30;
                  hit3D.m_FaceID = (uint32_t)fVar31;
                  hit3D.m_Distance = fVar33;
                  hit3D.m_UV.x = VStack_8.y;
                  hit3D.m_UV.y = VStack_8.z;
                  hit3D.m_Collider = (int32_t)uStack_38._4_4_;
                  GameObjectRayHit::GameObjectRayHit__ctor(pGVar35,hitRay,hit3D,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)&UNK_?;
                  pGVar23 = (GameObjectRayHit *)
                            MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)hits,(Object *)pGVar35,
                             MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                            );
                }
              }
              goto code_?;
            }
            if (GVar37 != GameObjectType__Enum_Sprite) {
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__ObjectBounds);
              }
              queryConfig.NoVolumeSize.x = (float)(undefined4)uStack_15;
              queryConfig.ObjectTypes = iStack_14;
              queryConfig.NoVolumeSize.y = (float)uStack_15._4_4_;
              queryConfig.NoVolumeSize.z = fStack_16;
              pOVar43 = ObjectBounds::ObjectBounds_CalcWorldOBB
                                  ((OBB *)&stack0xffffff38,pGVar28,queryConfig,(MethodInfo *)0x0);
              fStack_44 = (pOVar43->_size).x;
              fStack_45 = (pOVar43->_size).y;
              fStack_46 = (pOVar43->_size).z;
              fStack_47 = (pOVar43->_center).x;
              fStack_48 = (pOVar43->_center).y;
              fStack_49 = (pOVar43->_center).z;
              fStack_50 = (pOVar43->_rotation).x;
              pMStack_51 = (MethodInfo *)(pOVar43->_rotation).y;
              fStack_52 = (pOVar43->_rotation).z;
              fStack_53 = (pOVar43->_rotation).w;
              uStack_54 = *(undefined4 *)&pOVar43->_isValid;
              in_stack_17 = puVar29;
              in_stack_18 = pGVar30;
              in_stack_32 = fVar31;
              in_stack_34 = fVar33;
              if ((char)uStack_54 != '\0') {
                fStack_55 = ray.m_Origin.x;
                VStack_8.x = ray.m_Origin.y;
                VStack_8.y = ray.m_Origin.z;
                VStack_8.z = ray.m_Direction.x;
                uStack_38._0_4_ = ray.m_Direction.y;
                uStack_38._4_4_ = (Object *)ray.m_Direction.z;
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                ray_00.m_Origin.y = VStack_8.x;
                ray_00.m_Origin.x = fStack_55;
                ray_00.m_Origin.z = VStack_8.y;
                ray_00.m_Direction.x = VStack_8.z;
                ray_00.m_Direction.y = (float)uStack_38;
                ray_00.m_Direction.z = SUB84(uStack_38,4);
                boxCenter.y = fStack_48;
                boxCenter.x = fStack_47;
                boxCenter.z = fStack_49;
                boxSize.y = fStack_45;
                boxSize.x = fStack_44;
                boxSize.z = fStack_46;
                boxRotation.y = (float)pMStack_51;
                boxRotation.x = fStack_50;
                boxRotation.z = fStack_52;
                boxRotation.w = fStack_53;
                bVar11 = BoxMath::BoxMath_Raycast_1
                                  (ray_00,afStack_7,boxCenter,boxSize,boxRotation,
                                   (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
                in_stack_17 = puVar29;
                in_stack_18 = pGVar30;
                in_stack_32 = fVar31;
                in_stack_34 = fVar33;
                if (bVar11 != 0) {
                  pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                      ((Vector3 *)&stack0xfffffef4,&ray,afStack_7[0],
                                       (MethodInfo *)0x0);
                  uStack_38._0_4_ = pVVar19->x;
                  uStack_38._4_4_ = (Object *)pVVar19->y;
                  pGStack_36 = (GameObjectRayHit *)pVVar19->z;
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  in_stack_34 = 0.0;
                  in_stack_17 = (undefined *)uStack_20;
                  in_stack_18 = (GameObjectTypeHelper__Class *)((ulonglong)uStack_20 >> 0x20);
                  point.z = (float)pGStack_36;
                  point.x = (float)uStack_38;
                  point.y = (float)uStack_38._4_4_;
                  boxCenter_01.y = fStack_48;
                  boxCenter_01.x = fStack_47;
                  boxCenter_01.z = fStack_49;
                  boxSize_01.y = fStack_45;
                  boxSize_01.x = fStack_44;
                  boxSize_01.z = fStack_46;
                  boxRotation_01.y = (float)pMStack_51;
                  boxRotation_01.x = fStack_50;
                  boxRotation_01.z = fStack_52;
                  boxRotation_01.w = fStack_53;
                  viewVector.z = fStack_21;
                  viewVector.x = (float)(undefined4)uStack_20;
                  viewVector.y = (float)uStack_20._4_4_;
                  in_stack_32 = fStack_21;
                  pBVar56 = BoxMath::BoxMath_GetFaceClosestToPoint_1
                                      (&BStack_25,point,boxCenter_01,boxSize_01,boxRotation_01,
                                       viewVector,(MethodInfo *)0x0);
                  fVar31 = (pBVar56->Plane).m_Normal.x;
                  fVar33 = (pBVar56->Plane).m_Normal.y;
                  fVar57 = (pBVar56->Plane).m_Normal.z;
                  VStack_8.y = ray.m_Direction.y;
                  VStack_8.z = ray.m_Direction.z;
                  pGStack_36 = (GameObjectRayHit *)afStack_7[0];
                  puVar27 = &UNK_?;
                  fVar58 = ray.m_Origin.x;
                  fVar59 = ray.m_Origin.y;
                  pGVar42 = TypeInfo__RTG__GameObjectRayHit;
                  pGVar23 = (GameObjectRayHit *)func_?();
                  uStack_38._4_4_ = (Object *)pGVar23;
                  hitRay_00.m_Origin.y = fVar59;
                  hitRay_00.m_Origin.x = fVar58;
                  hitRay_00.m_Origin.z = (float)puVar27;
                  hitRay_00.m_Direction.x = (float)pGVar42;
                  hitRay_00.m_Direction.y = VStack_8.y;
                  hitRay_00.m_Direction.z = VStack_8.z;
                  hitNormal.y = fVar33;
                  hitNormal.x = fVar31;
                  hitNormal.z = fVar57;
                  GameObjectRayHit::GameObjectRayHit__ctor_2
                            (pGVar23,hitRay_00,pGVar28,hitNormal,(float)pGStack_36,(MethodInfo *)0x0)
                  ;
                  method_00 = (MethodInfo *)&UNK_?;
                  pGVar23 = (GameObjectRayHit *)
                            MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)hits,uStack_38._4_4_,
                             MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                            );
                }
              }
              goto code_?;
            }
            ray_01.m_Origin.y = ray.m_Origin.y;
            ray_01.m_Origin.x = ray.m_Origin.x;
            ray_01.m_Origin.z = ray.m_Origin.z;
            ray_01.m_Direction.x = ray.m_Direction.x;
            ray_01.m_Direction.y = ray.m_Direction.y;
            ray_01.m_Direction.z = ray.m_Direction.z;
            pGVar35 = SceneTree_RaycastSpriteObject(this,ray_01,pGVar28,(MethodInfo *)0x0);
          }
          in_stack_17 = puVar29;
          in_stack_18 = pGVar30;
          in_stack_32 = fVar31;
          in_stack_34 = fVar33;
          if (pGVar35 != (GameObjectRayHit *)0x0) {
            method_00 = 
            MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)hits,(Object *)pGVar35,
                       MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                      );
            in_stack_17 = puVar29;
            in_stack_18 = pGVar30;
            in_stack_32 = fVar31;
            in_stack_34 = fVar33;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if (raycastPresicion != SceneRaycastPrecision__Enum_Box) goto code_?;
    pLVar22 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._nodeHitBuffer;
    if (pLVar22 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&BStack_25.Plane.m_Distance,pLVar22,
                         MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__GetEnumerator__
                        );
    pLStack_26 = &LStack_6;
    afStack_7[1] = 0.0;
    LStack_6._list = (List_1_System_Object_ *)pLVar24->_list;
    LStack_6._index = pLVar24->_index;
    LStack_6._version = pLVar24->_version;
    LStack_6._current = *(Object **)&pLVar24->_current;
    uStack_1 = 4;
code_?:
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__MoveNext__
                      );
    if (bVar11 != 0) {
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(int *)((int)LStack_6._current + 8) == 0)) goto code_?;
      pGVar28 = *(GameObject **)(*(int *)((int)LStack_6._current + 8) + 0x20);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method_00 = (MethodInfo *)0x0;
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar28,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        if (pGVar28 == (GameObject *)0x0) goto code_?;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar28,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pGVar23 = (GameObjectRayHit *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar28,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGStack_36 = pGVar23;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pGVar23 = pGStack_36;
          }
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pGVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            if (pGStack_36 == (GameObjectRayHit *)0x0) goto code_?;
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                              ((Renderer *)pGStack_36,(MethodInfo *)0x0);
            if (bVar11 == 0) goto code_?;
          }
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_00.NoVolumeSize.x = (float)(undefined4)uStack_15;
          queryConfig_00.ObjectTypes = iStack_14;
          queryConfig_00.NoVolumeSize.y = (float)uStack_15._4_4_;
          queryConfig_00.NoVolumeSize.z = fStack_16;
          pOVar43 = ObjectBounds::ObjectBounds_CalcWorldOBB
                              ((OBB *)&stack0xffffff38,pGVar28,queryConfig_00,(MethodInfo *)0x0);
          fStack_44 = (pOVar43->_size).x;
          fStack_45 = (pOVar43->_size).y;
          fStack_46 = (pOVar43->_size).z;
          fStack_47 = (pOVar43->_center).x;
          fStack_48 = (pOVar43->_center).y;
          fStack_49 = (pOVar43->_center).z;
          fStack_50 = (pOVar43->_rotation).x;
          pMStack_51 = (MethodInfo *)(pOVar43->_rotation).y;
          fStack_52 = (pOVar43->_rotation).z;
          fStack_53 = (pOVar43->_rotation).w;
          uStack_54 = *(undefined4 *)&pOVar43->_isValid;
          if ((char)uStack_54 != '\0') {
            BStack_25.Plane.m_Distance = ray.m_Origin.x;
            BStack_25.Center.x = ray.m_Origin.y;
            BStack_25.Center.y = ray.m_Origin.z;
            BStack_25.Center.z = ray.m_Direction.x;
            VStack_8.y = ray.m_Direction.y;
            VStack_8.z = ray.m_Direction.z;
            uVar60 = ray.m_Direction._4_8_;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              uVar60._4_4_ = VStack_8.z;
              uVar60._0_4_ = VStack_8.y;
            }
            ray_03.m_Origin.y = BStack_25.Center.x;
            ray_03.m_Origin.x = BStack_25.Plane.m_Distance;
            ray_03.m_Origin.z = BStack_25.Center.y;
            ray_03.m_Direction.x = BStack_25.Center.z;
            ray_03.m_Direction.y = (float)uVar60;
            ray_03.m_Direction.z = SUB84(uVar60,4);
            boxCenter_00.y = fStack_48;
            boxCenter_00.x = fStack_47;
            boxCenter_00.z = fStack_49;
            boxSize_00.y = fStack_45;
            boxSize_00.x = fStack_44;
            boxSize_00.z = fStack_46;
            boxRotation_00.y = (float)pMStack_51;
            boxRotation_00.x = fStack_50;
            boxRotation_00.z = fStack_52;
            boxRotation_00.w = fStack_53;
            method_00 = pMStack_51;
            bVar11 = BoxMath::BoxMath_Raycast_1
                              (ray_03,&fStack_9,boxCenter_00,boxSize_00,boxRotation_00,
                               (BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0);
            if (bVar11 != 0) {
              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                  ((Vector3 *)&stack0xfffffef4,&ray,fStack_9,(MethodInfo *)0x0);
              uVar61._0_4_ = pVVar19->x;
              uVar61._4_4_ = pVVar19->y;
              VStack_8.y = (float)(undefined4)uVar61;
              VStack_8.z = (float)uVar61._4_4_;
              uStack_38._4_4_ = (Object *)pVVar19->z;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                uVar61 = CONCAT44(VStack_8.z,VStack_8.y);
              }
              point_00.z = (float)uStack_38._4_4_;
              point_00.x = (float)(int)uVar61;
              point_00.y = (float)(int)((ulonglong)uVar61 >> 0x20);
              boxCenter_02.y = fStack_48;
              boxCenter_02.x = fStack_47;
              boxCenter_02.z = fStack_49;
              boxSize_02.y = fStack_45;
              boxSize_02.x = fStack_44;
              boxSize_02.z = fStack_46;
              boxRotation_02.y = (float)pMStack_51;
              boxRotation_02.x = fStack_50;
              boxRotation_02.z = fStack_52;
              boxRotation_02.w = fStack_53;
              viewVector_00.z = fStack_21;
              viewVector_00.x = (float)(undefined4)uStack_20;
              viewVector_00.y = (float)uStack_20._4_4_;
              pBVar56 = BoxMath::BoxMath_GetFaceClosestToPoint_1
                                  (&BStack_25,point_00,boxCenter_02,boxSize_02,boxRotation_02,
                                   viewVector_00,(MethodInfo *)0x0);
              fVar31 = (pBVar56->Plane).m_Normal.x;
              fVar33 = (pBVar56->Plane).m_Normal.y;
              fVar57 = (pBVar56->Plane).m_Normal.z;
              BStack_25.Plane.m_Distance = ray.m_Origin.x;
              BStack_25.Center.x = ray.m_Origin.y;
              BStack_25.Center.y = ray.m_Origin.z;
              BStack_25.Center.z = ray.m_Direction.x;
              VStack_8.y = ray.m_Direction.y;
              VStack_8.z = ray.m_Direction.z;
              LStack_6._index = (int32_t)TypeInfo__RTG__GameObjectRayHit;
              uStack_38._4_4_ = (Object *)fStack_9;
              LStack_6._list = (List_1_System_Object_ *)&UNK_?;
              pGVar23 = (GameObjectRayHit *)func_?();
              pGStack_36 = pGVar23;
              hitRay_01.m_Origin.y = BStack_25.Center.x;
              hitRay_01.m_Origin.x = BStack_25.Plane.m_Distance;
              hitRay_01.m_Origin.z = BStack_25.Center.y;
              hitRay_01.m_Direction.x = BStack_25.Center.z;
              hitRay_01.m_Direction.y = VStack_8.y;
              hitRay_01.m_Direction.z = VStack_8.z;
              hitNormal_00.y = fVar33;
              hitNormal_00.x = fVar31;
              hitNormal_00.z = fVar57;
              GameObjectRayHit::GameObjectRayHit__ctor_2
                        (pGVar23,hitRay_01,pGVar28,hitNormal_00,(float)uStack_38._4_4_,
                         (MethodInfo *)0x0);
              method_00 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)hits,(Object *)pGStack_36,
                         MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                        );
            }
          }
        }
      }
      goto code_?;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&LStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__Dispose__
             ,method_00);
code_?:
  iVar12 = (hits->fields)._size;
  *unaff_FS_OFFSET = uStack_3;
  return iVar12 != 0;
}


/* GameObjectRayHit RaycastMeshObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastMeshObject
          (SceneTree *this,Ray ray,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&
                    UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffc8,0,0x2c);
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  unityMesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
  }
  this_00 = (RTMeshDb *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
  if (this_00 != (RTMeshDb *)0x0) {
    this_01 = RTMeshDb::RTMeshDb_GetRTMesh(this_00,unityMesh,(MethodInfo *)0x0);
    if (gameObject != (GameObject *)0x0) {
      if (this_01 == (RTMesh *)0x0) {
        this_02 = (Collider *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (gameObject,
                             UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshCollider>__
                            );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (this_02 == (Collider *)0x0) goto code_?;
          bVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                            (this_02,ray,(RaycastHit *)&stack0xffffffc8,3.4028235e+38,
                             (MethodInfo *)0x0);
          if (bVar1 != 0) {
            pGVar2 = (GameObjectRayHit *)func_?();
            hit3D.m_Point.y = in_stack_3;
            hit3D.m_Point.x = in_stack_4;
            hit3D.m_Point.z = in_stack_5;
            hit3D.m_Normal.x = in_stack_6;
            hit3D.m_Normal.y = in_stack_7;
            hit3D.m_Normal.z = in_stack_8;
            hit3D.m_FaceID = in_stack_9;
            hit3D.m_Distance = in_stack_10;
            hit3D.m_UV = VStack_11;
            hit3D.m_Collider = iStack_12;
            GameObjectRayHit::GameObjectRayHit__ctor(pGVar2,ray,hit3D,(MethodInfo *)0x0);
            return pGVar2;
          }
        }
      }
      else {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObject,(MethodInfo *)0x0);
        if (this_03 == (Transform *)0x0) goto code_?;
        pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff68,this_03,(MethodInfo *)0x0);
        meshRayHit = RTMesh::RTMesh_Raycast(this_01,ray,*pMVar13,(MethodInfo *)0x0);
        if (meshRayHit != (MeshRayHit *)0x0) {
          pGVar2 = (GameObjectRayHit *)func_?();
          GameObjectRayHit::GameObjectRayHit__ctor_3
                    (pGVar2,ray,gameObject,meshRayHit,(MethodInfo *)0x0);
          return pGVar2;
        }
      }
      return (GameObjectRayHit *)0x0;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pGVar2 = (GameObjectRayHit *)(*pcVar14)();
  return pGVar2;
}


/* GameObjectRayHit RaycastSpriteObject(Ray, GameObject) */

GameObjectRayHit *
Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RaycastSpriteObject
          (SceneTree *this,Ray ray,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  func_?(&stack0xffffffac,0,0x2c);
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  pOVar2 = ObjectBounds::ObjectBounds_CalcSpriteWorldOBB
                      ((OBB *)&stack0xffffff60,gameObject,(MethodInfo *)0x0);
  fVar3 = ray.m_Direction.x;
  fVar4 = ray.m_Origin.z;
  fVar5 = ray.m_Origin.y;
  fVar6 = ray.m_Origin.x;
  boxSize = pOVar2->_size;
  uStack_7._0_4_ = (pOVar2->_center).x;
  uStack_7._4_4_ = (pOVar2->_center).y;
  fVar8 = (pOVar2->_center).z;
  fVar9 = (pOVar2->_rotation).w;
  uVar10 = (pOVar2->_rotation).x;
  uVar11 = (pOVar2->_rotation).y;
  uVar12 = (pOVar2->_rotation).z;
  boxRotation.z = (float)uVar12;
  boxRotation.y = (float)uVar11;
  boxRotation.x = (float)uVar10;
  if ((char)*(undefined4 *)&pOVar2->_isValid != '\0') {
    VStack_13.y = ray.m_Direction.y;
    VStack_13.z = ray.m_Direction.z;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray_00.m_Origin.y = fVar5;
    ray_00.m_Origin.x = fVar6;
    ray_00.m_Origin.z = fVar4;
    ray_00.m_Direction.x = fVar3;
    ray_00.m_Direction.y = VStack_13.y;
    ray_00.m_Direction.z = VStack_13.z;
    boxCenter.z = fVar8;
    boxCenter.x = (float)uStack_7;
    boxCenter.y = uStack_7._4_4_;
    boxRotation.w = fVar9;
    bVar14 = BoxMath::BoxMath_Raycast_1
                       (ray_00,&fStack_1,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    fVar8 = ray.m_Origin.y;
    fVar9 = ray.m_Origin.x;
    if (bVar14 != 0) {
      uStack_7._0_4_ = ray.m_Direction.y;
      uStack_7._4_4_ = ray.m_Direction.z;
      __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (__return_storage_ptr__,&ray,fStack_1,(MethodInfo *)0x0);
      pVVar15 = OBB::OBB_GetPointFaceNormal
                          (&VStack_13,(OBB *)&stack0xffffffac,*pVVar15,(MethodInfo *)0x0);
      uVar16 = pVVar15->y;
      fVar6 = pVVar15->z;
      VStack_13.z = fStack_1;
      this_00 = (GameObjectRayHit *)func_?();
      hitRay.m_Origin.y = fVar8;
      hitRay.m_Origin.x = fVar9;
      hitRay.m_Origin.z = (float)&UNK_?;
      hitRay.m_Direction.x = (float)__return_storage_ptr__;
      hitRay.m_Direction.y = (float)uStack_7;
      hitRay.m_Direction.z = SUB84(uStack_7,4);
      auVar17._4_4_ = fVar6;
      auVar17._0_4_ = uVar16;
      auVar17._8_4_ = 0;
      GameObjectRayHit::GameObjectRayHit__ctor_2
                (this_00,hitRay,gameObject,(Vector3)(auVar17 << 0x20),VStack_13.z,(MethodInfo *)0x0);
      return this_00;
    }
  }
  return (GameObjectRayHit *)0x0;
}


/* Boolean RegisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RegisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                   );
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__SceneTree);
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__AddNode_UnityEngine__GameObject__RTG__Sphere_
                   );
    cRam_? = '\x01';
  }
  SStack_1._center.x = 0.0;
  SStack_1._center.y = 0.0;
  SStack_1._center.z = 0.0;
  SStack_1._radius = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._objectToNode;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        SStack_1._center.z = (float)TypeInfo__RTG__GameObjectEx;
        SStack_1._center.y = (float)&UNK_?;
        func_?();
      }
      bVar2 = GameObjectEx::GameObjectEx_IsRTGAppObject(gameObject,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (gameObject != (GameObject *)0x0) {
          x = (Object_1 *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (gameObject,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                        );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 0;
          }
          auStack_4._12_4_ = 0.0;
          auStack_4._16_4_ = 0.0;
          auStack_4._20_4_ = 0.0;
          uStack_5._0_1_ = 0;
          uStack_5._1_3_ = 0;
          if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectTypeHelper);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RTG__GameObjectTypeHelper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectTypeHelper);
          }
          auStack_4._12_4_ = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
          if ((TypeInfo__RTG__SceneTree->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__SceneTree);
          }
          pVVar6 = Vector3Ex::Vector3Ex_FromValue
                             (&VStack_7,TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize
                              ,(MethodInfo *)0x0);
          auStack_4._16_4_ = pVVar6->x;
          auStack_4._20_4_ = pVVar6->y;
          uStack_5 = pVVar6->z;
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__ObjectBounds);
          }
          queryConfig.NoVolumeSize.x = (float)auStack_4._16_4_;
          queryConfig.ObjectTypes = auStack_4._12_4_;
          queryConfig.NoVolumeSize.y = (float)auStack_4._20_4_;
          queryConfig.NoVolumeSize.z = uStack_5;
          pAVar8 = ObjectBounds::ObjectBounds_CalcWorldAABB
                             ((AABB *)auStack_4,gameObject,queryConfig,(MethodInfo *)0x0);
          Sphere::Sphere__ctor_1(&SStack_1,*pAVar8,(MethodInfo *)0x0);
          this_01 = (this->fields)._objectTree;
          if (this_01 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
            sphere._center.y = SStack_1._center.y;
            sphere._center.x = SStack_1._center.x;
            sphere._center.z = SStack_1._center.z;
            sphere._radius = SStack_1._radius;
            value = SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
                              ((SphereTree_1_System_Object_ *)this_01,(Object *)gameObject,sphere,
                               MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__AddNode_UnityEngine__GameObject__RTG__Sphere_
                              );
            this_02 = (this->fields)._objectToNode;
            if (this_02 !=
                (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
                0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)gameObject,
                         (Object *)value,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                        );
              if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
              }
              this_03 = (RTFocusCamera *)
                        MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                  (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
              if (this_03 != (RTFocusCamera *)0x0) {
                RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty(this_03,(MethodInfo *)0x0);
                return 1;
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
}


/* Void RemoveNodesWithNullObjects() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree_RemoveNodesWithNullObjects
               (SceneTree *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
            );
  this_00 = (this->fields)._objectToNode;
  pDStack_7 = this_03;
  if (this_00 !=
      (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa4,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
    DStack_6._version = pDVar8->_version;
    DStack_6._index = pDVar8->_index;
    DStack_6._current.key = (Object *)(pDVar8->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pOStack_12 = (Object_1 *)DStack_6._current.key;
      pMStack_13 = (MethodInfo *)DStack_6._current.value;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (pOStack_12,(Object_1 *)0x0,(MethodInfo *)0x0);
      in_stack_14 = pMStack_13;
      if (bVar11 == 0) {
        if (this_03 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)pOStack_12,
                   (Object *)pMStack_13,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Add_UnityEngine__GameObject__RTG__SphereTreeNode<UnityEngine::GameObject>_
                  );
      }
      else {
        this_01 = (this->fields)._objectTree;
        if (this_01 == (SphereTree_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                  ((SphereTree_1_System_Object_ *)this_01,
                   (SphereTreeNode_1_System_Object_ *)pMStack_13,
                   MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                  );
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dispose__
               ,in_stack_14);
    uStack_1 = 0xffffffff;
    this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields)._objectToNode;
    if (this_02 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Clear__
                );
      (this->fields)._objectToNode =
           (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
           this_03;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean UnregisterObject(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneTree::SceneTree_UnregisterObject
               (SceneTree *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&
                    MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._objectToNode;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)gameObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__ContainsKey_UnityEngine__GameObject_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._objectToNode;
    this_00 = (this->fields)._objectTree;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      node = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar1,(Object *)gameObject,
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__get_Item_UnityEngine__GameObject_
                       );
      if (this_00 != (SphereTree_1_UnityEngine_GameObject_ *)0x0) {
        SphereTree`1[System::Object]::SphereTree_1_System_Object__RemoveNode
                  ((SphereTree_1_System_Object_ *)this_00,
                   (SphereTreeNode_1_System_Object_ *)node.m_Index,
                   MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__RemoveNode_RTG__SphereTreeNode<UnityEngine::GameObject>_
                  );
        this_01 = (this->fields)._objectToNode;
        if (this_01 !=
            (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)gameObject,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Remove_UnityEngine__GameObject_
                    );
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_02 = (RTFocusCamera *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (this_02 != (RTFocusCamera *)0x0) {
            RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty(this_02,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* SceneTree() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SceneTree);
    cRam_? = '\x01';
  }
  TypeInfo__RTG__SceneTree->static_fields->_nonMeshObjectSize = 0.0001;
  return;
}


/* SceneTree() */

void Assembly-CSharp.dll::RTG::SceneTree::SceneTree__ctor(SceneTree *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>
                   );
    func_?(&MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__SphereTree__);
    func_?(&TypeInfo__RTG__SphereTree<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (SphereTree_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__RTG__SphereTree<UnityEngine::GameObject>);
  SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
            ((SphereTree_1_System_Object_ *)this_00,
             MethodInfo__RTG__SphereTree<UnityEngine::GameObject>__SphereTree__);
  (this->fields)._objectTree = this_00;
  func_?(&this->fields,this_00);
  this_01 = (List_1_RTG_SphereTreeNodeRayHit_1_UnityEngine_GameObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<UnityEngine::GameObject>_>__List__
            );
  (this->fields)._nodeHitBuffer = this_01;
  func_?(&(this->fields)._nodeHitBuffer,this_01);
  this_02 = (List_1_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<UnityEngine::GameObject>_>__List__
            );
  (this->fields)._nodeBuffer = this_02;
  func_?(&(this->fields)._nodeBuffer,this_02);
  this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::SphereTreeNode<UnityEngine::GameObject>_>__Dictionary__
            );
  (this->fields)._objectToNode =
       (Dictionary_2_UnityEngine_GameObject_RTG_SphereTreeNode_1_UnityEngine_GameObject_ *)this_03;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields)._objectToNode)
  ;
  return;
}

