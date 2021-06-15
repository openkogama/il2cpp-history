
/* Boolean GetPickingInfo(MVCubeModelBase, CubePickingInfo ByRef) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
               (MVCubeModelBase *cr,CubePickingInfo **info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff8c,0,0x48);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
             StandaloneInput_MousePosition
                       (&RStack_3.m_Direction,(StandaloneInput *)0x0,in_stack_4);
    if (this_00 != (Camera *)0x0) {
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                          (&RStack_3,this_00,*pVVar2,(MethodInfo *)0x0);
      fVar6 = 1.00893e-43;
      fVar7 = 0.0;
      uVar8 = (pRVar5->m_Origin).x;
      uVar9 = (pRVar5->m_Origin).y;
      uVar10 = (pRVar5->m_Origin).z;
      ray.m_Origin.z = (float)uVar10;
      ray.m_Origin.y = (float)uVar9;
      ray.m_Origin.x = (float)uVar8;
      uVar11 = (pRVar5->m_Direction).x;
      ray.m_Direction.x = (float)uVar11;
      RStack_3.m_Direction.y = (pRVar5->m_Direction).y;
      RStack_3.m_Direction.z = (pRVar5->m_Direction).z;
      puVar12 = &stack0xffffff8c;
      puVar13 = &UNK_?;
      func_?();
      ray.m_Direction.y = RStack_3.m_Direction.y;
      ray.m_Direction.z = RStack_3.m_Direction.z;
      bVar1 = CollisionDetection::CollisionDetection_MVHit
                        (ray,(MVWorldObjectClient *)cr,(VoxelHit *)&stack0xffffff8c,INFINITY,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
      RStack_3.m_Direction.z = (float)pCStack_14;
      pCVar15 = *info;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      pCVar16 = Cube::Cube_Clone_1((Cube *)RStack_3.m_Direction.z,(MethodInfo *)0x0);
      if (pCVar15 != (CubePickingInfo *)0x0) {
        (pCVar15->fields).cube = pCVar16;
        pCVar15 = *info;
        if (pCVar15 != (CubePickingInfo *)0x0) {
          (pCVar15->fields).iLocalPos.x = IStack_17.x;
          (pCVar15->fields).iLocalPos.y = IStack_17.y;
          (pCVar15->fields).iLocalPos.z = IStack_17.z;
          if (*info != (CubePickingInfo *)0x0) {
            ((*info)->fields).pickedFace = iStack_18;
            pCVar15 = *info;
            if (pCVar15 != (CubePickingInfo *)0x0) {
              (pCVar15->fields).point.x = (float)puVar13;
              (pCVar15->fields).point.y = (float)puVar12;
              (pCVar15->fields).point.z = fVar7;
              pCVar15 = *info;
              if (pCVar15 != (CubePickingInfo *)0x0) {
                (pCVar15->fields).normal.x = fVar6;
                (pCVar15->fields).normal.y = in_stack_19;
                (pCVar15->fields).normal.z = in_stack_20;
                pCVar15 = *info;
                if (cr != (MVCubeModelBase *)0x0) {
                  pCVar21 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                      ((DayNightCycle *)cr,(MethodInfo *)0x0);
                  pCVar22 = *info;
                  RStack_3.m_Direction.z = (float)pCVar21;
                  if ((pCVar22 != (CubePickingInfo *)0x0) &&
                     (pos.y = (float)puVar12, pos.x = (float)puVar13, pos.z = fVar7,
                     EVar23 = Cube::Cube_GetEdge_1
                                        ((GameObject *)pCVar21,(pCVar22->fields).cube,
                                         (pCVar22->fields).pickedFace,pos,(pCVar22->fields).iLocalPos,
                                         (MethodInfo *)0x0), pCVar15 != (CubePickingInfo *)0x0)) {
                    (pCVar15->fields).pickedEdge = EVar23;
                    pCVar15 = *info;
                    pCVar21 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                        ((DayNightCycle *)cr,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                      func_?();
                    }
                    SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
                              (pCVar15,(GameObject *)pCVar21,(MethodInfo *)0x0);
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
  pcVar24 = (code *)swi(3);
  bVar1 = (*pcVar24)();
  return bVar1;
}


/* Boolean IsHitPickup(VoxelHit) */

bool Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_IsHitPickup
               (VoxelHit hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hit.transform != (Transform *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (hit.transform,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                    ((Component_1 *)this,
                     GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                    );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?(0);
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
  puStack_4 = &stack0xfffffe78;
  puVar5 = &stack0xfffffe78;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  VStack_6.z = 0.0;
  uStack_7 = 0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  VStack_6.x = 0.0;
  VStack_6.y = 0.0;
  uStack_13 = 0;
  func_?(&pLStack_14,0,0x58);
  func_?();
  puStack_15 = (undefined4 *)&stack0xfffffe78;
  puStack_4 = &stack0xfffffe78;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_15 = (undefined4 *)&stack0xfffffe78, puStack_4 = &stack0xfffffe78,
     (TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    puStack_15 = (undefined4 *)&stack0xfffffe78;
    puStack_4 = &stack0xfffffe78;
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar16 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar16 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) goto code_?;
    bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar17 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar17 == MVJoinState__Enum_Playing) {
        this_00 = EditModeObjectPicker_get_MainCamera((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar18 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition(&VStack_19,(StandaloneInput *)0x0,in_stack_20)
        ;
        uVar21 = pVVar18->x;
        uVar22 = pVVar18->y;
        fStack_23 = pVVar18->z;
        pIStack_24 = (Il2CppMethodPointer)uVar21;
        fStack_25 = (float)uVar22;
        pVVar18 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition(&VStack_26,(StandaloneInput *)0x0,in_stack_20)
        ;
        uVar27 = pVVar18->x;
        uVar28 = pVVar18->y;
        VStack_19.z = pVVar18->z;
        MStack_29.invoker_method = (InvokerMethod)0x0;
        uStack_30 = 0;
        uStack_31 = 0;
        fStack_32 = 0.0;
        MStack_29.virtualMethodPointer = (Il2CppMethodPointer)uVar28;
        MStack_29.methodPointer = pIStack_24;
        VStack_19.x = (float)uVar27;
        VStack_19.y = (float)uVar28;
        func_?();
        if (this_00 == (Camera *)0x0) {
code_?:
          func_?();
          pcVar33 = (code *)swi(3);
          bVar16 = (*pcVar33)();
          return bVar16;
        }
        pos.y = (float)uStack_31;
        pos.x = (float)uStack_30;
        pos.z = fStack_32;
        pRVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                            (&RStack_35,this_00,pos,in_stack_36);
        cStack_37 = '\0';
        fStack_8 = (pRVar34->m_Origin).x;
        fStack_9 = (pRVar34->m_Origin).y;
        fStack_10 = (pRVar34->m_Origin).z;
        fStack_11 = (pRVar34->m_Direction).x;
        uStack_7._0_4_ = (pRVar34->m_Direction).y;
        uStack_7._4_4_ = (pRVar34->m_Direction).z;
        fStack_38 = 0.0;
        bVar16 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
        if (bVar16 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                              (&VStack_26,(MethodInfo *)0x0);
          VStack_6.x = pVVar18->x;
          VStack_6.y = pVVar18->y;
          VStack_6.z = pVVar18->z;
          bVar16 = DrawPlane::DrawPlane_Pick(&VStack_6,(MethodInfo *)0x0);
          fVar39 = VStack_6.z;
          if (bVar16 != 0) {
            fStack_25 = VStack_6.x;
            fStack_23 = VStack_6.y;
            puVar40 = (undefined8 *)func_?(&VStack_26,&fStack_8,0);
            uVar41 = *puVar40;
            fVar42 = *(float *)(puVar40 + 1);
            VStack_19.y = (float)uVar41;
            VStack_19.z = (float)((ulonglong)uVar41 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
              uVar41 = CONCAT44(VStack_19.z,VStack_19.y);
            }
            a.y = fStack_23;
            a.x = fStack_25;
            a.z = fVar39;
            b.z = fVar42;
            b.x = (float)(int)uVar41;
            b.y = (float)(int)((ulonglong)uVar41 >> 0x20);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                (&VStack_26,a,b,(MethodInfo *)0x0);
            uStack_13._0_4_ = pVVar18->x;
            uStack_13._4_4_ = pVVar18->y;
            fStack_12 = pVVar18->z;
            fVar43 = (float10)func_?(&uStack_13,0);
            fStack_38 = (float)fVar43;
            cStack_37 = '\x01';
          }
        }
        fStack_23 = _UNK_?;
        ray.m_Origin.y = fStack_9;
        ray.m_Origin.x = fStack_8;
        ray.m_Origin.z = fStack_10;
        ray.m_Direction.x = fStack_11;
        ray.m_Direction.y = (float)(int)uStack_7;
        ray.m_Direction.z = (float)((ulonglong)uStack_7 >> 0x20);
        method_00 = (MethodInfo *)
                    CollisionDetection::CollisionDetection_MVHitAll
                              (ray,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        pOVar44 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)method_00,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
        if (pOVar44 != (Object *)0x0) {
          bStack_45 = 0;
          pLVar46 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__GetEnumerator
                              ((List_1_T_Enumerator_UnityEngine_UIVertex_ *)&stack0xfffffe84,
                               (List_1_UnityEngine_UIVertex_ *)method_00,
                               MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                              );
          pLStack_14 = pLVar46->l;
          iStack_47 = pLVar46->next;
          iStack_48 = pLVar46->ver;
          fStack_49 = (pLVar46->current).position.x;
          fStack_50 = (pLVar46->current).position.y;
          fStack_51 = (pLVar46->current).position.z;
          fStack_52 = (pLVar46->current).normal.x;
          fStack_53 = (pLVar46->current).normal.y;
          fStack_54 = (pLVar46->current).normal.z;
          fStack_55 = (pLVar46->current).tangent.x;
          fStack_56 = (pLVar46->current).tangent.y;
          fStack_57 = (pLVar46->current).tangent.z;
          fStack_58 = (pLVar46->current).tangent.w;
          iStack_59 = (pLVar46->current).color.rgba;
          uStack_60._0_1_ = (pLVar46->current).color.r;
          uStack_60._1_1_ = (pLVar46->current).color.g;
          uStack_60._2_1_ = (pLVar46->current).color.b;
          uStack_60._3_1_ = (pLVar46->current).color.a;
          fStack_61 = (pLVar46->current).uv0.x;
          fStack_62 = (pLVar46->current).uv0.y;
          fStack_63 = (pLVar46->current).uv1.x;
          fStack_64 = (pLVar46->current).uv1.y;
          fStack_65 = (pLVar46->current).uv2.x;
          uStack_66 = *(undefined8 *)&(pLVar46->current).uv2.y;
          uStack_1 = 0;
          while (cVar67 = func_?(), cVar67 != '\0') {
            method_01 = &MStack_29;
            pfVar68 = (float *)func_?();
            fStack_69 = *pfVar68;
            fStack_70 = pfVar68[1];
            fStack_71 = pfVar68[2];
            fStack_72 = pfVar68[3];
            fStack_73 = pfVar68[4];
            fStack_74 = pfVar68[5];
            fStack_75 = pfVar68[6];
            fStack_76 = pfVar68[7];
            uStack_31 = (undefined4)*(undefined8 *)(pfVar68 + 0x10);
            fStack_32 = (float)((ulonglong)*(undefined8 *)(pfVar68 + 0x10) >> 0x20);
            fStack_77 = pfVar68[8];
            fStack_78 = pfVar68[9];
            fStack_79 = pfVar68[10];
            pCStack_80 = (Cube *)pfVar68[0xb];
            RStack_35.m_Origin.z = pfVar68[0xc];
            RStack_35.m_Direction.x = pfVar68[0xd];
            RStack_35.m_Direction.y = pfVar68[0xe];
            RStack_35.m_Direction.z = pfVar68[0xf];
            if ((RStack_35.m_Origin.z < fStack_38) || (cStack_37 == '\0')) {
              if (((Transform *)RStack_35.m_Direction.y == (Transform *)0x0) ||
                 (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject
                                      ((Component_1 *)RStack_35.m_Direction.y,method_00),
                 this_01 == (GameObject *)0x0)) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_01,method_01);
              if (bVar16 != 0) {
                puVar40 = (undefined8 *)func_?();
                fVar39 = *(float *)(puVar40 + 1);
                VStack_19.y = (float)*puVar40;
                VStack_19.z = (float)((ulonglong)*puVar40 >> 0x20);
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                a_00.y = VStack_19.z;
                a_00.x = VStack_19.y;
                a_00.z = fVar39;
                b_00.y = fStack_70;
                b_00.x = fStack_69;
                b_00.z = fStack_71;
                VStack_19.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                                        (a_00,b_00,(MethodInfo *)0x0);
                if (VStack_19.z < fStack_23) {
                  bStack_45 = 1;
                  (hit->point).x = fStack_69;
                  (hit->point).y = fStack_70;
                  (hit->point).z = fStack_71;
                  (hit->normal).x = fStack_72;
                  (hit->normal).y = fStack_73;
                  (hit->normal).z = fStack_74;
                  *(float *)&hit->cubePos = fStack_75;
                  *(float *)&(hit->cubePos).z = fStack_76;
                  hit->face = (int32_t)fStack_77;
                  *(float *)&hit->isCubeHit = fStack_78;
                  hit->woId = (int32_t)fStack_79;
                  hit->cube = pCStack_80;
                  hit->distance = RStack_35.m_Origin.z;
                  hit->collider = (Collider *)RStack_35.m_Direction.x;
                  hit->transform = (Transform *)RStack_35.m_Direction.y;
                  *(float *)&hit->field_0x3c = RStack_35.m_Direction.z;
                  hit->interactionFlags = CONCAT44(fStack_32,uStack_31);
                  fStack_23 = VStack_19.z;
                }
              }
            }
          }
          *puStack_15 = 0x149;
          uStack_1 = 0xffffffff;
          func_?();
          goto code_?;
        }
      }
    }
  }
  bStack_45 = 0;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return bStack_45;
}


/* Camera get_MainCamera() */

Camera * Assembly-CSharp.dll::EditModeObjectPicker::EditModeObjectPicker_get_MainCamera
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    TypeInfo__EditModeObjectPicker->static_fields->mainCamera = pCVar1;
  }
  return TypeInfo__EditModeObjectPicker->static_fields->mainCamera;
}

