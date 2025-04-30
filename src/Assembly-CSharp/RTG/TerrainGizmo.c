
/* Boolean CanObjectBeMovedHrz(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_CanObjectBeMovedHrz
               (TerrainGizmo *this,GameObject *go,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedSettings;
  if (((pTVar1 != (TerrainGizmoSettings *)0x0) ||
      (pTVar1 = (this->fields)._settings, pTVar1 != (TerrainGizmoSettings *)0x0)) &&
     (iVar2 = (pTVar1->fields)._objectHrzMoveLayerMask, go != (GameObject *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    pTVar1 = (this->fields)._sharedSettings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectHrzMoveIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 == 0;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean CanObjectBeMovedVert(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_CanObjectBeMovedVert
               (TerrainGizmo *this,GameObject *go,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedSettings;
  if (((pTVar1 != (TerrainGizmoSettings *)0x0) ||
      (pTVar1 = (this->fields)._settings, pTVar1 != (TerrainGizmoSettings *)0x0)) &&
     (iVar2 = (pTVar1->fields)._objectVertMoveLayerMask, go != (GameObject *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    pTVar1 = (this->fields)._sharedSettings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectVertMoveIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 == 0;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean CanObjectBeRotated(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_CanObjectBeRotated
               (TerrainGizmo *this,GameObject *go,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedSettings;
  if (((pTVar1 != (TerrainGizmoSettings *)0x0) ||
      (pTVar1 = (this->fields)._settings, pTVar1 != (TerrainGizmoSettings *)0x0)) &&
     (iVar2 = (pTVar1->fields)._objectRotationLayerMask, go != (GameObject *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    pTVar1 = (this->fields)._sharedSettings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectRotationIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 == 0;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void CollectObjectsInRadius(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_CollectObjectsInRadius
               (TerrainGizmo *this,List_1_UnityEngine_GameObject_ *objectsInRadius,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    func_?(&
                    MethodInfo__RTG__TerrainGizmo___CollectObjectsInRadius_b__93_0_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  if (objectsInRadius != (List_1_UnityEngine_GameObject_ *)0x0) {
    length = (objectsInRadius->fields)._size;
    piVar1 = &(objectsInRadius->fields)._version;
    *piVar1 = *piVar1 + 1;
    (objectsInRadius->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(objectsInRadius->fields)._items,0,length,(MethodInfo *)0x0);
    }
    uVar2 = 0;
    uVar3 = 0;
    fVar4 = (this->fields)._radius;
    this_00 = (this->fields)._targetTerrain;
    if (this_00 != (Terrain *)0x0) {
      this_01 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (TerrainData *)0x0) {
        pVVar5 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                           (&VStack_6,this_01,(MethodInfo *)0x0);
        fVar7 = (this->fields)._radius;
        fVar7 = fVar7 + fVar7;
        fVar8 = pVVar5->y;
        pGVar9 = (this->fields)._._gizmo;
        VStack_6.z = fVar7;
        if ((pGVar9 != (Gizmo *)0x0) &&
           (pGVar10 = (pGVar9->fields)._transform, pGVar10 != (GizmoTransform *)0x0)) {
          uVar11 = (pGVar10->fields)._position3D.x;
          uVar12 = (pGVar10->fields)._position3D.y;
          fVar13 = (pGVar10->fields)._position3D.z;
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
          }
          this_02 = (RTScene *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
          if (this_02 != (RTScene *)0x0) {
            obb._size.y = fVar8 + fVar8;
            obb._size.x = fVar4 + fVar4;
            obb._size.z = fVar7;
            obb._center.x = (float)uVar11;
            obb._center.y = (float)uVar12;
            obb._center.z = fVar13;
            obb._rotation.x = (float)(int)uVar2;
            obb._rotation.y = (float)(int)((ulonglong)uVar2 >> 0x20);
            obb._rotation.z = (float)(int)uVar3;
            obb._rotation.w = (float)(int)((ulonglong)uVar3 >> 0x20);
            obb._40_4_ = 0;
            RTScene::RTScene_OverlapBox_1
                      (this_02,obb,(this->fields)._sceneOverlapFilter,
                       (this->fields)._objectCollectRadius,(MethodInfo *)0x0);
            gameObjects = (this->fields)._objectCollectRadius;
            if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            GameObjectEx::GameObjectEx_FilterParentsOnly
                      ((IEnumerable_1_UnityEngine_GameObject_ *)gameObjects,objectsInRadius,
                       (MethodInfo *)0x0);
            this_03 = (Predicate_1_Object_ *)func_?();
            mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__RTG__TerrainGizmo___CollectObjectsInRadius_b__93_0_UnityEngine__GameObject_
                       ,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAll
                      ((List_1_System_Object_ *)objectsInRadius,this_03,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DragObjectsWithMidCap() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_DragObjectsWithMidCap
               (TerrainGizmo *this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Object__Class *pOVar9;
  Gizmo *pGVar10;
  TerrainCollider *this_00;
  GizmoTransform *pGVar11;
  GizmoTransform *this_01;
  Terrain *pTVar12;
  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *this_02;
  int iVar13;
  List_1_System_String_ *this_03;
  code *pcVar14;
  Ray ray;
  Vector3 worldPosition;
  Vector3 value;
  Vector3 worldPosition_00;
  Vector3 value_00;
  bool bVar15;
  Object *pOVar16;
  undefined1 (*pauVar17) [20];
  Regex_CachedCodeEntryKey *pRVar18;
  Transform *pTVar19;
  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *pLVar20;
  TerrainGizmoSettings *pTVar21;
  int32_t iVar22;
  String *item;
  Vector3 *pVVar23;
  undefined4 *unaff_FS_OFFSET;
  RegexCharClass_SingleRange method_00;
  float fVar24;
  float fVar25;
  undefined *puStack_26;
  undefined *puStack_27;
  RegexCharClass_SingleRange this_04;
  RegexCharClass_SingleRange RVar28;
  undefined *puVar29;
  float fVar30;
  float fStack_31;
  float fStack_32;
  float fStack_33;
  float fStack_34;
  TerrainGizmoSettings *pTStack_35;
  undefined4 uStack_36;
  undefined *puStack_37;
  undefined4 uStack_38;
  
  uStack_38 = 0xffffffff;
  puStack_37 = &DAT_?;
  uStack_36 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_36;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  func_?(&puStack_26,0,0x2c);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar16 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar16 != (Object *)0x0) {
    pOVar9 = pOVar16[2].klass;
    pGVar10 = (this->fields)._._gizmo;
    if (pGVar10 != (Gizmo *)0x0) {
      Gizmo::Gizmo_GetWorkCamera(pGVar10,(MethodInfo *)0x0);
      if (pOVar9 != (Object__Class *)0x0) {
        pauVar17 = (undefined1 (*) [20])func_?(&stack0xffffff80,6);
        this_00 = (this->fields)._terrainCollider;
        if (this_00 != (TerrainCollider *)0x0) {
          ray.m_Direction.z = (float)((ulonglong)*(undefined8 *)(*pauVar17 + 0x10) >> 0x20);
          ray._0_20_ = *pauVar17;
          bVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                             ((Collider *)this_00,ray,(RaycastHit *)&puStack_26,3.4028235e+38,
                              (MethodInfo *)0x0);
          if (bVar15 == 0) {
code_?:
            *unaff_FS_OFFSET = uStack_36;
            return;
          }
          pRVar18 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              ((Regex_CachedCodeEntryKey *)&stack0xffffffb8,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&puStack_26,(MethodInfo *)0x0);
          pGVar10 = (this->fields)._._gizmo;
          uVar1 = pRVar18->_options;
          uVar5 = pRVar18->_cultureKey;
          if ((pGVar10 != (Gizmo *)0x0) &&
             (pGVar11 = (pGVar10->fields)._transform, pGVar11 != (GizmoTransform *)0x0)) {
            uVar2 = (pGVar11->fields)._position3D.x;
            uVar6 = (pGVar11->fields)._position3D.y;
            this_01 = (pGVar10->fields)._transform;
            if (this_01 != (GizmoTransform *)0x0) {
              uVar3 = (this_01->fields)._position3D.x;
              uVar7 = (this_01->fields)._position3D.y;
              method_00 = (RegexCharClass_SingleRange)
                          ((this_01->fields)._position3D.z +
                          ((float)pRVar18->_pattern - (pGVar11->fields)._position3D.z));
              value.y = (float)uVar7 + ((float)uVar5 - (float)uVar6);
              value.x = (float)uVar3 + ((float)uVar1 - (float)uVar2);
              value.z = (float)method_00;
              GizmoTransform::GizmoTransform_set_Position3D(this_01,value,(MethodInfo *)0x0);
              pTVar12 = (this->fields)._targetTerrain;
              if (pTVar12 != (Terrain *)0x0) {
                pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTVar12,(MethodInfo *)0x0);
                if (pTVar19 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb8,pTVar19,(MethodInfo *)0x0);
                  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields)._objectsInRadius;
                  if (this_02 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)&stack0xffffff88,this_02,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                                        );
                    uStack_38 = 1;
                    RVar28 = pLVar20->_current;
                    while( true ) {
                      this_04 = RVar28;
                      bVar15 = mscorlib.dll::System::Collections::Generic::
                               List`1[T]+Enumerator[System::Object]::
                               List_1_T_Enumerator_System_Object__MoveNext
                                         ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff98,
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                         );
                      if (bVar15 == 0) break;
                      pTVar21 = (this->fields)._sharedSettings;
                      if (((pTVar21 == (TerrainGizmoSettings *)0x0) &&
                          (pTVar21 = (this->fields)._settings,
                          pTVar21 == (TerrainGizmoSettings *)0x0)) ||
                         (iVar13 = (pTVar21->fields)._objectHrzMoveLayerMask,
                         this_04 == (RegexCharClass_SingleRange)0x0)) goto code_?;
                      puVar29 = &UNK_?;
                      RVar28 = this_04;
                      iVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_layer((GameObject *)this_04,(MethodInfo *)0x0);
                      if ((iVar13 >> ((byte)iVar22 & 0x1f) & 1U) != 0) {
                        pTStack_35 = (this->fields)._sharedSettings;
                        if (pTStack_35 == (TerrainGizmoSettings *)0x0) {
                          pTStack_35 = (this->fields)._settings;
                        }
                        fVar30 = 0.0;
                        method_00 = this_04;
                        item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_tag((GameObject *)this_04,(MethodInfo *)0x0);
                        if (pTStack_35 == (TerrainGizmoSettings *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        this_03 = (pTStack_35->fields)._objectHrzMoveIgnoreTags;
                        if (this_03 == (List_1_System_String_ *)0x0) goto code_?;
                        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]
                                 ::List_1_System_Object__Contains
                                           ((List_1_System_Object_ *)this_03,(Object *)item,
                                            MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                           );
                        if (bVar15 == 0) {
                          pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform
                                              ((GameObject *)this_04,(MethodInfo *)0x0);
                          if (pTVar19 == (Transform *)0x0) goto code_?;
                          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position
                                              ((Vector3 *)&puStack_27,pTVar19,(MethodInfo *)0x0);
                          pTVar12 = (this->fields)._targetTerrain;
                          uVar4 = pVVar23->x;
                          uVar8 = pVVar23->y;
                          worldPosition.y = (float)uVar8;
                          worldPosition.x = (float)uVar4;
                          fVar25 = pVVar23->z;
                          if (pTVar12 == (Terrain *)0x0) goto code_?;
                          worldPosition.z = pVVar23->z;
                          fVar24 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                   Terrain_SampleHeight(pTVar12,worldPosition,(MethodInfo *)0x0);
                          fVar24 = fVar24 + fVar30;
                          method_00 = (RegexCharClass_SingleRange)(fVar25 + (float)puVar29);
                          pTVar12 = (this->fields)._targetTerrain;
                          if (pTVar12 == (Terrain *)0x0) goto code_?;
                          worldPosition_00.y = (float)&stack0xffffff98 + (float)uVar8;
                          worldPosition_00.x = (float)uVar4 + 4.2908898e-29;
                          worldPosition_00.z = (float)method_00;
                          fVar25 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                   Terrain_SampleHeight(pTVar12,worldPosition_00,(MethodInfo *)0x0);
                          pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform
                                              ((GameObject *)this_04,(MethodInfo *)0x0);
                          if (pTVar19 == (Transform *)0x0) goto code_?;
                          value_00.y = fVar25 + fVar30 + ((float)uVar8 - fVar24);
                          value_00.x = (float)uVar4 + 4.2908898e-29;
                          value_00.z = (float)method_00;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar19,value_00,(MethodInfo *)0x0);
                        }
                      }
                    }
                    uStack_38 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)&stack0xffffff98,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                               ,(MethodInfo *)method_00);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Vector3 GetRadiusCircleMaxExtents() */

Vector3 * Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_GetRadiusCircleMaxExtents
                    (Vector3 *__return_storage_ptr__,TerrainGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    uVar3 = (pGVar2->fields)._position3D.x;
    uVar4 = (pGVar2->fields)._position3D.y;
    fVar5 = (pGVar2->fields)._position3D.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar6->rightVector).x;
    uVar8 = (pVVar6->rightVector).y;
    fVar9 = (pVVar6->rightVector).z;
    fVar10 = (this->fields)._radius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar6->forwardVector).x;
    uVar12 = (pVVar6->forwardVector).y;
    fVar13 = (pVVar6->forwardVector).z;
    fVar14 = (this->fields)._radius;
    __return_storage_ptr__->x = (float)uVar11 * fVar14 + (float)uVar3 + (float)uVar7 * fVar10;
    __return_storage_ptr__->y = (float)uVar4 + (float)uVar8 * fVar10 + (float)uVar12 * fVar14;
    __return_storage_ptr__->z = fVar5 + fVar9 * fVar10 + fVar13 * fVar14;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar15)();
  return pVVar16;
}


/* Vector3 GetRadiusCircleMinExtents() */

Vector3 * Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_GetRadiusCircleMinExtents
                    (Vector3 *__return_storage_ptr__,TerrainGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    uVar3 = (pGVar2->fields)._position3D.x;
    uVar4 = (pGVar2->fields)._position3D.y;
    fVar5 = (pGVar2->fields)._position3D.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar6->rightVector).x;
    uVar8 = (pVVar6->rightVector).y;
    fVar9 = (pVVar6->rightVector).z;
    fVar10 = (this->fields)._radius;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar6->forwardVector).x;
    uVar12 = (pVVar6->forwardVector).y;
    fVar13 = (pVVar6->forwardVector).z;
    fVar14 = (this->fields)._radius;
    __return_storage_ptr__->x = ((float)uVar3 - (float)uVar7 * fVar10) - (float)uVar11 * fVar14;
    __return_storage_ptr__->y = ((float)uVar4 - (float)uVar8 * fVar10) - (float)uVar12 * fVar14;
    __return_storage_ptr__->z = (fVar5 - fVar9 * fVar10) - fVar13 * fVar14;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar15)();
  return pVVar16;
}


/* TerrainGizmo+RadiusTick GetRadiusTickFromHandleId(Int32) */

TerrainGizmo_RadiusTick *
Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_GetRadiusTickFromHandleId
          (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  pTVar1 = (this->fields)._leftRadiusTick;
  if ((pTVar1 != (TerrainGizmo_RadiusTick *)0x0) &&
     (pGVar2 = (pTVar1->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
    pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar3) {
      return (this->fields)._leftRadiusTick;
    }
    pTVar1 = (this->fields)._rightRadiusTick;
    if ((pTVar1 != (TerrainGizmo_RadiusTick *)0x0) &&
       (pGVar2 = (pTVar1->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
      pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar3) {
        return (this->fields)._rightRadiusTick;
      }
      pTVar1 = (this->fields)._forwardRadiusTick;
      if ((pTVar1 != (TerrainGizmo_RadiusTick *)0x0) &&
         (pGVar2 = (pTVar1->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
        pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar3) {
          return (this->fields)._forwardRadiusTick;
        }
        pTVar1 = (this->fields)._backRadiusTick;
        if ((pTVar1 != (TerrainGizmo_RadiusTick *)0x0) &&
           (pGVar2 = (pTVar1->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
          pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                   AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
          if ((void *)handleId != pvVar3) {
            return (TerrainGizmo_RadiusTick *)0x0;
          }
          return (this->fields)._backRadiusTick;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar1 = (TerrainGizmo_RadiusTick *)(*pcVar4)();
  return pTVar1;
}


/* Single GetTerrainYPos() */

float Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_GetTerrainYPos
                (TerrainGizmo *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTerrain;
  if (this_00 != (Terrain *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      return pVVar1->y;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Boolean IsObjectInRadius(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_IsObjectInRadius
               (TerrainGizmo *this,GameObject *gameObject,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    uVar3 = (pGVar2->fields)._position3D.y;
    fVar4 = (pGVar2->fields)._position3D.z;
    if (gameObject != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_6,this_00,(MethodInfo *)0x0);
        VStack_6.x = pVVar5->x;
        VStack_6.y = pVVar5->y;
        VStack_6.z = pVVar5->z;
        fVar7 = fStack_8 - VStack_6.x;
        fVar9 = fStack_10 - VStack_6.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math,uVar3,fVar4);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar11 = (double)(fVar7 * fVar7 + _UNK_? + fVar9 * fVar9);
        if (dVar11 < 0.0) {
          func_?();
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        return (float)dVar11 <= (this->fields)._radius;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_IsTargetReady
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields)._targetTerrain;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  x_00 = (this->fields)._terrainCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OffsetObjectsInRadius(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OffsetObjectsInRadius
               (TerrainGizmo *this,float offset,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffed0;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffed0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__Add_RTG__TerrainGizmoAffectedObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__RTG__TerrainGizmoAffectedObject);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  this_00 = (this->fields)._targetTerrain;
  if (this_00 != (Terrain *)0x0) {
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_04 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_9,this_04,(MethodInfo *)0x0);
      fStack_10 = pVVar8->y;
      pGVar11 = (this->fields)._._gizmo;
      if ((pGVar11 != (Gizmo *)0x0) &&
         (pGVar12 = (pGVar11->fields)._transform, pGVar12 != (GizmoTransform *)0x0)) {
        uStack_13._0_4_ = (pGVar12->fields)._position3D.x;
        uStack_13._4_4_ = (pGVar12->fields)._position3D.y;
        fStack_14 = (pGVar12->fields)._position3D.z;
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields)._objectsInRadius;
        if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          if ((this_01->fields)._size != 0) {
            pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                (&LStack_16,this_01,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                                );
            uStack_17 = 0;
            LStack_18._list = (List_1_System_Object_ *)pLVar15->_list;
            LStack_18._index = pLVar15->_index;
            LStack_18._version = pLVar15->_version;
            LStack_18._current = *(Object **)&pLVar15->_current;
            uStack_2 = 1;
            pLStack_19 = &LStack_18;
            while( true ) {
              bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_18,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                );
              if (bVar20 == 0) break;
              pTVar21 = (this->fields)._sharedSettings;
              RStack_22 = (RegexCharClass_SingleRange)LStack_18._current;
              if (((pTVar21 == (TerrainGizmoSettings *)0x0) &&
                  (pTVar21 = (this->fields)._settings, pTVar21 == (TerrainGizmoSettings *)0x0)) ||
                 (pSStack_23 = (String *)(pTVar21->fields)._objectVertMoveLayerMask,
                 (RegexCharClass_SingleRange)LStack_18._current == (RegexCharClass_SingleRange)0x0))
              goto code_?;
              iVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                 ((GameObject *)LStack_18._current,(MethodInfo *)0x0);
              if (((int)pSStack_23 >> ((byte)iVar24 & 0x1f) & 1U) != 0) {
                pTStack_25 = (this->fields)._sharedSettings;
                if (pTStack_25 == (TerrainGizmoSettings *)0x0) {
                  pTStack_25 = (this->fields)._settings;
                }
                in_stack_26 = RStack_22;
                pSStack_23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                                       ((GameObject *)RStack_22,(MethodInfo *)0x0);
                if (pTStack_25 == (TerrainGizmoSettings *)0x0) goto code_?;
                if (cRam_? == '\0') {
                  VStack_27.y = (float)&
                                        MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                  ;
                  VStack_27.x = (float)&UNK_?;
                  func_?();
                  cRam_? = '\x01';
                }
                this_02 = (pTStack_25->fields)._objectVertMoveIgnoreTags;
                if (this_02 == (List_1_System_String_ *)0x0) goto code_?;
                bVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Contains
                                  ((List_1_System_Object_ *)this_02,(Object *)pSStack_23,
                                   MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                  );
                if (bVar20 == 0) {
                  pTStack_25 = (TerrainGizmoSettings *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform((GameObject *)RStack_22,(MethodInfo *)0x0);
                  if (pTStack_25 == (TerrainGizmoSettings *)0x0) goto code_?;
                  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     (aVStack_28,(Transform *)pTStack_25,(MethodInfo *)0x0);
                  uStack_29._0_4_ = pVVar8->x;
                  uStack_29._4_4_ = pVVar8->y;
                  fStack_30 = pVVar8->z;
                  fStack_31 = fStack_30 - fStack_14;
                  uStack_32 = CONCAT44(fStack_10 - fStack_10,
                                       (float)(undefined4)uStack_29 - (float)uStack_13);
                  fStack_33 = fStack_31;
                  fVar34 = (float10)func_?();
                  fVar35 = (this->fields)._radius;
                  pSStack_23 = (String *)(float)fVar34;
                  if ((float)pSStack_23 <= fVar35) {
                    fVar35 = _UNK_? - (float)pSStack_23 / fVar35;
                    if (fVar35 <= 0.0) {
                      fVar35 = 0.0;
                    }
                    this_03 = (this->fields)._elevationCurve;
                    if (this_03 == (AnimationCurve *)0x0) goto code_?;
                    pSStack_23 = (String *)
                                 UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate(this_03,fVar35,(MethodInfo *)0x0);
                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       (&VStack_27,(Transform *)pTStack_25,(MethodInfo *)0x0);
                    uStack_36._0_4_ = pVVar8->x;
                    uStack_36._4_4_ = pVVar8->y;
                    fStack_37 = pVVar8->z;
                    pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                       ((Vector3 *)&stack0xfffffef0,(MethodInfo *)0x0);
                    uStack_38._0_4_ = pVVar8->x;
                    uStack_38._4_4_ = pVVar8->y;
                    fStack_39 = pVVar8->z;
                    VStack_9.z = fStack_37 + fStack_39 * offset * (float)pSStack_23;
                    LStack_16._index =
                         (int32_t)(uStack_36._4_4_ +
                                  (float)uStack_38._4_4_ * offset * (float)pSStack_23);
                    LStack_16._list =
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         ((float)uStack_36 +
                         (float)(undefined4)uStack_38 * offset * (float)pSStack_23);
                    if ((float)LStack_16._index < fStack_10) {
                      LStack_16._index = (int32_t)fStack_10;
                    }
                    _pLStack_98 = CONCAT44(LStack_16._index,LStack_16._list);
                    LStack_16._current.First = 0;
                    LStack_16._current.Last = 0;
                    LStack_16._version = 0;
                    pHVar40 = (this->fields)._affectedObjectsSet;
                    if (pHVar40 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                    bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]
                            ::HashSet_1_System_Object__Contains
                                      ((HashSet_1_System_Object_ *)pHVar40,(Object *)RStack_22,
                                       MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                                      );
                    if (bVar20 == 0) {
                      pHVar40 = (this->fields)._affectedObjectsSet;
                      if (pHVar40 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                      method_00 = RStack_22;
                      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                                ((HashSet_1_System_Object_ *)pHVar40,(Object *)RStack_22,
                                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                                );
                      pLStack_41 = (this->fields)._affectedObjects;
                      pSStack_23 = (String *)func_?();
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                ((Object *)pSStack_23,ExceptionArgument__Enum_obj,
                                 (MethodInfo *)method_00);
                      if (pSStack_23 == (String *)0x0) goto code_?;
                      (pSStack_23->fields)._stringLength = (int32_t)RStack_22;
                      func_?(&pSStack_23->fields,RStack_22);
                      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_position
                                         ((Vector3 *)&stack0xfffffee0,(Transform *)pTStack_25,
                                          (MethodInfo *)0x0);
                      pMVar42 = (MonitorData *)pVVar8->z;
                      *(undefined8 *)&(pSStack_23->fields)._firstChar = *(undefined8 *)pVVar8;
                      pSStack_23[1].monitor = pMVar42;
                      if (pLStack_41 == (List_1_RTG_TerrainGizmoAffectedObject_ *)0x0)
                      goto code_?;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLStack_41,(Object *)pSStack_23,
                                 MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__Add_RTG__TerrainGizmoAffectedObject_
                                );
                    }
                    value.y = (float)LStack_16._index;
                    value.x = (float)LStack_16._list;
                    value.z = VStack_9.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              ((Transform *)pTStack_25,value,(MethodInfo *)0x0);
                  }
                }
              }
            }
            uStack_2 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_18,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                       ,(MethodInfo *)in_stack_26);
          }
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void OffsetTerrainPatch(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OffsetTerrainPatch
               (TerrainGizmo *this,float offset,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTerrain;
  if ((pTVar1 != (Terrain *)0x0) &&
     (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                         (pTVar1,(MethodInfo *)0x0), pTVar2 != (TerrainData *)0x0)) {
    UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_heightmapScale
              ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._targetTerrain;
    if ((pTVar1 != (Terrain *)0x0) &&
       (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                           (pTVar1,(MethodInfo *)0x0), pTVar2 != (TerrainData *)0x0)) {
      UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
      pTVar1 = (this->fields)._targetTerrain;
      if ((pTVar1 != (Terrain *)0x0) &&
         (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                             (pTVar1,(MethodInfo *)0x0), pTVar2 != (TerrainData *)0x0)) {
        UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
        TerrainData_get_internalHeightmapResolution(pTVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._targetTerrain;
        if ((pTVar1 != (Terrain *)0x0) &&
           (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                               (pTVar1,(MethodInfo *)0x0), pTVar2 != (TerrainData *)0x0)) {
          UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                    ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
          pTVar1 = (this->fields)._targetTerrain;
          if ((pTVar1 != (Terrain *)0x0) &&
             (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                                 (pTVar1,(MethodInfo *)0x0), pTVar2 != (TerrainData *)0x0)) {
            UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
            TerrainData_get_internalHeightmapResolution(pTVar2,(MethodInfo *)0x0);
            pTVar1 = (this->fields)._targetTerrain;
            if ((pTVar1 != (Terrain *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTVar1,(MethodInfo *)0x0),
               this_01 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pGVar3 = (this->fields)._._gizmo;
              if ((pGVar3 != (Gizmo *)0x0) && ((pGVar3->fields)._transform != (GizmoTransform *)0x0)
                 ) {
                iVar4 = (this->fields)._editPatch.MinDepth;
                if (iVar4 <= (this->fields)._editPatch.MaxDepth) {
                  do {
                    iVar5 = (this->fields)._editPatch.MinCol;
                    if (iVar5 <= (this->fields)._editPatch.MaxCol) {
                      do {
                        fVar6 = (float10)func_?();
                        fVar7 = (this->fields)._radius;
                        if ((float)fVar6 <= fVar7) {
                          fVar7 = _UNK_? - (float)fVar6 / fVar7;
                          if (fVar7 <= 0.0) {
                            fVar7 = 0.0;
                          }
                          this_00 = (this->fields)._elevationCurve;
                          if ((this_00 == (AnimationCurve *)0x0) ||
                             (fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                      AnimationCurve_Evaluate(this_00,fVar7,(MethodInfo *)0x0),
                             (this->fields)._terrainHeights == (Single__Array_1 *)0x0))
                          goto code_?;
                          pfVar8 = (float *)func_?();
                          *pfVar8 = fVar7 * (float)pTVar2 + *pfVar8;
                          if ((this->fields)._terrainHeights == (Single__Array_1 *)0x0)
                          goto code_?;
                          func_?();
                          func_?();
                        }
                        iVar5 = iVar5 + 1;
                      } while (iVar5 <= (this->fields)._editPatch.MaxCol);
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 <= (this->fields)._editPatch.MaxDepth);
                }
                pTVar1 = (this->fields)._targetTerrain;
                if ((pTVar1 != (Terrain *)0x0) &&
                   (pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                             Terrain_get_terrainData(pTVar1,(MethodInfo *)0x0),
                   pTVar2 != (TerrainData *)0x0)) {
                  UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_SetHeights
                            (pTVar2,0,0,(this->fields)._terrainHeights,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnAttached
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider3D);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&TypeInfo__RTG__TerrainGizmo__RadiusTick);
    func_?(&TypeInfo__RTG__RedoEndHandler);
    func_?(&MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_);
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  iVar2 = GizmoHandleId::GizmoHandleId_get_AxisSlider((MethodInfo *)0x0);
  capHandleId = GizmoHandleId::GizmoHandleId_get_AxisSliderCap((MethodInfo *)0x0);
  pGVar3 = (GizmoLineSlider3D *)func_?(TypeInfo__RTG__GizmoLineSlider3D);
  GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar3,pGVar1,iVar2,capHandleId,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._axisSlider;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  pGVar3 = (this->fields)._axisSlider;
  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
              (pGVar3,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._axisSlider;
    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
      GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                (pGVar3,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._gizmo;
      iVar2 = GizmoHandleId::GizmoHandleId_get_MidSnapCap((MethodInfo *)0x0);
      pGVar5 = (GizmoCap3D *)func_?();
      GizmoCap3D::GizmoCap3D__ctor(pGVar5,pGVar1,iVar2,(MethodInfo *)0x0);
      ppGVar6 = &(this->fields)._midCap;
      *ppGVar6 = pGVar5;
      func_?();
      if (*ppGVar6 != (GizmoCap3D *)0x0) {
        this_01 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                  XDocumentTypeWrapper_get_InternalSubset
                            ((XDocumentTypeWrapper *)*ppGVar6,(MethodInfo *)0x0);
        if (((*ppGVar4 != (GizmoLineSlider3D *)0x0) &&
            (pGVar7 = ((*ppGVar4)->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
           (this_01 != (String *)0x0)) {
          Priority::Priority_MakeHigherThan
                    ((Priority *)this_01,(pGVar7->fields)._hoverPriority3D,(MethodInfo *)0x0);
          if (*ppGVar6 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_set_DragSession
                      (*ppGVar6,(IGizmoDragSession *)(this->fields)._dummyDrag,(MethodInfo *)0x0);
            pTVar8 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
            pTVar9 = (TerrainGizmo_RadiusTick *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pTVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar8);
            ppTVar10 = &(this->fields)._leftRadiusTick;
            *ppTVar10 = pTVar9;
            func_?();
            pTVar9 = (this->fields)._leftRadiusTick;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar12 = (pVVar11->rightVector).x;
            uVar13 = (pVVar11->rightVector).y;
            uVar14 = uVar13 ^ 
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            fVar15 = (float)((uint)(pVVar11->rightVector).z ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
              (pTVar9->fields).DragAxis.x =
                   (float)(uVar12 ^ 
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
              (pTVar9->fields).DragAxis.y = (float)uVar14;
              (pTVar9->fields).DragAxis.z = fVar15;
              pTVar9 = (this->fields)._leftRadiusTick;
              pGVar1 = (this->fields)._._gizmo;
              iVar2 = GizmoHandleId::GizmoHandleId_get_LeftRadiusTick((MethodInfo *)0x0);
              pGVar16 = (GizmoCap2D *)func_?();
              GizmoCap2D::GizmoCap2D__ctor(pGVar16,pGVar1,iVar2,(MethodInfo *)0x0);
              if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                (pTVar9->fields).Tick = pGVar16;
                func_?();
                pTVar9 = *ppTVar10;
                if ((pTVar9 != (TerrainGizmo_RadiusTick *)0x0) &&
                   (pGVar5 = (GizmoCap3D *)(pTVar9->fields).Tick, pGVar5 != (GizmoCap3D *)0x0)) {
                  GizmoCap3D::GizmoCap3D_set_DragSession
                            (pGVar5,(IGizmoDragSession *)(this->fields)._radiusDrag,
                             (MethodInfo *)0x0);
                  pTVar8 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                  pTVar9 = (TerrainGizmo_RadiusTick *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)pTVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar8);
                  ppTVar10 = &(this->fields)._rightRadiusTick;
                  *ppTVar10 = pTVar9;
                  func_?();
                  pTVar9 = (this->fields)._rightRadiusTick;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                  fVar17 = (pVVar11->rightVector).y;
                  fVar15 = (pVVar11->rightVector).z;
                  if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                    (pTVar9->fields).DragAxis.x = (pVVar11->rightVector).x;
                    (pTVar9->fields).DragAxis.y = fVar17;
                    (pTVar9->fields).DragAxis.z = fVar15;
                    pTVar9 = (this->fields)._rightRadiusTick;
                    pGVar1 = (this->fields)._._gizmo;
                    iVar2 = GizmoHandleId::GizmoHandleId_get_RightRadiusTick((MethodInfo *)0x0);
                    pGVar16 = (GizmoCap2D *)func_?();
                    GizmoCap2D::GizmoCap2D__ctor(pGVar16,pGVar1,iVar2,(MethodInfo *)0x0);
                    if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                      (pTVar9->fields).Tick = pGVar16;
                      func_?();
                      pTVar9 = *ppTVar10;
                      if ((pTVar9 != (TerrainGizmo_RadiusTick *)0x0) &&
                         (pGVar5 = (GizmoCap3D *)(pTVar9->fields).Tick,
                         pGVar5 != (GizmoCap3D *)0x0)) {
                        GizmoCap3D::GizmoCap3D_set_DragSession
                                  (pGVar5,(IGizmoDragSession *)(this->fields)._radiusDrag,
                                   (MethodInfo *)0x0);
                        pTVar8 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                        pTVar9 = (TerrainGizmo_RadiusTick *)func_?();
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                  ((Object *)pTVar9,ExceptionArgument__Enum_obj,
                                   (MethodInfo *)pTVar8);
                        ppTVar10 = &(this->fields)._backRadiusTick;
                        *ppTVar10 = pTVar9;
                        func_?();
                        pTVar9 = (this->fields)._backRadiusTick;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar18 = (pVVar11->forwardVector).x;
                        uVar19 = (pVVar11->forwardVector).y;
                        uVar14 = uVar19 ^ 
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                        ;
                        fVar15 = (float)((uint)(pVVar11->forwardVector).z ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        );
                        if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                          (pTVar9->fields).DragAxis.x =
                               (float)(uVar18 ^ 
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                          (pTVar9->fields).DragAxis.y = (float)uVar14;
                          (pTVar9->fields).DragAxis.z = fVar15;
                          pTVar9 = (this->fields)._backRadiusTick;
                          pGVar1 = (this->fields)._._gizmo;
                          iVar2 = GizmoHandleId::GizmoHandleId_get_BackRadiusTick
                                             ((MethodInfo *)0x0);
                          pGVar16 = (GizmoCap2D *)func_?();
                          GizmoCap2D::GizmoCap2D__ctor(pGVar16,pGVar1,iVar2,(MethodInfo *)0x0);
                          if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                            (pTVar9->fields).Tick = pGVar16;
                            func_?();
                            pTVar9 = *ppTVar10;
                            if ((pTVar9 != (TerrainGizmo_RadiusTick *)0x0) &&
                               (pGVar5 = (GizmoCap3D *)(pTVar9->fields).Tick,
                               pGVar5 != (GizmoCap3D *)0x0)) {
                              GizmoCap3D::GizmoCap3D_set_DragSession
                                        (pGVar5,(IGizmoDragSession *)(this->fields)._radiusDrag,
                                         (MethodInfo *)0x0);
                              pTVar8 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                              pTVar9 = (TerrainGizmo_RadiusTick *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        ((Object *)pTVar9,ExceptionArgument__Enum_obj,
                                         (MethodInfo *)pTVar8);
                              ppTVar10 = &(this->fields)._forwardRadiusTick;
                              *ppTVar10 = pTVar9;
                              func_?();
                              pTVar9 = (this->fields)._forwardRadiusTick;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                              fVar17 = (pVVar11->forwardVector).y;
                              fVar15 = (pVVar11->forwardVector).z;
                              if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                                (pTVar9->fields).DragAxis.x = (pVVar11->forwardVector).x;
                                (pTVar9->fields).DragAxis.y = fVar17;
                                (pTVar9->fields).DragAxis.z = fVar15;
                                pTVar9 = (this->fields)._forwardRadiusTick;
                                pGVar1 = (this->fields)._._gizmo;
                                iVar2 = GizmoHandleId::GizmoHandleId_get_ForwardRadiusTick
                                                   ((MethodInfo *)0x0);
                                pGVar16 = (GizmoCap2D *)func_?();
                                GizmoCap2D::GizmoCap2D__ctor
                                          (pGVar16,pGVar1,iVar2,(MethodInfo *)0x0);
                                if (pTVar9 != (TerrainGizmo_RadiusTick *)0x0) {
                                  (pTVar9->fields).Tick = pGVar16;
                                  func_?();
                                  pTVar9 = *ppTVar10;
                                  if ((pTVar9 != (TerrainGizmo_RadiusTick *)0x0) &&
                                     (pGVar5 = (GizmoCap3D *)(pTVar9->fields).Tick,
                                     pGVar5 != (GizmoCap3D *)0x0)) {
                                    GizmoCap3D::GizmoCap3D_set_DragSession
                                              (pGVar5,(IGizmoDragSession *)
                                                       (this->fields)._radiusDrag,(MethodInfo *)0x0)
                                    ;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    circleCenter = TypeInfo__UnityEngine__Vector3->static_fields->
                                                   zeroVector;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    circleRight = TypeInfo__UnityEngine__Vector3->static_fields->
                                                  rightVector;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    pLVar20 = PrimitiveFactory::
                                              PrimitiveFactory_Generate3DCircleBorderPoints
                                                        (circleCenter,1.0,circleRight,
                                                         TypeInfo__UnityEngine__Vector3->
                                                         static_fields->forwardVector,100,
                                                         (MethodInfo *)0x0);
                                    (this->fields)._modelRadiusCirclePoints = pLVar20;
                                    func_?();
                                    iStack_21 = 0;
                                    do {
                                      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                                (this->fields)._radiusCirclePoints;
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__UnityEngine__Vector3);
                                        cRam_? = '\x01';
                                      }
                                      pMVar22 = 
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                      ;
                                      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      fVar17 = (pVVar11->zeroVector).x;
                                      fVar23 = (pVVar11->zeroVector).y;
                                      fVar15 = (pVVar11->zeroVector).z;
                                      item.Quadrant = (int32_t)(pVVar11->zeroVector).x;
                                      item.FirstAxisSign = (int32_t)(pVVar11->zeroVector).y;
                                      item.SecondAxisSign = (int32_t)(pVVar11->zeroVector).z;
                                      if (this_00 ==
                                          (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
                                      goto code_?;
                                      piVar24 = &(this_00->fields)._version;
                                      *piVar24 = *piVar24 + 1;
                                      pPVar25 = (this_00->fields)._items;
                                      if (pPVar25 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                      goto code_?;
                                      uVar14 = (this_00->fields)._size;
                                      if (uVar14 < pPVar25->max_length) {
                                        (this_00->fields)._size = uVar14 + 1;
                                        if (pPVar25->max_length <= uVar14) goto code_?;
                                        pPVar25->vector[uVar14].Quadrant = (int32_t)fVar17;
                                        pPVar25->vector[uVar14].FirstAxisSign = (int32_t)fVar23;
                                        pPVar25->vector[uVar14].SecondAxisSign = (int32_t)fVar15;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                        PlaneIdHelper+PlaneQuadrantInfo]::
                                        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                  (this_00,item,
                                                   pMVar22->klass->rgctx_data[0xe].method);
                                      }
                                      iStack_21 = iStack_21 + 1;
                                    } while (iStack_21 < 100);
                                    TerrainGizmo_SetVisible(this,0,(MethodInfo *)0x0);
                                    TerrainGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                                    pMVar22 = 
                                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                    ;
                                    pSVar26 = (this->fields)._sceneOverlapFilter;
                                    if ((pSVar26 != (SceneOverlapFilter *)0x0) &&
                                       (pLVar27 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar26->fields)._allowedObjectTypes,
                                       pLVar27 !=
                                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)0x0)) {
                                      piVar24 = &(pLVar27->fields)._version;
                                      *piVar24 = *piVar24 + 1;
                                      pRVar28 = (pLVar27->fields)._items;
                                      if (pRVar28 != (RegexCharClass_SingleRange__Array *)0x0) {
                                        uVar14 = (pLVar27->fields)._size;
                                        if (uVar14 < pRVar28->max_length) {
                                          (pLVar27->fields)._size = uVar14 + 1;
                                          if (pRVar28->max_length <= uVar14) goto code_?;
                                          pRVar28->vector[uVar14].First = 1;
                                          pRVar28->vector[uVar14].Last = 0;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                    (pLVar27,(RegexCharClass_SingleRange)0x1,
                                                     pMVar22->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar22 = 
                                        MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                        ;
                                        pSVar26 = (this->fields)._sceneOverlapFilter;
                                        if ((pSVar26 != (SceneOverlapFilter *)0x0) &&
                                           (pLVar27 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar26->fields)._allowedObjectTypes,
                                           pLVar27 !=
                                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)0x0)) {
                                          piVar24 = &(pLVar27->fields)._version;
                                          *piVar24 = *piVar24 + 1;
                                          pRVar28 = (pLVar27->fields)._items;
                                          if (pRVar28 != (RegexCharClass_SingleRange__Array *)0x0) {
                                            uVar14 = (pLVar27->fields)._size;
                                            if (uVar14 < pRVar28->max_length) {
                                              (pLVar27->fields)._size = uVar14 + 1;
                                              if (pRVar28->max_length <= uVar14)
                                              goto code_?;
                                              pRVar28->vector[uVar14].First = 0x10;
                                              pRVar28->vector[uVar14].Last = 0;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::
                                              List`1[System::Text::RegularExpressions::
                                              RegexCharClass+SingleRange]::
                                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                        (pLVar27,(RegexCharClass_SingleRange)0x10,
                                                         pMVar22->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar22 = 
                                            MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                            ;
                                            pSVar26 = (this->fields)._sceneOverlapFilter;
                                            if ((pSVar26 != (SceneOverlapFilter *)0x0) &&
                                               (pLVar27 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar26->fields)._allowedObjectTypes,
                                               pLVar27 !=
                                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                *)0x0)) {
                                              piVar24 = &(pLVar27->fields)._version;
                                              *piVar24 = *piVar24 + 1;
                                              pRVar28 = (pLVar27->fields)._items;
                                              if (pRVar28 !=
                                                  (RegexCharClass_SingleRange__Array *)0x0) {
                                                uVar14 = (pLVar27->fields)._size;
                                                if (uVar14 < pRVar28->max_length) {
                                                  (pLVar27->fields)._size = uVar14 + 1;
                                                  if (pRVar28->max_length <= uVar14)
                                                  goto code_?;
                                                  pRVar28->vector[uVar14].First = 0x20;
                                                  pRVar28->vector[uVar14].Last = 0;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[System::Text::RegularExpressions::
                                                  RegexCharClass+SingleRange]::
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                            (pLVar27,(RegexCharClass_SingleRange)
                                                                     0x20,
                                                             pMVar22->klass->rgctx_data[0xe].method)
                                                  ;
                                                }
                                                pAVar29 = (this->fields)._elevationCurve;
                                                fVar15 = 0.0;
                                                fVar17 = 0.0;
                                                fVar23 = 0.0;
                                                fVar30 = 0.0;
                                                UnityEngine.CoreModule.dll::UnityEngine::Keyframe::
                                                Keyframe__ctor((Keyframe *)&stack0xffffffb8,0.0,0.0,
                                                               (MethodInfo *)0x0);
                                                if (pAVar29 != (AnimationCurve *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  AnimationCurve::AnimationCurve_AddKey_1
                                                            (pAVar29,(Keyframe)
                                                                     ZEXT1628(CONCAT412(fVar30,
                                                  CONCAT48(fVar23,CONCAT44(fVar17,fVar15)))),
                                                  (MethodInfo *)0x0);
                                                  pAVar29 = (this->fields)._elevationCurve;
                                                  this_02 = (Keyframe *)&stack0xffffff9c;
                                                  fVar31 = 0.0;
                                                  fVar23 = 0.0;
                                                  iVar2 = 0;
                                                  fVar30 = 0.0;
                                                  fVar17 = 1.0;
                                                  fVar15 = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Keyframe
                                                  ::Keyframe__ctor(this_02,1.0,1.0,(MethodInfo *)0x0
                                                                  );
                                                  if (pAVar29 != (AnimationCurve *)0x0) {
                                                    key.m_Value = fVar15;
                                                    key.m_Time = (float)this_02;
                                                    key.m_InTangent = fVar17;
                                                    key.m_OutTangent = fVar23;
                                                    key.m_WeightedMode = iVar2;
                                                    key.m_InWeight = fVar30;
                                                    key.m_OutWeight = fVar31;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    AnimationCurve::AnimationCurve_AddKey_1
                                                              (pAVar29,key,(MethodInfo *)0x0);
                                                    if ((
                                                  TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1)
                                                  .cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pRVar32 = (RTUndoRedo *)
                                                            MonoSingleton`1[System::Object]::
                                                            MonoSingleton_1_System_Object__get_Get
                                                                      (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__
                                                  );
                                                  value = (UndoEndHandler *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Windows::
                                                  WebCam::
                                                  VideoCapture+OnVideoCaptureResourceCreatedCallback
                                                  ::
                                                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                                            ((
                                                  VideoCapture_OnVideoCaptureResourceCreatedCallback
                                                  *)value,(Object *)this,
                                                  MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_
                                                  ,(MethodInfo *)0x0);
                                                  if (pRVar32 != (RTUndoRedo *)0x0) {
                                                    RTUndoRedo::RTUndoRedo_add_UndoEnd
                                                              (pRVar32,value,(MethodInfo *)0x0);
                                                    pRVar32 = (RTUndoRedo *)
                                                              MonoSingleton`1[System::Object]::
                                                              MonoSingleton_1_System_Object__get_Get
                                                                        (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__
                                                  );
                                                  value_00 = (RedoEndHandler *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Windows::
                                                  WebCam::
                                                  VideoCapture+OnVideoCaptureResourceCreatedCallback
                                                  ::
                                                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                                            ((
                                                  VideoCapture_OnVideoCaptureResourceCreatedCallback
                                                  *)value_00,(Object *)this,
                                                  MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_
                                                  ,(MethodInfo *)0x0);
                                                  if (pRVar32 != (RTUndoRedo *)0x0) {
                                                    RTUndoRedo::RTUndoRedo_add_RedoEnd
                                                              (pRVar32,value_00,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnDisabled
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&TypeInfo__RTG__RedoEndHandler);
    func_?(&MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_);
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
  }
  pRVar1 = (RTUndoRedo *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  value = (UndoEndHandler *)func_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
             MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pRVar1 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_remove_UndoEnd(pRVar1,value,(MethodInfo *)0x0);
    pRVar1 = (RTUndoRedo *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    object = TypeInfo__RTG__RedoEndHandler;
    value_00 = (RedoEndHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)object,
               MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pRVar1 != (RTUndoRedo *)0x0) {
      RTUndoRedo::RTUndoRedo_remove_RedoEnd(pRVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnEnabled
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&TypeInfo__RTG__RedoEndHandler);
    func_?(&MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_);
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
  }
  pRVar1 = (RTUndoRedo *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  value = (UndoEndHandler *)func_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
             MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pRVar1 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_add_UndoEnd(pRVar1,value,(MethodInfo *)0x0);
    pRVar1 = (RTUndoRedo *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    object = TypeInfo__RTG__RedoEndHandler;
    value_00 = (RedoEndHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)object,
               MethodInfo__RTG__TerrainGizmo__OnUndoRedoPerformed_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pRVar1 != (RTUndoRedo *)0x0) {
      RTUndoRedo::RTUndoRedo_add_RedoEnd(pRVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoAttemptHandleDragBegin
               (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__Clear__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._affectedObjectsSet;
  unique0x10001059 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
  if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__);
    pLVar3 = (this->fields)._affectedObjects;
    unique0x10001061 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
    if (pLVar3 != (List_1_RTG_TerrainGizmoAffectedObject_ *)0x0) {
      iVar4 = (pLVar3->fields)._size;
      piVar5 = &(pLVar3->fields)._version;
      *piVar5 = *piVar5 + 1;
      (pLVar3->fields)._size = 0;
      if (0 < iVar4) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar3->fields)._items,0,iVar4,(MethodInfo *)0x0);
      }
      pGVar6 = (this->fields)._._gizmo;
      unique0x10001069 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
      if ((pGVar6 != (Gizmo *)0x0) &&
         (pGVar7 = (pGVar6->fields)._transform,
         unique0x10001071 = (double)CONCAT44(fStack_1,auStack_2._4_4_),
         pGVar7 != (GizmoTransform *)0x0)) {
        fVar8 = (pGVar7->fields)._position3D.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar10 = (pVVar9->rightVector).x;
        uVar11 = (pVVar9->rightVector).y;
        fStack_1 = (pVVar9->rightVector).z;
        fStack_12 = fVar8 - fStack_1 * (this->fields)._radius;
        auStack_2._0_4_ = uVar10;
        auStack_2._4_4_ = uVar11;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        fStack_12 = fStack_12 -
                   (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z *
                   (this->fields)._radius;
        pGVar6 = (this->fields)._._gizmo;
        unique0x10001079 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
        if ((pGVar6 != (Gizmo *)0x0) &&
           (pGVar7 = (pGVar6->fields)._transform,
           unique0x10001081 = (double)CONCAT44(fStack_1,auStack_2._4_4_),
           pGVar7 != (GizmoTransform *)0x0)) {
          uVar13 = (pGVar7->fields)._position3D.x;
          uVar14 = (pGVar7->fields)._position3D.y;
          fStack_1 = (pGVar7->fields)._position3D.z;
          auStack_2._0_4_ = uVar13;
          auStack_2._4_4_ = uVar14;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          uVar15 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).x;
          fStack_16 = (float)auStack_2._0_4_ + (float)uVar15 * (this->fields)._radius;
          fStack_1 = fStack_1 +
                      (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z *
                      (this->fields)._radius;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          uVar17 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).x;
          fStack_18 = (float)uVar17 * (this->fields)._radius + fStack_16;
          fStack_16 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z *
                      (this->fields)._radius + fStack_1;
          pTVar19 = (this->fields)._targetTerrain;
          if (pTVar19 != (Terrain *)0x0) {
            pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar19,(MethodInfo *)0x0);
            if (pTVar20 != (Transform *)0x0) {
              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)auStack_2,pTVar20,(MethodInfo *)0x0);
              fStack_12 = fStack_12 - pVVar21->z;
              pTVar19 = (this->fields)._targetTerrain;
              if (pTVar19 != (Terrain *)0x0) {
                pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTVar19,(MethodInfo *)0x0);
                if (pTVar20 != (Transform *)0x0) {
                  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)auStack_2,pTVar20,(MethodInfo *)0x0);
                  uVar22 = pVVar21->x;
                  fStack_18 = fStack_18 - (float)uVar22;
                  fStack_16 = fStack_16 - pVVar21->z;
                  pTVar19 = (this->fields)._targetTerrain;
                  if (pTVar19 != (Terrain *)0x0) {
                    this_04 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                              Terrain_get_terrainData(pTVar19,(MethodInfo *)0x0);
                    if (this_04 != (TerrainData *)0x0) {
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_1 = pVVar21->x;
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_18 = fStack_18 / pVVar21->x;
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_12 = fStack_12 / pVVar21->z;
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_16 = fStack_16 / pVVar21->z;
                      UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                      TerrainData_get_internalHeightmapResolution(this_04,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      register0x00001200 = (double)(float)this_04;
                      fVar24 = (float10)func_?();
                      unique0x0000aa00 = (double)fVar24;
                      iVar4 = (int)fVar24;
                      if (iVar4 < 0) {
                        iVar4 = 0;
                      }
                      else if (iVar23 + -1 < iVar4) {
                        iVar4 = iVar23 + -1;
                      }
                      (this->fields)._editPatch.MinCol = iVar4;
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      fVar8 = (float)iVar23 * fStack_18;
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      register0x00001200 = (double)fVar8;
                      fVar24 = (float10)func_?();
                      unique0x0000aa00 = (double)fVar24;
                      iVar4 = (int)fVar24;
                      if (iVar4 < 0) {
                        iVar4 = 0;
                      }
                      else if (iVar23 + -1 < iVar4) {
                        iVar4 = iVar23 + -1;
                      }
                      (this->fields)._editPatch.MaxCol = iVar4;
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      fVar8 = (float)iVar23 * fStack_12;
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      register0x00001200 = (double)fVar8;
                      fVar24 = (float10)func_?();
                      unique0x0000aa00 = (double)fVar24;
                      iVar4 = (int)fVar24;
                      if (iVar4 < 0) {
                        iVar4 = 0;
                      }
                      else if (iVar23 + -1 < iVar4) {
                        iVar4 = iVar23 + -1;
                      }
                      (this->fields)._editPatch.MinDepth = iVar4;
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      fVar8 = (float)iVar23 * fStack_16;
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      iVar23 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                               TerrainData_get_internalHeightmapResolution
                                         (this_04,(MethodInfo *)0x0);
                      register0x00001200 = (double)fVar8;
                      fVar24 = (float10)func_?();
                      unique0x0000aa00 = (double)fVar24;
                      iVar4 = (int)fVar24;
                      if (iVar4 < 0) {
                        iVar4 = 0;
                      }
                      else if (iVar23 + -1 < iVar4) {
                        iVar4 = iVar23 + -1;
                      }
                      (this->fields)._editPatch.MaxDepth = iVar4;
                      pTVar25 = TerrainGizmo_GetRadiusTickFromHandleId
                                          (this,0xADDR,(MethodInfo *)0x0);
                      if (pTVar25 != (TerrainGizmo_RadiusTick *)0x0) {
                        uVar26 = (pTVar25->fields).DragAxis.x;
                        uVar27 = (pTVar25->fields).DragAxis.y;
                        pTVar28 = (this->fields)._sharedSettings;
                        if ((pTVar28 == (TerrainGizmoSettings *)0x0) &&
                           (pTVar28 = (this->fields)._settings,
                           pTVar28 == (TerrainGizmoSettings *)0x0)) goto code_?;
                        this_01 = (this->fields)._radiusDrag;
                        if (this_01 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
                        workData.Axis.x = (float)uVar26;
                        workData.DragOrigin = (pTVar25->fields).WorldPosition;
                        workData.Axis.y = (float)uVar27;
                        workData.Axis.z = (pTVar25->fields).DragAxis.z;
                        workData.SnapStep = (pTVar28->fields)._radiusSnapStep;
                        GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                                  (this_01,workData,(MethodInfo *)0x0);
                      }
                      this_02 = (this->fields)._midCap;
                      if (this_02 != (GizmoCap3D *)0x0) {
                        puVar29 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                                  AndroidJavaObject__GetRawClass
                                            ((AndroidJavaObject *)this_02,(MethodInfo *)0x0);
                        if (puVar29 != &UNK_?) {
                          return;
                        }
                        pGVar6 = (this->fields)._._gizmo;
                        if ((pGVar6 != (Gizmo *)0x0) &&
                           (pGVar7 = (pGVar6->fields)._transform, pGVar7 != (GizmoTransform *)0x0
                           )) {
                          fVar30 = (pGVar7->fields)._position3D.y;
                          fVar8 = (pGVar7->fields)._position3D.z;
                          (this->fields)._preChangeGizmoPos.x = (pGVar7->fields)._position3D.x;
                          (this->fields)._preChangeGizmoPos.y = fVar30;
                          (this->fields)._preChangeGizmoPos.z = fVar8;
                          pCVar31 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
                          if (pCVar31 != (Camera *)0x0) {
                            pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pCVar31,(MethodInfo *)0x0);
                            if (pTVar20 != (Transform *)0x0) {
                              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_right((Vector3 *)&stack0xffffffd8,pTVar20,
                                                            (MethodInfo *)0x0);
                              uVar32._0_4_ = pVVar21->x;
                              uVar32._4_4_ = pVVar21->y;
                              fVar8 = pVVar21->z;
                              pGVar6 = (this->fields)._._gizmo;
                              if (pGVar6 != (Gizmo *)0x0) {
                                pCVar31 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
                                if (pCVar31 != (Camera *)0x0) {
                                  pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pCVar31,(MethodInfo *)0x0);
                                  if (pTVar20 != (Transform *)0x0) {
                                    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_up((Vector3 *)&stack0xffffffd8,pTVar20,
                                                               (MethodInfo *)0x0);
                                    uVar33 = pVVar21->x;
                                    pGVar6 = (this->fields)._._gizmo;
                                    if ((pGVar6 != (Gizmo *)0x0) &&
                                       (pGVar7 = (pGVar6->fields)._transform,
                                       pGVar7 != (GizmoTransform *)0x0)) {
                                      uVar34 = (pGVar7->fields)._position3D.x;
                                      uVar35 = (pGVar7->fields)._position3D.y;
                                      this_03 = (this->fields)._dummyDrag;
                                      if (this_03 != (GizmoUniformScaleDrag3D *)0x0) {
                                        workData_00.CameraRight.z = fVar8;
                                        workData_00.CameraRight.x = (float)(int)uVar32;
                                        workData_00.CameraRight.y =
                                             (float)(int)((ulonglong)uVar32 >> 0x20);
                                        workData_00.CameraUp.x = (float)uVar33;
                                        workData_00.CameraUp.y = fVar8;
                                        workData_00.CameraUp.z = (float)uVar33;
                                        workData_00.DragOrigin.x = (float)uVar34;
                                        workData_00.DragOrigin.y = (float)uVar35;
                                        workData_00.DragOrigin.z = (float)uVar34;
                                        workData_00.SnapStep = (float)uVar35;
                                        GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                                                  (this_03,workData_00,(MethodInfo *)0x0);
                                        TerrainGizmo_CollectObjectsInRadius
                                                  (this,(this->fields)._objectsInRadius,
                                                   (MethodInfo *)0x0);
                                        pLVar36 = LocalTransformSnapshot::
                                                  LocalTransformSnapshot_GetSnapshotCollection
                                                            ((IEnumerable_1_UnityEngine_GameObject_
                                                              *)(this->fields)._objectsInRadius,
                                                             (MethodInfo *)0x0);
                                        (this->fields)._preChangeTransformSnapshots = pLVar36;
                                        func_?();
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Boolean OnGizmoCanBeginDrag(Int32) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoCanBeginDrag
               (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = TerrainGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields)._isVisible == 0)) {
    return 0;
  }
  pTVar2 = (this->fields)._sharedHotkeys;
  if (((pTVar2 != (TerrainGizmoHotkeys *)0x0) ||
      (pTVar2 = (this->fields)._hotkeys, pTVar2 != (TerrainGizmoHotkeys *)0x0)) &&
     (this_00 = (pTVar2->fields)._rotateObjects, this_00 != (Hotkeys *)0x0)) {
    bVar1 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar1 == 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoDragEnd
               (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__TerrainGizmoHorizontalOffsetDragEndAction);
    func_?(&TypeInfo__RTG__TerrainGizmoVerticalOffsetDragEndAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._midCap;
  if (this_00 == (GizmoCap3D *)0x0) goto code_?;
  pvVar4 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar4) {
    pOVar5 = (Object__Class *)(this->fields)._preChangeGizmoPos.z;
    collection = (this->fields)._preChangeTransformSnapshots;
    collection_00 =
         LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                   ((IEnumerable_1_UnityEngine_GameObject_ *)(this->fields)._objectsInRadius,
                    (MethodInfo *)0x0);
    pOVar6 = (Object *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar7 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar7,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    pOVar6[1].klass = pOVar7;
    func_?();
    this_05 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_05,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    pMVar8 = (MethodInfo *)&pOVar6[1].monitor;
    *(LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)pMVar8 = this_05;
    func_?(pMVar8,this_05);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar6,ExceptionArgument__Enum_obj,pMVar8);
    pOVar7 = (Object__Class *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pOVar7,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
              );
    pOVar6[1].klass = pOVar7;
    func_?();
    pLVar9 = TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>;
    pOVar7 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pOVar7,(IEnumerable_1_System_Object_ *)collection_00,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
              );
    pOVar6[1].monitor = (MonitorData *)pOVar7;
    func_?();
    OVar10.monitor = (MonitorData *)pLVar9;
    OVar10.klass = pOVar7;
    pOVar6[2] = OVar10;
    pOVar6[3].klass = pOVar5;
    pGVar11 = (this->fields)._._gizmo;
    if ((pGVar11 == (Gizmo *)0x0) ||
       (pGVar12 = (pGVar11->fields)._transform, pGVar12 == (GizmoTransform *)0x0))
    goto code_?;
    pMVar13 = (MonitorData *)(pGVar12->fields)._position3D.z;
    *(undefined8 *)&pOVar6[3].monitor = *(undefined8 *)&(pGVar12->fields)._position3D;
    pOVar6[4].monitor = pMVar13;
    pOVar6[5].klass = (Object__Class *)this;
    func_?(pOVar6 + 5,this);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    }
    pRVar14 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (pRVar14 == (RTUndoRedo *)0x0) goto code_?;
    RTUndoRedo::RTUndoRedo_RecordAction(pRVar14,(IUndoRedoAction *)pOVar6,(MethodInfo *)0x0);
  }
  else {
    pTVar15 = (this->fields)._targetTerrain;
    if (pTVar15 == (Terrain *)0x0) goto code_?;
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar15,(MethodInfo *)0x0);
    if (this_04 == (Transform *)0x0) goto code_?;
    pMVar8 = (MethodInfo *)&UNK_?;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,this_04,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._._gizmo;
    if ((pGVar11 == (Gizmo *)0x0) ||
       (pGVar12 = (pGVar11->fields)._transform, pGVar12 == (GizmoTransform *)0x0))
    goto code_?;
    uVar17 = (pGVar12->fields)._position3D.x;
    uVar18 = (pGVar12->fields)._position3D.y;
    if ((float)uVar18 < pVVar16->y) {
      this_01 = (pGVar11->fields)._transform;
      if (this_01 == (GizmoTransform *)0x0) goto code_?;
      value.y = pVVar16->y;
      value.x = (float)uVar17;
      value.z = (pGVar12->fields)._position3D.z;
      GizmoTransform::GizmoTransform_set_Position3D(this_01,value,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)(this->fields)._affectedObjects;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffc4,
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         method_00,
                         MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                        );
    uStack_1 = 1;
    RVar20 = pLVar19->_current;
    while( true ) {
      bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                         );
      if (bVar21 == 0) break;
      if ((RVar20 == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)RVar20 + 8) == (GameObject *)0x0)) goto code_?;
      RVar22 = RVar20;
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (*(GameObject **)((int)RVar20 + 8),(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffc8,(Transform *)method_00,(MethodInfo *)0x0);
      fVar23 = pVVar16->z;
      *(undefined8 *)((int)RVar20 + 0x18) = *(undefined8 *)pVVar16;
      *(float *)((int)RVar20 + 0x20) = fVar23;
      RVar20 = RVar22;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pTVar15 = (this->fields)._targetTerrain;
    if (((this->fields)._targetTypeFlags & 1) == 0) {
      handleId = 0;
      pSVar24 = (Single__Array_1 *)0x0;
    }
    else {
      handleId = (int32_t)(this->fields)._terrainHeights;
      pSVar24 = (this->fields)._preChangeTerrainHeights;
    }
    pLVar25 = (this->fields)._affectedObjects;
    pOVar6 = (Object *)func_?(TypeInfo__RTG__TerrainGizmoVerticalOffsetDragEndAction);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List_System__Collections__Generic__IEnumerable<RTG::TerrainGizmoAffectedObject>_
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>
                     );
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar6,ExceptionArgument__Enum_obj,pMVar8);
    pOVar6[1].monitor = (MonitorData *)pTVar15;
    func_?(&pOVar6[1].monitor,pTVar15);
    if (pSVar24 != (Single__Array_1 *)0x0) {
      pOVar26 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pSVar24,(MethodInfo *)0x0);
      pOVar5 = (Object__Class *)func_?();
      pOVar6[2].klass = pOVar5;
      uVar27 = func_?(pOVar26,TypeInfo__System__Single);
      func_?(pOVar6 + 2,uVar27);
    }
    if (handleId != 0) {
      pOVar26 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)handleId,(MethodInfo *)0x0);
      pMVar13 = (MonitorData *)func_?();
      pOVar6[2].monitor = pMVar13;
      uVar27 = func_?(pOVar26,TypeInfo__System__Single);
      func_?(&pOVar6[2].monitor,uVar27);
    }
    pOVar5 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pOVar5,(IEnumerable_1_System_Object_ *)pLVar25,
               MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List_System__Collections__Generic__IEnumerable<RTG::TerrainGizmoAffectedObject>_
              );
    pOVar6[1].klass = pOVar5;
    func_?(pOVar6 + 1);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    }
    pRVar14 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (pRVar14 == (RTUndoRedo *)0x0) goto code_?;
    RTUndoRedo::RTUndoRedo_RecordAction(pRVar14,(IUndoRedoAction *)pOVar6,(MethodInfo *)0x0);
    pSVar24 = (this->fields)._terrainHeights;
    destinationArray = (this->fields)._preChangeTerrainHeights;
    if (pSVar24 == (Single__Array_1 *)0x0) goto code_?;
    iVar28 = mscorlib.dll::System::Array::Array_GetLength((Array *)pSVar24,0,(MethodInfo *)0x0);
    this_02 = (this->fields)._preChangeTerrainHeights;
    if (this_02 == (Single__Array_1 *)0x0) goto code_?;
    iVar29 = mscorlib.dll::System::Array::Array_GetLength((Array *)this_02,1,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Copy_2
              ((Array *)pSVar24,(Array *)destinationArray,iVar29 * iVar28,(MethodInfo *)0x0);
  }
  this_03 = (this->fields)._affectedObjectsSet;
  if (this_03 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__);
    pLVar25 = (this->fields)._affectedObjects;
    if (pLVar25 != (List_1_RTG_TerrainGizmoAffectedObject_ *)0x0) {
      length = (pLVar25->fields)._size;
      piVar30 = &(pLVar25->fields)._version;
      *piVar30 = *piVar30 + 1;
      (pLVar25->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar25->fields)._items,0,length,(MethodInfo *)0x0);
      }
      TerrainGizmo_ProjectGizmoOnTerrain(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar27 = func_?();
  func_?(uVar27);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoDragUpdate
               (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._axisSlider;
  if ((this_00 != (GizmoLineSlider3D *)0x0) &&
     (pGVar1 = (this_00->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) {
    if ((handleId == (pGVar1->fields)._id) ||
       (iVar2 = GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DHandleId(this_00,(MethodInfo *)0x0),
       handleId == iVar2)) {
      if (((this->fields)._targetTypeFlags & 1) != 0) {
        pGVar3 = (this->fields)._._gizmo;
        if (pGVar3 == (Gizmo *)0x0) goto code_?;
        pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffe4,pGVar3,(MethodInfo *)0x0);
        TerrainGizmo_OffsetTerrainPatch(this,pVVar4->y,(MethodInfo *)0x0);
      }
      if (((this->fields)._targetTypeFlags & 2) == 0) {
        return;
      }
      pGVar3 = (this->fields)._._gizmo;
      if (pGVar3 != (Gizmo *)0x0) {
        pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffe4,pGVar3,(MethodInfo *)0x0);
        TerrainGizmo_OffsetObjectsInRadius(this,pVVar4->y,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_01 = (this->fields)._midCap;
      if (this_01 != (GizmoCap3D *)0x0) {
        pvVar5 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar5) {
          TerrainGizmo_DragObjectsWithMidCap(this,(MethodInfo *)0x0);
          return;
        }
        pTVar6 = TerrainGizmo_GetRadiusTickFromHandleId(this,handleId,(MethodInfo *)0x0);
        if (pTVar6 == (TerrainGizmo_RadiusTick *)0x0) {
          return;
        }
        fVar7 = (this->fields)._radius;
        pGVar3 = (this->fields)._._gizmo;
        if (pGVar3 != (Gizmo *)0x0) {
          pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset
                              ((Vector3 *)&stack0xfffffff0,pGVar3,(MethodInfo *)0x0);
          uVar8 = pVVar4->x;
          uVar9 = pVVar4->y;
          uVar10 = (pTVar6->fields).DragAxis.x;
          uVar11 = (pTVar6->fields).DragAxis.y;
          fVar7 = (float)uVar11 * (float)uVar9 + (float)uVar8 * (float)uVar10 +
                   (pTVar6->fields).DragAxis.z * pVVar4->z + fVar7;
          fVar12 = _UNK_?;
          if (_UNK_? <= fVar7) {
            fVar12 = fVar7;
          }
          (this->fields)._radius = fVar12;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoRender
               (TerrainGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = TerrainGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_02 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_02 == (RTGizmosEngine *)0x0) goto code_?;
  iVar2 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_02,(MethodInfo *)0x0);
  if (1 < iVar2) {
    TerrainGizmo_UpdateTicks(this,(MethodInfo *)0x0);
  }
  if ((this->fields)._isVisible != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar3 = MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__;
    pIVar4 = MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    pIVar4 = pIVar4->rgctx_data[2].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    if (pIVar4->cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar4 = pMVar3->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    pIVar4 = pIVar4->rgctx_data[2].klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    this_00 = *(GizmoLineMaterial **)pIVar4->static_fields;
    if (this_00 == (GizmoLineMaterial *)0x0) goto code_?;
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    pTVar5 = (this->fields)._sharedLookAndFeel;
    if ((pTVar5 == (TerrainGizmoLookAndFeel *)0x0) &&
       (pTVar5 = (this->fields)._lookAndFeel, pTVar5 == (TerrainGizmoLookAndFeel *)0x0))
    goto code_?;
    GizmoLineMaterial::GizmoLineMaterial_SetColor
              (this_00,(pTVar5->fields)._radiusCircleColor,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
    pTVar6 = (this->fields)._targetTerrain;
    if ((pTVar6 == (Terrain *)0x0) ||
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc4,this_03,(MethodInfo *)0x0);
    fVar8 = pVVar7->y;
    pGVar9 = (this->fields)._._gizmo;
    if (((pGVar9 == (Gizmo *)0x0) || ((pGVar9->fields)._transform == (GizmoTransform *)0x0)) ||
       (pLVar10 = (this->fields)._modelRadiusCirclePoints,
       pLVar10 == (List_1_UnityEngine_Vector3_ *)0x0)) goto code_?;
    iVar11 = (pLVar10->fields)._size;
    index = 0;
    if (0 < iVar11) {
      do {
        pLVar12 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 (this->fields)._modelRadiusCirclePoints;
        if (pLVar12 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
        VisualTreeAsset+UsingEntry]::
        List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                  ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,pLVar12,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                  );
        pLVar12 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 (this->fields)._radiusCirclePoints;
        pTVar6 = (this->fields)._targetTerrain;
        if ((pLVar12 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) ||
           (pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                      VisualTreeAsset+UsingEntry]::
                      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                ((VisualTreeAsset_UsingEntry *)&stack0xffffffac,pLVar12,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                ), pTVar6 == (Terrain *)0x0)) goto code_?;
        fVar14 = (float)pVVar13->alias;
        uVar15 = pVVar13->path;
        fVar16 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_SampleHeight
                           (pTVar6,(Vector3)*pVVar13,(MethodInfo *)0x0);
        this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)(this->fields)._radiusCirclePoints;
        if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
        value.FirstAxisSign = (int32_t)(fVar16 + fVar8);
        value.Quadrant = uVar15;
        value.SecondAxisSign = (int32_t)fVar14;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                  (this_01,index,value,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        index = index + 1;
      } while (index < iVar11);
    }
    GLRenderer::GLRenderer_DrawLines3D((this->fields)._radiusCirclePoints,(MethodInfo *)0x0);
  }
  pGVar17 = (this->fields)._axisSlider;
  if (pGVar17 != (GizmoLineSlider3D *)0x0) {
    (*(code *)(pGVar17->klass->vtable).Render_1.method)();
    pGVar18 = (this->fields)._midCap;
    if (pGVar18 != (GizmoCap3D *)0x0) {
      (*(code *)(pGVar18->klass->vtable).Render_1.method)();
      pTVar19 = (this->fields)._leftRadiusTick;
      if ((pTVar19 != (TerrainGizmo_RadiusTick *)0x0) &&
         (pGVar20 = (pTVar19->fields).Tick, pGVar20 != (GizmoCap2D *)0x0)) {
        (*(code *)(pGVar20->klass->vtable).Render_1.method)();
        pTVar19 = (this->fields)._rightRadiusTick;
        if ((pTVar19 != (TerrainGizmo_RadiusTick *)0x0) &&
           (pGVar20 = (pTVar19->fields).Tick, pGVar20 != (GizmoCap2D *)0x0)) {
          (*(code *)(pGVar20->klass->vtable).Render_1.method)();
          pTVar19 = (this->fields)._backRadiusTick;
          if ((pTVar19 != (TerrainGizmo_RadiusTick *)0x0) &&
             (pGVar20 = (pTVar19->fields).Tick, pGVar20 != (GizmoCap2D *)0x0)) {
            (*(code *)(pGVar20->klass->vtable).Render_1.method)();
            pTVar19 = (this->fields)._forwardRadiusTick;
            if ((pTVar19 != (TerrainGizmo_RadiusTick *)0x0) &&
               (pGVar20 = (pTVar19->fields).Tick, pGVar20 != (GizmoCap2D *)0x0)) {
              (*(code *)(pGVar20->klass->vtable).Render_1.method)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoUpdateBegin
               (TerrainGizmo *this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  Hotkeys *pHVar5;
  TerrainGizmo_ObjectRotationData *pTVar6;
  Terrain *this_00;
  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *this_01;
  Il2CppClass *this_02;
  List_1_UnityEngine_GameObject_ *pLVar7;
  int iVar8;
  Gizmo *pGVar9;
  TerrainCollider *this_03;
  GizmoTransform *this_04;
  GizmoPlaneSlider3D *this_05;
  GizmoLineSlider3D *pGVar10;
  GizmoSglAxisOffsetDrag3D *pGVar11;
  code *pcVar12;
  Ray ray;
  Vector3 axis;
  undefined1 *puVar13;
  bool bVar14;
  char cVar15;
  List_1_RTG_LocalTransformSnapshot_ *pLVar16;
  Object *pOVar17;
  Il2CppClass ***pppIVar18;
  undefined8 *puVar19;
  Transform *pTVar20;
  Vector3 *pVVar21;
  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *pLVar22;
  TerrainGizmoSettings *pTVar23;
  int32_t iVar24;
  Object__Class *pOVar25;
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *pLVar26;
  List_1_System_Object_ *pLVar27;
  RTUndoRedo *this_06;
  int *piVar28;
  undefined1 (*pauVar29) [20];
  Regex_CachedCodeEntryKey *pRVar30;
  GizmoPlaneSlider3DSettings *this_07;
  TerrainGizmoHotkeys *pTVar31;
  ushort uVar32;
  char **ppcVar33;
  undefined4 *unaff_FS_OFFSET;
  MethodInfo *method_00;
  RegexCharClass_SingleRange method_01;
  List_1_T_Enumerator_System_Object_ LStack_34;
  Regex_CachedCodeEntryKey RStack_35;
  undefined1 auStack_36 [8];
  int32_t iStack_37;
  RegexCharClass_SingleRange RStack_38;
  List_1_RTG_LocalTransformSnapshot_ *pLStack_39;
  RegexCharClass_SingleRange RStack_40;
  float fStack_41;
  RegexCharClass_SingleRange RStack_42;
  Object__Class *pOStack_43;
  undefined1 *puStack_44;
  undefined4 uStack_45;
  undefined *puStack_46;
  undefined4 uStack_47;
  
  uStack_47 = 0xffffffff;
  puStack_46 = &DAT_?;
  uStack_45 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_45;
  puStack_44 = &stack0xffffff68;
  puVar13 = &stack0xffffff68;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__TerrainGizmoObjectTransformsChangedAction);
    cRam_? = '\x01';
    puVar13 = puStack_44;
  }
  puStack_44 = puVar13;
  LStack_34._list = (List_1_System_Object_ *)0x0;
  LStack_34._index = 0;
  LStack_34._version = 0;
  LStack_34._current = (Object *)0x0;
  bVar14 = TerrainGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar14 == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_45;
    return;
  }
  pTVar31 = (this->fields)._sharedHotkeys;
  if (((pTVar31 == (TerrainGizmoHotkeys *)0x0) &&
      (pTVar31 = (this->fields)._hotkeys, pTVar31 == (TerrainGizmoHotkeys *)0x0)) ||
     (pHVar5 = (pTVar31->fields)._rotateObjects, pHVar5 == (Hotkeys *)0x0)) goto code_?;
  bVar14 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
  if (bVar14 == 0) {
    pTVar6 = (this->fields)._objectRotationData;
    if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
    if ((pTVar6->fields).RotatingObjects != 0) {
      (pTVar6->fields).RotatingObjects = 0;
      pTVar6 = (this->fields)._objectRotationData;
      if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
      pLStack_39 = (pTVar6->fields).PreSnapshots;
      RStack_40 = (RegexCharClass_SingleRange)
                  LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                            ((IEnumerable_1_UnityEngine_GameObject_ *)(pTVar6->fields).GameObjects,
                             (MethodInfo *)0x0);
      pOVar25 = (Object__Class *)func_?();
      pOStack_43 = pOVar25;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar26 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pLVar26,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                );
      ppcVar33 = &(pOVar25->_0).name;
      *ppcVar33 = (char *)pLVar26;
      func_?();
      pLVar26 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pLVar26,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                );
      method_00 = (MethodInfo *)&(pOStack_43->_0).namespaze;
      *(LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)method_00 = pLVar26;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pOStack_43,ExceptionArgument__Enum_obj,method_00);
      pLVar27 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (pLVar27,(IEnumerable_1_System_Object_ *)pLStack_39,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                );
      *ppcVar33 = (char *)pLVar27;
      LStack_34._list = (List_1_System_Object_ *)ppcVar33;
      LStack_34._index = (int32_t)pLVar27;
      func_?();
      pLVar27 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (pLVar27,(IEnumerable_1_System_Object_ *)RStack_40,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                );
      pOVar25 = pOStack_43;
      (pOStack_43->_0).namespaze = (char *)pLVar27;
      func_?();
      if (cRam_? == '\0') {
        func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
        func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
        cRam_? = '\x01';
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      }
      this_06 = (RTUndoRedo *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      if (this_06 == (RTUndoRedo *)0x0) goto code_?;
      RTUndoRedo::RTUndoRedo_RecordAction(this_06,(IUndoRedoAction *)pOVar25,(MethodInfo *)0x0);
      pTVar6 = (this->fields)._objectRotationData;
      if ((pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) ||
         (pLVar7 = (pTVar6->fields).GameObjects, pLVar7 == (List_1_UnityEngine_GameObject_ *)0x0))
      goto code_?;
      iVar8 = (pLVar7->fields)._size;
      piVar1 = &(pLVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pLVar7->fields)._size = 0;
      if (0 < iVar8) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar7->fields)._items,0,iVar8,(MethodInfo *)0x0);
      }
      pTVar6 = (this->fields)._objectRotationData;
      if ((pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) ||
         (pLVar16 = (pTVar6->fields).PreSnapshots,
         pLVar16 == (List_1_RTG_LocalTransformSnapshot_ *)0x0)) goto code_?;
      iVar8 = (pLVar16->fields)._size;
      piVar1 = &(pLVar16->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pLVar16->fields)._size = 0;
      if (0 < iVar8) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar16->fields)._items,0,iVar8,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar17 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar17 == (Object *)0x0) ||
       (pOStack_43 = pOVar17[2].klass, pOStack_43 == (Object__Class *)0x0)) goto code_?;
    RStack_42 = (RegexCharClass_SingleRange)(pOStack_43->_0).image;
    uVar32 = 0;
    pLStack_39 = (List_1_RTG_LocalTransformSnapshot_ *)0x0;
    uVar4 = *(ushort *)((int)RStack_42 + 0xb6);
    RStack_40.Last = 0;
    RStack_40.First = uVar4;
    if (uVar4 != 0) {
      do {
        if ((*(Il2CppRuntimeInterfaceOffsetPair **)((int)RStack_42 + 0x58))[uVar32].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          piVar28 = (int *)((int)RStack_42 +
                           ((*(Il2CppRuntimeInterfaceOffsetPair **)((int)RStack_42 + 0x58))[uVar32].
                            offset + 0x22) * 8);
          goto code_?;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar4);
    }
    piVar28 = (int *)func_?();
code_?:
    cVar15 = (*(code *)*piVar28)();
    if (cVar15 != '\0') {
      pGVar9 = (this->fields)._._gizmo;
      if (pGVar9 == (Gizmo *)0x0) goto code_?;
      bVar14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::ChangeEvent`1[System::
               Boolean]::ChangeEvent_1_System_Boolean__get_previousValue
                         ((ChangeEvent_1_System_Boolean_ *)pGVar9,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        func_?();
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pOVar17 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if (pOVar17 == (Object *)0x0) goto code_?;
        pOVar25 = pOVar17[2].klass;
        pGVar9 = (this->fields)._._gizmo;
        if ((pGVar9 == (Gizmo *)0x0) ||
           (Gizmo::Gizmo_GetWorkCamera(pGVar9,(MethodInfo *)0x0), pOVar25 == (Object__Class *)0x0))
        goto code_?;
        pauVar29 = (undefined1 (*) [20])func_?();
        this_03 = (this->fields)._terrainCollider;
        if (this_03 == (TerrainCollider *)0x0) goto code_?;
        ray.m_Direction.z = (float)((ulonglong)*(undefined8 *)(*pauVar29 + 0x10) >> 0x20);
        ray._0_20_ = *pauVar29;
        bVar14 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                           ((Collider *)this_03,ray,(RaycastHit *)&stack0xffffff74,3.4028235e+38,
                            (MethodInfo *)0x0);
        if (bVar14 != 0) {
          pGVar9 = (this->fields)._._gizmo;
          if (pGVar9 == (Gizmo *)0x0) goto code_?;
          this_04 = (pGVar9->fields)._transform;
          pRVar30 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              (&RStack_35,
                               (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)&stack0xffffff74,(MethodInfo *)0x0);
          if (this_04 == (GizmoTransform *)0x0) goto code_?;
          GizmoTransform::GizmoTransform_set_Position3D(this_04,(Vector3)*pRVar30,(MethodInfo *)0x0)
          ;
          TerrainGizmo_SetVisible(this,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  else {
    pTVar6 = (this->fields)._objectRotationData;
    if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
    if ((pTVar6->fields).RotatingObjects == 0) {
      TerrainGizmo_CollectObjectsInRadius(this,(this->fields)._objectsInRadius,(MethodInfo *)0x0);
      pTVar6 = (this->fields)._objectRotationData;
      if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
      (pTVar6->fields).RotatingObjects = 1;
      pTVar6 = (this->fields)._objectRotationData;
      if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
      (pTVar6->fields).GameObjects = (this->fields)._objectsInRadius;
      func_?();
      pTVar6 = (this->fields)._objectRotationData;
      if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
      pLVar16 = LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                          ((IEnumerable_1_UnityEngine_GameObject_ *)(pTVar6->fields).GameObjects,
                           (MethodInfo *)0x0);
      (pTVar6->fields).PreSnapshots = pLVar16;
      func_?();
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar17 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar17 == (Object *)0x0) ||
       (RStack_42 = (RegexCharClass_SingleRange)pOVar17[2].klass,
       RStack_42 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    pOStack_43 = *(Object__Class **)RStack_42;
    uVar32 = 0;
    fStack_41 = 0.0;
    uVar4._0_1_ = (pOStack_43->_1).rank;
    uVar4._1_1_ = (pOStack_43->_1).minimumAlignment;
    RStack_40.Last = 0;
    RStack_40.First = uVar4;
    if (uVar4 != 0) {
      do {
        if (pOStack_43->interfaceOffsets[uVar32].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          pppIVar18 = &pOStack_43[1]._1.typeHierarchy +
                      pOStack_43->interfaceOffsets[uVar32].offset * 2;
          goto code_?;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar4);
    }
    pppIVar18 = (Il2CppClass ***)func_?();
code_?:
    method_01 = RStack_42;
    puVar19 = (undefined8 *)(*(code *)*pppIVar18)();
    RStack_35._pattern = *(String **)(puVar19 + 1);
    pTVar23 = (this->fields)._sharedSettings;
    RStack_35._options = (int32_t)*puVar19;
    RStack_35._cultureKey = (String *)((ulonglong)*puVar19 >> 0x20);
    if ((pTVar23 == (TerrainGizmoSettings *)0x0) &&
       (pTVar23 = (this->fields)._settings, pTVar23 == (TerrainGizmoSettings *)0x0))
    goto code_?;
    fStack_41 = (float)RStack_35._options * (pTVar23->fields)._rotationSensitivity;
    this_00 = (this->fields)._targetTerrain;
    if ((this_00 == (Terrain *)0x0) ||
       (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), pTVar20 == (Transform *)0x0))
    goto code_?;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)(auStack_36 + 4),pTVar20,(MethodInfo *)0x0);
    uVar2 = pVVar21->x;
    uVar3 = pVVar21->y;
    pLStack_39 = (List_1_RTG_LocalTransformSnapshot_ *)pVVar21->z;
    pTVar6 = (this->fields)._objectRotationData;
    RStack_35._cultureKey = (String *)uVar2;
    RStack_35._pattern = (String *)uVar3;
    if ((pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) ||
       (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (pTVar6->fields).GameObjects,
       this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_36,this_01,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    LStack_34._list = (List_1_System_Object_ *)pLVar22->_list;
    LStack_34._index = pLVar22->_index;
    LStack_34._version = pLVar22->_version;
    LStack_34._current = *(Object **)&pLVar22->_current;
    iStack_37 = 0;
    uStack_47 = 1;
    RStack_38 = (RegexCharClass_SingleRange)&LStack_34;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_34,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar14 != 0) {
      pTVar23 = (this->fields)._sharedSettings;
      RStack_42 = (RegexCharClass_SingleRange)LStack_34._current;
      if (((pTVar23 == (TerrainGizmoSettings *)0x0) &&
          (pTVar23 = (this->fields)._settings, pTVar23 == (TerrainGizmoSettings *)0x0)) ||
         (RStack_40 = (RegexCharClass_SingleRange)(pTVar23->fields)._objectRotationLayerMask,
         (RegexCharClass_SingleRange)LStack_34._current == (RegexCharClass_SingleRange)0x0))
      goto code_?;
      iVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                         ((GameObject *)LStack_34._current,(MethodInfo *)0x0);
      if (((int)RStack_40 >> ((byte)iVar24 & 0x1f) & 1U) != 0) {
        pOStack_43 = (Object__Class *)(this->fields)._sharedSettings;
        if (pOStack_43 == (Object__Class *)0x0) {
          pOStack_43 = (Object__Class *)(this->fields)._settings;
        }
        RStack_40 = (RegexCharClass_SingleRange)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                              ((GameObject *)RStack_42,(MethodInfo *)0x0);
        if (pOStack_43 == (Object__Class *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (pOStack_43->_0).declaringType;
        if (this_02 == (Il2CppClass *)0x0) goto code_?;
        method_01 = RStack_40;
        bVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                 List_1_System_Object__Contains
                           ((List_1_System_Object_ *)this_02,(Object *)RStack_40,
                            MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                           );
        if (bVar14 == 0) {
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)RStack_42,(MethodInfo *)0x0);
          if (pTVar20 == (Transform *)0x0) goto code_?;
          method_01 = (RegexCharClass_SingleRange)&UNK_?;
          axis.y = (float)RStack_35._pattern;
          axis.x = (float)RStack_35._cultureKey;
          axis.z = (float)pLStack_39;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar20,axis,fStack_41,(MethodInfo *)0x0);
        }
      }
    }
    uStack_47 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_34,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,(MethodInfo *)method_01);
    uStack_47 = 0xffffffff;
  }
  this_05 = (GizmoPlaneSlider3D *)(this->fields)._axisSlider;
  if (this_05 != (GizmoPlaneSlider3D *)0x0) {
    this_07 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_05,(MethodInfo *)0x0);
    pTVar23 = (this->fields)._sharedSettings;
    if (((pTVar23 != (TerrainGizmoSettings *)0x0) ||
        (pTVar23 = (this->fields)._settings, pTVar23 != (TerrainGizmoSettings *)0x0)) &&
       (this_07 != (GizmoPlaneSlider3DSettings *)0x0)) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)this_07,(pTVar23->fields)._offsetSnapStep,
                 (MethodInfo *)0x0);
      pGVar10 = (this->fields)._axisSlider;
      if ((this->fields)._isSnapEnabled == 0) {
        pTVar31 = (this->fields)._sharedHotkeys;
        if (((pTVar31 == (TerrainGizmoHotkeys *)0x0) &&
            (pTVar31 = (this->fields)._hotkeys, pTVar31 == (TerrainGizmoHotkeys *)0x0)) ||
           (pHVar5 = (pTVar31->fields)._enableSnapping, pHVar5 == (Hotkeys *)0x0))
        goto code_?;
        bVar14 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
        RStack_42.First._0_1_ = bVar14;
      }
      else {
        RStack_42.First._0_1_ = 1;
      }
      if (pGVar10 != (GizmoLineSlider3D *)0x0) {
        (*(code *)(pGVar10->klass->vtable).SetSnapEnabled_1.method)();
        pGVar11 = (this->fields)._radiusDrag;
        if ((this->fields)._isSnapEnabled == 0) {
          pTVar31 = (this->fields)._sharedHotkeys;
          if (((pTVar31 == (TerrainGizmoHotkeys *)0x0) &&
              (pTVar31 = (this->fields)._hotkeys, pTVar31 == (TerrainGizmoHotkeys *)0x0)) ||
             (pHVar5 = (pTVar31->fields)._enableSnapping, pHVar5 == (Hotkeys *)0x0))
          goto code_?;
          bVar14 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
        }
        else {
          bVar14 = 1;
        }
        if (pGVar11 != (GizmoSglAxisOffsetDrag3D *)0x0) {
          (pGVar11->fields)._._isSnapEnabled = bVar14;
          TerrainGizmo_UpdateTicks(this,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnUndoRedoPerformed(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnUndoRedoPerformed
               (TerrainGizmo *this,IUndoRedoAction *action,MethodInfo *method)

{
  TerrainGizmo_ProjectGizmoOnTerrain(this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._targetTerrain;
  if (pTVar1 != (Terrain *)0x0) {
    this_01 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                        (pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._targetTerrain;
    if (pTVar1 != (Terrain *)0x0) {
      pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                         (pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (TerrainData *)0x0) {
        iVar3 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                TerrainData_get_internalHeightmapResolution(pTVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._targetTerrain;
        if (pTVar1 != (Terrain *)0x0) {
          pTVar2 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                             (pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (TerrainData *)0x0) {
            iVar4 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                    TerrainData_get_internalHeightmapResolution(pTVar2,(MethodInfo *)0x0);
            if (this_01 != (TerrainData *)0x0) {
              pSVar5 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                       TerrainData_GetHeights(this_01,0,0,iVar3,iVar4,(MethodInfo *)0x0);
              ppSVar6 = &(this->fields)._terrainHeights;
              *ppSVar6 = pSVar5;
              func_?();
              pSVar5 = *ppSVar6;
              destinationArray = (this->fields)._preChangeTerrainHeights;
              if (pSVar5 != (Single__Array_1 *)0x0) {
                iVar3 = mscorlib.dll::System::Array::Array_GetLength
                                  ((Array *)pSVar5,0,(MethodInfo *)0x0);
                this_00 = (this->fields)._preChangeTerrainHeights;
                if (this_00 != (Single__Array_1 *)0x0) {
                  iVar4 = mscorlib.dll::System::Array::Array_GetLength
                                    ((Array *)this_00,1,(MethodInfo *)0x0);
                  mscorlib.dll::System::Array::Array_Copy_2
                            ((Array *)pSVar5,(Array *)destinationArray,iVar4 * iVar3,
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ProjectGizmoOnTerrain() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_ProjectGizmoOnTerrain
               (TerrainGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    pTVar3 = (this->fields)._targetTerrain;
    fVar4 = (pGVar2->fields)._position3D.z;
    if (pTVar3 != (Terrain *)0x0) {
      fVar5 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_SampleHeight
                        (pTVar3,(pGVar2->fields)._position3D,(MethodInfo *)0x0);
      pTVar3 = (this->fields)._targetTerrain;
      if (pTVar3 != (Terrain *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar3,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&puStack_7,this_00,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._gizmo;
          if ((pGVar1 != (Gizmo *)0x0) &&
             (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
            value.y = fVar5 + pVVar6->y;
            value.x = (float)this_00;
            value.z = fVar4;
            GizmoTransform::GizmoTransform_set_Position3D(pGVar2,value,(MethodInfo *)0x0);
            return;
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


/* Void SetTargetTerrain(Terrain) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_SetTargetTerrain
               (TerrainGizmo *this,Terrain *terrain,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__TerrainCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::TerrainCollider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields)._targetTerrain;
  *ppTVar1 = terrain;
  func_?(ppTVar1,terrain);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)terrain,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar1 != (Terrain *)0x0) {
      pTVar3 = (TerrainCollider *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)*ppTVar1,
                          UnityEngine__TerrainCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::TerrainCollider>__
                         );
      ppTVar4 = &(this->fields)._terrainCollider;
      *ppTVar4 = pTVar3;
      func_?(ppTVar4,pTVar3);
      if (*ppTVar1 != (Terrain *)0x0) {
        this_00 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                            (*ppTVar1,(MethodInfo *)0x0);
        if (*ppTVar1 != (Terrain *)0x0) {
          pTVar5 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                             (*ppTVar1,(MethodInfo *)0x0);
          if (pTVar5 != (TerrainData *)0x0) {
            width = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                    TerrainData_get_internalHeightmapResolution(pTVar5,(MethodInfo *)0x0);
            if (*ppTVar1 != (Terrain *)0x0) {
              pTVar5 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                                 (*ppTVar1,(MethodInfo *)0x0);
              if (pTVar5 != (TerrainData *)0x0) {
                height = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                         TerrainData_get_internalHeightmapResolution(pTVar5,(MethodInfo *)0x0);
                if (this_00 != (TerrainData *)0x0) {
                  pSVar6 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                           TerrainData_GetHeights(this_00,0,0,width,height,(MethodInfo *)0x0);
                  ppSVar7 = &(this->fields)._terrainHeights;
                  *ppSVar7 = pSVar6;
                  func_?(ppSVar7,pSVar6);
                  if (*ppSVar7 != (Single__Array_1 *)0x0) {
                    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                             PlayableBehaviour_Clone
                                       ((PlayableBehaviour *)*ppSVar7,(MethodInfo *)0x0);
                    ppSVar7 = &(this->fields)._preChangeTerrainHeights;
                    pSVar6 = (Single__Array_1 *)func_?(pOVar8,TypeInfo__System__Single);
                    *ppSVar7 = pSVar6;
                    uVar9 = func_?(pOVar8,TypeInfo__System__Single);
                    func_?(ppSVar7,uVar9);
                    goto code_?;
                  }
                }
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
code_?:
  TerrainGizmo_SetVisible(this,0,(MethodInfo *)0x0);
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_SetVisible
               (TerrainGizmo *this,bool visible,MethodInfo *method)

{
  pGVar1 = (this->fields)._axisSlider;
  if (pGVar1 != (GizmoLineSlider3D *)0x0) {
    pGVar2 = pGVar1->klass;
    (pGVar1->fields)._._isVisible = visible;
    (*(code *)(pGVar2->vtable).OnVisibilityStateChanged.method)
              (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.methodPtr);
    pGVar1 = (this->fields)._axisSlider;
    if (pGVar1 != (GizmoLineSlider3D *)0x0) {
      GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible(pGVar1,visible,(MethodInfo *)0x0);
      this_00 = (this->fields)._midCap;
      if (this_00 != (GizmoCap3D *)0x0) {
        GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_00,visible,(MethodInfo *)0x0);
        pTVar3 = (this->fields)._leftRadiusTick;
        if ((pTVar3 != (TerrainGizmo_RadiusTick *)0x0) &&
           (pGVar4 = (pTVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar4,visible,(MethodInfo *)0x0);
          pTVar3 = (this->fields)._rightRadiusTick;
          if ((pTVar3 != (TerrainGizmo_RadiusTick *)0x0) &&
             (pGVar4 = (pTVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar4,visible,(MethodInfo *)0x0);
            pTVar3 = (this->fields)._backRadiusTick;
            if ((pTVar3 != (TerrainGizmo_RadiusTick *)0x0) &&
               (pGVar4 = (pTVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
              GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar4,visible,(MethodInfo *)0x0);
              pTVar3 = (this->fields)._forwardRadiusTick;
              if ((pTVar3 != (TerrainGizmo_RadiusTick *)0x0) &&
                 (pGVar4 = (pTVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
                GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar4,visible,(MethodInfo *)0x0);
                (this->fields)._isVisible = visible;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_SetupSharedLookAndFeel
               (TerrainGizmo *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedLookAndFeel;
  if (((pTVar1 != (TerrainGizmoLookAndFeel *)0x0) ||
      (pTVar1 = (this->fields)._lookAndFeel, pTVar1 != (TerrainGizmoLookAndFeel *)0x0)) &&
     (this_00 = (this->fields)._axisSlider, this_00 != (GizmoLineSlider3D *)0x0)) {
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
              (this_00,(pTVar1->fields)._axisSliderLookAndFeel,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._sharedLookAndFeel;
    if (((pTVar1 != (TerrainGizmoLookAndFeel *)0x0) ||
        (pTVar1 = (this->fields)._lookAndFeel, pTVar1 != (TerrainGizmoLookAndFeel *)0x0)) &&
       (pGVar2 = (this->fields)._midCap, pGVar2 != (GizmoCap3D *)0x0)) {
      ppGVar3 = &(pGVar2->fields)._sharedLookAndFeel;
      *ppGVar3 = (pTVar1->fields)._midCapLookAndFeel;
      func_?(ppGVar3,&stack0xfffffffc,&UNK_?);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SnapGizmoToTerrain() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_SnapGizmoToTerrain
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffb8,0,0x2c);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    pGVar3 = (this->fields)._._gizmo;
    if ((pGVar3 != (Gizmo *)0x0) &&
       (Gizmo::Gizmo_GetWorkCamera(pGVar3,(MethodInfo *)0x0), pOVar2 != (Object__Class *)0x0)) {
      pRVar4 = (Ray *)func_?(auStack_5,6,TypeInfo__RTG__IInputDevice,pOVar2);
      this_00 = (this->fields)._terrainCollider;
      if (this_00 != (TerrainCollider *)0x0) {
        bVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                          ((Collider *)this_00,*pRVar4,(RaycastHit *)&stack0xffffffb8,3.4028235e+38,
                           (MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        pGVar3 = (this->fields)._._gizmo;
        if (pGVar3 != (Gizmo *)0x0) {
          this_01 = (pGVar3->fields)._transform;
          pRVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                             (&RStack_8,
                              (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffb8,(MethodInfo *)0x0);
          if (this_01 != (GizmoTransform *)0x0) {
            GizmoTransform::GizmoTransform_set_Position3D
                      (this_01,(Vector3)*pRVar7,(MethodInfo *)0x0);
            TerrainGizmo_SetVisible(this,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateTicks() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_UpdateTicks
               (TerrainGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._targetTerrain;
    pCStack_3 = this_00;
    if (pTVar2 != (Terrain *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar2,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff98,this_01,(MethodInfo *)0x0);
        fStack_5 = pVVar4->y;
        pGVar1 = (this->fields)._._gizmo;
        if ((pGVar1 != (Gizmo *)0x0) &&
           (pGVar6 = (pGVar1->fields)._transform, pGVar6 != (GizmoTransform *)0x0)) {
          uVar7 = (pGVar6->fields)._position3D.x;
          uVar8 = (pGVar6->fields)._position3D.y;
          puStack_9 = (undefined *)(pGVar6->fields)._position3D.z;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar11 = (pVVar10->rightVector).x;
          uVar12 = (pVVar10->rightVector).y;
          fVar13 = (this->fields)._radius;
          value_00.y = (float)uVar7 - (float)uVar11 * fVar13;
          fVar14 = (float)puStack_9 - (pVVar10->rightVector).z * fVar13;
          fVar13 = (float)uVar8 - (float)uVar12 * fVar13;
          pTVar2 = (this->fields)._targetTerrain;
          if (pTVar2 != (Terrain *)0x0) {
            worldPosition.y = fVar13;
            worldPosition.x = value_00.y;
            worldPosition.z = fVar14;
            fVar15 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_SampleHeight
                               (pTVar2,worldPosition,(MethodInfo *)0x0);
            fVar15 = fVar15 + fStack_5;
            pTVar16 = (this->fields)._leftRadiusTick;
            if ((pTVar16 != (TerrainGizmo_RadiusTick *)0x0) &&
               (pGStack_17 = (pTVar16->fields).Tick, this_00 != (Camera *)0x0)) {
              position.z = fVar14;
              position.x = value_00.y;
              position.y = fVar15;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_18,this_00,position,(MethodInfo *)0x0);
              value.x = pVVar4->x;
              value.y = pVVar4->y;
              VStack_18.y = value.x;
              VStack_18.z = value.y;
              if (pGStack_17 != (GizmoCap2D *)0x0) {
                GizmoCap2D::GizmoCap2D_set_Position(pGStack_17,value,(MethodInfo *)0x0);
                pTVar16 = (this->fields)._leftRadiusTick;
                if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                  (pTVar16->fields).WorldPosition.x = value_00.y;
                  (pTVar16->fields).WorldPosition.y = fVar15;
                  (pTVar16->fields).WorldPosition.z = fVar14;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                  VStack_18.x = (pVVar10->rightVector).x;
                  VStack_18.y = (pVVar10->rightVector).y;
                  VStack_18.z = (pVVar10->rightVector).z;
                  fVar14 = (this->fields)._radius;
                  value_00.y = (float)puStack_9 + VStack_18.z * fVar14;
                  fVar13 = fVar13 + VStack_18.x * fVar14;
                  fVar14 = (float)uVar8 + VStack_18.y * fVar14;
                  pTVar2 = (this->fields)._targetTerrain;
                  if (pTVar2 != (Terrain *)0x0) {
                    worldPosition_00.y = fVar14;
                    worldPosition_00.x = fVar13;
                    worldPosition_00.z = value_00.y;
                    fVar15 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                             Terrain_SampleHeight(pTVar2,worldPosition_00,(MethodInfo *)0x0);
                    fVar15 = fVar15 + fStack_5;
                    pTVar16 = (this->fields)._rightRadiusTick;
                    if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                      pGStack_17 = (pTVar16->fields).Tick;
                      position_00.z = value_00.y;
                      position_00.x = fVar13;
                      position_00.y = fVar15;
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          (&VStack_18,this_00,position_00,(MethodInfo *)0x0);
                      value_00.x = pVVar4->x;
                      value_00.y = pVVar4->y;
                      VStack_18.y = value_00.x;
                      VStack_18.z = value_00.y;
                      if (pGStack_17 != (GizmoCap2D *)0x0) {
                        GizmoCap2D::GizmoCap2D_set_Position(pGStack_17,value_00,(MethodInfo *)0x0);
                        pTVar16 = (this->fields)._rightRadiusTick;
                        if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                          (pTVar16->fields).WorldPosition.x = fVar13;
                          (pTVar16->fields).WorldPosition.y = fVar15;
                          (pTVar16->fields).WorldPosition.z = value_00.y;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                          VStack_18.x = (pVVar10->forwardVector).x;
                          VStack_18.y = (pVVar10->forwardVector).y;
                          VStack_18.z = (pVVar10->forwardVector).z;
                          fVar13 = (this->fields)._radius;
                          value_00.y = (float)puStack_9 - VStack_18.z * fVar13;
                          fVar14 = fVar14 - VStack_18.x * fVar13;
                          fVar13 = (float)uVar8 - VStack_18.y * fVar13;
                          pTVar2 = (this->fields)._targetTerrain;
                          if (pTVar2 != (Terrain *)0x0) {
                            worldPosition_01.y = fVar13;
                            worldPosition_01.x = fVar14;
                            worldPosition_01.z = value_00.y;
                            fVar15 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                     Terrain_SampleHeight(pTVar2,worldPosition_01,(MethodInfo *)0x0)
                            ;
                            fVar15 = fVar15 + fStack_5;
                            pTVar16 = (this->fields)._backRadiusTick;
                            if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                              pGStack_17 = (pTVar16->fields).Tick;
                              position_01.z = value_00.y;
                              position_01.x = fVar14;
                              position_01.y = fVar15;
                              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  (&VStack_18,this_00,position_01,(MethodInfo *)0x0)
                              ;
                              value_01.x = pVVar4->x;
                              value_01.y = pVVar4->y;
                              VStack_18.y = value_01.x;
                              VStack_18.z = value_01.y;
                              if (pGStack_17 != (GizmoCap2D *)0x0) {
                                GizmoCap2D::GizmoCap2D_set_Position
                                          (pGStack_17,value_01,(MethodInfo *)0x0);
                                pTVar16 = (this->fields)._backRadiusTick;
                                if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                                  (pTVar16->fields).WorldPosition.x = fVar14;
                                  (pTVar16->fields).WorldPosition.y = fVar15;
                                  (pTVar16->fields).WorldPosition.z = value_01.y;
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  VStack_18.x = (pVVar10->forwardVector).x;
                                  VStack_18.y = (pVVar10->forwardVector).y;
                                  VStack_18.z = (pVVar10->forwardVector).z;
                                  fVar14 = (this->fields)._radius;
                                  fVar13 = fVar13 + VStack_18.x * fVar14;
                                  value_00.y = (float)puStack_9 + VStack_18.z * fVar14;
                                  pTVar2 = (this->fields)._targetTerrain;
                                  if (pTVar2 != (Terrain *)0x0) {
                                    worldPosition_02.y = (float)uVar8 + VStack_18.y * fVar14;
                                    worldPosition_02.x = fVar13;
                                    worldPosition_02.z = value_00.y;
                                    fVar14 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                             Terrain_SampleHeight
                                                       (pTVar2,worldPosition_02,(MethodInfo *)0x0);
                                    fVar14 = fVar14 + fStack_5;
                                    pTVar16 = (this->fields)._forwardRadiusTick;
                                    if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                                      pGStack_17 = (pTVar16->fields).Tick;
                                      position_02.z = value_00.y;
                                      position_02.x = fVar13;
                                      position_02.y = fVar14;
                                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                Camera_WorldToScreenPoint_1
                                                          ((Vector3 *)&stack0xffffffa8,pCStack_3,
                                                           position_02,(MethodInfo *)0x0);
                                      value_02.x = pVVar4->x;
                                      value_02.y = pVVar4->y;
                                      VStack_18.y = value_02.x;
                                      VStack_18.z = value_02.y;
                                      if (pGStack_17 != (GizmoCap2D *)0x0) {
                                        GizmoCap2D::GizmoCap2D_set_Position
                                                  (pGStack_17,value_02,(MethodInfo *)0x0);
                                        pTVar16 = (this->fields)._forwardRadiusTick;
                                        if (pTVar16 != (TerrainGizmo_RadiusTick *)0x0) {
                                          (pTVar16->fields).WorldPosition.x = fVar13;
                                          (pTVar16->fields).WorldPosition.y = fVar14;
                                          (pTVar16->fields).WorldPosition.z = value_00.y;
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean <CollectObjectsInRadius>b__93_0(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo__CollectObjectsInRadius_b__93_0
               (TerrainGizmo *this,GameObject *item,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    uVar3 = (pGVar2->fields)._position3D.y;
    fVar4 = (pGVar2->fields)._position3D.z;
    if (item != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (item,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_6,this_00,(MethodInfo *)0x0);
        VStack_6.x = pVVar5->x;
        VStack_6.y = pVVar5->y;
        VStack_6.z = pVVar5->z;
        fVar7 = fStack_8 - VStack_6.x;
        fVar9 = fStack_10 - VStack_6.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math,uVar3,fVar4);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar11 = (double)(fVar7 * fVar7 + _UNK_? + fVar9 * fVar9);
        if (dVar11 < 0.0) {
          func_?();
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        return (this->fields)._radius < (float)dVar11;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* TerrainGizmo() */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo__ctor
               (TerrainGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__RTG__TerrainGizmo__ObjectRotationData);
    func_?(&TypeInfo__RTG__SceneOverlapFilter);
    func_?(&TypeInfo__RTG__TerrainGizmoHotkeys);
    func_?(&TypeInfo__RTG__TerrainGizmoLookAndFeel);
    func_?(&TypeInfo__RTG__TerrainGizmoSettings);
    cRam_? = '\x01';
  }
  (this->fields)._targetTypeFlags = 3;
  (this->fields)._radius = 5.0;
  this_00 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
            (this_00,(MethodInfo *)0x0);
  ppAVar1 = &(this->fields)._elevationCurve;
  *ppAVar1 = this_00;
  func_?(ppAVar1,this_00);
  value = (TerrainGizmo_ObjectRotationData *)
          func_?(TypeInfo__RTG__TerrainGizmo__ObjectRotationData);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  pMVar3 = (MethodInfo *)&(value->fields).GameObjects;
  *(List_1_UnityEngine_GameObject_ **)pMVar3 = pLVar2;
  func_?(pMVar3,pLVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar3);
  ppTVar4 = &(this->fields)._objectRotationData;
  *ppTVar4 = value;
  func_?(ppTVar4,value);
  this_01 = (SceneOverlapFilter *)func_?(TypeInfo__RTG__SceneOverlapFilter);
  SceneOverlapFilter::SceneOverlapFilter__ctor(this_01,(MethodInfo *)0x0);
  ppSVar5 = &(this->fields)._sceneOverlapFilter;
  *ppSVar5 = this_01;
  func_?(ppSVar5,this_01);
  pLVar6 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._modelRadiusCirclePoints = pLVar6;
  pGStack7 = (GizmoUniformScaleDrag3D__Class *)pLVar6;
  func_?();
  pLVar6 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._radiusCirclePoints = pLVar6;
  func_?();
  this_02 = (HashSet_1_UnityEngine_GameObject_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_02,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  ppHVar8 = &(this->fields)._affectedObjectsSet;
  *ppHVar8 = this_02;
  func_?(ppHVar8,this_02);
  this_03 = (List_1_RTG_TerrainGizmoAffectedObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List__
            );
  ppLVar9 = &(this->fields)._affectedObjects;
  *ppLVar9 = this_03;
  func_?(ppLVar9,this_03);
  pLVar2 = (List_1_UnityEngine_GameObject_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._objectsInRadius = pLVar2;
  func_?();
  pGStack10 = TypeInfo__RTG__GizmoSglAxisOffsetDrag3D;
  this_04 = (GizmoSglAxisRotationDrag3D *)func_?();
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._radiusDrag = (GizmoSglAxisOffsetDrag3D *)this_04;
  func_?();
  pGStack7 = TypeInfo__RTG__GizmoUniformScaleDrag3D;
  this_05 = (GizmoUniformScaleDrag3D *)func_?();
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_05,(MethodInfo *)0x0);
  (this->fields)._dummyDrag = this_05;
  func_?();
  this_06 = (TerrainGizmoLookAndFeel *)func_?();
  TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel__ctor(this_06,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_06;
  func_?();
  value_00 = (TerrainGizmoSettings *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  (value_00->fields)._offsetSnapStep = 1.0;
  (value_00->fields)._radiusSnapStep = 1.0;
  (value_00->fields)._rotationSensitivity = 1.0;
  (value_00->fields)._objectHrzMoveLayerMask = -1;
  (value_00->fields)._objectVertMoveLayerMask = -1;
  (value_00->fields)._objectRotationLayerMask = -1;
  pLVar11 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (value_00->fields)._objectHrzMoveIgnoreTags = pLVar11;
  func_?();
  pLVar11 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (value_00->fields)._objectVertMoveIgnoreTags = pLVar11;
  func_?();
  pLStack12 = TypeInfo__System__Collections__Generic__List<System::String>;
  pLVar11 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar3 = (MethodInfo *)&(value_00->fields)._objectRotationIgnoreTags;
  *(List_1_System_String_ **)pMVar3 = pLVar11;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar3);
  (this->fields)._settings = value_00;
  ppHStack13 = (Hotkeys__Class **)value_00;
  func_?();
  value_01 = (TerrainGizmoHotkeys *)func_?();
  if (cRam_? == '\0') {
    ppHStack13 = &TypeInfo__RTG__Hotkeys;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppHStack13 = (Hotkeys__Class **)TypeInfo__RTG__Hotkeys;
  pHVar14 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar14,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar14 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar14,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar14->fields)._lCtrl = 1;
    (value_01->fields)._enableSnapping = pHVar14;
    func_?();
    pHVar14 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar14,StringLiteral_Enable_object_rotation,(HotkeysStaticData)0x0,(MethodInfo *)0x0
              );
    if (pHVar14 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar14,KeyCode__Enum_C,(MethodInfo *)0x0);
      method_00 = &(value_01->fields)._rotateObjects;
      *method_00 = pHVar14;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields)._hotkeys = value_01;
      func_?();
      ppHStack13 =
           (Hotkeys__Class **)TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>;
      pLVar2 = (List_1_UnityEngine_GameObject_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      (this->fields)._objectCollectRadius = pLVar2;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean get_IsRotatingObjects() */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_IsRotatingObjects
               (TerrainGizmo *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedHotkeys;
  if (((pTVar1 != (TerrainGizmoHotkeys *)0x0) ||
      (pTVar1 = (this->fields)._hotkeys, pTVar1 != (TerrainGizmoHotkeys *)0x0)) &&
     (this_00 = (pTVar1->fields)._rotateObjects, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_IsSnapEnabled
               (TerrainGizmo *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pTVar1 = (this->fields)._sharedHotkeys;
  if (((pTVar1 != (TerrainGizmoHotkeys *)0x0) ||
      (pTVar1 = (this->fields)._hotkeys, pTVar1 != (TerrainGizmoHotkeys *)0x0)) &&
     (this_00 = (pTVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* TerrainGizmoLookAndFeel get_LookAndFeel() */

TerrainGizmoLookAndFeel *
Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_LookAndFeel
          (TerrainGizmo *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedLookAndFeel;
  if (pTVar1 == (TerrainGizmoLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return pTVar1;
}


/* TerrainGizmoSettings get_Settings() */

TerrainGizmoSettings *
Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_Settings
          (TerrainGizmo *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._sharedSettings;
  if (pTVar1 == (TerrainGizmoSettings *)0x0) {
    return (this->fields)._settings;
  }
  return pTVar1;
}


/* Void set_ElevationCurve(AnimationCurve) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_ElevationCurve
               (TerrainGizmo *this,AnimationCurve *value,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      ppAVar2 = &(this->fields)._elevationCurve;
      *ppAVar2 = value;
      func_?(ppAVar2,value);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_SharedLookAndFeel(TerrainGizmoLookAndFeel) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_SharedLookAndFeel
               (TerrainGizmo *this,TerrainGizmoLookAndFeel *value,MethodInfo *method)

{
  ppTVar1 = &(this->fields)._sharedLookAndFeel;
  *ppTVar1 = value;
  func_?(ppTVar1,value);
  TerrainGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings(TerrainGizmoSettings) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_SharedSettings
               (TerrainGizmo *this,TerrainGizmoSettings *value,MethodInfo *method)

{
  ppTVar1 = &(this->fields)._sharedSettings;
  *ppTVar1 = value;
  func_?(ppTVar1,value);
  return;
}


/* Void set_TargetTypes(TerrainGizmo+TargetTypeFlags) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_TargetTypes
               (TerrainGizmo *this,TerrainGizmo_TargetTypeFlags__Enum value,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      (this->fields)._targetTypeFlags = value;
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

