
/* Void Start() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Start(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)
           func_?(TypeInfo__UnityEngine__Vector3,(this->fields).pointsStored);
  (this->fields).saved = pVVar1;
  if (pVVar1 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
    (this->fields).savedUp = pVVar1;
    pVVar1 = (this->fields).saved;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)
               func_?(TypeInfo__UnityEngine__Vector3,
                               pVVar1->max_length * (this->fields).segmentsPerPoint);
      (this->fields).points = pVVar1;
      if (pVVar1 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)
                 func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
        fVar2 = _UNK_?;
        (this->fields).pointsUp = pVVar1;
        fVar3 = (this->fields).pointDistance;
        (this->fields).tRatio = fVar2 / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar3 * fVar3;
        pGVar4 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar4,StringLiteral_Trail,(MethodInfo *)0x0);
        (this->fields).trail = pGVar4;
        if (pGVar4 != (GameObject *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)(auStack_7 + 4),(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar5,*pVVar6,(MethodInfo *)0x0);
            pGVar4 = (this->fields).trail;
            if (pGVar4 != (GameObject *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar4,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Quaternion);
              }
              pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                 ((Quaternion *)auStack_7,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar5,*pQVar8,(MethodInfo *)0x0);
                pGVar4 = (this->fields).trail;
                if (pGVar4 != (GameObject *)0x0) {
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                     ((Vector3 *)(auStack_7 + 4),(MethodInfo *)0x0);
                  if (pTVar5 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar5,*pVVar6,(MethodInfo *)0x0);
                    pGVar4 = (this->fields).trail;
                    if (pGVar4 != (GameObject *)0x0) {
                      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_85
                                          (pGVar4,
                                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                          );
                      pGVar4 = (this->fields).trail;
                      if (pGVar4 != (GameObject *)0x0) {
                        pWVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_AddComponent_85
                                           (pGVar4,
                                            UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                           );
                        (this->fields).mRenderer = (Renderer *)pWVar9;
                        if (this_01 != (Worker *)0x0) {
                          pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                    MeshFilter_get_mesh((MeshFilter *)this_01,(MethodInfo *)0x0);
                          source = (this->fields).material;
                          (this->fields).mesh = pMVar10;
                          this_02 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                                    (this_02,source,(MethodInfo *)0x0);
                          (this->fields).trailMaterial = this_02;
                          if (this_02 != (Material *)0x0) {
                            pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                      Material_GetColor((Color *)auStack_7,this_02,
                                                        StringLiteral__TintColor,(MethodInfo *)0x0);
                            this_00 = (this->fields).mRenderer;
                            (this->fields).fadeOutRatio = pCVar11->a;
                            if (this_00 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial
                                        (this_00,(this->fields).trailMaterial,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Update(TrailArc *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffd88;
  ppIVar5 = in_stack_6;
  _Var7 = in_stack_7;
  puVar8 = &stack0xfffffd88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppIVar5 = in_stack_6;
    _Var7 = in_stack_7;
    puVar8 = puStack_4;
  }
  puStack_4 = puVar8;
  fStack_9 = 0.0;
  uStack_10 = 0;
  uStack_11 = 0;
  fStack_12 = 0.0;
  func_?();
  uStack_1 = 0;
  method_00 = (MethodInfo *)&UNK_?;
  puStack_4 = &stack0xfffffd88;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar13 == (Transform *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    puStack_14 = (undefined *)func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)auStack_16,pTVar13,(MethodInfo *)0x0);
    auStack_16._20_8_ = *(undefined8 *)pVVar15;
    fStack_17 = pVVar15->z;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pVVar18 = (this->fields).saved;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if (pVVar18 != (Vector3__Array *)0x0) {
        unaff_EBX = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
        in_stack_20 = (MethodInfo *)0x0;
        if (unaff_EBX != (MethodInfo *)0x0) {
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                              ((Vector3 *)auStack_16,(Transform *)unaff_EBX,0.0,0.0,
                               (float)((uint)(this->fields).pointDistance ^ _UNK_?),
                               (MethodInfo *)0x0);
          fVar21 = pVVar15->y;
          fVar22 = pVVar15->z;
          if (pVStack_19 < (Vector2__Array *)pVVar18->max_length) {
            pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
            pVVar18->vector[(int)pVStack_19].y = fVar21;
            pVVar18->vector[(int)pVStack_19].z = fVar22;
            pVVar18 = (this->fields).savedUp;
            pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
            if (pVVar18 != (Vector3__Array *)0x0) {
              _Var7.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
              in_stack_23.rgctx_data = (Il2CppRGCTXData *)0x0;
              if (pTVar13 != (Transform *)0x0) {
                in_stack_24 = (MethodInfo *)auStack_16;
                in_stack_25.genericMethod = (Il2CppGenericMethod *)&UNK_?;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)in_stack_24,pTVar13,(MethodInfo *)0x0);
                fVar21 = pVVar15->y;
                fVar22 = pVVar15->z;
                if ((Vector2__Array *)pVVar18->max_length <= pVStack_19) goto code_?;
                pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
                pVVar18->vector[(int)pVStack_19].y = fVar21;
                pVVar18->vector[(int)pVStack_19].z = fVar22;
                iVar26 = (this->fields).savedCnt;
                pVVar18 = (this->fields).saved;
                (this->fields).savedCnt = iVar26 + 1U;
                if (pVVar18 != (Vector3__Array *)0x0) {
                  if (pVVar18->max_length <= iVar26 + 1U) goto code_?;
                  pVVar18->vector[iVar26 + 1].x = (float)auStack_16._20_4_;
                  pVVar18->vector[iVar26 + 1].y = (float)auStack_16._24_4_;
                  pVVar18->vector[iVar26 + 1].z = fStack_17;
                  pVVar18 = (this->fields).savedUp;
                  pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
                  if ((pVVar18 != (Vector3__Array *)0x0) &&
                     (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0),
                     pTVar13 != (Transform *)0x0)) {
                    in_stack_27.genericMethod = (Il2CppGenericMethod *)auStack_16;
                    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)in_stack_27.genericMethod,pTVar13,
                                         (MethodInfo *)0x0);
                    fVar21 = pVVar15->y;
                    fVar22 = pVVar15->z;
                    if (pVStack_19 < (Vector2__Array *)pVVar18->max_length) {
                      pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
                      pVVar18->vector[(int)pVStack_19].y = fVar21;
                      pVVar18->vector[(int)pVStack_19].z = fVar22;
                      piVar28 = &(this->fields).savedCnt;
                      *piVar28 = *piVar28 + 1;
                      pVStack_19 = (Vector2__Array *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                             ((MethodInfo *)0x0);
                      (this->fields).lastPointCreationTime = (float)pVStack_19;
                      (this->fields).initialized = 1;
                      goto code_?;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
          }
        }
      }
      goto code_?;
    }
code_?:
    if ((this->fields).printSavedPoints != 0) {
      TrailArc_printPoints(this,(MethodInfo *)0x0);
    }
    if ((this->fields).printSegmentPoints != 0) {
      TrailArc_printAllPoints(this,(MethodInfo *)0x0);
    }
    if ((this->fields).Emit == 0) {
      if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
        (this->fields).emittingDone = 1;
        goto code_?;
      }
      pVVar18 = (this->fields).saved;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      in_stack_29 = (MethodInfo *)0x0;
      if (pTVar13 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                          ((Vector3 *)auStack_16,pTVar13,0.0,0.0,(this->fields).pointDistance,
                           (MethodInfo *)0x0);
      fVar21 = pVVar15->y;
      fVar22 = pVVar15->z;
      if ((Vector2__Array *)pVVar18->max_length <= pVStack_19) goto code_?;
      pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
      pVVar18->vector[(int)pVStack_19].y = fVar21;
      pVVar18->vector[(int)pVStack_19].z = fVar22;
      pVVar18 = (this->fields).savedUp;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if ((pVVar18 == (Vector3__Array *)0x0) ||
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
      goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)auStack_16,pTVar13,(MethodInfo *)0x0);
      fVar21 = pVVar15->y;
      fVar22 = pVVar15->z;
      if ((Vector2__Array *)pVVar18->max_length <= pVStack_19) goto code_?;
      pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
      pVVar18->vector[(int)pVStack_19].y = fVar21;
      pVVar18->vector[(int)pVStack_19].z = fVar22;
      iVar26 = (this->fields).savedCnt;
      (this->fields).savedCnt = iVar26 + 1;
      TrailArc_findCoordinates(this,iVar26 + -2,(MethodInfo *)0x0);
      pVVar18 = (this->fields).saved;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      fVar22 = (this->fields).pointDistance;
      if (pTVar13 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                          ((Vector3 *)auStack_16,pTVar13,0.0,0.0,fVar22 + fVar22,(MethodInfo *)0x0);
      fVar21 = pVVar15->y;
      fVar22 = pVVar15->z;
      if ((Vector2__Array *)pVVar18->max_length <= pVStack_19) goto code_?;
      pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
      pVVar18->vector[(int)pVStack_19].y = fVar21;
      pVVar18->vector[(int)pVStack_19].z = fVar22;
      pVVar18 = (this->fields).savedUp;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar13 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)auStack_16,pTVar13,(MethodInfo *)0x0);
      fVar21 = pVVar15->y;
      fVar22 = pVVar15->z;
      if (pVStack_19 < (Vector2__Array *)pVVar18->max_length) {
        pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
        pVVar18->vector[(int)pVStack_19].y = fVar21;
        pVVar18->vector[(int)pVStack_19].z = fVar22;
        iVar26 = (this->fields).savedCnt;
        (this->fields).savedCnt = iVar26 + 1;
        TrailArc_findCoordinates(this,iVar26 + -2,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((this->fields).emittingDone != 0) {
      (this->fields).Emit = 0;
code_?:
      if ((this->fields).Emit == 0) {
code_?:
        if ((this->fields).displayCnt == (this->fields).pointCnt) {
          pMVar30 = (this->fields).trailMaterial;
          if (pMVar30 != (Material *)0x0) {
            pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                ((Color *)auStack_32,pMVar30,StringLiteral__TintColor,
                                 (MethodInfo *)0x0);
            auStack_32._0_4_ = pCVar31->r;
            auStack_32._4_4_ = pCVar31->g;
            fStack_33 = pCVar31->b;
            fStack_34 = pCVar31->a;
            uStack_35 = CONCAT44((this->fields).fadeOutRatio,(undefined4)uStack_35);
            pVStack_19 = (Vector2__Array *)(this->fields).lifeTimeRatio;
            auStack_16._16_4_ =
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
            VStack_36.z = fStack_34 - (float)pVStack_19 * uStack_35._4_4_ * (float)auStack_16._16_4_
            ;
            if (VStack_36.z <= _UNK_?) {
              if ((this->fields).printResults != 0) {
                pVStack_19 = (Vector2__Array *)(this->fields).pointCnt;
                arg1 = (Object *)func_?();
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                message = mscorlib.dll::System::String::String_Concat
                                    ((Object *)StringLiteral_Trail_effect_ending_with_a_segme,arg1,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                          ((Object *)message,(MethodInfo *)0x0);
              }
              pGVar37 = (this->fields).trail;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar37,(MethodInfo *)0x0);
              pGVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar37,(MethodInfo *)0x0);
              goto code_?;
            }
            pMVar30 = (this->fields).trailMaterial;
            fStack_38 = (float)auStack_32._0_4_;
            VStack_36.x = (float)auStack_32._4_4_;
            VStack_36.y = fStack_33;
            if (pMVar30 != (Material *)0x0) {
              value.y = (float)auStack_32._4_4_;
              value.x = (float)auStack_32._0_4_;
              value.z = fStack_33;
              value.w = VStack_36.z;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar30,StringLiteral__TintColor,value,(MethodInfo *)in_stack_39);
              goto code_?;
            }
          }
          goto code_?;
        }
      }
      if ((this->fields).displayCnt < (this->fields).pointCnt) {
        uStack_35 = CONCAT44((this->fields).elapsedInsertionTime,(undefined4)uStack_35);
        pVStack_19 = (Vector2__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
        fVar22 = (this->fields).averageInsertionTime;
        (this->fields).elapsedInsertionTime = (float)pVStack_19 + uStack_35._4_4_;
        if (fVar22 < (float)pVStack_19 + uStack_35._4_4_) {
          iVar26 = (this->fields).displayCnt;
          do {
            fVar21 = (this->fields).elapsedInsertionTime - fVar22;
            iVar40 = iVar26 + 1;
            if ((this->fields).pointCnt <= iVar26) {
              iVar40 = iVar26;
            }
            (this->fields).elapsedInsertionTime = fVar21;
            iVar26 = iVar40;
          } while (fVar22 < fVar21);
          (this->fields).displayCnt = iVar40;
        }
      }
      if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
        this_00 = (this->fields).mRenderer;
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    (this_00,0,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      else {
        method_02 = (MethodInfo *)(this->fields).mRenderer;
        if (method_02 != (MethodInfo *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)method_02,1,(MethodInfo *)0x0);
          iStack_41 = (this->fields).displayCnt;
          iVar26 = (this->fields).maxPointsDrawn;
          (this->fields).lifeTimeRatio = _UNK_? / (this->fields).lifetime;
          if ((iVar26 < iStack_41) && (0 < iVar26)) {
            iStack_41 = iVar26;
          }
          pVStack_42 = (Vector3__Array *)func_?();
          pVStack_19 = (Vector2__Array *)func_?();
          _Stack_5c.rgctx_data = (Il2CppRGCTXData *)func_?();
          auStack_16._16_4_ = func_?();
          fStack_43 = _UNK_? / (float)(iStack_41 + -1);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
          if ((this_01 != (Camera *)0x0) &&
             (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this_01,method_02),
             pTVar13 != (Transform *)0x0)) {
            method_01.genericMethod = (Il2CppGenericMethod *)&UNK_?;
            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)auStack_44,pTVar13,(MethodInfo *)0x0);
            auStack_16._4_4_ = pVVar15->x;
            auStack_16._8_4_ = pVVar15->y;
            auStack_16._12_4_ = pVVar15->z;
            iVar26 = 0;
            while (iStack_45 = iVar26, iVar26 < iStack_41) {
              pVVar18 = (this->fields).points;
              if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
              uVar46 = ((this->fields).displayCnt - iStack_41) + iVar26;
              if (pVVar18->max_length <= uVar46) goto code_?;
              auStack_16._20_8_ = *(double *)((int)pVVar18 + uVar46 * 0xc + 0x10);
              fStack_47 = *(float *)((int)pVVar18 + uVar46 * 0xc + 0x18);
              pCVar48 = (this->fields).colors;
              _Stack_58 = (_union_155)((float)iVar26 * fStack_43);
              if (pCVar48 == (Color__Array *)0x0) goto code_?;
              iVar49 = pCVar48->max_length;
              if (iVar49 == 0) {
                pRVar50 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_zero
                                    ((Rect *)&stack0xfffffdc4,(MethodInfo *)0x0);
                fStack_51 = pRVar50->m_XMin;
                auStack_44._0_4_ = pRVar50->m_YMin;
                unique0x10002471 = *(double *)&pRVar50->m_Width;
                UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                          ((Color *)&stack0xfffffdb4,(MethodInfo *)0x0);
                unaff_EBX = (MethodInfo *)&stack0xfffffda4;
                in_stack_20 = pMStack_52;
code_?:
                a_00.g = (float)auStack_44._0_4_;
                a_00.r = fStack_51;
                a_00.b = (float)auStack_44._4_4_;
                a_00.a = (float)in_stack_20;
                b.g = (float)in_stack_53;
                b.r = (float)in_stack_54;
                b.b = (float)ppIVar5;
                b.a = (float)_Var7.rgctx_data;
                pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                    ((Color *)unaff_EBX,a_00,b,(float)in_stack_25,
                                     in_stack_24);
              }
              else {
                if (pCVar48 == (Color__Array *)0x0) goto code_?;
                if (iVar49 == 1) {
                  pRVar50 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_zero
                                      ((Rect *)&stack0xfffffde4,(MethodInfo *)0x0);
                  fStack_51 = pRVar50->m_XMin;
                  auStack_44._0_4_ = pRVar50->m_YMin;
                  unique0x10002469 = *(double *)&pRVar50->m_Width;
                  if ((this->fields).colors != (Color__Array *)0x0) {
                    pfVar55 = (float *)func_?();
                    in_stack_24 = (MethodInfo *)0x0;
                    in_stack_54 = (Il2CppClass *)*pfVar55;
                    in_stack_53 = (MethodInfo *)pfVar55[1];
                    ppIVar5 = (Il2CppType **)pfVar55[2];
                    _Var7 = (_union_154)((_union_154 *)(pfVar55 + 3))->rgctx_data;
                    unaff_EBX = (MethodInfo *)&stack0xfffffdd4;
                    in_stack_20 = pMStack_52;
                    in_stack_25 = _Stack_58;
                    goto code_?;
                  }
                  goto code_?;
                }
                if (iVar49 == 2) {
                  pfVar55 = (float *)func_?();
                  fStack_51 = *pfVar55;
                  auStack_44._0_4_ = pfVar55[1];
                  unique0x10002461 = *(double *)(pfVar55 + 2);
                  if ((this->fields).colors != (Color__Array *)0x0) {
                    pfVar55 = (float *)func_?();
                    in_stack_24 = (MethodInfo *)0x0;
                    in_stack_54 = (Il2CppClass *)*pfVar55;
                    in_stack_53 = (MethodInfo *)pfVar55[1];
                    ppIVar5 = (Il2CppType **)pfVar55[2];
                    _Var7 = (_union_154)((_union_154 *)(pfVar55 + 3))->rgctx_data;
                    unaff_EBX = (MethodInfo *)&stack0xfffffdf4;
                    in_stack_20 = pMStack_52;
                    in_stack_25 = _Stack_58;
                    goto code_?;
                  }
                  goto code_?;
                }
                fVar22 = (float)(int)(iVar49 - 1);
                _Stack_20 = (_union_155)(fVar22 - fVar22 * (float)_Stack_58);
                if ((float)_Stack_20 == fVar22) {
                  pCVar31 = (Color *)func_?();
                }
                else {
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  register0x00001200 = (double)(float)_Stack_20;
                  fVar56 = (float10)func_?();
                  uStack_35 = CONCAT44((float)fVar56,(undefined4)uStack_35);
                  _Stack_20.genericMethod =
                       (Il2CppGenericMethod *)(_Stack_20.genericMethod - (float)(int)fVar56);
                  if ((this->fields).colors == (Color__Array *)0x0) goto code_?;
                  pfVar55 = (float *)func_?();
                  fStack_51 = *pfVar55;
                  auStack_44._0_4_ = pfVar55[1];
                  unique0x10002435 = *(double *)(pfVar55 + 2);
                  if ((this->fields).colors == (Color__Array *)0x0) goto code_?;
                  pCVar31 = (Color *)func_?();
                  in_stack_24 = (MethodInfo *)0x0;
                  in_stack_54 = (Il2CppClass *)pCVar31->r;
                  in_stack_53 = (MethodInfo *)pCVar31->g;
                  ppIVar5 = (Il2CppType **)pCVar31->b;
                  _Var7 = (_union_154)pCVar31->a;
                  unaff_EBX = (MethodInfo *)&stack0xfffffd94;
                  a.g = (float)auStack_44._0_4_;
                  a.r = fStack_51;
                  a.b = (float)auStack_44._4_4_;
                  a.a = (float)pMStack_52;
                  in_stack_25 = _Stack_20;
                  pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                      ((Color *)unaff_EBX,a,*pCVar31,(float)_Stack_20,
                                       (MethodInfo *)0x0);
                  iVar26 = iStack_45;
                  in_stack_20 = pMStack_52;
                }
              }
              fStack_51 = pCVar31->r;
              auStack_44._0_4_ = pCVar31->g;
              unique0x10002479 = *(double *)&pCVar31->b;
              if ((Color__Array *)auStack_16._16_4_ == (Color__Array *)0x0) goto code_?;
              _Stack_20.genericMethod = (Il2CppGenericMethod *)(iVar26 * 2);
              pfVar55 = (float *)func_?();
              *pfVar55 = fStack_51;
              pfVar55[1] = (float)auStack_44._0_4_;
              pfVar55[2] = (float)auStack_44._4_4_;
              pfVar55[3] = (float)pMStack_52;
              fStack_17 = (float)(iVar26 * 2 + 1);
              pfVar55 = (float *)func_?();
              *pfVar55 = fStack_51;
              pfVar55[1] = (float)auStack_44._0_4_;
              pfVar55[2] = (float)auStack_44._4_4_;
              pfVar55[3] = (float)pMStack_52;
              pSVar57 = (this->fields).widths;
              if (pSVar57 == (Single__Array *)0x0) goto code_?;
              iVar49 = pSVar57->max_length;
              fVar22 = _UNK_?;
              if (iVar49 != 0) {
                if (pSVar57 == (Single__Array *)0x0) goto code_?;
                if (iVar49 == 1) {
                  fVar56 = (float10)func_?();
                  uStack_58 = (double)CONCAT44((float)fVar56,(undefined4)uStack_58);
                  fVar22 = (float)fVar56;
                }
                else if (iVar49 == 2) {
                  fVar56 = (float10)func_?();
                  uStack_35 = CONCAT44((float)fVar56,(undefined4)uStack_35);
                  if ((this->fields).widths == (Single__Array *)0x0) goto code_?;
                  fVar56 = (float10)func_?();
                  fVar22 = (float)fVar56;
                  uStack_58._4_4_ = fVar22;
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                     (uStack_35._4_4_,uStack_58._4_4_,(float)_Stack_58,
                                      (MethodInfo *)0x0);
                  uStack_58 = (double)CONCAT44(fVar22,(undefined4)uStack_58);
                }
                else {
                  fVar22 = (float)(int)(iVar49 - 1);
                  fStack_59 = fVar22 - fVar22 * (float)_Stack_58;
                  if (fStack_59 == fVar22) {
                    fVar56 = (float10)func_?();
                    uStack_58 = (double)CONCAT44((float)fVar56,(undefined4)uStack_58);
                    fVar22 = (float)fVar56;
                  }
                  else {
                    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                      func_?();
                    }
                    register0x00001200 = (double)fStack_59;
                    fVar56 = (float10)func_?();
                    uStack_35 = CONCAT44((float)fVar56,(undefined4)uStack_35);
                    fStack_59 = fStack_59 - (float)(int)fVar56;
                    if ((this->fields).widths == (Single__Array *)0x0) goto code_?;
                    fVar56 = (float10)func_?();
                    uStack_58 = (double)CONCAT44((float)fVar56,(undefined4)uStack_58);
                    if ((this->fields).widths == (Single__Array *)0x0) goto code_?;
                    fVar56 = (float10)func_?();
                    uStack_35 = CONCAT44((float)fVar56,(undefined4)uStack_35);
                    fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                       (uStack_58._4_4_,(float)fVar56,fStack_59,(MethodInfo *)0x0);
                    uStack_58 = (double)CONCAT44(fVar22,(undefined4)uStack_58);
                  }
                }
              }
              fStack_59 = fVar22;
              if ((this->fields).faceCamera == 0) {
                if ((this->fields).twist == 0) {
                  if ((pVStack_42 == (Vector3__Array *)0x0) ||
                     ((this->fields).pointsUp == (Vector3__Array *)0x0)) goto code_?;
                  puVar60 = (undefined8 *)func_?();
                  unique0x0000a400 = (double)*puVar60;
                  fVar22 = *(float *)(puVar60 + 1);
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  a_04.z = fVar22;
                  a_04.x = (float)auStack_44._4_4_;
                  a_04.y = (float)pMStack_52;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)&stack0xfffffe58,a_04,fStack_59,(MethodInfo *)0x0)
                  ;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)&stack0xfffffe1c,*pVVar15,0.5,(MethodInfo *)0x0);
                  a_08.z = fStack_47;
                  a_08.x = (float)auStack_16._20_4_;
                  a_08.y = (float)auStack_16._24_4_;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      ((Vector3 *)&stack0xfffffe10,a_08,*pVVar15,(MethodInfo *)0x0);
                  unique0x0000a400 = *(double *)pVVar15;
                  fVar22 = pVVar15->z;
                  pdVar61 = (double *)func_?();
                  *pdVar61 = stack0xffffffc0;
                  *(float *)(pdVar61 + 1) = fVar22;
                  if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                  pVVar15 = (Vector3 *)func_?();
                  in_stack_27.genericMethod = (Il2CppGenericMethod *)auStack_62;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)in_stack_27.genericMethod,*pVVar15,fStack_59
                                       ,(MethodInfo *)0x0);
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      (&VStack_63,*pVVar15,0.5,(MethodInfo *)0x0);
                  pIVar64 = (Il2CppClass *)pVVar15->x;
                  pIVar65 = (Il2CppType *)pVVar15->y;
                  ppIVar66 = (Il2CppType **)pVVar15->z;
                  pIVar67 = (Il2CppMethodPointer)auStack_16._20_8_;
                  pIVar68 = SUB84(auStack_16._20_8_,4);
                  pVVar15 = &VStack_69;
                }
                else {
                  uStack_58 = (double)CONCAT44((this->fields).time,(undefined4)uStack_58);
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  iVar26 = iStack_41 + -1;
                  uStack_35 = CONCAT44(fVar22,(undefined4)uStack_35);
                  (this->fields).time = uStack_58._4_4_ + fVar22;
                  if (iStack_45 == iVar26) {
                    if ((this->fields).points == (Vector3__Array *)0x0) goto code_?;
                    pdVar61 = (double *)func_?();
                    uStack_58 = *pdVar61;
                    uStack_35 = CONCAT44(*(undefined4 *)(pdVar61 + 1),(undefined4)uStack_35);
                  }
                  else {
                    uStack_58 = (double)auStack_16._20_8_;
                    uStack_35 = CONCAT44(fStack_47,(undefined4)uStack_35);
                  }
                  if (iStack_45 == iVar26) {
                    stack0xffffffc0 = (double)auStack_16._20_8_;
                    fVar22 = fStack_47;
                  }
                  else {
                    if ((this->fields).points == (Vector3__Array *)0x0) goto code_?;
                    pdVar61 = (double *)func_?();
                    unique0x0000a400 = *pdVar61;
                    fVar22 = *(float *)(pdVar61 + 1);
                  }
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  a_02.z = fVar22;
                  a_02._0_8_ = stack0xffffffc0;
                  b_01.z = uStack_35._4_4_;
                  b_01._0_8_ = uStack_58;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                      (&VStack_70,a_02,b_01,(MethodInfo *)0x0);
                  auStack_44._4_4_ = pVVar15->x;
                  pMStack_52 = (MethodInfo *)pVVar15->y;
                  fVar21 = pVVar15->z;
                  fVar22 = (this->fields).time;
                  uStack_58._4_4_ = fVar22;
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  auVar71._0_8_ = (double)uStack_58._4_4_;
                  auVar71._8_8_ = 0;
                  func_?();
                  uStack_58._4_4_ = (float)auVar71._0_8_;
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  unaff_EBX = pMStack_52;
                  axis.z = fVar21;
                  axis.x = (float)auStack_44._4_4_;
                  axis.y = (float)pMStack_52;
                  pQVar72 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_AngleAxis(&QStack_73,uStack_58._4_4_,axis,(MethodInfo *)0x0);
                  fStack_51 = pQVar72->x;
                  auStack_44._0_4_ = pQVar72->y;
                  unique0x100024b1 = *(double *)&pQVar72->z;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                      (&VStack_74,(MethodInfo *)0x0);
                  ppIVar5 = (Il2CppType **)pVVar15->x;
                  _Var7 = (_union_154)pVVar15->y;
                  in_stack_25 = (_union_155)pVVar15->z;
                  in_stack_24 = (MethodInfo *)0x0;
                  rotation.y = (float)auStack_44._0_4_;
                  rotation.x = fStack_51;
                  rotation.z = (float)auStack_44._4_4_;
                  rotation.w = (float)pMStack_52;
                  in_stack_20 = (MethodInfo *)auStack_44._0_4_;
                  in_stack_54 = (Il2CppClass *)auStack_44._4_4_;
                  in_stack_53 = pMStack_52;
                  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            (&VStack_75,rotation,*pVVar15,(MethodInfo *)0x0);
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                      (&VStack_76,(MethodInfo *)0x0);
                  uStack_35._0_4_ = pVVar15->x;
                  uStack_35._4_4_ = pVVar15->y;
                  uStack_58 = (double)CONCAT44(pVVar15->z,(undefined4)uStack_58);
                  if (pVStack_42 == (Vector3__Array *)0x0) goto code_?;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      (&VStack_77,*pVVar15,fStack_59,(MethodInfo *)0x0);
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      (&VStack_78,*pVVar15,0.5,(MethodInfo *)0x0);
                  a_10.z = fStack_47;
                  a_10.x = (float)auStack_16._20_4_;
                  a_10.y = (float)auStack_16._24_4_;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_79,a_10,*pVVar15,(MethodInfo *)0x0);
                  unique0x0000a400 = *(double *)pVVar15;
                  _Stack_1cc = _Stack_20;
                  fVar22 = pVVar15->z;
                  pdVar61 = (double *)func_?();
                  *pdVar61 = stack0xffffffc0;
                  *(float *)(pdVar61 + 1) = fVar22;
                  in_stack_27.genericMethod = (Il2CppGenericMethod *)auStack_80;
                  a_05.z = uStack_58._4_4_;
                  a_05.x = (float)(undefined4)uStack_35;
                  a_05.y = uStack_35._4_4_;
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)in_stack_27.genericMethod,a_05,fStack_59,
                                       (MethodInfo *)0x0);
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      (&VStack_81,*pVVar15,0.5,(MethodInfo *)0x0);
                  uVar82 = pVVar15->x;
                  uVar83 = pVVar15->y;
                  ppIVar66 = (Il2CppType **)pVVar15->z;
                  pIVar67 = (Il2CppMethodPointer)auStack_16._20_8_;
                  pIVar68 = SUB84(auStack_16._20_8_,4);
                  pVVar15 = &VStack_84;
                  pIVar64 = (Il2CppClass *)uVar82;
                  pIVar65 = (Il2CppType *)uVar83;
                }
              }
              else {
                iVar26 = iStack_41 + -1;
                if (iStack_45 == iVar26) {
                  if ((this->fields).points == (Vector3__Array *)0x0) goto code_?;
                  pdVar61 = (double *)func_?();
                  unique0x0000a400 = *pdVar61;
                  uStack_35 = CONCAT44(*(undefined4 *)(pdVar61 + 1),(undefined4)uStack_35);
                }
                else {
                  stack0xffffffc0 = (double)auStack_16._20_8_;
                  uStack_35 = CONCAT44(fStack_47,(undefined4)uStack_35);
                }
                if (iStack_45 == iVar26) {
                  uStack_58 = (double)auStack_16._20_8_;
                  fVar22 = fStack_47;
                }
                else {
                  if ((this->fields).points == (Vector3__Array *)0x0) goto code_?;
                  pdVar61 = (double *)func_?();
                  uStack_58 = *pdVar61;
                  fVar22 = *(float *)(pdVar61 + 1);
                }
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a_03.z = fVar22;
                a_03._0_8_ = uStack_58;
                b_02.z = uStack_35._4_4_;
                b_02._0_8_ = stack0xffffffc0;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    (&VStack_85,a_03,b_02,(MethodInfo *)0x0);
                unique0x0000a400 = *(double *)pVVar15;
                fVar22 = pVVar15->z;
                a_07.z = (float)auStack_16._12_4_;
                a_07.x = (float)auStack_16._4_4_;
                a_07.y = (float)auStack_16._8_4_;
                b_03.z = fStack_47;
                b_03.x = (float)auStack_16._20_4_;
                b_03.y = (float)auStack_16._24_4_;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    (&VStack_86,a_07,b_03,(MethodInfo *)0x0);
                lhs.z = fVar22;
                lhs._0_8_ = stack0xffffffc0;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                                    (&VStack_87,lhs,*pVVar15,(MethodInfo *)0x0);
                uStack_11._0_4_ = pVVar15->x;
                uStack_11._4_4_ = pVVar15->y;
                fStack_12 = pVVar15->z;
                puStack_14 = &stack0xfffffe04;
                pVVar15 = (Vector3 *)func_?();
                uStack_35._0_4_ = pVVar15->x;
                uStack_35._4_4_ = pVVar15->y;
                uStack_58 = (double)CONCAT44(pVVar15->z,(undefined4)uStack_58);
                if (pVStack_42 == (Vector3__Array *)0x0) goto code_?;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xfffffe4c,*pVVar15,fStack_59,
                                     (MethodInfo *)0x0);
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xfffffe40,*pVVar15,0.5,(MethodInfo *)0x0);
                a_11.z = fStack_47;
                a_11.x = (float)auStack_16._20_4_;
                a_11.y = (float)auStack_16._24_4_;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&_Stack_1cc,a_11,*pVVar15,(MethodInfo *)0x0);
                unique0x0000a400 = *(double *)pVVar15;
                _Stack_1cc = _Stack_20;
                fVar22 = pVVar15->z;
                pdVar61 = (double *)func_?();
                *pdVar61 = stack0xffffffc0;
                *(float *)(pdVar61 + 1) = fVar22;
                in_stack_27.genericMethod = (Il2CppGenericMethod *)&stack0xfffffe28;
                a_06.z = uStack_58._4_4_;
                a_06.x = (float)(undefined4)uStack_35;
                a_06.y = uStack_35._4_4_;
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)in_stack_27.genericMethod,a_06,fStack_59,
                                     (MethodInfo *)0x0);
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    (&VStack_36,*pVVar15,0.5,(MethodInfo *)0x0);
                uVar88 = pVVar15->x;
                uVar89 = pVVar15->y;
                ppIVar66 = (Il2CppType **)pVVar15->z;
                pIVar67 = (Il2CppMethodPointer)auStack_16._20_8_;
                pIVar68 = SUB84(auStack_16._20_8_,4);
                pVVar15 = (Vector3 *)(auStack_32 + 4);
                pIVar64 = (Il2CppClass *)uVar88;
                pIVar65 = (Il2CppType *)uVar89;
              }
              a_09.y = (float)pIVar68;
              a_09.x = (float)pIVar67;
              a_09.z = fStack_47;
              b_04.y = (float)pIVar65;
              b_04.x = (float)pIVar64;
              b_04.z = (float)ppIVar66;
              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  (pVVar15,a_09,b_04,(MethodInfo *)0x0);
              unique0x0000a400 = *(double *)pVVar15;
              fVar22 = pVVar15->z;
              pdVar61 = (double *)func_?();
              *pdVar61 = stack0xffffffc0;
              *(float *)(pdVar61 + 1) = fVar22;
              if (pVStack_19 == (Vector2__Array *)0x0) goto code_?;
              uStack_90 = 0;
              func_?();
              puVar91 = (undefined4 *)func_?();
              *puVar91 = (undefined4)uStack_90;
              puVar91[1] = uStack_90._4_4_;
              uStack_92 = 0;
              method_01 = _Stack_58;
              func_?();
              puVar91 = (undefined4 *)func_?();
              *puVar91 = (undefined4)uStack_92;
              puVar91[1] = uStack_92._4_4_;
              if (0 < iStack_45) {
                iVar26 = iStack_45 * 6;
                if (_Stack_5c.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
                func_?();
                method_01.genericMethod = (Il2CppGenericMethod *)(iVar26 + -5);
                func_?();
                func_?();
                in_stack_27 = _Stack_20;
                func_?();
                in_stack_23.rgctx_data = (Il2CppRGCTXData *)(iVar26 + -2);
                func_?();
                in_stack_24 = (MethodInfo *)(iVar26 + -1);
                in_stack_25.genericMethod = (Il2CppGenericMethod *)&UNK_?;
                func_?();
              }
              iVar26 = iStack_45 + 1;
            }
            pGVar37 = (this->fields).trail;
            if (pGVar37 != (GameObject *)0x0) {
              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar37,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                  ((Vector3 *)(auStack_32 + 4),(MethodInfo *)0x0);
              if (pTVar13 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar13,*pVVar15,method_00);
                pGVar37 = (this->fields).trail;
                if (pGVar37 != (GameObject *)0x0) {
                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar37,unaff_EBX);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pQVar72 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_identity(&QStack_73,(MethodInfo *)0x0);
                  if (pTVar13 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar13,*pQVar72,in_stack_20);
                    pMVar93 = (this->fields).mesh;
                    if (pMVar93 != (Mesh *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                (pMVar93,in_stack_24);
                      pMVar93 = (this->fields).mesh;
                      if (pMVar93 != (Mesh *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                  (pMVar93,pVStack_42,
                                   (MethodInfo *)in_stack_23.methodMetadataHandle);
                        pMVar93 = (this->fields).mesh;
                        if (pMVar93 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                                    (pMVar93,(Color__Array *)auStack_16._16_4_,
                                     (MethodInfo *)in_stack_27.genericMethod);
                          pMVar93 = (this->fields).mesh;
                          if (pMVar93 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                      (pMVar93,pVStack_19,(MethodInfo *)method_01.genericMethod);
                            pMVar93 = (this->fields).mesh;
                            if (pMVar93 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                        (pMVar93,(Int32__Array *)_Stack_5c.methodMetadataHandle,
                                         (MethodInfo *)0x0);
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
          }
        }
      }
      goto code_?;
    }
    if ((this->fields).Emit == 0) goto code_?;
    pVVar18 = (this->fields).saved;
    iVar26 = (this->fields).savedCnt;
    if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar18->max_length <= iVar26 - 1U) goto code_?;
    unique0x0000a400 = *(double *)(pVVar18->vector + iVar26 + -1);
    fVar22 = pVVar18->vector[iVar26 + -1].z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    in_stack_27 = SUB84(stack0xffffffc0,0);
    a_01.z = fVar22;
    a_01._0_8_ = stack0xffffffc0;
    b_00.z = fStack_17;
    b_00.x = (float)auStack_16._20_4_;
    b_00.y = (float)auStack_16._24_4_;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)auStack_16,a_01,b_00,(MethodInfo *)0x0);
    uStack_10._0_4_ = pVVar15->x;
    uStack_10._4_4_ = pVVar15->y;
    fStack_9 = pVVar15->z;
    fVar56 = (float10)func_?();
    pVStack_19 = (Vector2__Array *)(float)fVar56;
    pfVar55 = &(this->fields).pointSqrDistance;
    if ((float)pVStack_19 < *pfVar55 || (float)pVStack_19 == *pfVar55) goto code_?;
    pVVar18 = (this->fields).saved;
    uVar46 = (this->fields).savedCnt;
    if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
    if ((int)(pVVar18->max_length - 1) < (int)uVar46) {
      pVVar18 = (Vector3__Array *)func_?();
      (this->fields).saved = pVVar18;
      if (pVVar18 != (Vector3__Array *)0x0) {
        pVVar18 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar18;
        if ((this->fields).saved != (Vector3__Array *)0x0) {
          pVVar18 = (Vector3__Array *)func_?();
          (this->fields).points = pVVar18;
          if (pVVar18 != (Vector3__Array *)0x0) {
            pVVar94 = (Vector3__Array *)func_?();
            pVVar18 = (this->fields).saved;
            (this->fields).pointsUp = pVVar94;
            uVar46 = 0;
            (this->fields).savedCnt = 0;
            (this->fields).displayCnt = 0;
            goto code_?;
          }
        }
      }
      goto code_?;
    }
code_?:
    if (pVVar18 == (Vector3__Array *)0x0) goto code_?;
    if (uVar46 < pVVar18->max_length) {
      pVVar18->vector[uVar46].x = (float)auStack_16._20_4_;
      pVVar18->vector[uVar46].y = (float)auStack_16._24_4_;
      pVVar18->vector[uVar46].z = fStack_17;
      pVVar18 = (this->fields).savedUp;
      pVStack_19 = (Vector2__Array *)(this->fields).savedCnt;
      if ((pVVar18 != (Vector3__Array *)0x0) &&
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0))
      {
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)auStack_16,pTVar13,in_stack_29);
        fVar21 = pVVar15->y;
        fVar22 = pVVar15->z;
        if ((Vector2__Array *)pVVar18->max_length <= pVStack_19) goto code_?;
        pVVar18->vector[(int)pVStack_19].x = pVVar15->x;
        pVVar18->vector[(int)pVStack_19].y = fVar21;
        pVVar18->vector[(int)pVStack_19].z = fVar22;
        piVar28 = &(this->fields).savedCnt;
        *piVar28 = *piVar28 + 1;
        if ((this->fields).averageCreationTime == _UNK_?) {
          pVStack_19 = (Vector2__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          fVar22 = (float)pVStack_19 - (this->fields).lastPointCreationTime;
        }
        else {
          pVStack_19 = (Vector2__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          fVar22 = ((this->fields).averageCreationTime +
                   ((float)pVStack_19 - (this->fields).lastPointCreationTime)) * _UNK_?;
        }
        (this->fields).averageCreationTime = fVar22;
        (this->fields).averageInsertionTime = (this->fields).tRatio * fVar22;
        in_stack_39 = (TrailArc *)&UNK_?;
        pVStack_19 = (Vector2__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        iVar26 = (this->fields).savedCnt;
        (this->fields).lastPointCreationTime = (float)pVStack_19;
        if (3 < iVar26) {
          in_stack_39 = this;
          TrailArc_findCoordinates(this,iVar26 + -3,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar95 = (code *)swi(3);
  (*pcVar95)();
  return;
}


/* TrailArc() */

void Assembly-CSharp.dll::TrailArc::TrailArc__ctor(TrailArc *this,MethodInfo *method)

{
  (this->fields).Emit = 1;
  (this->fields).pointsStored = 0x3c;
  (this->fields).minVel = 10.0;
  (this->fields).faceCamera = 1;
  (this->fields).twist = 1;
  (this->fields).lifetime = 1.0;
  (this->fields).lifeTimeRatio = 1.0;
  (this->fields).pointDistance = 0.5;
  (this->fields).segmentsPerPoint = 4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void findCoordinates(Int32) */

void Assembly-CSharp.dll::TrailArc::TrailArc_findCoordinates
               (TrailArc *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((index == 0) || ((this->fields).savedCnt + -2 <= index)) {
    return;
  }
  pVVar1 = (this->fields).saved;
  if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
  uVar2 = pVVar1->max_length;
  if (index - 1U < uVar2) {
    fStack_3 = (float)((index - 1U) * 3);
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    if (uVar2 <= (uint)index) goto code_?;
    puVar4 = (undefined *)pVVar1->vector[index].x;
    pVVar5 = (Vector3 *)pVVar1->vector[index].y;
    fVar6 = pVVar1->vector[index].z;
    if (pVVar1 == (Vector3__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (index + 1U < uVar2) {
      fVar7 = pVVar1->vector[index + 1].x;
      fVar8 = pVVar1->vector[index + 1].y;
      fVar9 = pVVar1->vector[index + 1].z;
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (index + 2U < uVar2) {
          uStack_10._0_4_ = pVVar1->vector[index + 2].x;
          uStack_10._4_4_ = pVVar1->vector[index + 2].y;
          fStack_11 = pVVar1->vector[index + 2].z;
          VStack_12.y = pVVar1->vector[index + 1].x;
          VStack_12.z = pVVar1->vector[index + 1].y;
          fVar13 = pVVar1->vector[index + 1].z;
          uStack_14._0_4_ = pVVar1->vector[index + -1].x;
          uStack_14._4_4_ = pVVar1->vector[index + -1].y;
          fStack_3 = pVVar1->vector[index + -1].z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          VVar15.z = fVar13;
          VVar15.x = VStack_12.y;
          VVar15.y = VStack_12.z;
          b.z = fStack_3;
          b.x = (float)(undefined4)uStack_14;
          b.y = (float)uStack_14._4_4_;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffa0,VVar15,b,(MethodInfo *)0x0);
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                              ((Vector3 *)&stack0xffffffa0,0.5,*pVVar16,(MethodInfo *)0x0);
          puStack_17 = (undefined *)pVVar16->x;
          unique0x0000a404 = pVVar16->y;
          fVar18 = pVVar16->z;
          a_02.z = fStack_11;
          a_02.x = (float)(undefined4)uStack_10;
          a_02.y = uStack_10._4_4_;
          b_00.y = (float)pVVar5;
          b_00.x = (float)puVar4;
          b_00.z = fVar6;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffa0,a_02,b_00,(MethodInfo *)0x0);
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                              (&VStack_12,0.5,*pVVar16,(MethodInfo *)0x0);
          iVar19 = (this->fields).segmentsPerPoint;
          iStack_20 = iVar19 * index;
          fVar13 = pVVar16->x;
          fVar21 = pVVar16->y;
          fVar22 = pVVar16->z;
          fStack_3 = (float)iStack_20;
          if (iStack_20 < iVar19 + iStack_20) {
            fStack_11 = 0.0;
            do {
              fStack_23 = (float)(iStack_20 - iVar19);
              pVVar1 = (this->fields).points;
              uStack_14 = CONCAT44(pVVar1,(undefined4)uStack_14);
              fVar24 = (float)(int)fStack_11 * (this->fields).tRatio;
              VStack_12.z = fVar24;
              fVar25 = fVar24 * fVar24;
              fVar26 = fVar25 * _UNK_?;
              fVar27 = fVar25 * fVar24;
              uStack_10 = CONCAT44(fVar27 - fVar25,(undefined4)uStack_10);
              fVar24 = (fVar27 - (fVar25 + fVar25)) + fVar24;
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              d = ((fVar27 + fVar27) - fVar26) + _UNK_?;
              fVar25 = fVar21;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
                fVar25 = fVar21;
              }
              a_00.y = (float)pVVar5;
              a_00.x = (float)puVar4;
              a_00.z = fVar6;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                 ((Vector3 *)&stack0xffffff7c,d,a_00,(MethodInfo *)0x0);
              VVar15 = *pVVar5;
              a_01.y = fVar8;
              a_01.x = fVar7;
              a_01.z = fVar9;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                 ((Vector3 *)&stack0xffffff70,fVar26 - (fVar27 + fVar27),a_01,
                                  (MethodInfo *)0x0);
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffff64,VVar15,*pVVar5,(MethodInfo *)0x0);
              VVar15 = *pVVar5;
              a_03.z = fVar18;
              stack0xffffff8c = (undefined4)((ulonglong)_puStack_78 >> 0x20);
              a_03.x = (float)puStack_17;
              a_03.y = (float)stack0xffffff8c;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                 ((Vector3 *)&stack0xffffff58,fVar24,a_03,(MethodInfo *)0x0);
              fVar8 = fVar13;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffff4c,VVar15,*pVVar5,(MethodInfo *)0x0);
              uVar28 = pVVar5->y;
              fVar21 = pVVar5->z;
              _puStack_78 = CONCAT44((Vector3 *)&stack0xffffff40,&UNK_?);
              a_04.y = fVar25;
              a_04.x = fVar8;
              a_04.z = fVar22;
              fVar7 = uStack_10._4_4_;
              fVar13 = (float)uVar28;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                  ((Vector3 *)&stack0xffffff40,uStack_10._4_4_,a_04,
                                   (MethodInfo *)0x0);
              fVar22 = pVVar16->x;
              uVar29 = pVVar16->y;
              fVar18 = 0.0;
              pVVar5 = (Vector3 *)&stack0xffffff34;
              puVar4 = &UNK_?;
              a_05.y = fVar13;
              a_05.x = (float)uVar29;
              a_05.z = fVar21;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  (pVVar5,a_05,*pVVar16,(MethodInfo *)0x0);
              uStack_10._0_4_ = pVVar16->x;
              uStack_10._4_4_ = pVVar16->y;
              fVar25 = pVVar16->z;
              VStack_12.z = fStack_23;
              VStack_12.y = (float)&UNK_?;
              puVar30 = (undefined8 *)func_?();
              *puVar30 = uStack_10;
              *(float *)(puVar30 + 1) = fVar25;
              pVVar1 = (this->fields).pointsUp;
              uStack_14 = CONCAT44(pVVar1,(undefined4)uStack_14);
              if ((pVVar1 == (Vector3__Array *)0x0) ||
                 ((this->fields).savedUp == (Vector3__Array *)0x0)) goto code_?;
              puVar30 = (undefined8 *)func_?(index);
              uStack_10 = *puVar30;
              fVar25 = *(float *)(puVar30 + 1);
              if ((this->fields).savedUp == (Vector3__Array *)0x0) goto code_?;
              pVVar16 = (Vector3 *)func_?(index + 1);
              a.z = fVar25;
              a.x = (float)(undefined4)uStack_10;
              a.y = uStack_10._4_4_;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                                  ((Vector3 *)&stack0xffffff28,a,*pVVar16,VStack_12.z,
                                   (MethodInfo *)0x0);
              VStack_12.y = pVVar16->x;
              VStack_12.z = pVVar16->y;
              fVar25 = pVVar16->z;
              puVar30 = (undefined8 *)func_?();
              iStack_20 = iStack_20 + 1;
              *puVar30 = VStack_12._4_8_;
              *(float *)(puVar30 + 1) = fVar25;
              fStack_11 = (float)((int)fStack_11 + 1);
              iVar19 = (this->fields).segmentsPerPoint;
            } while (iStack_20 < (int)fStack_3 + iVar19);
          }
          (this->fields).pointCnt = (int32_t)fStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    register0x00000000 = func_?(0,0);
    func_?(register0x00000000);
code_?:
    register0x00000000 = func_?(0,0);
    func_?(register0x00000000);
  }
  register0x00000000 = func_?(0,0);
  func_?(register0x00000000);
code_?:
  register0x00000000 = func_?(0,0);
  func_?(register0x00000000);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void printAllPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printAllPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).pointCnt != 0) {
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Points_at_time_,pOVar2,
                         (Object *)StringLiteral__u000A,(MethodInfo *)0x0);
    uVar3 = 0;
    if (0 < (this->fields).pointCnt) {
      iStack_4 = 0;
      do {
        args = (Object__Array *)func_?();
        if (args == (Object__Array *)0x0) {
code_?:
          func_?(0);
code_?:
          uVar5 = func_?(0,0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0,0);
          func_?(uVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((message != (String *)0x0) &&
           (iVar7 = func_?(message,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length == 0) goto code_?;
        args->vector[0] = (Object *)message;
        if ((StringLiteral_Index__ != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_Index__,(args->klass->_0).element_class),
           iVar7 == 0)) goto code_?;
        if (args->max_length < 2) goto code_?;
        args->vector[1] = (Object *)StringLiteral_Index__;
        uStack_8 = uVar3;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_8);
        if ((pOVar2 != (Object *)0x0) &&
           (iVar7 = func_?(pOVar2,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length < 3) goto code_?;
        args->vector[2] = pOVar2;
        if ((StringLiteral_u0009Pos__ != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_u0009Pos__,(args->klass->_0).element_class),
           iVar7 == 0)) goto code_?;
        if (args->max_length < 4) goto code_?;
        args->vector[3] = (Object *)StringLiteral_u0009Pos__;
        pVVar9 = (this->fields).points;
        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar9->max_length <= uVar3) goto code_?;
        pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffffe4);
        if ((pOVar2 != (Object *)0x0) &&
           (iVar7 = func_?(pOVar2,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length < 5) goto code_?;
        args->vector[4] = pOVar2;
        if ((StringLiteral_u000A != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_u000A,(args->klass->_0).element_class), iVar7 == 0
           )) goto code_?;
        if (args->max_length < 6) goto code_?;
        args->vector[5] = (Object *)StringLiteral_u000A;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        iStack_4 = iStack_4 + 0xc;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (this->fields).pointCnt);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
              ((Object *)message,(MethodInfo *)0x0);
  }
  return;
}


/* Void printPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).savedCnt != 0) {
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Saved_Points_at_time_,pOVar2,
                         (Object *)StringLiteral__u000A,(MethodInfo *)0x0);
    uVar3 = 0;
    if (0 < (this->fields).savedCnt) {
      iStack_4 = 0;
      do {
        args = (Object__Array *)func_?();
        if (args == (Object__Array *)0x0) {
code_?:
          func_?(0);
code_?:
          uVar5 = func_?(0,0);
          func_?(uVar5);
code_?:
          uVar5 = func_?(0,0);
          func_?(uVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((message != (String *)0x0) &&
           (iVar7 = func_?(message,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length == 0) goto code_?;
        args->vector[0] = (Object *)message;
        if ((StringLiteral_Index__ != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_Index__,(args->klass->_0).element_class),
           iVar7 == 0)) goto code_?;
        if (args->max_length < 2) goto code_?;
        args->vector[1] = (Object *)StringLiteral_Index__;
        uStack_8 = uVar3;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_8);
        if ((pOVar2 != (Object *)0x0) &&
           (iVar7 = func_?(pOVar2,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length < 3) goto code_?;
        args->vector[2] = pOVar2;
        if ((StringLiteral_u0009Pos__ != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_u0009Pos__,(args->klass->_0).element_class),
           iVar7 == 0)) goto code_?;
        if (args->max_length < 4) goto code_?;
        args->vector[3] = (Object *)StringLiteral_u0009Pos__;
        pVVar9 = (this->fields).saved;
        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar9->max_length <= uVar3) goto code_?;
        pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffffe4);
        if ((pOVar2 != (Object *)0x0) &&
           (iVar7 = func_?(pOVar2,(args->klass->_0).element_class), iVar7 == 0))
        goto code_?;
        if (args->max_length < 5) goto code_?;
        args->vector[4] = pOVar2;
        if ((StringLiteral_u000A != (String *)0x0) &&
           (iVar7 = func_?(StringLiteral_u000A,(args->klass->_0).element_class), iVar7 == 0
           )) goto code_?;
        if (args->max_length < 6) goto code_?;
        args->vector[5] = (Object *)StringLiteral_u000A;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        iStack_4 = iStack_4 + 0xc;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (this->fields).savedCnt);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
              ((Object *)message,(MethodInfo *)0x0);
  }
  return;
}

