
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
    pVVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
             DefaultEventSystem_Input_get_mousePosition
                       (&RStack_3.m_Direction,(DefaultEventSystem_Input *)0x0,
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
                        (ray,(MVWorldObjectClient *)cr,(VoxelHit *)&stack0xffffff8c,INFINITY,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
      RStack_3.m_Direction.z = (float)in_stack_11;
      pCVar12 = *info;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar13 = (Cube *)RStack_3.m_Direction.z;
      pCVar14 = Cube::Cube_Clone_1((Cube *)RStack_3.m_Direction.z,(MethodInfo *)0x0);
      if (pCVar12 != (CubePickingInfo *)0x0) {
        pCVar15 = &pCVar12->fields;
        pCVar15->cube = pCVar14;
        puVar16 = &UNK_?;
        func_?();
        pCVar12 = *info;
        if (pCVar12 != (CubePickingInfo *)0x0) {
          (pCVar12->fields).iLocalPos.x = IStack_17.x;
          (pCVar12->fields).iLocalPos.y = IStack_17.y;
          (pCVar12->fields).iLocalPos.z = IStack_17.z;
          if (*info != (CubePickingInfo *)0x0) {
            ((*info)->fields).pickedFace = iStack_18;
            pCVar12 = *info;
            if (pCVar12 != (CubePickingInfo *)0x0) {
              (pCVar12->fields).point.x = (float)pCVar13;
              (pCVar12->fields).point.y = (float)puVar16;
              (pCVar12->fields).point.z = (float)pCVar15;
              pCVar12 = *info;
              if (pCVar12 != (CubePickingInfo *)0x0) {
                (pCVar12->fields).normal.x = (float)pCVar14;
                (pCVar12->fields).normal.y = fStack_19;
                (pCVar12->fields).normal.z = fStack_20;
                pCVar12 = *info;
                if ((cr != (MVCubeModelBase *)0x0) && (pCVar12 != (CubePickingInfo *)0x0)) {
                  pos.z._2_2_ = (short)((uint)pCVar15 >> 0x10);
                  pos.z._0_2_ = (pCVar12->fields).iLocalPos.z;
                  pos.y = (float)puVar16;
                  pos.x = (float)pCVar13;
                  EVar21 = Cube::Cube_GetEdge_1
                                     ((cr->fields)._.gameObject,(pCVar12->fields).cube,
                                      (pCVar12->fields).pickedFace,pos,(pCVar12->fields).iLocalPos,
                                      (MethodInfo *)0x0);
                  (pCVar12->fields).pickedEdge = EVar21;
                  pCVar12 = *info;
                  gameObject = (cr->fields)._.gameObject;
                  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
                            (pCVar12,gameObject,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  bVar1 = (*pcVar22)();
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
  puStack_4 = &stack0xfffffe9c;
  puVar5 = &stack0xfffffe9c;
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
    in_stack_6 = &MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__;
    func_?();
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._16_4_ = (Il2CppClass *)0x0;
  pIStack_8 = (Il2CppType *)0x0;
  ppIStack_9 = (Il2CppType **)0x0;
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
        method_00 = (MethodInfo *)&UNK_?;
        this = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          in_stack_13 = TypeInfo__MVInputWrapper;
          func_?();
        }
        pVVar14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            ((Vector3 *)auStack_7,(DefaultEventSystem_Input *)0x0,
                             (MethodInfo *)in_stack_6);
        pIStack_15 = (Il2CppGenericMethod *)pVVar14->x;
        pVVar14 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            ((Vector3 *)auStack_7,(DefaultEventSystem_Input *)0x0,
                             (MethodInfo *)in_stack_6);
        _Stack_30.genericMethod = pIStack_15;
        pIStack_16 = (InvokerMethod)0x0;
        fStack_17 = pVVar14->y;
        _Stack_34.rgctx_data = (Il2CppRGCTXData *)0x0;
        if (this != (Camera *)0x0) {
          pos.y = fStack_17;
          pos.x = (float)pIStack_15;
          pos.z = 0.0;
          pRVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                              (&RStack_19,this,pos,(MethodInfo *)0x0);
          cStack_20 = '\0';
          pMStack_21 = (MethodInfo *)(pRVar18->m_Origin).x;
          fStack_22 = (pRVar18->m_Origin).y;
          uVar23._0_4_ = (pRVar18->m_Origin).x;
          uVar23._4_4_ = (pRVar18->m_Origin).y;
          fStack_24 = (pRVar18->m_Origin).z;
          fStack_25 = (pRVar18->m_Direction).x;
          lStack_26._0_4_ = (pRVar18->m_Direction).y;
          lStack_26._4_4_ = (pRVar18->m_Direction).z;
          if (cRam_? == '\0') {
            method_00 = (MethodInfo *)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pDVar27 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
          if ((pDVar27 != (DrawPlaneControllerUUI *)0x0) &&
             (pWVar28 = (pDVar27->fields).worldEditorDrawPlane, pWVar28 != (WorldEditorDrawPlane *)0x0)
             ) {
            if ((pWVar28->fields).isActive != 0) {
              method_00 = (MethodInfo *)auStack_7;
              pVVar14 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                        MVWorldObject_get_WorldPosition
                                  ((Vector3 *)method_00,(MVWorldObject *)0x0,
                                   (MethodInfo *)in_stack_13);
              auStack_7._16_4_ = pVVar14->x;
              pIStack_8 = (Il2CppType *)pVVar14->y;
              ppIStack_9 = (Il2CppType **)pVVar14->z;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
              }
              pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar11 == (EventSystem *)0x0) goto code_?;
              bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                      EventSystem_IsPointerOverGameObject(pEVar11,(MethodInfo *)0x0);
              if (bVar10 == 0) {
                pDVar27 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
                if ((pDVar27 == (DrawPlaneControllerUUI *)0x0) ||
                   (pWVar28 = (pDVar27->fields).worldEditorDrawPlane,
                   pWVar28 == (WorldEditorDrawPlane *)0x0)) goto code_?;
                bVar10 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
                                  (pWVar28,(Vector3 *)(auStack_7 + 0x10),(MethodInfo *)0x0);
                if (bVar10 != 0) {
                  auStack_7._8_4_ = (float)ppIStack_9 - fStack_24;
                  fStack_17 = (float)pIStack_8 - fStack_22;
                  _Stack_30 = (_union_155)((float)auStack_7._16_4_ - (float)pMStack_21);
                  pIStack_16 = (InvokerMethod)auStack_7._8_4_;
                  fVar29 = (float10)func_?(&_Stack_30,0);
                  _Stack_34 = (_union_154)(float)fVar29;
                  cStack_20 = '\x01';
                }
              }
            }
            pIStack_15 = _UNK_?;
            ray.m_Origin.y = fStack_22;
            ray.m_Origin.x = (float)pMStack_21;
            ray.m_Origin.z = fStack_24;
            ray.m_Direction.x = fStack_25;
            ray.m_Direction.y = (float)(int)lStack_26;
            ray.m_Direction.z = (float)((ulonglong)lStack_26 >> 0x20);
            this_00 = CollisionDetection::CollisionDetection_MVHitAll
                                (ray,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
            if (this_00 != (List_1_VoxelHit_ *)0x0) {
              if ((this_00->fields)._size == 0) goto code_?;
              bStack_30 = 0;
              pLVar31 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                        List_1_VoxelHit__GetEnumerator
                                  ((List_1_T_Enumerator_VoxelHit_ *)&stack0xfffffea8,this_00,
                                   MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                                  );
              lStack_26 = ZEXT48((Object *)auStack_32) << 0x20;
              auStack_32._0_4_ = pLVar31->_list;
              auStack_32._4_4_ = pLVar31->_index;
              auStack_32._8_4_ = pLVar31->_version;
              auStack_32._12_4_ = *(undefined4 *)&pLVar31->field_0xc;
              auStack_32._16_4_ = (pLVar31->_current).point.x;
              auStack_32._20_4_ = (pLVar31->_current).point.y;
              auStack_32._24_4_ = (pLVar31->_current).point.z;
              auStack_32._28_4_ = (pLVar31->_current).normal.x;
              auStack_32._32_4_ = (pLVar31->_current).normal.y;
              auStack_32._36_4_ = (pLVar31->_current).normal.z;
              auStack_32._40_4_ = *(undefined4 *)&(pLVar31->_current).cubePos;
              pIStack_33 = *(InvokerMethod *)&(pLVar31->_current).cubePos.z;
              iStack_34 = (pLVar31->_current).face;
              bStack_35 = (pLVar31->_current).isCubeHit;
              uStack_36 = *(undefined3 *)&(pLVar31->_current).field_0x25;
              iStack_37 = (pLVar31->_current).woId;
              pCStack_38 = (pLVar31->_current).cube;
              fStack_39 = (pLVar31->_current).distance;
              pCStack_40 = (pLVar31->_current).collider;
              pTStack_41 = (pLVar31->_current).transform;
              fStack_42 = *(float *)&(pLVar31->_current).field_0x3c;
              iStack_43 = (pLVar31->_current).interactionFlags;
              uStack_1 = 1;
              uVar44 = _bStack_cc;
              while( true ) {
                do {
                  _bStack_cc = uVar44;
                  bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[VoxelHit]
                          ::List_1_T_Enumerator_VoxelHit__MoveNext
                                    ((List_1_T_Enumerator_VoxelHit_ *)auStack_32,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                                    );
                  if (bVar10 == 0) {
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                              ((Object *)auStack_32,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                               ,method_00);
                    *unaff_FS_OFFSET = uStack_3;
                    return bStack_30;
                  }
                  pMStack_21 = (MethodInfo *)auStack_32._16_4_;
                  fStack_22 = (float)auStack_32._20_4_;
                  fStack_24 = (float)auStack_32._24_4_;
                  fStack_25 = (float)auStack_32._28_4_;
                  fStack_45 = (float)auStack_32._32_4_;
                  auStack_7._0_4_ = auStack_32._36_4_;
                  auStack_7._4_4_ = auStack_32._40_4_;
                  auStack_7._8_4_ = pIStack_33;
                  fStack_17 = (float)iStack_43;
                  pIStack_16 = (InvokerMethod)((ulonglong)iStack_43 >> 0x20);
                  iStack_46 = iStack_34;
                  uVar44._0_1_ = bStack_35;
                  uVar44._1_3_ = uStack_36;
                  iStack_47 = iStack_37;
                  pCStack_48 = pCStack_38;
                  bStack_49 = bStack_35;
                  uStack_50 = uStack_36;
                  RStack_19.m_Origin.z = fStack_39;
                  RStack_19.m_Direction.x = (float)pCStack_40;
                  RStack_19.m_Direction.y = (float)pTStack_41;
                  RStack_19.m_Direction.z = fStack_42;
                } while (((float)_Stack_34 <= fStack_39) && (cStack_20 != '\0'));
                if (pTStack_41 == (Transform *)0x0) break;
                method_00 = (MethodInfo *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pTStack_41,(MethodInfo *)0x0);
                if (method_00 == (MethodInfo *)0x0) break;
                bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeInHierarchy((GameObject *)method_00,(MethodInfo *)0x0);
                uVar44 = _bStack_cc;
                if (bVar10 != 0) {
                  method_00 = pMStack_21;
                  fVar29 = (float10)func_?(uVar23);
                  auStack_7._12_4_ = (undefined4)fVar29;
                  uVar44 = _bStack_cc;
                  if ((float)auStack_7._12_4_ < (float)pIStack_15) {
                    (hit->point).x = (float)pMStack_21;
                    (hit->point).y = fStack_22;
                    (hit->point).z = fStack_24;
                    (hit->normal).x = fStack_25;
                    (hit->normal).y = fStack_45;
                    (hit->normal).z = (float)auStack_7._0_4_;
                    (hit->cubePos).x = auStack_7._4_2_;
                    (hit->cubePos).y = auStack_7._6_2_;
                    *(undefined4 *)&(hit->cubePos).z = auStack_7._8_4_;
                    hit->face = iStack_46;
                    hit->isCubeHit = bStack_49;
                    *(undefined3 *)&hit->field_0x25 = uStack_50;
                    hit->woId = iStack_47;
                    hit->cube = pCStack_48;
                    hit->distance = RStack_19.m_Origin.z;
                    hit->collider = (Collider *)RStack_19.m_Direction.x;
                    hit->transform = (Transform *)RStack_19.m_Direction.y;
                    *(float *)&hit->field_0x3c = RStack_19.m_Direction.z;
                    hit->interactionFlags = CONCAT44(pIStack_16,fStack_17);
                    pIStack_15 = (Il2CppGenericMethod *)auStack_7._12_4_;
                    func_?(&hit->cube,0);
                    bStack_30 = 1;
                    uVar44 = _bStack_cc;
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
    func_?();
    pcVar51 = (code *)swi(3);
    bVar10 = (*pcVar51)();
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

