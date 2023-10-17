
/* Boolean GetPickingInfo(MVCubeModelBase, CubePickingInfo ByRef) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
               (MVCubeModelBase *cr,CubePickingInfo **info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
  }
  this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                   ((MethodInfo *)0x0);
  if (this != (EventSystem *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    this_00 = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
             StandaloneInput_MousePosition
                       (&RStack_3.m_Direction,(StandaloneInput *)0x0,
                        (MethodInfo *)CONCAT22(in_stack_4,in_stack_5));
    if (this_00 != (Camera *)0x0) {
      pos_00.z._2_2_ = (short)((uint)pVVar2->z >> 0x10);
      pos_00._0_10_ = *(unkbyte10 *)pVVar2;
      pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                         (&RStack_3,this_00,pos_00,(MethodInfo *)0x0);
      uVar7 = (pRVar6->m_Origin).x;
      uVar8 = (pRVar6->m_Origin).y;
      uVar9 = (pRVar6->m_Origin).z;
      ray.m_Origin.z = (float)uVar9;
      ray.m_Origin.y = (float)uVar8;
      ray.m_Origin.x = (float)uVar7;
      uVar10 = (pRVar6->m_Direction).x;
      ray.m_Direction.x = (float)uVar10;
      RStack_3.m_Direction.y = (pRVar6->m_Direction).y;
      RStack_3.m_Direction.z = (pRVar6->m_Direction).z;
      func_?();
      ray.m_Direction.y = RStack_3.m_Direction.y;
      ray.m_Direction.z = RStack_3.m_Direction.z;
      bVar1 = CollisionDetection::CollisionDetection_MVHit
                        (ray,(MVWorldObjectClient *)cr,(VoxelHit *)&stack0xffffff88,INFINITY,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
      pCVar11 = *info;
      pCStack_12 = in_stack_13;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar14 = pCStack_12;
      pCVar15 = Cube::Cube_Clone_1(pCStack_12,(MethodInfo *)0x0);
      if (pCVar11 != (CubePickingInfo *)0x0) {
        (pCVar11->fields).cube = pCVar15;
        pCVar16 = &pCVar11->fields;
        puVar17 = &UNK_?;
        func_?();
        pCVar11 = *info;
        if (pCVar11 != (CubePickingInfo *)0x0) {
          (pCVar11->fields).iLocalPos.x = IStack_18.x;
          (pCVar11->fields).iLocalPos.y = IStack_18.y;
          (pCVar11->fields).iLocalPos.z = IStack_18.z;
          if (*info != (CubePickingInfo *)0x0) {
            ((*info)->fields).pickedFace = iStack_19;
            pCVar11 = *info;
            if (pCVar11 != (CubePickingInfo *)0x0) {
              (pCVar11->fields).point.x = (float)pCVar14;
              (pCVar11->fields).point.y = (float)puVar17;
              (pCVar11->fields).point.z = (float)pCVar16;
              pCVar11 = *info;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                (pCVar11->fields).normal.x = (float)pCVar15;
                (pCVar11->fields).normal.y = fStack_20;
                (pCVar11->fields).normal.z = fStack_21;
                RStack_3.m_Direction.z = (float)*info;
                if (cr != (MVCubeModelBase *)0x0) {
                  pCStack_12 = (Cube *)(cr->fields)._.gameObject;
                  pCVar11 = *info;
                  if (pCVar11 != (CubePickingInfo *)0x0) {
                    pos.z._2_2_ = (short)((uint)pCVar16 >> 0x10);
                    pos.z._0_2_ = (pCVar11->fields).iLocalPos.z;
                    pos.y = (float)puVar17;
                    pos.x = (float)pCVar14;
                    EVar22 = Cube::Cube_GetEdge_1
                                       ((GameObject *)pCStack_12,(pCVar11->fields).cube,
                                        (pCVar11->fields).pickedFace,pos,(pCVar11->fields).iLocalPos,
                                        (MethodInfo *)0x0);
                    *(Edge__Enum *)((int)RStack_3.m_Direction.z + 0x10) = EVar22;
                    pCVar11 = *info;
                    gameObject = (cr->fields)._.gameObject;
                    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
                              (pCVar11,gameObject,(MethodInfo *)0x0);
                    return 1;
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
  pcVar23 = (code *)swi(3);
  bVar1 = (*pcVar23)();
  return bVar1;
}


/* Boolean IsHitPickup(VoxelHit) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_IsHitPickup
               (VoxelHit hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (hit.transform != (Transform *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (hit.transform,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                    ((Component *)this,
                     GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean Pick(VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_Pick
               (VoxelHit *hit,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe8c;
  puVar5 = &stack0xfffffe8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  VStack_6.z = 0.0;
  uStack_7 = 0;
  KStack_8.key._options = 0;
  KStack_8.key._cultureKey = (String *)0x0;
  KStack_8.key._pattern = (String *)0x0;
  KStack_8.value = (Object *)0x0;
  VStack_6.x = 0.0;
  VStack_6.y = 0.0;
  func_?(auStack_9,0,0x58);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar10 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar10 == 0) {
    if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if (pEVar11 != (EventSystem *)0x0) {
      bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(pEVar11,(MethodInfo *)0x0);
      if (bVar10 != 0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar12 != (MVGameControllerBase *)0x0) {
        if ((pMVar12->fields)._joinState != 3) goto code_?;
        uVar13 = 0xADDR;
        this_00 = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          uVar13 = uVar13 & 0xffffffff;
          func_?();
        }
        pVVar14 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition(&VStack_15,(StandaloneInput *)0x0,in_stack_16);
        fStack_17 = pVVar14->x;
        pVVar14 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition(&VStack_15,(StandaloneInput *)0x0,in_stack_16);
        VStack_15.y = pVVar14->y;
        VStack_15.x = fStack_17;
        fStack_18 = 0.0;
        VStack_15.z = 0.0;
        if (this_00 != (Camera *)0x0) {
          pos.y = VStack_15.y;
          pos.x = fStack_17;
          pos.z = 0.0;
          pRVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                             (&RStack_20,this_00,pos,(MethodInfo *)0x0);
          cStack_21 = '\0';
          KStack_8.key._options = (int32_t)(pRVar19->m_Origin).x;
          KStack_8.key._cultureKey = (String *)(pRVar19->m_Origin).y;
          KStack_8.key._pattern = (String *)(pRVar19->m_Origin).z;
          KStack_8.value = (Object *)(pRVar19->m_Direction).x;
          uStack_7._0_4_ = (pRVar19->m_Direction).y;
          uStack_7._4_4_ = (pRVar19->m_Direction).z;
          bVar10 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
          if (bVar10 != 0) {
            pVVar14 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                     MVWorldObject_get_WorldPosition
                               (&VStack_15,(MVWorldObject *)0x0,in_stack_22);
            VStack_6.x = pVVar14->x;
            VStack_6.y = pVVar14->y;
            VStack_6.z = pVVar14->z;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__DrawPlane);
              func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
              cRam_? = '\x01';
            }
            if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
            }
            pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar11 == (EventSystem *)0x0) goto code_?;
            bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                    EventSystem_IsPointerOverGameObject(pEVar11,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              pDVar23 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
              if ((pDVar23 == (DrawPlaneControllerUUI *)0x0) ||
                 (this = (pDVar23->fields).worldEditorDrawPlane, this == (WorldEditorDrawPlane *)0x0)
                 ) goto code_?;
              bVar10 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
                                (this,&VStack_6,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                VStack_15.z = VStack_6.z;
                VStack_15.x = VStack_6.x;
                VStack_15.y = VStack_6.y;
                pRVar24 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_25,&KStack_8,(MethodInfo *)0x0);
                uStack_26._0_4_ = pRVar24->_options;
                uStack_26._4_4_ = pRVar24->_cultureKey;
                VStack_15.y = VStack_15.y - (float)uStack_26._4_4_;
                VStack_15.x = VStack_15.x - (float)(undefined4)uStack_26;
                pOStack_27 = (Object *)(VStack_15.z - (float)pRVar24->_pattern);
                VStack_15.z = (float)pOStack_27;
                fVar28 = (float10)func_?(&VStack_15,0);
                fStack_18 = (float)fVar28;
                cStack_21 = '\x01';
              }
            }
          }
          fStack_17 = _UNK_?;
          ray.m_Origin.y = (float)KStack_8.key._cultureKey;
          ray.m_Origin.x = (float)KStack_8.key._options;
          ray.m_Origin.z = (float)KStack_8.key._pattern;
          ray.m_Direction.x = (float)KStack_8.value;
          ray.m_Direction.y = (float)(int)uStack_7;
          ray.m_Direction.z = (float)((ulonglong)uStack_7 >> 0x20);
          this_01 = CollisionDetection::CollisionDetection_MVHitAll
                              (ray,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
          if (this_01 != (List_1_VoxelHit_ *)0x0) {
            if ((this_01->fields)._size == 0) goto code_?;
            bStack_29 = 0;
            pLVar30 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                      List_1_VoxelHit__GetEnumerator
                                ((List_1_T_Enumerator_VoxelHit_ *)&stack0xfffffe98,this_01,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                                );
            uStack_26 = uStack_26 & 0xffffffff;
            auStack_9._0_4_ = pLVar30->_list;
            auStack_9._4_4_ = pLVar30->_index;
            auStack_9._8_4_ = pLVar30->_version;
            auStack_9._12_4_ = *(undefined4 *)&pLVar30->field_0xc;
            auStack_9._16_4_ = (pLVar30->_current).point.x;
            auStack_9._20_4_ = (pLVar30->_current).point.y;
            auStack_9._24_4_ = (pLVar30->_current).point.z;
            auStack_9._28_4_ = (pLVar30->_current).normal.x;
            auStack_9._32_4_ = (pLVar30->_current).normal.y;
            auStack_9._36_4_ = (pLVar30->_current).normal.z;
            auStack_9._40_2_ = (pLVar30->_current).cubePos.x;
            auStack_9._42_2_ = (pLVar30->_current).cubePos.y;
            auStack_9._44_4_ = *(undefined4 *)&(pLVar30->_current).cubePos.z;
            auStack_9._48_4_ = (pLVar30->_current).face;
            auStack_9[0x34] = (pLVar30->_current).isCubeHit;
            auStack_9._53_3_ = *(undefined3 *)&(pLVar30->_current).field_0x25;
            auStack_9._56_4_ = (pLVar30->_current).woId;
            auStack_9._60_4_ = (pLVar30->_current).cube;
            auStack_9._64_4_ = (pLVar30->_current).distance;
            auStack_9._68_4_ = (pLVar30->_current).collider;
            auStack_9._72_4_ = (pLVar30->_current).transform;
            auStack_9._76_4_ = *(undefined4 *)&(pLVar30->_current).field_0x3c;
            iStack_31 = (pLVar30->_current).interactionFlags;
            uStack_1 = 1;
            uVar32 = IStack_33._0_4_;
            pOStack_27 = (Object *)auStack_9;
            while( true ) {
              do {
                IStack_33._0_4_ = uVar32;
                bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[VoxelHit]::
                        List_1_T_Enumerator_VoxelHit__MoveNext
                                  ((List_1_T_Enumerator_VoxelHit_ *)auStack_9,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                                  );
                if (bVar10 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)auStack_9,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                             ,(MethodInfo *)uVar13);
                  *unaff_FS_OFFSET = uStack_3;
                  return bStack_29;
                }
                fStack_34 = (float)auStack_9._16_4_;
                fStack_35 = (float)auStack_9._20_4_;
                fStack_36 = (float)auStack_9._24_4_;
                fStack_37 = (float)auStack_9._28_4_;
                fStack_38 = (float)auStack_9._32_4_;
                fStack_39 = (float)auStack_9._36_4_;
                uVar32._0_2_ = auStack_9._40_2_;
                uVar32._2_2_ = auStack_9._42_2_;
                unique0x10000691 = auStack_9._44_4_;
                VStack_15.y = (float)iStack_31;
                VStack_15.z = (float)((ulonglong)iStack_31 >> 0x20);
                IStack_33.x = auStack_9._40_2_;
                IStack_33.y = auStack_9._42_2_;
                iStack_40 = auStack_9._48_4_;
                _bStack_f4 = auStack_9._52_4_;
                iStack_41 = auStack_9._56_4_;
                pCStack_42 = (Cube *)auStack_9._60_4_;
                RStack_20.m_Origin.z = (float)auStack_9._64_4_;
                RStack_20.m_Direction.x = (float)auStack_9._68_4_;
                RStack_20.m_Direction.y = (float)auStack_9._72_4_;
                RStack_20.m_Direction.z = (float)auStack_9._76_4_;
              } while ((fStack_18 <= (float)auStack_9._64_4_) && (cStack_21 != '\0'));
              if ((Transform *)auStack_9._72_4_ == (Transform *)0x0) break;
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)auStack_9._72_4_,(MethodInfo *)0x0);
              if (this_02 == (GameObject *)0x0) break;
              uVar13 = ZEXT48(this_02);
              bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
              uVar32 = IStack_33._0_4_;
              if (bVar10 != 0) {
                pRVar24 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_25,&KStack_8,(MethodInfo *)0x0);
                uVar13._0_4_ = pRVar24->_options;
                uVar13._4_4_ = pRVar24->_cultureKey;
                fVar28 = (float10)func_?();
                fStack_43 = (float)fVar28;
                uVar32 = IStack_33._0_4_;
                if (fStack_43 < fStack_17) {
                  (hit->point).x = fStack_34;
                  (hit->point).y = fStack_35;
                  (hit->point).z = fStack_36;
                  (hit->normal).x = fStack_37;
                  (hit->normal).y = fStack_38;
                  (hit->normal).z = fStack_39;
                  (hit->cubePos).x = IStack_33.x;
                  (hit->cubePos).y = IStack_33.y;
                  *(undefined4 *)&(hit->cubePos).z = stack0xffffff24;
                  hit->face = iStack_40;
                  hit->isCubeHit = bStack_44;
                  *(undefined3 *)&hit->field_0x25 = uStack_45;
                  hit->woId = iStack_41;
                  hit->cube = pCStack_42;
                  hit->distance = RStack_20.m_Origin.z;
                  hit->collider = (Collider *)RStack_20.m_Direction.x;
                  hit->transform = (Transform *)RStack_20.m_Direction.y;
                  *(float *)&hit->field_0x3c = RStack_20.m_Direction.z;
                  hit->interactionFlags = CONCAT44(VStack_15.z,VStack_15.y);
                  fStack_17 = fStack_43;
                  func_?(&hit->cube,0);
                  bStack_29 = 1;
                  uVar32 = IStack_33._0_4_;
                }
              }
            }
          }
        }
      }
    }
code_?:
    func_?();
    func_?();
    pcVar46 = (code *)swi(3);
    bVar10 = (*pcVar46)();
    return bVar10;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Camera get_MainCamera() */

Camera * Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_get_MainCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditModeObjectPicker);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__EditModeObjectPicker->static_fields->mainCamera = pCVar1;
    func_?();
  }
  return TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
}

