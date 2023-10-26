
/* Boolean IsColliding() */

bool Assembly-CSharp.dll::IndentArea::IndentArea_IsColliding(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).gameObject;
  if (method_00 != (MethodInfo *)0x0) {
    this_02 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        ((GameObject *)method_00,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (this_02 != (MeshFilter *)0x0) {
      pMStack_1 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_02,(MethodInfo *)0x0);
      this_00 = (this->fields).mainCamera;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition((Vector3 *)&RStack_3,(StandaloneInput *)0x0,method_00)
      ;
      if (this_00 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                  ((Ray *)&stack0xffffffb4,this_00,*pVVar2,(MethodInfo *)0x0);
        iVar4 = func_?(TypeInfo__UnityEngine__Vector3,4);
        uVar5 = 0;
        uStack_6 = (ulonglong)(uint)uStack_6;
        if (pMStack_1 != (Mesh *)0x0) {
          iVar7 = 0;
          while( true ) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (pMStack_1,(MethodInfo *)0x0);
            if (pVVar8 == (Vector3__Array *)0x0) break;
            if ((int)pVVar8->max_length <= (int)uStack_6._4_4_) {
              pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  (&RStack_3,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffff9c,(MethodInfo *)0x0);
              uStack_6._0_4_ = pRVar9->_options;
              uStack_6._4_4_ = (Transform *)pRVar9->_cultureKey;
              pSVar10 = pRVar9->_pattern;
              pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  (&RStack_11,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffff9c,(MethodInfo *)0x0);
              RStack_3._options = pRVar9->_options;
              RStack_3._cultureKey = pRVar9->_cultureKey;
              RStack_3._pattern = pRVar9->_pattern;
              pRVar9 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text
                        ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                  ((Regex_CachedCodeEntryKey *)&stack0xffffffc0,
                                   (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffff9c,(MethodInfo *)0x0);
              uVar12 = pRVar9->_options;
              uVar13 = pRVar9->_cultureKey;
              RStack_11._options =
                   (int32_t)((float)RStack_3._options + (float)uVar12 * _UNK_?);
              RStack_11._cultureKey =
                   (String *)((float)RStack_3._cultureKey + (float)uVar13 * _UNK_?);
              pSVar14 = (String *)
                        ((float)RStack_3._pattern + (float)pRVar9->_pattern * _UNK_?);
              RStack_11._pattern = pSVar14;
              if (iVar4 != 0) {
                if ((*(int *)(iVar4 + 0xc) != 0) && (3 < *(uint *)(iVar4 + 0xc))) {
                  p1.z = (float)pSVar10;
                  p1.x = (float)(uint)uStack_6;
                  p1.y = (float)uStack_6._4_4_;
                  p2.y = (float)RStack_11._cultureKey;
                  p2.x = (float)RStack_11._options;
                  p2.z = (float)pSVar14;
                  bVar15 = MathFunctions::MathFunctions_LineFacet
                                    (p1,p2,*(Vector3 *)(iVar4 + 0x10),*(Vector3 *)(iVar4 + 0x34),
                                     *(Vector3 *)(iVar4 + 0x28),(Vector3 *)&stack0xffffffcc,
                                     (MethodInfo *)0x0);
                  if (2 < *(uint *)(iVar4 + 0xc)) {
                    p1_00.z = (float)pSVar10;
                    p1_00.x = (float)(uint)uStack_6;
                    p1_00.y = (float)uStack_6._4_4_;
                    p2_00.z = (float)pSVar14;
                    p2_00.x = (float)RStack_11._options;
                    p2_00.y = (float)RStack_11._cultureKey;
                    bVar16 = MathFunctions::MathFunctions_LineFacet
                                      (p1_00,p2_00,*(Vector3 *)(iVar4 + 0x28),
                                       *(Vector3 *)(iVar4 + 0x1c),*(Vector3 *)(iVar4 + 0x10),
                                       (Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
                    return bVar16 != 0 || bVar15 != 0;
                  }
                }
                goto code_?;
              }
              break;
            }
            this_01 = (this->fields).gameObject;
            if (this_01 == (GameObject *)0x0) break;
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0);
            uStack_6 = CONCAT44(pTVar17,(uint)uStack_6);
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (pMStack_1,(MethodInfo *)0x0);
            if (pVVar8 == (Vector3__Array *)0x0) break;
            if (pVVar8->max_length <= uVar5) goto code_?;
            if (uStack_6._4_4_ == (Transform *)0x0) break;
            position.z = *(float *)((int)&pVVar8->vector[0].z + iVar7);
            position._0_8_ = *(undefined8 *)((int)&pVVar8->vector[0].x + iVar7);
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                               ((Vector3 *)&RStack_3,uStack_6._4_4_,position,(MethodInfo *)0x0);
            if (iVar4 == 0) break;
            fVar18 = pVVar2->z;
            if (*(uint *)(iVar4 + 0xc) <= uVar5) goto code_?;
            *(undefined8 *)(iVar7 + 0x10 + iVar4) = *(undefined8 *)pVVar2;
            uVar5 = uVar5 + 1;
            *(float *)(iVar7 + 0x18 + iVar4) = fVar18;
            iVar7 = iVar7 + 0xc;
            uStack_6 = CONCAT44(uVar5,(uint)uStack_6);
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar15 = (*pcVar19)();
  return bVar15;
}


/* Void Remove() */

void Assembly-CSharp.dll::IndentArea::IndentArea_Remove(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Vector2[] SetUVs() */

Vector2__Array *
Assembly-CSharp.dll::IndentArea::IndentArea_SetUVs(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(this_00,0,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                       );
    return (Vector2__Array *)pUVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar2)();
  return pVVar3;
}


/* Void UpdateIndentArea(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::IndentArea::IndentArea_UpdateIndentArea
               (IndentArea *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0xd70c);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    uVar1 = (info->fields).iLocalPos.x;
    uVar2 = (info->fields).iLocalPos.y;
    iVector.y = uVar2;
    iVector.x = uVar1;
    iVar3 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar3;
    pVVar4 = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pGVar5 = (this->fields).gameObject;
      if (pGVar5 != (GameObject *)0x0) {
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar5,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                            );
        if (this_01 != (MeshFilter *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_01,(MethodInfo *)0x0);
          if (this_02 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_02,(MethodInfo *)0x0);
            func_?(this_00,0,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,3,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,2,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,2,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,1,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,0,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                      (this_02,pVVar4,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                             );
              func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
              cRam_? = '\x01';
            }
            this_03 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      func_?();
            if (this_03 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
              LowLevelList_1_System_Object___ctor
                        ((LowLevelList_1_System_Object_ *)this_03,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                        );
              func_?(this_03,0,0,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
              func_?(this_03,0x3f800000,0,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
              func_?(this_03,0x3f800000,0x3f800000,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
              func_?(this_03,0,0x3f800000,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
              pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                        UnitySynchronizationContext+WorkRequest]::
                        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                  (this_03,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                        (this_02,(Vector2__Array *)pUVar6,(MethodInfo *)0x0);
              pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                        UnitySynchronizationContext+WorkRequest]::
                        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                  (this_00,
                                   MethodInfo__System__Collections__Generic__List<int>__ToArray__);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                        (this_02,(Int32__Array *)pUVar6,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                        (this_02,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                        (this_02,(MethodInfo *)0x0);
              if (pVVar4 != (Vector3__Array *)0x0) {
                if (pVVar4->max_length < 3) goto code_?;
                uVar7 = pVVar4->vector[0].x;
                uVar8 = pVVar4->vector[2].x;
                fVar9 = ((float)uVar8 - (float)uVar7) * _UNK_?;
                if (pVVar4->max_length == 0) goto code_?;
                uVar10 = pVVar4->vector[0].x;
                pGVar5 = (this->fields).gameObject;
                if (pGVar5 != (GameObject *)0x0) {
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  fVar12 = (this->fields).size;
                  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar14 = (pVVar13->oneVector).x;
                  uVar15 = (pVVar13->oneVector).y;
                  fVar16 = (pVVar13->oneVector).z * fVar12;
                  if (pTVar11 != (Transform *)0x0) {
                    value_00.y = (float)uVar15 * fVar12;
                    value_00.x = (float)uVar14 * fVar12;
                    value_00.z._0_2_ = SUB42(fVar16,0);
                    value_00.z._2_2_ = (short)((uint)fVar16 >> 0x10);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar11,value_00,(MethodInfo *)0x0);
                    pGVar5 = (this->fields).gameObject;
                    if (pGVar5 != (GameObject *)0x0) {
                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                          (this_02,(MethodInfo *)0x0);
                      if (pVVar4 != (Vector3__Array *)0x0) {
                        if (pVVar4->max_length == 0) goto code_?;
                        if (pTVar11 != (Transform *)0x0) {
                          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_TransformPoint
                                              ((Vector3 *)&stack0xffffffc8,pTVar11,
                                               pVVar4->vector[0],(MethodInfo *)0x0);
                          uVar18 = pVVar17->x;
                          uVar19 = pVVar17->y;
                          fVar12 = pVVar17->z;
                          pGVar5 = (this->fields).gameObject;
                          if (pGVar5 != (GameObject *)0x0) {
                            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_get_vertices(this_02,(MethodInfo *)0x0);
                            if (pVVar4 != (Vector3__Array *)0x0) {
                              if (pVVar4->max_length < 3) goto code_?;
                              if (pTVar11 != (Transform *)0x0) {
                                pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_TransformPoint
                                                    ((Vector3 *)&stack0xffffffc8,pTVar11,
                                                     pVVar4->vector[2],(MethodInfo *)0x0);
                                uVar20 = pVVar17->x;
                                uVar21 = pVVar17->y;
                                fVar16 = (pVVar17->z - fVar12) * _UNK_?;
                                fVar22 = (float)uVar18 +
                                         ((float)uVar20 - (float)uVar18) * _UNK_?;
                                fVar23 = (float)uVar19 +
                                         ((float)uVar21 - (float)uVar19) * _UNK_?;
                                pGVar5 = (this->fields).gameObject;
                                if (pGVar5 != (GameObject *)0x0) {
                                  this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                                  if (this_04 != (Transform *)0x0) {
                                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        ((Vector3 *)&stack0xffffffd4,this_04,
                                                         (MethodInfo *)0x0);
                                    uVar24 = pVVar17->x;
                                    uVar25 = pVVar17->y;
                                    uVar26 = (info->fields).normal.x;
                                    uVar27 = (info->fields).normal.y;
                                    value.y = (float)uVar25 +
                                              (float)uVar27 * _UNK_? +
                                              ((float)pTVar11 - fVar23);
                                    value.x = (float)uVar24 +
                                              (float)uVar26 * _UNK_? +
                                              (((float)uVar10 + fVar9) - fVar22);
                                    value.z = pVVar17->z +
                                              (info->fields).normal.z * _UNK_? +
                                              (3.751432e-29 - (fVar12 + fVar16));
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_position(this_04,value,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* IndentArea() */

void Assembly-CSharp.dll::IndentArea::IndentArea__ctor(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_IndentArea);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar1,StringLiteral_IndentArea,(MethodInfo *)0x0);
    (this->fields).gameObject = pGVar1;
    func_?(&(this->fields).gameObject,pGVar1);
    pGVar1 = (this->fields).gameObject;
    value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_UIItems,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar1,value,(MethodInfo *)0x0);
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      (this->fields).mainCamera = pCVar2;
      func_?(&(this->fields).mainCamera,pCVar2);
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        this_00 = (Renderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                            );
        pGVar1 = (this->fields).gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (pGVar1,
                     UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                    );
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar3 != (PrefabPool *)0x0) {
            pMVar4 = (pPVar3->fields).indentMaterial;
            (this->fields).materialNone = pMVar4;
            func_?(&(this->fields).materialNone,pMVar4);
            if (this_00 != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        (this_00,(this->fields).materialNone,(MethodInfo *)0x0);
              return;
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

