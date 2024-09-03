
/* Boolean CanObjectBeMovedHrz(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_CanObjectBeMovedHrz
               (TerrainGizmo *this,GameObject *go,MethodInfo *method)

{
  if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
    pTVar1 = (this->fields)._settings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedSettings;
  }
  iVar2 = (pTVar1->fields)._objectHrzMoveLayerMask;
  if (go != (GameObject *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      pTVar1 = (this->fields)._sharedSettings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectHrzMoveIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 ^ 1;
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
  if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
    pTVar1 = (this->fields)._settings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedSettings;
  }
  iVar2 = (pTVar1->fields)._objectVertMoveLayerMask;
  if (go != (GameObject *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      pTVar1 = (this->fields)._sharedSettings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectVertMoveIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 ^ 1;
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
  if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
    pTVar1 = (this->fields)._settings;
    if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedSettings;
  }
  iVar2 = (pTVar1->fields)._objectRotationLayerMask;
  if (go != (GameObject *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (go,(MethodInfo *)0x0);
    if ((iVar2 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
      return 0;
    }
    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
      pTVar1 = (this->fields)._settings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
      if (pTVar1 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      pTVar1 = (this->fields)._sharedSettings;
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                       (go,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields)._objectRotationIgnoreTags;
    if (this_00 != (List_1_System_String_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                        );
      return bVar4 ^ 1;
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
    this_00 = (this->fields)._targetTerrain;
    uVar4 = 0;
    uVar5 = 0;
    fVar6 = (this->fields)._radius;
    if (this_00 != (Terrain *)0x0) {
      this_01 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (TerrainData *)0x0) {
        pVVar7 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                           ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
        fVar8 = (this->fields)._radius;
        puStack_9 = (undefined *)(fVar6 + fVar6);
        pMStack_10 = (MonoSingleton_1_RTScene___Class *)(pVVar7->y + pVVar7->y);
        pGVar11 = (this->fields)._._gizmo;
        if ((pGVar11 != (Gizmo *)0x0) &&
           (pGVar12 = (pGVar11->fields)._transform, pGVar12 != (GizmoTransform *)0x0)) {
          uVar13 = (pGVar12->fields)._position3D.x;
          uVar14 = (pGVar12->fields)._position3D.y;
          fVar6 = (pGVar12->fields)._position3D.z;
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
            pMStack_10 = TypeInfo__RTG__MonoSingleton<RTG::RTScene>;
            func_?();
          }
          this_02 = (RTScene *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
          if (this_02 != (RTScene *)0x0) {
            obb._size.y = (float)pMStack_10;
            obb._size.x = (float)puStack_9;
            obb._size.z = fVar8 + fVar8;
            obb._center.x = (float)uVar13;
            obb._center.y = (float)uVar14;
            obb._center.z = fVar6;
            obb._rotation.x = 0.0;
            obb._rotation.y = (float)uVar2;
            obb._rotation.z = (float)uVar3;
            obb._rotation.w = (float)uVar4;
            obb._40_4_ = uVar5;
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  int32_t iVar21;
  String *item;
  Vector3 *pVVar22;
  TerrainGizmoSettings *pTVar23;
  undefined4 *unaff_FS_OFFSET;
  RegexCharClass_SingleRange method_00;
  float fVar24;
  float fVar25;
  undefined *puStack_26;
  undefined *puStack_27;
  RegexCharClass_SingleRange this_04;
  RegexCharClass_SingleRange RVar28;
  List_1_T_Enumerator_System_Object_ *this_05;
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
    if ((pGVar10 != (Gizmo *)0x0) &&
       (Gizmo::Gizmo_GetWorkCamera(pGVar10,(MethodInfo *)0x0), pOVar9 != (Object__Class *)0x0)) {
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
        uVar1 = pRVar18->_options;
        uVar5 = pRVar18->_cultureKey;
        pGVar10 = (this->fields)._._gizmo;
        if ((pGVar10 != (Gizmo *)0x0) &&
           (pGVar11 = (pGVar10->fields)._transform, pGVar11 != (GizmoTransform *)0x0)) {
          uVar2 = (pGVar11->fields)._position3D.x;
          uVar6 = (pGVar11->fields)._position3D.y;
          pGVar10 = (this->fields)._._gizmo;
          if ((pGVar10 != (Gizmo *)0x0) &&
             (this_01 = (pGVar10->fields)._transform, this_01 != (GizmoTransform *)0x0)) {
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
              pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pTVar12,(MethodInfo *)0x0);
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
                    this_05 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffff9c;
                    bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                             ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                       (this_05,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                       );
                    if (bVar15 == 0) break;
                    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
                      pTVar23 = (this->fields)._settings;
                      if (pTVar23 == (TerrainGizmoSettings *)0x0) goto code_?;
                    }
                    else {
                      pTVar23 = (this->fields)._sharedSettings;
                    }
                    iVar13 = (pTVar23->fields)._objectHrzMoveLayerMask;
                    if (this_04 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    puVar29 = &UNK_?;
                    RVar28 = this_04;
                    iVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_layer((GameObject *)this_04,(MethodInfo *)0x0);
                    if ((iVar13 >> ((byte)iVar21 & 0x1f) & 1U) != 0) {
                      if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
                        pTStack_35 = (this->fields)._settings;
                      }
                      else {
                        pTStack_35 = (this->fields)._sharedSettings;
                      }
                      if (this_04 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      fVar30 = 0.0;
                      method_00 = this_04;
                      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                                       ((GameObject *)this_04,(MethodInfo *)0x0);
                      if (pTStack_35 == (TerrainGizmoSettings *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_03 = (pTStack_35->fields)._objectHrzMoveIgnoreTags;
                      if (this_03 == (List_1_System_String_ *)0x0) goto code_?;
                      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                               List_1_System_Object__Contains
                                         ((List_1_System_Object_ *)this_03,(Object *)item,
                                          MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                         );
                      if (bVar15 == 0) {
                        pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform((GameObject *)this_04,(MethodInfo *)0x0);
                        if (pTVar19 == (Transform *)0x0) goto code_?;
                        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&puStack_27,pTVar19,(MethodInfo *)0x0);
                        pTVar12 = (this->fields)._targetTerrain;
                        uVar4 = pVVar22->x;
                        uVar8 = pVVar22->y;
                        worldPosition.y = (float)uVar8;
                        worldPosition.x = (float)uVar4;
                        fVar25 = pVVar22->z;
                        if (pTVar12 == (Terrain *)0x0) goto code_?;
                        worldPosition.z = pVVar22->z;
                        fVar24 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                 Terrain_SampleHeight(pTVar12,worldPosition,(MethodInfo *)0x0);
                        fVar24 = fVar24 + fVar30;
                        method_00 = (RegexCharClass_SingleRange)(fVar25 + (float)puVar29);
                        pTVar12 = (this->fields)._targetTerrain;
                        if (pTVar12 == (Terrain *)0x0) goto code_?;
                        worldPosition_00.y = (float)uVar8 + (float)this_05;
                        worldPosition_00.x = (float)uVar4 + 4.2988014e-29;
                        worldPosition_00.z = (float)method_00;
                        fVar25 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                 Terrain_SampleHeight(pTVar12,worldPosition_00,(MethodInfo *)0x0);
                        pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform((GameObject *)this_04,(MethodInfo *)0x0);
                        if (pTVar19 == (Transform *)0x0) goto code_?;
                        value_00.y = fVar25 + fVar30 + ((float)uVar8 - fVar24);
                        value_00.x = (float)uVar4 + 4.2988014e-29;
                        value_00.z = (float)method_00;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar19,value_00,(MethodInfo *)0x0);
                      }
                    }
                  }
                  uStack_38 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffff9c,
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
    __return_storage_ptr__->x = (float)uVar3 + (float)uVar7 * fVar10 + (float)uVar11 * fVar14;
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
    uStack_3._0_4_ = (pGVar2->fields)._position3D.x;
    uStack_3._4_4_ = (pGVar2->fields)._position3D.y;
    fStack_4 = (pGVar2->fields)._position3D.z;
    if (gameObject != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        fStack_7 = fStack_4 - pVVar5->z;
        uStack_8 = (ulonglong)(uint)((float)uStack_3 - (float)uVar6);
        fStack_4 = fStack_7;
        fVar9 = (float10)func_?(&uStack_8);
        return (float)fVar9 <= (this->fields)._radius;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff2c;
  puVar5 = &stack0xffffff2c;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (this->fields)._targetTerrain;
  if ((this_00 != (Terrain *)0x0) &&
     (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_05 != (Transform *)0x0)) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_8,this_05,(MethodInfo *)0x0);
    fStack_9 = pVVar7->y;
    pGVar10 = (this->fields)._._gizmo;
    if ((pGVar10 != (Gizmo *)0x0) &&
       (pGVar11 = (pGVar10->fields)._transform, pGVar11 != (GizmoTransform *)0x0)) {
      uStack_12._0_4_ = (pGVar11->fields)._position3D.x;
      uStack_12._4_4_ = (pGVar11->fields)._position3D.y;
      fStack_13 = (pGVar11->fields)._position3D.z;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._objectsInRadius;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((this_01->fields)._size != 0) {
          if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)auStack_15,this_01,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                             );
          uStack_16 = 0;
          LStack_6._list = (List_1_System_Object_ *)pLVar14->_list;
          LStack_6._index = pLVar14->_index;
          LStack_6._version = pLVar14->_version;
          LStack_6._current = *(Object **)&pLVar14->_current;
          uStack_1 = 1;
          pLStack_17 = &LStack_6;
          while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_6,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                   ), this_04 = LStack_6._current, bVar18 != 0) {
            if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
              pTVar19 = (this->fields)._settings;
              if (pTVar19 == (TerrainGizmoSettings *)0x0) goto code_?;
            }
            else {
              pTVar19 = (this->fields)._sharedSettings;
            }
            pSStack_20 = (String *)(pTVar19->fields)._objectVertMoveLayerMask;
            if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
            goto code_?;
            iVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                               ((GameObject *)LStack_6._current,(MethodInfo *)0x0);
            if (((int)pSStack_20 >> ((byte)iVar21 & 0x1f) & 1U) != 0) {
              if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
                pTStack_22 = (this->fields)._settings;
              }
              else {
                pTStack_22 = (this->fields)._sharedSettings;
              }
              if (((RegexCharClass_SingleRange)this_04 == (RegexCharClass_SingleRange)0x0) ||
                 (in_stack_23 = (RegexCharClass_SingleRange)this_04,
                 pSStack_20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_tag((GameObject *)this_04,(MethodInfo *)0x0),
                 pTStack_22 == (TerrainGizmoSettings *)0x0)) goto code_?;
              if (cRam_? == '\0') {
                auStack_15._4_4_ =
                     &
                     MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                ;
                auStack_15._0_4_ = &UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              this_02 = (pTStack_22->fields)._objectVertMoveIgnoreTags;
              if (this_02 == (List_1_System_String_ *)0x0) goto code_?;
              bVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Contains
                                ((List_1_System_Object_ *)this_02,(Object *)pSStack_20,
                                 MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                );
              if (bVar18 == 0) {
                pTStack_22 = (TerrainGizmoSettings *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform((GameObject *)this_04,(MethodInfo *)0x0);
                if (pTStack_22 == (TerrainGizmoSettings *)0x0) goto code_?;
                pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffff50,(Transform *)pTStack_22,
                                    (MethodInfo *)0x0);
                uStack_24._0_4_ = pVVar7->x;
                uStack_24._4_4_ = pVVar7->y;
                fStack_25 = pVVar7->z;
                VStack_8.z = fStack_25 - fStack_13;
                uStack_26 = CONCAT44(fStack_9 - fStack_9,
                                     (float)(undefined4)uStack_24 - (float)uStack_12);
                fStack_27 = VStack_8.z;
                fVar28 = (float10)func_?();
                fVar29 = (this->fields)._radius;
                pSStack_20 = (String *)(float)fVar28;
                if ((float)pSStack_20 <= fVar29) {
                  fVar29 = _UNK_? - (float)pSStack_20 / fVar29;
                  if (fVar29 <= 0.0) {
                    fVar29 = 0.0;
                  }
                  this_03 = (this->fields)._elevationCurve;
                  if (this_03 == (AnimationCurve *)0x0) goto code_?;
                  pSStack_20 = (String *)
                               UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                               AnimationCurve_Evaluate(this_03,fVar29,(MethodInfo *)0x0);
                  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffff44,(Transform *)pTStack_22,
                                      (MethodInfo *)0x0);
                  uStack_30._0_4_ = pVVar7->x;
                  uStack_30._4_4_ = pVVar7->y;
                  fStack_31 = pVVar7->z;
                  pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                     ((Vector3 *)&stack0xffffff38,(MethodInfo *)0x0);
                  uStack_32._0_4_ = pVVar7->x;
                  uStack_32._4_4_ = pVVar7->y;
                  fStack_33 = pVVar7->z;
                  fStack_34 = fStack_31 + fStack_33 * offset * (float)pSStack_20;
                  fStack_35 = (float)uStack_30 +
                              (float)(undefined4)uStack_32 * offset * (float)pSStack_20;
                  fStack_36 = uStack_30._4_4_ + (float)uStack_32._4_4_ * offset * (float)pSStack_20;
                  if (fStack_36 < fStack_9) {
                    fStack_36 = fStack_9;
                  }
                  pHVar37 = (this->fields)._affectedObjectsSet;
                  if (pHVar37 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                  bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                          HashSet_1_System_Object__Contains
                                    ((HashSet_1_System_Object_ *)pHVar37,this_04,
                                     MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                                    );
                  if (bVar18 == 0) {
                    pHVar37 = (this->fields)._affectedObjectsSet;
                    if (pHVar37 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                    method_00 = (RegexCharClass_SingleRange)this_04;
                    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                    HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                              ((HashSet_1_System_Object_ *)pHVar37,this_04,
                               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                              );
                    pLStack_38 = (this->fields)._affectedObjects;
                    pSStack_20 = (String *)func_?();
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)pSStack_20,ExceptionArgument__Enum_obj,
                               (MethodInfo *)method_00);
                    if (pSStack_20 == (String *)0x0) goto code_?;
                    (pSStack_20->fields)._stringLength = (int32_t)this_04;
                    func_?(&pSStack_20->fields,this_04);
                    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       ((Vector3 *)(auStack_15 + 4),(Transform *)pTStack_22,
                                        (MethodInfo *)0x0);
                    pMVar39 = (MonitorData *)pVVar7->z;
                    *(undefined8 *)&(pSStack_20->fields)._firstChar = *(undefined8 *)pVVar7;
                    pSStack_20[1].monitor = pMVar39;
                    if (pLStack_38 == (List_1_RTG_TerrainGizmoAffectedObject_ *)0x0)
                    goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLStack_38,(Object *)pSStack_20,
                               MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__Add_RTG__TerrainGizmoAffectedObject_
                              );
                  }
                  value.y = fStack_36;
                  value.x = fStack_35;
                  value.z = fStack_34;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            ((Transform *)pTStack_22,value,(MethodInfo *)0x0);
                }
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,(MethodInfo *)in_stack_23);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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
  (this->fields)._axisSlider = pGVar3;
  func_?(&(this->fields)._axisSlider,pGVar3);
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
      pGVar4 = (GizmoCap3D *)func_?();
      GizmoCap3D::GizmoCap3D__ctor(pGVar4,pGVar1,iVar2,(MethodInfo *)0x0);
      (this->fields)._midCap = pGVar4;
      func_?();
      pGVar4 = (this->fields)._midCap;
      if (pGVar4 != (GizmoCap3D *)0x0) {
        this_01 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                  XDocumentTypeWrapper_get_InternalSubset
                            ((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._axisSlider;
        if (((pGVar3 != (GizmoLineSlider3D *)0x0) &&
            (pGVar5 = (pGVar3->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) &&
           (this_01 != (String *)0x0)) {
          Priority::Priority_MakeHigherThan
                    ((Priority *)this_01,(pGVar5->fields)._hoverPriority3D,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._midCap;
          if (pGVar4 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_set_DragSession
                      (pGVar4,(IGizmoDragSession *)(this->fields)._dummyDrag,(MethodInfo *)0x0);
            pTVar6 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
            pTVar7 = (TerrainGizmo_RadiusTick *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pTVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar6);
            (this->fields)._leftRadiusTick = pTVar7;
            func_?();
            pTVar7 = (this->fields)._leftRadiusTick;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar9 = (pVVar8->rightVector).x;
            uVar10 = (pVVar8->rightVector).y;
            uVar11 = uVar10 ^ 
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
            fVar12 = (float)((uint)(pVVar8->rightVector).z ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
              (pTVar7->fields).DragAxis.x =
                   (float)(uVar9 ^ 
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
              (pTVar7->fields).DragAxis.y = (float)uVar11;
              (pTVar7->fields).DragAxis.z = fVar12;
              pTVar7 = (this->fields)._leftRadiusTick;
              pGVar1 = (this->fields)._._gizmo;
              iVar2 = GizmoHandleId::GizmoHandleId_get_LeftRadiusTick((MethodInfo *)0x0);
              pGVar13 = (GizmoCap2D *)func_?();
              GizmoCap2D::GizmoCap2D__ctor(pGVar13,pGVar1,iVar2,(MethodInfo *)0x0);
              if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                (pTVar7->fields).Tick = pGVar13;
                func_?();
                pTVar7 = (this->fields)._leftRadiusTick;
                if ((pTVar7 != (TerrainGizmo_RadiusTick *)0x0) &&
                   (pGVar4 = (GizmoCap3D *)(pTVar7->fields).Tick, pGVar4 != (GizmoCap3D *)0x0)) {
                  GizmoCap3D::GizmoCap3D_set_DragSession
                            (pGVar4,(IGizmoDragSession *)(this->fields)._radiusDrag,
                             (MethodInfo *)0x0);
                  pTVar6 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                  pTVar7 = (TerrainGizmo_RadiusTick *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)pTVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar6);
                  (this->fields)._rightRadiusTick = pTVar7;
                  func_?();
                  pTVar7 = (this->fields)._rightRadiusTick;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                  fVar14 = (pVVar8->rightVector).y;
                  fVar12 = (pVVar8->rightVector).z;
                  if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                    (pTVar7->fields).DragAxis.x = (pVVar8->rightVector).x;
                    (pTVar7->fields).DragAxis.y = fVar14;
                    (pTVar7->fields).DragAxis.z = fVar12;
                    pTVar7 = (this->fields)._rightRadiusTick;
                    pGVar1 = (this->fields)._._gizmo;
                    iVar2 = GizmoHandleId::GizmoHandleId_get_RightRadiusTick((MethodInfo *)0x0);
                    pGVar13 = (GizmoCap2D *)func_?();
                    GizmoCap2D::GizmoCap2D__ctor(pGVar13,pGVar1,iVar2,(MethodInfo *)0x0);
                    if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                      (pTVar7->fields).Tick = pGVar13;
                      func_?();
                      pTVar7 = (this->fields)._rightRadiusTick;
                      if ((pTVar7 != (TerrainGizmo_RadiusTick *)0x0) &&
                         (pGVar4 = (GizmoCap3D *)(pTVar7->fields).Tick,
                         pGVar4 != (GizmoCap3D *)0x0)) {
                        GizmoCap3D::GizmoCap3D_set_DragSession
                                  (pGVar4,(IGizmoDragSession *)(this->fields)._radiusDrag,
                                   (MethodInfo *)0x0);
                        pTVar6 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                        pTVar7 = (TerrainGizmo_RadiusTick *)func_?();
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                  ((Object *)pTVar7,ExceptionArgument__Enum_obj,
                                   (MethodInfo *)pTVar6);
                        (this->fields)._backRadiusTick = pTVar7;
                        func_?();
                        pTVar7 = (this->fields)._backRadiusTick;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar15 = (pVVar8->forwardVector).x;
                        uVar16 = (pVVar8->forwardVector).y;
                        uVar11 = uVar16 ^ 
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                        ;
                        fVar12 = (float)((uint)(pVVar8->forwardVector).z ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        );
                        if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                          (pTVar7->fields).DragAxis.x =
                               (float)(uVar15 ^ 
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                          (pTVar7->fields).DragAxis.y = (float)uVar11;
                          (pTVar7->fields).DragAxis.z = fVar12;
                          pTVar7 = (this->fields)._backRadiusTick;
                          pGVar1 = (this->fields)._._gizmo;
                          iVar2 = GizmoHandleId::GizmoHandleId_get_BackRadiusTick
                                             ((MethodInfo *)0x0);
                          pGVar13 = (GizmoCap2D *)func_?();
                          GizmoCap2D::GizmoCap2D__ctor(pGVar13,pGVar1,iVar2,(MethodInfo *)0x0);
                          if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                            (pTVar7->fields).Tick = pGVar13;
                            func_?();
                            pTVar7 = (this->fields)._backRadiusTick;
                            if ((pTVar7 != (TerrainGizmo_RadiusTick *)0x0) &&
                               (pGVar4 = (GizmoCap3D *)(pTVar7->fields).Tick,
                               pGVar4 != (GizmoCap3D *)0x0)) {
                              GizmoCap3D::GizmoCap3D_set_DragSession
                                        (pGVar4,(IGizmoDragSession *)(this->fields)._radiusDrag,
                                         (MethodInfo *)0x0);
                              pTVar6 = TypeInfo__RTG__TerrainGizmo__RadiusTick;
                              pTVar7 = (TerrainGizmo_RadiusTick *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        ((Object *)pTVar7,ExceptionArgument__Enum_obj,
                                         (MethodInfo *)pTVar6);
                              (this->fields)._forwardRadiusTick = pTVar7;
                              func_?();
                              pTVar7 = (this->fields)._forwardRadiusTick;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                              fVar14 = (pVVar8->forwardVector).y;
                              fVar12 = (pVVar8->forwardVector).z;
                              if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                                (pTVar7->fields).DragAxis.x = (pVVar8->forwardVector).x;
                                (pTVar7->fields).DragAxis.y = fVar14;
                                (pTVar7->fields).DragAxis.z = fVar12;
                                pTVar7 = (this->fields)._forwardRadiusTick;
                                pGVar1 = (this->fields)._._gizmo;
                                iVar2 = GizmoHandleId::GizmoHandleId_get_ForwardRadiusTick
                                                   ((MethodInfo *)0x0);
                                pGVar13 = (GizmoCap2D *)func_?();
                                GizmoCap2D::GizmoCap2D__ctor
                                          (pGVar13,pGVar1,iVar2,(MethodInfo *)0x0);
                                if (pTVar7 != (TerrainGizmo_RadiusTick *)0x0) {
                                  (pTVar7->fields).Tick = pGVar13;
                                  func_?();
                                  pTVar7 = (this->fields)._forwardRadiusTick;
                                  if ((pTVar7 != (TerrainGizmo_RadiusTick *)0x0) &&
                                     (pGVar4 = (GizmoCap3D *)(pTVar7->fields).Tick,
                                     pGVar4 != (GizmoCap3D *)0x0)) {
                                    GizmoCap3D::GizmoCap3D_set_DragSession
                                              (pGVar4,(IGizmoDragSession *)
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
                                    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    uVar17 = (pVVar8->rightVector).x;
                                    uVar18 = (pVVar8->rightVector).y;
                                    fVar12 = (pVVar8->rightVector).z;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    circleRight.y = (float)uVar18;
                                    circleRight.x = (float)uVar17;
                                    circleRight.z = fVar12;
                                    pLVar19 = PrimitiveFactory::
                                              PrimitiveFactory_Generate3DCircleBorderPoints
                                                        (circleCenter,1.0,circleRight,
                                                         TypeInfo__UnityEngine__Vector3->
                                                         static_fields->forwardVector,100,
                                                         (MethodInfo *)0x0);
                                    (this->fields)._modelRadiusCirclePoints = pLVar19;
                                    func_?();
                                    iVar20 = 0;
                                    do {
                                      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                                (this->fields)._radiusCirclePoints;
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__UnityEngine__Vector3);
                                        cRam_? = '\x01';
                                      }
                                      pMVar21 = 
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                      ;
                                      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      fVar14 = (pVVar8->zeroVector).x;
                                      fVar22 = (pVVar8->zeroVector).y;
                                      fVar12 = (pVVar8->zeroVector).z;
                                      item.Quadrant = (int32_t)(pVVar8->zeroVector).x;
                                      item.FirstAxisSign = (int32_t)(pVVar8->zeroVector).y;
                                      item.SecondAxisSign = (int32_t)(pVVar8->zeroVector).z;
                                      if (this_00 ==
                                          (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
                                      goto code_?;
                                      piVar23 = &(this_00->fields)._version;
                                      *piVar23 = *piVar23 + 1;
                                      pPVar24 = (this_00->fields)._items;
                                      if (pPVar24 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                      goto code_?;
                                      uVar11 = (this_00->fields)._size;
                                      if (uVar11 < pPVar24->max_length) {
                                        (this_00->fields)._size = uVar11 + 1;
                                        if (pPVar24->max_length <= uVar11) goto code_?;
                                        pPVar24->vector[uVar11].Quadrant = (int32_t)fVar14;
                                        pPVar24->vector[uVar11].FirstAxisSign = (int32_t)fVar22;
                                        pPVar24->vector[uVar11].SecondAxisSign = (int32_t)fVar12;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                        PlaneIdHelper+PlaneQuadrantInfo]::
                                        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                  (this_00,item,
                                                   pMVar21->klass->rgctx_data[0xe].method);
                                      }
                                      iVar20 = iVar20 + 1;
                                    } while (iVar20 < 100);
                                    TerrainGizmo_SetVisible(this,0,(MethodInfo *)0x0);
                                    TerrainGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                                    pMVar21 = 
                                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                    ;
                                    pSVar25 = (this->fields)._sceneOverlapFilter;
                                    if ((pSVar25 != (SceneOverlapFilter *)0x0) &&
                                       (pLVar26 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar25->fields)._allowedObjectTypes,
                                       pLVar26 !=
                                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)0x0)) {
                                      piVar23 = &(pLVar26->fields)._version;
                                      *piVar23 = *piVar23 + 1;
                                      pRVar27 = (pLVar26->fields)._items;
                                      if (pRVar27 != (RegexCharClass_SingleRange__Array *)0x0) {
                                        uVar11 = (pLVar26->fields)._size;
                                        if (uVar11 < pRVar27->max_length) {
                                          (pLVar26->fields)._size = uVar11 + 1;
                                          if (pRVar27->max_length <= uVar11) goto code_?;
                                          pRVar27->vector[uVar11].First = 1;
                                          pRVar27->vector[uVar11].Last = 0;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                    (pLVar26,(RegexCharClass_SingleRange)0x1,
                                                     pMVar21->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar21 = 
                                        MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                        ;
                                        pSVar25 = (this->fields)._sceneOverlapFilter;
                                        if ((pSVar25 != (SceneOverlapFilter *)0x0) &&
                                           (pLVar26 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar25->fields)._allowedObjectTypes,
                                           pLVar26 !=
                                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)0x0)) {
                                          piVar23 = &(pLVar26->fields)._version;
                                          *piVar23 = *piVar23 + 1;
                                          pRVar27 = (pLVar26->fields)._items;
                                          if (pRVar27 != (RegexCharClass_SingleRange__Array *)0x0) {
                                            uVar11 = (pLVar26->fields)._size;
                                            if (uVar11 < pRVar27->max_length) {
                                              (pLVar26->fields)._size = uVar11 + 1;
                                              if (pRVar27->max_length <= uVar11)
                                              goto code_?;
                                              pRVar27->vector[uVar11].First = 0x10;
                                              pRVar27->vector[uVar11].Last = 0;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::
                                              List`1[System::Text::RegularExpressions::
                                              RegexCharClass+SingleRange]::
                                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                        (pLVar26,(RegexCharClass_SingleRange)0x10,
                                                         pMVar21->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar21 = 
                                            MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                                            ;
                                            pSVar25 = (this->fields)._sceneOverlapFilter;
                                            if ((pSVar25 != (SceneOverlapFilter *)0x0) &&
                                               (pLVar26 = (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)(pSVar25->fields)._allowedObjectTypes,
                                               pLVar26 !=
                                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                *)0x0)) {
                                              piVar23 = &(pLVar26->fields)._version;
                                              *piVar23 = *piVar23 + 1;
                                              pRVar27 = (pLVar26->fields)._items;
                                              if (pRVar27 !=
                                                  (RegexCharClass_SingleRange__Array *)0x0) {
                                                uVar11 = (pLVar26->fields)._size;
                                                if (uVar11 < pRVar27->max_length) {
                                                  (pLVar26->fields)._size = uVar11 + 1;
                                                  if (pRVar27->max_length <= uVar11)
                                                  goto code_?;
                                                  pRVar27->vector[uVar11].First = 0x20;
                                                  pRVar27->vector[uVar11].Last = 0;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[System::Text::RegularExpressions::
                                                  RegexCharClass+SingleRange]::
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                                            (pLVar26,(RegexCharClass_SingleRange)
                                                                     0x20,
                                                             pMVar21->klass->rgctx_data[0xe].method)
                                                  ;
                                                }
                                                pAVar28 = (this->fields)._elevationCurve;
                                                fVar12 = 0.0;
                                                fVar14 = 0.0;
                                                fVar22 = 0.0;
                                                fVar29 = 0.0;
                                                UnityEngine.CoreModule.dll::UnityEngine::Keyframe::
                                                Keyframe__ctor((Keyframe *)&stack0xffffffcc,0.0,0.0,
                                                               (MethodInfo *)0x0);
                                                if (pAVar28 != (AnimationCurve *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  AnimationCurve::AnimationCurve_AddKey_1
                                                            (pAVar28,(Keyframe)
                                                                     ZEXT1628(CONCAT412(fVar29,
                                                  CONCAT48(fVar22,CONCAT44(fVar14,fVar12)))),
                                                  (MethodInfo *)0x0);
                                                  pAVar28 = (this->fields)._elevationCurve;
                                                  this_02 = (Keyframe *)&stack0xffffffb0;
                                                  fVar30 = 0.0;
                                                  fVar22 = 0.0;
                                                  iVar2 = 0;
                                                  fVar29 = 0.0;
                                                  fVar14 = 1.0;
                                                  fVar12 = 1.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Keyframe
                                                  ::Keyframe__ctor(this_02,1.0,1.0,(MethodInfo *)0x0
                                                                  );
                                                  if (pAVar28 != (AnimationCurve *)0x0) {
                                                    key.m_Value = fVar12;
                                                    key.m_Time = (float)this_02;
                                                    key.m_InTangent = fVar14;
                                                    key.m_OutTangent = fVar22;
                                                    key.m_WeightedMode = iVar2;
                                                    key.m_InWeight = fVar29;
                                                    key.m_OutWeight = fVar30;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    AnimationCurve::AnimationCurve_AddKey_1
                                                              (pAVar28,key,(MethodInfo *)0x0);
                                                    if ((
                                                  TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1)
                                                  .cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  pRVar31 = (RTUndoRedo *)
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
                                                  if (pRVar31 != (RTUndoRedo *)0x0) {
                                                    RTUndoRedo::RTUndoRedo_add_UndoEnd
                                                              (pRVar31,value,(MethodInfo *)0x0);
                                                    pRVar31 = (RTUndoRedo *)
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
                                                  if (pRVar31 != (RTUndoRedo *)0x0) {
                                                    RTUndoRedo::RTUndoRedo_add_RedoEnd
                                                              (pRVar31,value_00,(MethodInfo *)0x0);
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
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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
  unique0x100010a1 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
  if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__);
    pLVar3 = (this->fields)._affectedObjects;
    unique0x100010a9 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
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
      unique0x100010b1 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
      if ((pGVar6 != (Gizmo *)0x0) &&
         (pGVar7 = (pGVar6->fields)._transform,
         unique0x100010b9 = (double)CONCAT44(fStack_1,auStack_2._4_4_),
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
        unique0x100010c1 = (double)CONCAT44(fStack_1,auStack_2._4_4_);
        if ((pGVar6 != (Gizmo *)0x0) &&
           (pGVar7 = (pGVar6->fields)._transform,
           unique0x100010c9 = (double)CONCAT44(fStack_1,auStack_2._4_4_),
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
          fStack_17 = fStack_1 +
                      (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z *
                      (this->fields)._radius;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          uVar18 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).x;
          fStack_16 = fStack_16 + (float)uVar18 * (this->fields)._radius;
          fStack_17 = fStack_17 +
                      (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z *
                      (this->fields)._radius;
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
                  fStack_16 = fStack_16 - (float)uVar22;
                  fStack_17 = fStack_17 - pVVar21->z;
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
                      fStack_16 = fStack_16 / pVVar21->x;
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_12 = fStack_12 / pVVar21->z;
                      pVVar21 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                                TerrainData_get_size
                                          ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                      fStack_17 = fStack_17 / pVVar21->z;
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
                      fVar8 = (float)iVar23 * fStack_17;
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
                        if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
                          pTVar28 = (this->fields)._settings;
                          if (pTVar28 == (TerrainGizmoSettings *)0x0) goto code_?;
                        }
                        else {
                          pTVar28 = (this->fields)._sharedSettings;
                        }
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
                          pGVar6 = (this->fields)._._gizmo;
                          if (pGVar6 != (Gizmo *)0x0) {
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
                                                Transform_get_up((Vector3 *)&stack0xffffffd8,pTVar20
                                                                 ,(MethodInfo *)0x0);
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
                                          GizmoUniformScaleDrag3D::
                                          GizmoUniformScaleDrag3D_SetWorkData
                                                    (this_03,workData_00,(MethodInfo *)0x0);
                                          TerrainGizmo_CollectObjectsInRadius
                                                    (this,(this->fields)._objectsInRadius,
                                                     (MethodInfo *)0x0);
                                          pLVar36 = LocalTransformSnapshot::
                                                    LocalTransformSnapshot_GetSnapshotCollection
                                                              ((
                                                  IEnumerable_1_UnityEngine_GameObject_ *)
                                                  (this->fields)._objectsInRadius,(MethodInfo *)0x0)
                                          ;
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
  if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
    pTVar2 = (this->fields)._hotkeys;
    if (pTVar2 == (TerrainGizmoHotkeys *)0x0) goto code_?;
  }
  else {
    pTVar2 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pTVar2->fields)._rotateObjects;
  if (this_00 != (Hotkeys *)0x0) {
    bVar1 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar1 ^ 1;
  }
code_?:
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields)._midCap;
  if (this_00 == (GizmoCap3D *)0x0) goto code_?;
  pvVar6 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar6) {
    uVar7 = (this->fields)._preChangeGizmoPos.x;
    uVar8 = (this->fields)._preChangeGizmoPos.y;
    collection = (this->fields)._preChangeTransformSnapshots;
    VStack_9.y = (float)uVar7;
    VStack_9.z = (float)uVar8;
    LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
              ((IEnumerable_1_UnityEngine_GameObject_ *)(this->fields)._objectsInRadius,
               (MethodInfo *)0x0);
    pOVar10 = (Object *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar11 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar11,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    pOVar10[1].klass = pOVar11;
    func_?();
    this_05 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_05,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    pOVar10[1].monitor = (MonitorData *)this_05;
    pMVar12 = (MethodInfo *)&pOVar10[1].monitor;
    func_?(pMVar12,this_05);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar10,ExceptionArgument__Enum_obj,pMVar12);
    pOVar11 = (Object__Class *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pOVar11,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
              );
    pOVar10[1].klass = pOVar11;
    func_?();
    this_06 = (List_1_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_06,(IEnumerable_1_System_Object_ *)(pOVar10 + 1),
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
              );
    pOVar10[1].monitor = (MonitorData *)this_06;
    func_?();
    OVar13.monitor = (MonitorData *)VStack_9.z;
    OVar13.klass = (Object__Class *)VStack_9.y;
    pOVar10[2] = OVar13;
    pOVar10[3].klass = pOVar11;
    pGVar14 = (this->fields)._._gizmo;
    if ((pGVar14 == (Gizmo *)0x0) ||
       (pGVar15 = (pGVar14->fields)._transform, pGVar15 == (GizmoTransform *)0x0))
    goto code_?;
    pMVar16 = (MonitorData *)(pGVar15->fields)._position3D.z;
    *(undefined8 *)&pOVar10[3].monitor = *(undefined8 *)&(pGVar15->fields)._position3D;
    pOVar10[4].monitor = pMVar16;
    pOVar10[5].klass = (Object__Class *)this;
    func_?(pOVar10 + 5,this);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    }
    pRVar17 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (pRVar17 == (RTUndoRedo *)0x0) goto code_?;
    RTUndoRedo::RTUndoRedo_RecordAction(pRVar17,(IUndoRedoAction *)pOVar10,(MethodInfo *)0x0);
  }
  else {
    pTVar18 = (this->fields)._targetTerrain;
    if (pTVar18 == (Terrain *)0x0) goto code_?;
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar18,(MethodInfo *)0x0);
    if (this_04 == (Transform *)0x0) goto code_?;
    pMVar12 = (MethodInfo *)&UNK_?;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,this_04,(MethodInfo *)0x0);
    pOVar11 = (Object__Class *)pVVar19->y;
    pGVar14 = (this->fields)._._gizmo;
    if ((pGVar14 == (Gizmo *)0x0) ||
       (pGVar15 = (pGVar14->fields)._transform, pGVar15 == (GizmoTransform *)0x0))
    goto code_?;
    uVar20 = (pGVar15->fields)._position3D.x;
    uVar21 = (pGVar15->fields)._position3D.y;
    pGVar14 = (this->fields)._._gizmo;
    VStack_9.x = (float)uVar20;
    VStack_9.y = (float)uVar21;
    if ((pGVar14 == (Gizmo *)0x0) ||
       (pGVar22 = (pGVar14->fields)._transform, VStack_9.y = (float)uVar21,
       pGVar22 == (GizmoTransform *)0x0)) goto code_?;
    uVar23 = (pGVar22->fields)._position3D.y;
    VStack_9.y = (float)uVar21;
    if ((float)uVar23 < (float)pOVar11) {
      pGVar14 = (this->fields)._._gizmo;
      VStack_9.y = (float)pOVar11;
      if ((pGVar14 == (Gizmo *)0x0) ||
         (pGVar22 = (pGVar14->fields)._transform, pGVar22 == (GizmoTransform *)0x0))
      goto code_?;
      value.y = (float)pOVar11;
      value.x = (float)uVar20;
      value.z = (pGVar15->fields)._position3D.z;
      GizmoTransform::GizmoTransform_set_Position3D(pGVar22,value,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)(this->fields)._affectedObjects;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffcc,
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         method_00,
                         MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                        );
    uStack_1 = 1;
    RVar25 = pLVar24->_current;
    while( true ) {
      bVar26 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                         );
      if (bVar26 == 0) break;
      if ((RVar25 == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)RVar25 + 8) == (GameObject *)0x0)) goto code_?;
      RVar27 = RVar25;
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (*(GameObject **)((int)RVar25 + 8),(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_9,(Transform *)method_00,(MethodInfo *)0x0);
      fVar28 = pVVar19->z;
      *(undefined8 *)((int)RVar25 + 0x18) = *(undefined8 *)pVVar19;
      *(float *)((int)RVar25 + 0x20) = fVar28;
      RVar25 = RVar27;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pTVar18 = (this->fields)._targetTerrain;
    if (((this->fields)._targetTypeFlags & 1) == 0) {
      pSVar29 = (Single__Array_1 *)0x0;
      VStack_9.z = 0.0;
    }
    else {
      VStack_9.z = (float)(this->fields)._preChangeTerrainHeights;
      pSVar29 = (this->fields)._terrainHeights;
    }
    pLVar30 = (this->fields)._affectedObjects;
    pOVar10 = (Object *)func_?(TypeInfo__RTG__TerrainGizmoVerticalOffsetDragEndAction);
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
              (pOVar10,ExceptionArgument__Enum_obj,pMVar12);
    pOVar10[1].monitor = (MonitorData *)pTVar18;
    func_?(&pOVar10[1].monitor,pTVar18);
    if ((Single__Array_1 *)VStack_9.z != (Single__Array_1 *)0x0) {
      pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)VStack_9.z,(MethodInfo *)0x0);
      pOVar11 = (Object__Class *)func_?();
      pOVar10[2].klass = pOVar11;
      uVar32 = func_?(pOVar31,TypeInfo__System__Single);
      func_?(pOVar10 + 2,uVar32);
    }
    if (pSVar29 != (Single__Array_1 *)0x0) {
      pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pSVar29,(MethodInfo *)0x0);
      pMVar16 = (MonitorData *)func_?();
      pOVar10[2].monitor = pMVar16;
      uVar32 = func_?(pOVar31,TypeInfo__System__Single);
      func_?(&pOVar10[2].monitor,uVar32);
    }
    pOVar11 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pOVar11,(IEnumerable_1_System_Object_ *)pLVar30,
               MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List_System__Collections__Generic__IEnumerable<RTG::TerrainGizmoAffectedObject>_
              );
    pOVar10[1].klass = pOVar11;
    func_?(pOVar10 + 1);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    }
    pRVar17 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (pRVar17 == (RTUndoRedo *)0x0) goto code_?;
    RTUndoRedo::RTUndoRedo_RecordAction(pRVar17,(IUndoRedoAction *)pOVar10,(MethodInfo *)0x0);
    pSVar29 = (this->fields)._preChangeTerrainHeights;
    this_01 = (this->fields)._terrainHeights;
    if (this_01 == (Single__Array_1 *)0x0) goto code_?;
    iVar33 = mscorlib.dll::System::Array::Array_GetLength((Array *)this_01,0,(MethodInfo *)0x0);
    this_02 = (this->fields)._preChangeTerrainHeights;
    if (this_02 == (Single__Array_1 *)0x0) goto code_?;
    iVar34 = mscorlib.dll::System::Array::Array_GetLength((Array *)this_02,1,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Copy_2
              ((Array *)this_01,(Array *)pSVar29,iVar34 * iVar33,(MethodInfo *)0x0);
  }
  this_03 = (this->fields)._affectedObjectsSet;
  if (this_03 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__);
    pLVar30 = (this->fields)._affectedObjects;
    if (pLVar30 != (List_1_RTG_TerrainGizmoAffectedObject_ *)0x0) {
      length = (pLVar30->fields)._size;
      piVar35 = &(pLVar30->fields)._version;
      *piVar35 = *piVar35 + 1;
      (pLVar30->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar30->fields)._items,0,length,(MethodInfo *)0x0);
      }
      TerrainGizmo_ProjectGizmoOnTerrain(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar32 = func_?();
  func_?(uVar32);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnGizmoDragUpdate
               (TerrainGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._axisSlider;
  if ((pGVar1 != (GizmoLineSlider3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    if ((handleId == (pGVar2->fields)._id) ||
       (iVar3 = GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DHandleId
                          ((this->fields)._axisSlider,(MethodInfo *)0x0), handleId == iVar3)) {
      if (((this->fields)._targetTypeFlags & 1) != 0) {
        pGVar4 = (this->fields)._._gizmo;
        if (pGVar4 == (Gizmo *)0x0) goto code_?;
        pVVar5 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffe4,pGVar4,(MethodInfo *)0x0);
        TerrainGizmo_OffsetTerrainPatch(this,pVVar5->y,(MethodInfo *)0x0);
      }
      if (((this->fields)._targetTypeFlags & 2) == 0) {
        return;
      }
      pGVar4 = (this->fields)._._gizmo;
      if (pGVar4 != (Gizmo *)0x0) {
        pVVar5 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffe4,pGVar4,(MethodInfo *)0x0);
        TerrainGizmo_OffsetObjectsInRadius(this,pVVar5->y,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_00 = (this->fields)._midCap;
      if (this_00 != (GizmoCap3D *)0x0) {
        pvVar6 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                  AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar6) {
          TerrainGizmo_DragObjectsWithMidCap(this,(MethodInfo *)0x0);
          return;
        }
        pTVar7 = TerrainGizmo_GetRadiusTickFromHandleId(this,handleId,(MethodInfo *)0x0);
        if (pTVar7 == (TerrainGizmo_RadiusTick *)0x0) {
          return;
        }
        fVar8 = (this->fields)._radius;
        pGVar4 = (this->fields)._._gizmo;
        if (pGVar4 != (Gizmo *)0x0) {
          pVVar5 = Gizmo::Gizmo_get_RelativeDragOffset
                              ((Vector3 *)&stack0xfffffff0,pGVar4,(MethodInfo *)0x0);
          uVar9 = pVVar5->x;
          uVar10 = pVVar5->y;
          uVar11 = (pTVar7->fields).DragAxis.x;
          uVar12 = (pTVar7->fields).DragAxis.y;
          fVar8 = (float)uVar12 * (float)uVar10 + (float)uVar9 * (float)uVar11 +
                   (pTVar7->fields).DragAxis.z * pVVar5->z + fVar8;
          fVar13 = _UNK_?;
          if (_UNK_? <= fVar8) {
            fVar13 = fVar8;
          }
          (this->fields)._radius = fVar13;
          return;
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
    if ((this->fields)._sharedLookAndFeel == (TerrainGizmoLookAndFeel *)0x0) {
      pTVar5 = (this->fields)._lookAndFeel;
      if (pTVar5 == (TerrainGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pTVar5 = (this->fields)._sharedLookAndFeel;
    }
    GizmoLineMaterial::GizmoLineMaterial_SetColor
              (this_00,(pTVar5->fields)._radiusCircleColor,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
    pTVar6 = (this->fields)._targetTerrain;
    if ((pTVar6 == (Terrain *)0x0) ||
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar6,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,this_03,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)pVVar7->y;
    pGVar8 = (this->fields)._._gizmo;
    if ((pGVar8 == (Gizmo *)0x0) ||
       (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
    goto code_?;
    uVar10._0_4_ = (pGVar9->fields)._position3D.x;
    uVar10._4_4_ = (pGVar9->fields)._position3D.y;
    fVar11 = (pGVar9->fields)._position3D.z;
    pLVar12 = (this->fields)._modelRadiusCirclePoints;
    if (pLVar12 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    index = 0;
    if (0 < (pLVar12->fields)._size) {
      do {
        fVar13 = (float)uVar10;
        pLVar14 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 (this->fields)._modelRadiusCirclePoints;
        if (pLVar14 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
        goto code_?;
        pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UsingEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                            ((VisualTreeAsset_UsingEntry *)&stack0xffffffc4,pLVar14,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                            );
        uVar16 = pVVar15->alias;
        fVar13 = fVar13 + (float)uVar16 * (this->fields)._radius;
        fVar17 = fVar11 + (float)pVVar15->asset * (this->fields)._radius;
        pLVar14 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                 (this->fields)._radiusCirclePoints;
        pTVar6 = (this->fields)._targetTerrain;
        if ((pLVar14 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) ||
           (pVVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                      VisualTreeAsset+UsingEntry]::
                      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,pLVar14,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                ), pTVar6 == (Terrain *)0x0)) goto code_?;
        fVar11 = (float)pVVar15->alias;
        uVar10._4_4_ = (float)pTVar6;
        uVar10._0_4_ = (float)&UNK_?;
        fVar18 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_SampleHeight
                           (pTVar6,(Vector3)*pVVar15,(MethodInfo *)0x0);
        this_01 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)(this->fields)._radiusCirclePoints;
        if (this_01 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
        value.FirstAxisSign = (int32_t)(fVar18 + (float)pMVar3);
        value.Quadrant = (int32_t)fVar13;
        value.SecondAxisSign = (int32_t)fVar17;
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
        ;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                  (this_01,index,value,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        index = index + 1;
      } while (index < (int)fVar17);
    }
    GLRenderer::GLRenderer_DrawLines3D((this->fields)._radiusCirclePoints,(MethodInfo *)0x0);
  }
  pGVar19 = (this->fields)._axisSlider;
  if (pGVar19 != (GizmoLineSlider3D *)0x0) {
    (*(code *)(pGVar19->klass->vtable).Render_1.method)();
    pGVar20 = (this->fields)._midCap;
    if (pGVar20 != (GizmoCap3D *)0x0) {
      (*(code *)(pGVar20->klass->vtable).Render_1.method)();
      pTVar21 = (this->fields)._leftRadiusTick;
      if ((pTVar21 != (TerrainGizmo_RadiusTick *)0x0) &&
         (pGVar22 = (pTVar21->fields).Tick, pGVar22 != (GizmoCap2D *)0x0)) {
        (*(code *)(pGVar22->klass->vtable).Render_1.method)();
        pTVar21 = (this->fields)._rightRadiusTick;
        if ((pTVar21 != (TerrainGizmo_RadiusTick *)0x0) &&
           (pGVar22 = (pTVar21->fields).Tick, pGVar22 != (GizmoCap2D *)0x0)) {
          (*(code *)(pGVar22->klass->vtable).Render_1.method)();
          pTVar21 = (this->fields)._backRadiusTick;
          if ((pTVar21 != (TerrainGizmo_RadiusTick *)0x0) &&
             (pGVar22 = (pTVar21->fields).Tick, pGVar22 != (GizmoCap2D *)0x0)) {
            (*(code *)(pGVar22->klass->vtable).Render_1.method)();
            pTVar21 = (this->fields)._forwardRadiusTick;
            if ((pTVar21 != (TerrainGizmo_RadiusTick *)0x0) &&
               (pGVar22 = (pTVar21->fields).Tick, pGVar22 != (GizmoCap2D *)0x0)) {
              (*(code *)(pGVar22->klass->vtable).Render_1.method)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  Object__Class *pOVar10;
  TerrainCollider *this_03;
  GizmoTransform *this_04;
  GizmoPlaneSlider3D *this_05;
  GizmoLineSlider3D *pGVar11;
  GizmoSglAxisOffsetDrag3D *pGVar12;
  code *pcVar13;
  Ray ray;
  Vector3 axis;
  undefined1 *puVar14;
  bool bVar15;
  char cVar16;
  List_1_RTG_LocalTransformSnapshot_ *pLVar17;
  Object *pOVar18;
  Il2CppClass ***pppIVar19;
  undefined8 *puVar20;
  TerrainGizmoSettings *pTVar21;
  Transform *pTVar22;
  Vector3 *pVVar23;
  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *pLVar24;
  int32_t iVar25;
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *pLVar26;
  List_1_System_Object_ *pLVar27;
  RTUndoRedo *this_06;
  int *piVar28;
  undefined1 (*pauVar29) [20];
  Regex_CachedCodeEntryKey *pRVar30;
  GizmoPlaneSlider3DSettings *this_07;
  TerrainGizmoHotkeys *pTVar31;
  ushort uVar32;
  undefined4 *unaff_FS_OFFSET;
  MethodInfo *method_00;
  RegexCharClass_SingleRange method_01;
  List_1_T_Enumerator_System_Object_ LStack_33;
  Regex_CachedCodeEntryKey RStack_34;
  undefined1 auStack_35 [8];
  int32_t iStack_36;
  RegexCharClass_SingleRange RStack_37;
  List_1_RTG_LocalTransformSnapshot_ *pLStack_38;
  RegexCharClass_SingleRange RStack_39;
  float fStack_40;
  RegexCharClass_SingleRange RStack_41;
  Object__Class *pOStack_42;
  undefined1 *puStack_43;
  undefined4 uStack_44;
  undefined *puStack_45;
  undefined4 uStack_46;
  
  uStack_46 = 0xffffffff;
  puStack_45 = &DAT_?;
  uStack_44 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_44;
  puStack_43 = &stack0xffffff68;
  puVar14 = &stack0xffffff68;
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
    puVar14 = puStack_43;
  }
  puStack_43 = puVar14;
  LStack_33._list = (List_1_System_Object_ *)0x0;
  LStack_33._index = 0;
  LStack_33._version = 0;
  LStack_33._current = (Object *)0x0;
  bVar15 = TerrainGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar15 == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_44;
    return;
  }
  if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
    pTVar31 = (this->fields)._hotkeys;
    if (pTVar31 == (TerrainGizmoHotkeys *)0x0) goto code_?;
  }
  else {
    pTVar31 = (this->fields)._sharedHotkeys;
  }
  pHVar5 = (pTVar31->fields)._rotateObjects;
  if (pHVar5 == (Hotkeys *)0x0) goto code_?;
  bVar15 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
  if (bVar15 == 0) {
    pTVar6 = (this->fields)._objectRotationData;
    if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
    if ((pTVar6->fields).RotatingObjects != 0) {
      (pTVar6->fields).RotatingObjects = 0;
      pTVar6 = (this->fields)._objectRotationData;
      if (pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) goto code_?;
      pLStack_38 = (pTVar6->fields).PreSnapshots;
      RStack_39 = (RegexCharClass_SingleRange)
                  LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                            ((IEnumerable_1_UnityEngine_GameObject_ *)
                             (((this->fields)._objectRotationData)->fields).GameObjects,
                             (MethodInfo *)0x0);
      pOStack_42 = (Object__Class *)func_?();
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
      (pOStack_42->_0).name = (char *)pLVar26;
      func_?();
      pLVar26 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pLVar26,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                );
      (pOStack_42->_0).namespaze = (char *)pLVar26;
      method_00 = (MethodInfo *)&(pOStack_42->_0).namespaze;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pOStack_42,ExceptionArgument__Enum_obj,method_00);
      pLVar27 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (pLVar27,(IEnumerable_1_System_Object_ *)pLStack_38,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                );
      (pOStack_42->_0).name = (char *)pLVar27;
      LStack_33._list = (List_1_System_Object_ *)&(pOStack_42->_0).name;
      LStack_33._index = (int32_t)pLVar27;
      func_?();
      pLVar27 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (pLVar27,(IEnumerable_1_System_Object_ *)RStack_39,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                );
      (pOStack_42->_0).namespaze = (char *)pLVar27;
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
      RTUndoRedo::RTUndoRedo_RecordAction(this_06,(IUndoRedoAction *)pOStack_42,(MethodInfo *)0x0);
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
         (pLVar17 = (pTVar6->fields).PreSnapshots,
         pLVar17 == (List_1_RTG_LocalTransformSnapshot_ *)0x0)) goto code_?;
      iVar8 = (pLVar17->fields)._size;
      piVar1 = &(pLVar17->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pLVar17->fields)._size = 0;
      if (0 < iVar8) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar17->fields)._items,0,iVar8,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar18 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar18 == (Object *)0x0) ||
       (pOStack_42 = pOVar18[2].klass, pOStack_42 == (Object__Class *)0x0)) goto code_?;
    RStack_41 = (RegexCharClass_SingleRange)(pOStack_42->_0).image;
    uVar32 = 0;
    pLStack_38 = (List_1_RTG_LocalTransformSnapshot_ *)0x0;
    uVar4 = *(ushort *)((int)RStack_41 + 0xb6);
    RStack_39.Last = 0;
    RStack_39.First = uVar4;
    if (uVar4 != 0) {
      do {
        if ((*(Il2CppRuntimeInterfaceOffsetPair **)((int)RStack_41 + 0x58))[uVar32].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          piVar28 = (int *)((int)RStack_41 +
                           ((*(Il2CppRuntimeInterfaceOffsetPair **)((int)RStack_41 + 0x58))[uVar32].
                            offset + 0x22) * 8);
          goto code_?;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar4);
    }
    piVar28 = (int *)func_?();
code_?:
    cVar16 = (*(code *)*piVar28)();
    if (cVar16 != '\0') {
      pGVar9 = (this->fields)._._gizmo;
      if (pGVar9 == (Gizmo *)0x0) goto code_?;
      bVar15 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::ChangeEvent`1[System::
               Boolean]::ChangeEvent_1_System_Boolean__get_previousValue
                         ((ChangeEvent_1_System_Boolean_ *)pGVar9,(MethodInfo *)0x0);
      if (bVar15 == 0) {
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
        pOVar18 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if (pOVar18 == (Object *)0x0) goto code_?;
        pOVar10 = pOVar18[2].klass;
        pGVar9 = (this->fields)._._gizmo;
        if ((pGVar9 == (Gizmo *)0x0) ||
           (Gizmo::Gizmo_GetWorkCamera(pGVar9,(MethodInfo *)0x0), pOVar10 == (Object__Class *)0x0))
        goto code_?;
        pauVar29 = (undefined1 (*) [20])func_?();
        this_03 = (this->fields)._terrainCollider;
        if (this_03 == (TerrainCollider *)0x0) goto code_?;
        ray.m_Direction.z = (float)((ulonglong)*(undefined8 *)(*pauVar29 + 0x10) >> 0x20);
        ray._0_20_ = *pauVar29;
        bVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_Raycast_1
                           ((Collider *)this_03,ray,(RaycastHit *)&stack0xffffff74,3.4028235e+38,
                            (MethodInfo *)0x0);
        if (bVar15 != 0) {
          pGVar9 = (this->fields)._._gizmo;
          if (pGVar9 == (Gizmo *)0x0) goto code_?;
          this_04 = (pGVar9->fields)._transform;
          pRVar30 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                              (&RStack_34,
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
      pLVar17 = LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                          ((IEnumerable_1_UnityEngine_GameObject_ *)(pTVar6->fields).GameObjects,
                           (MethodInfo *)0x0);
      (pTVar6->fields).PreSnapshots = pLVar17;
      func_?();
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar18 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar18 == (Object *)0x0) ||
       (RStack_41 = (RegexCharClass_SingleRange)pOVar18[2].klass,
       RStack_41 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    pOStack_42 = *(Object__Class **)RStack_41;
    uVar32 = 0;
    fStack_40 = 0.0;
    uVar4._0_1_ = (pOStack_42->_1).rank;
    uVar4._1_1_ = (pOStack_42->_1).minimumAlignment;
    RStack_39.Last = 0;
    RStack_39.First = uVar4;
    if (uVar4 != 0) {
      do {
        if (pOStack_42->interfaceOffsets[uVar32].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          pppIVar19 = &pOStack_42[1]._1.typeHierarchy +
                      pOStack_42->interfaceOffsets[uVar32].offset * 2;
          goto code_?;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar4);
    }
    pppIVar19 = (Il2CppClass ***)func_?();
code_?:
    method_01 = RStack_41;
    puVar20 = (undefined8 *)(*(code *)*pppIVar19)();
    RStack_34._pattern = *(String **)(puVar20 + 1);
    RStack_34._options = (int32_t)*puVar20;
    RStack_34._cultureKey = (String *)((ulonglong)*puVar20 >> 0x20);
    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
      pTVar21 = (this->fields)._settings;
      if (pTVar21 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      pTVar21 = (this->fields)._sharedSettings;
    }
    fStack_40 = (float)RStack_34._options * (pTVar21->fields)._rotationSensitivity;
    this_00 = (this->fields)._targetTerrain;
    if ((this_00 == (Terrain *)0x0) ||
       (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), pTVar22 == (Transform *)0x0))
    goto code_?;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)(auStack_35 + 4),pTVar22,(MethodInfo *)0x0);
    uVar2 = pVVar23->x;
    uVar3 = pVVar23->y;
    pLStack_38 = (List_1_RTG_LocalTransformSnapshot_ *)pVVar23->z;
    pTVar6 = (this->fields)._objectRotationData;
    RStack_34._cultureKey = (String *)uVar2;
    RStack_34._pattern = (String *)uVar3;
    if ((pTVar6 == (TerrainGizmo_ObjectRotationData *)0x0) ||
       (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (pTVar6->fields).GameObjects,
       this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_35,this_01,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    LStack_33._list = (List_1_System_Object_ *)pLVar24->_list;
    LStack_33._index = pLVar24->_index;
    LStack_33._version = pLVar24->_version;
    LStack_33._current = *(Object **)&pLVar24->_current;
    iStack_36 = 0;
    uStack_46 = 1;
    RStack_37 = (RegexCharClass_SingleRange)&LStack_33;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_33,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar15 != 0) {
      RStack_41 = (RegexCharClass_SingleRange)LStack_33._current;
      if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
        pTVar21 = (this->fields)._settings;
        if (pTVar21 == (TerrainGizmoSettings *)0x0) goto code_?;
      }
      else {
        pTVar21 = (this->fields)._sharedSettings;
      }
      RStack_39 = (RegexCharClass_SingleRange)(pTVar21->fields)._objectRotationLayerMask;
      if ((RegexCharClass_SingleRange)LStack_33._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      iVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                         ((GameObject *)LStack_33._current,(MethodInfo *)0x0);
      if (((int)RStack_39 >> ((byte)iVar25 & 0x1f) & 1U) != 0) {
        if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
          pOStack_42 = (Object__Class *)(this->fields)._settings;
        }
        else {
          pOStack_42 = (Object__Class *)(this->fields)._sharedSettings;
        }
        if ((RStack_41 == (RegexCharClass_SingleRange)0x0) ||
           (RStack_39 = (RegexCharClass_SingleRange)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_tag
                                  ((GameObject *)RStack_41,(MethodInfo *)0x0),
           pOStack_42 == (Object__Class *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (pOStack_42->_0).declaringType;
        if (this_02 == (Il2CppClass *)0x0) goto code_?;
        method_01 = RStack_39;
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                 List_1_System_Object__Contains
                           ((List_1_System_Object_ *)this_02,(Object *)RStack_39,
                            MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                           );
        if (bVar15 == 0) {
          pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)RStack_41,(MethodInfo *)0x0);
          if (pTVar22 == (Transform *)0x0) goto code_?;
          method_01 = (RegexCharClass_SingleRange)&UNK_?;
          axis.y = (float)RStack_34._pattern;
          axis.x = (float)RStack_34._cultureKey;
          axis.z = (float)pLStack_38;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar22,axis,fStack_40,(MethodInfo *)0x0);
        }
      }
    }
    uStack_46 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_33,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,(MethodInfo *)method_01);
    uStack_46 = 0xffffffff;
  }
  this_05 = (GizmoPlaneSlider3D *)(this->fields)._axisSlider;
  if (this_05 != (GizmoPlaneSlider3D *)0x0) {
    this_07 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_05,(MethodInfo *)0x0);
    if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
      pTVar21 = (this->fields)._settings;
      if (pTVar21 == (TerrainGizmoSettings *)0x0) goto code_?;
    }
    else {
      pTVar21 = (this->fields)._sharedSettings;
    }
    if (this_07 != (GizmoPlaneSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)this_07,(pTVar21->fields)._offsetSnapStep,
                 (MethodInfo *)0x0);
      pGVar11 = (this->fields)._axisSlider;
      if ((this->fields)._isSnapEnabled == 0) {
        if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
          pTVar31 = (this->fields)._hotkeys;
          if (pTVar31 == (TerrainGizmoHotkeys *)0x0) goto code_?;
        }
        else {
          pTVar31 = (this->fields)._sharedHotkeys;
        }
        pHVar5 = (pTVar31->fields)._enableSnapping;
        if (pHVar5 == (Hotkeys *)0x0) goto code_?;
        bVar15 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
        RStack_41.First._0_1_ = bVar15;
      }
      else {
        RStack_41.First._0_1_ = 1;
      }
      if (pGVar11 != (GizmoLineSlider3D *)0x0) {
        (*(code *)(pGVar11->klass->vtable).SetSnapEnabled_1.method)();
        pGVar12 = (this->fields)._radiusDrag;
        if ((this->fields)._isSnapEnabled == 0) {
          if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
            pTVar31 = (this->fields)._hotkeys;
            if (pTVar31 == (TerrainGizmoHotkeys *)0x0) goto code_?;
          }
          else {
            pTVar31 = (this->fields)._sharedHotkeys;
          }
          pHVar5 = (pTVar31->fields)._enableSnapping;
          if (pHVar5 == (Hotkeys *)0x0) goto code_?;
          bVar15 = Hotkeys::Hotkeys_IsActive(pHVar5,1,(MethodInfo *)0x0);
        }
        else {
          bVar15 = 1;
        }
        if (pGVar12 != (GizmoSglAxisOffsetDrag3D *)0x0) {
          (pGVar12->fields)._._isSnapEnabled = bVar15;
          TerrainGizmo_UpdateTicks(this,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnUndoRedoPerformed(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_OnUndoRedoPerformed
               (TerrainGizmo *this,IUndoRedoAction *action,MethodInfo *method)

{
  TerrainGizmo_ProjectGizmoOnTerrain(this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._targetTerrain;
  if (pTVar1 != (Terrain *)0x0) {
    this_02 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
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
            if (this_02 != (TerrainData *)0x0) {
              pSVar5 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                       TerrainData_GetHeights(this_02,0,0,iVar3,iVar4,(MethodInfo *)0x0);
              (this->fields)._terrainHeights = pSVar5;
              func_?();
              pSVar5 = (this->fields)._preChangeTerrainHeights;
              this_00 = (this->fields)._terrainHeights;
              if (this_00 != (Single__Array_1 *)0x0) {
                iVar3 = mscorlib.dll::System::Array::Array_GetLength
                                  ((Array *)this_00,0,(MethodInfo *)0x0);
                this_01 = (this->fields)._preChangeTerrainHeights;
                if (this_01 != (Single__Array_1 *)0x0) {
                  iVar4 = mscorlib.dll::System::Array::Array_GetLength
                                    ((Array *)this_01,1,(MethodInfo *)0x0);
                  mscorlib.dll::System::Array::Array_Copy_2
                            ((Array *)this_00,(Array *)pSVar5,iVar4 * iVar3,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  (this->fields)._targetTerrain = terrain;
  func_?(&(this->fields)._targetTerrain,terrain);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)terrain,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar2 = (this->fields)._targetTerrain;
    if (pTVar2 != (Terrain *)0x0) {
      pTVar3 = (TerrainCollider *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          UnityEngine__TerrainCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::TerrainCollider>__
                         );
      (this->fields)._terrainCollider = pTVar3;
      func_?(&(this->fields)._terrainCollider,pTVar3);
      pTVar2 = (this->fields)._targetTerrain;
      if (pTVar2 != (Terrain *)0x0) {
        this_00 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                            (pTVar2,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._targetTerrain;
        if (pTVar2 != (Terrain *)0x0) {
          pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                             (pTVar2,(MethodInfo *)0x0);
          if (pTVar4 != (TerrainData *)0x0) {
            width = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                    TerrainData_get_internalHeightmapResolution(pTVar4,(MethodInfo *)0x0);
            pTVar2 = (this->fields)._targetTerrain;
            if (pTVar2 != (Terrain *)0x0) {
              pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                                 (pTVar2,(MethodInfo *)0x0);
              if (pTVar4 != (TerrainData *)0x0) {
                height = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                         TerrainData_get_internalHeightmapResolution(pTVar4,(MethodInfo *)0x0);
                if (this_00 != (TerrainData *)0x0) {
                  pSVar5 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                           TerrainData_GetHeights(this_00,0,0,width,height,(MethodInfo *)0x0);
                  (this->fields)._terrainHeights = pSVar5;
                  func_?(&(this->fields)._terrainHeights,pSVar5);
                  pSVar5 = (this->fields)._terrainHeights;
                  if (pSVar5 != (Single__Array_1 *)0x0) {
                    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                             PlayableBehaviour_Clone((PlayableBehaviour *)pSVar5,(MethodInfo *)0x0);
                    pSVar5 = (Single__Array_1 *)func_?(pOVar6,TypeInfo__System__Single);
                    (this->fields)._preChangeTerrainHeights = pSVar5;
                    uVar7 = func_?(pOVar6,TypeInfo__System__Single);
                    func_?(&(this->fields)._preChangeTerrainHeights,uVar7);
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
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
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
  if ((this->fields)._sharedLookAndFeel == (TerrainGizmoLookAndFeel *)0x0) {
    pTVar1 = (this->fields)._lookAndFeel;
    if (pTVar1 == (TerrainGizmoLookAndFeel *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedLookAndFeel;
  }
  this_00 = (this->fields)._axisSlider;
  if (this_00 != (GizmoLineSlider3D *)0x0) {
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
              (this_00,(pTVar1->fields)._axisSliderLookAndFeel,(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel == (TerrainGizmoLookAndFeel *)0x0) {
      pTVar1 = (this->fields)._lookAndFeel;
      if (pTVar1 == (TerrainGizmoLookAndFeel *)0x0) goto code_?;
    }
    else {
      pTVar1 = (this->fields)._sharedLookAndFeel;
    }
    pGVar2 = (this->fields)._midCap;
    if (pGVar2 != (GizmoCap3D *)0x0) {
      (pGVar2->fields)._sharedLookAndFeel = (pTVar1->fields)._midCapLookAndFeel;
      func_?(&(pGVar2->fields)._sharedLookAndFeel,&stack0xfffffffc,&UNK_?);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    if (pTVar2 != (Terrain *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar2,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffc8,this_01,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        pGVar1 = (this->fields)._._gizmo;
        if ((pGVar1 != (Gizmo *)0x0) &&
           (pGVar5 = (pGVar1->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
          uVar6._0_4_ = (pGVar5->fields)._position3D.x;
          uVar6._4_4_ = (pGVar5->fields)._position3D.y;
          fVar7 = (pGVar5->fields)._position3D.z;
          if (cRam_? == '\0') {
            uVar6._0_4_ = (float)&TypeInfo__UnityEngine__Vector3;
            func_?();
            cRam_? = '\x01';
          }
          pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar9 = (pVVar8->rightVector).x;
          uVar10 = (pVVar8->rightVector).y;
          fVar11 = (this->fields)._radius;
          fVar12 = (float)uVar6 - (float)uVar9 * fVar11;
          fVar7 = fVar7 - (pVVar8->rightVector).z * fVar11;
          pTVar2 = (this->fields)._targetTerrain;
          if (pTVar2 != (Terrain *)0x0) {
            worldPosition.y = SUB84(uVar6,4) - (float)uVar10 * fVar11;
            worldPosition.x = fVar12;
            worldPosition.z = fVar7;
            fVar11 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_SampleHeight
                               (pTVar2,worldPosition,(MethodInfo *)0x0);
            fVar11 = fVar11 + fVar4;
            pTVar13 = (this->fields)._leftRadiusTick;
            if ((pTVar13 != (TerrainGizmo_RadiusTick *)0x0) &&
               (pGVar14 = (pTVar13->fields).Tick, this_00 != (Camera *)0x0)) {
              uVar15._4_4_ = (float)this_00;
              uVar15._0_4_ = (float)&fStack_16;
              position.y = fVar11;
              position.x = fVar12;
              position.z = fVar7;
              fVar17 = fVar7;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                 ((Vector3 *)&fStack_16,this_00,position,(MethodInfo *)0x0);
              value.x = pVVar3->x;
              value.y = pVVar3->y;
              puStack_18 = (undefined *)value.x;
              if (pGVar14 != (GizmoCap2D *)0x0) {
                GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value,(MethodInfo *)0x0);
                pTVar13 = (this->fields)._leftRadiusTick;
                if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                  (pTVar13->fields).WorldPosition.x = fVar11;
                  (pTVar13->fields).WorldPosition.y = fVar17;
                  (pTVar13->fields).WorldPosition.z = fVar7;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                  fStack_16 = (pVVar8->rightVector).x;
                  puStack_18 = (undefined *)(pVVar8->rightVector).y;
                  fVar7 = (this->fields)._radius;
                  fVar11 = (float)uVar15 + fStack_16 * fVar7;
                  fVar12 = fVar12 + (pVVar8->rightVector).z * fVar7;
                  pTVar2 = (this->fields)._targetTerrain;
                  if (pTVar2 != (Terrain *)0x0) {
                    worldPosition_00.y = SUB84(uVar15,4) + (float)puStack_18 * fVar7;
                    worldPosition_00.x = fVar11;
                    worldPosition_00.z = fVar12;
                    fVar7 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                             Terrain_SampleHeight(pTVar2,worldPosition_00,(MethodInfo *)0x0);
                    fVar7 = fVar7 + fVar4;
                    pTVar13 = (this->fields)._rightRadiusTick;
                    if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                      pGVar14 = (pTVar13->fields).Tick;
                      uVar19._4_4_ = (float)this_00;
                      uVar19._0_4_ = (float)&fStack_16;
                      position_00.y = fVar7;
                      position_00.x = fVar11;
                      position_00.z = fVar12;
                      fVar17 = fVar12;
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                               Camera_WorldToScreenPoint_1
                                         ((Vector3 *)&fStack_16,this_00,position_00,
                                          (MethodInfo *)0x0);
                      value_00.x = pVVar3->x;
                      value_00.y = pVVar3->y;
                      puStack_18 = (undefined *)value_00.x;
                      if (pGVar14 != (GizmoCap2D *)0x0) {
                        GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value_00,(MethodInfo *)0x0);
                        pTVar13 = (this->fields)._rightRadiusTick;
                        if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                          (pTVar13->fields).WorldPosition.x = fVar7;
                          (pTVar13->fields).WorldPosition.y = fVar17;
                          (pTVar13->fields).WorldPosition.z = fVar12;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                          fStack_16 = (pVVar8->forwardVector).x;
                          puStack_18 = (undefined *)(pVVar8->forwardVector).y;
                          fVar7 = (this->fields)._radius;
                          fVar12 = (float)uVar19 - fStack_16 * fVar7;
                          fVar11 = fVar11 - (pVVar8->forwardVector).z * fVar7;
                          pTVar2 = (this->fields)._targetTerrain;
                          if (pTVar2 != (Terrain *)0x0) {
                            worldPosition_01.y = SUB84(uVar19,4) - (float)puStack_18 * fVar7;
                            worldPosition_01.x = fVar12;
                            worldPosition_01.z = fVar11;
                            fVar7 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                     Terrain_SampleHeight(pTVar2,worldPosition_01,(MethodInfo *)0x0)
                            ;
                            fVar7 = fVar7 + fVar4;
                            pTVar13 = (this->fields)._backRadiusTick;
                            if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                              pGVar14 = (pTVar13->fields).Tick;
                              uVar20._4_4_ = (float)this_00;
                              uVar20._0_4_ = (float)&fStack_16;
                              position_01.y = fVar7;
                              position_01.x = fVar12;
                              position_01.z = fVar11;
                              fVar17 = fVar11;
                              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_WorldToScreenPoint_1
                                                 ((Vector3 *)&fStack_16,this_00,position_01,
                                                  (MethodInfo *)0x0);
                              value_01.x = pVVar3->x;
                              value_01.y = pVVar3->y;
                              puStack_18 = (undefined *)value_01.x;
                              if (pGVar14 != (GizmoCap2D *)0x0) {
                                GizmoCap2D::GizmoCap2D_set_Position
                                          (pGVar14,value_01,(MethodInfo *)0x0);
                                pTVar13 = (this->fields)._backRadiusTick;
                                if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                                  (pTVar13->fields).WorldPosition.x = fVar7;
                                  (pTVar13->fields).WorldPosition.y = fVar17;
                                  (pTVar13->fields).WorldPosition.z = fVar11;
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  fStack_16 = (pVVar8->forwardVector).x;
                                  puStack_18 = (undefined *)(pVVar8->forwardVector).y;
                                  fVar7 = (this->fields)._radius;
                                  fVar11 = (float)uVar20 + fStack_16 * fVar7;
                                  fVar12 = fVar12 + (pVVar8->forwardVector).z * fVar7;
                                  pTVar2 = (this->fields)._targetTerrain;
                                  if (pTVar2 != (Terrain *)0x0) {
                                    worldPosition_02.y =
                                         SUB84(uVar20,4) + (float)puStack_18 * fVar7;
                                    worldPosition_02.x = fVar11;
                                    worldPosition_02.z = fVar12;
                                    fVar7 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::
                                             Terrain_SampleHeight
                                                       (pTVar2,worldPosition_02,(MethodInfo *)0x0);
                                    fVar7 = fVar7 + fVar4;
                                    pTVar13 = (this->fields)._forwardRadiusTick;
                                    if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                                      pGVar14 = (pTVar13->fields).Tick;
                                      position_02.y = fVar7;
                                      position_02.x = fVar11;
                                      position_02.z = fVar12;
                                      fVar4 = fVar12;
                                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                               Camera_WorldToScreenPoint_1
                                                         ((Vector3 *)&stack0xffffffd4,this_00,
                                                          position_02,(MethodInfo *)0x0);
                                      value_02.x = pVVar3->x;
                                      value_02.y = pVVar3->y;
                                      puStack_18 = (undefined *)value_02.x;
                                      if (pGVar14 != (GizmoCap2D *)0x0) {
                                        GizmoCap2D::GizmoCap2D_set_Position
                                                  (pGVar14,value_02,(MethodInfo *)0x0);
                                        pTVar13 = (this->fields)._forwardRadiusTick;
                                        if (pTVar13 != (TerrainGizmo_RadiusTick *)0x0) {
                                          (pTVar13->fields).WorldPosition.x = fVar7;
                                          (pTVar13->fields).WorldPosition.y = fVar4;
                                          (pTVar13->fields).WorldPosition.z = fVar12;
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean <CollectObjectsInRadius>b__93_0(GameObject) */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo__CollectObjectsInRadius_b__93_0
               (TerrainGizmo *this,GameObject *item,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if ((pGVar1 != (Gizmo *)0x0) &&
     (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    uStack_3._0_4_ = (pGVar2->fields)._position3D.x;
    uStack_3._4_4_ = (pGVar2->fields)._position3D.y;
    fStack_4 = (pGVar2->fields)._position3D.z;
    if (item != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (item,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        fStack_7 = fStack_4 - pVVar5->z;
        uStack_8 = (ulonglong)(uint)((float)uStack_3 - (float)uVar6);
        fStack_4 = fStack_7;
        fVar9 = (float10)func_?(&uStack_8);
        return (this->fields)._radius < (float)fVar9;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
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
  (this->fields)._elevationCurve = this_00;
  func_?(&(this->fields)._elevationCurve,this_00);
  value = (TerrainGizmo_ObjectRotationData *)
          func_?(TypeInfo__RTG__TerrainGizmo__ObjectRotationData);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  pMVar2 = (MethodInfo *)&(value->fields).GameObjects;
  (value->fields).GameObjects = pLVar1;
  func_?(pMVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar2);
  (this->fields)._objectRotationData = value;
  func_?(&(this->fields)._objectRotationData,value);
  this_01 = (SceneOverlapFilter *)func_?(TypeInfo__RTG__SceneOverlapFilter);
  SceneOverlapFilter::SceneOverlapFilter__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._sceneOverlapFilter = this_01;
  func_?(&(this->fields)._sceneOverlapFilter,this_01);
  pLVar3 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._modelRadiusCirclePoints = pLVar3;
  pGStack4 = (GizmoUniformScaleDrag3D__Class *)pLVar3;
  func_?();
  pLVar3 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._radiusCirclePoints = pLVar3;
  func_?();
  this_02 = (HashSet_1_UnityEngine_GameObject_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_02,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  (this->fields)._affectedObjectsSet = this_02;
  func_?(&(this->fields)._affectedObjectsSet,this_02);
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
  (this->fields)._affectedObjects = this_03;
  func_?(&(this->fields)._affectedObjects,this_03);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._objectsInRadius = pLVar1;
  func_?();
  pGStack5 = TypeInfo__RTG__GizmoSglAxisOffsetDrag3D;
  this_04 = (GizmoSglAxisRotationDrag3D *)func_?();
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._radiusDrag = (GizmoSglAxisOffsetDrag3D *)this_04;
  func_?();
  pGStack4 = TypeInfo__RTG__GizmoUniformScaleDrag3D;
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
  pLVar6 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (value_00->fields)._objectHrzMoveIgnoreTags = pLVar6;
  func_?();
  pLVar6 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (value_00->fields)._objectVertMoveIgnoreTags = pLVar6;
  func_?();
  pLStack7 = TypeInfo__System__Collections__Generic__List<System::String>;
  pLVar6 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar2 = (MethodInfo *)&(value_00->fields)._objectRotationIgnoreTags;
  (value_00->fields)._objectRotationIgnoreTags = pLVar6;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar2);
  (this->fields)._settings = value_00;
  ppHStack8 = (Hotkeys__Class **)value_00;
  func_?();
  value_01 = (TerrainGizmoHotkeys *)func_?();
  if (cRam_? == '\0') {
    ppHStack8 = &TypeInfo__RTG__Hotkeys;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppHStack8 = (Hotkeys__Class **)TypeInfo__RTG__Hotkeys;
  pHVar9 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar9,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar9 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar9,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar9->fields)._lCtrl = 1;
    (value_01->fields)._enableSnapping = pHVar9;
    func_?();
    pHVar9 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar9,StringLiteral_Enable_object_rotation,(HotkeysStaticData)0x0,(MethodInfo *)0x0)
    ;
    if (pHVar9 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar9,KeyCode__Enum_C,(MethodInfo *)0x0);
      (value_01->fields)._rotateObjects = pHVar9;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value_01,ExceptionArgument__Enum_obj,
                 (MethodInfo *)&(value_01->fields)._rotateObjects);
      (this->fields)._hotkeys = value_01;
      func_?();
      ppHStack8 =
           (Hotkeys__Class **)TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>;
      pLVar1 = (List_1_UnityEngine_GameObject_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      (this->fields)._objectCollectRadius = pLVar1;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_IsRotatingObjects() */

bool Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_IsRotatingObjects
               (TerrainGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
    pTVar1 = (this->fields)._hotkeys;
    if (pTVar1 == (TerrainGizmoHotkeys *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pTVar1->fields)._rotateObjects;
  if (this_00 != (Hotkeys *)0x0) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
code_?:
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
  if ((this->fields)._sharedHotkeys == (TerrainGizmoHotkeys *)0x0) {
    pTVar1 = (this->fields)._hotkeys;
    if (pTVar1 == (TerrainGizmoHotkeys *)0x0) goto code_?;
  }
  else {
    pTVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pTVar1->fields)._enableSnapping;
  if (this_00 != (Hotkeys *)0x0) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
code_?:
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
  if ((this->fields)._sharedLookAndFeel == (TerrainGizmoLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


/* TerrainGizmoSettings get_Settings() */

TerrainGizmoSettings *
Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_get_Settings
          (TerrainGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings == (TerrainGizmoSettings *)0x0) {
    return (this->fields)._settings;
  }
  return (this->fields)._sharedSettings;
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
      (this->fields)._elevationCurve = value;
      func_?(&(this->fields)._elevationCurve,value);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SharedLookAndFeel(TerrainGizmoLookAndFeel) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_SharedLookAndFeel
               (TerrainGizmo *this,TerrainGizmoLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  TerrainGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings(TerrainGizmoSettings) */

void Assembly-CSharp.dll::RTG::TerrainGizmo::TerrainGizmo_set_SharedSettings
               (TerrainGizmo *this,TerrainGizmoSettings *value,MethodInfo *method)

{
  (this->fields)._sharedSettings = value;
  func_?(&(this->fields)._sharedSettings,value);
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

