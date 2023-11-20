
/* Void SetTrailColor(Color) */

void Assembly-CSharp.dll::TrailArc::TrailArc_SetTrailColor
               (TrailArc *this,Color baseColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,3);
  fVar2 = _UNK_?;
  fVar3 = (0.0 - baseColor.a) * _UNK_?;
  fVar4 = (_UNK_? - baseColor.g) * _UNK_?;
  fVar5 = (_UNK_? - baseColor.b) * _UNK_?;
  if (pCVar1 == (Color__Array *)0x0) {
    func_?();
  }
  else if (pCVar1->max_length != 0) {
    pCVar1->vector[0].r = (_UNK_? - baseColor.r) * _UNK_? + baseColor.r;
    pCVar1->vector[0].g = fVar4 + baseColor.g;
    pCVar1->vector[0].b = fVar5 + baseColor.b;
    pCVar1->vector[0].a = fVar3 + baseColor.a;
    fVar4 = (0.0 - baseColor.a) * _UNK_?;
    fVar3 = (fVar2 - baseColor.g) * _UNK_?;
    fVar5 = (fVar2 - baseColor.b) * _UNK_?;
    if (1 < pCVar1->max_length) {
      pCVar1->vector[1].r = (fVar2 - baseColor.r) * _UNK_? + baseColor.r;
      pCVar1->vector[1].g = fVar3 + baseColor.g;
      pCVar1->vector[1].b = fVar5 + baseColor.b;
      pCVar1->vector[1].a = fVar4 + baseColor.a;
      if (2 < pCVar1->max_length) {
        pCVar1->vector[2].r = baseColor.r;
        pCVar1->vector[2].g = baseColor.g;
        pCVar1->vector[2].b = baseColor.b;
        pCVar1->vector[2].a = baseColor.a;
        (this->fields).colors = pCVar1;
        func_?(&(this->fields).colors,pCVar1);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Start(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_Trail);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)
           func_?(TypeInfo__UnityEngine__Vector3,(this->fields).pointsStored);
  (this->fields).saved = pVVar1;
  func_?(&(this->fields).saved,pVVar1);
  pVVar1 = (this->fields).saved;
  if (pVVar1 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
    (this->fields).savedUp = pVVar1;
    func_?(&(this->fields).savedUp,pVVar1);
    pVVar1 = (this->fields).saved;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)
               func_?(TypeInfo__UnityEngine__Vector3,
                               pVVar1->max_length * (this->fields).segmentsPerPoint);
      (this->fields).points = pVVar1;
      func_?(&(this->fields).points,pVVar1);
      pVVar1 = (this->fields).points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)
                 func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
        (this->fields).pointsUp = pVVar1;
        func_?(&(this->fields).pointsUp,pVVar1);
        fVar2 = (this->fields).pointDistance;
        (this->fields).tRatio = _UNK_? / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar2 * fVar2;
        pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar3,StringLiteral_Trail,(MethodInfo *)0x0);
        (this->fields).trail = pGVar3;
        func_?(&(this->fields).trail,pGVar3);
        pGVar3 = (this->fields).trail;
        if (pGVar3 != (GameObject *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pGVar3 = (this->fields).trail;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar4,TypeInfo__UnityEngine__Quaternion->static_fields->
                                  identityQuaternion,(MethodInfo *)0x0);
                pGVar3 = (this->fields).trail;
                if (pGVar3 != (GameObject *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                               (MethodInfo *)0x0);
                    pGVar3 = (this->fields).trail;
                    if (pGVar3 != (GameObject *)0x0) {
                      this_00 = (MeshFilter *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (pGVar3,
                                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                          );
                      pGVar3 = (this->fields).trail;
                      if (pGVar3 != (GameObject *)0x0) {
                        pRVar5 = (Renderer *)
                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_AddComponent_1
                                           (pGVar3,
                                            UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                           );
                        (this->fields).mRenderer = pRVar5;
                        func_?();
                        if (this_00 != (MeshFilter *)0x0) {
                          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                   MeshFilter_get_mesh(this_00,(MethodInfo *)0x0);
                          (this->fields).mesh = pMVar6;
                          func_?(&(this->fields).mesh,pMVar6);
                          pMVar7 = (this->fields).material;
                          this_01 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                                    (this_01,pMVar7,(MethodInfo *)0x0);
                          (this->fields).trailMaterial = this_01;
                          func_?(&(this->fields).trailMaterial,this_01);
                          pMVar7 = (this->fields).trailMaterial;
                          if (pMVar7 != (Material *)0x0) {
                            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                     Material_GetVector((Vector4 *)&stack0xffffffec,pMVar7,
                                                        StringLiteral__TintColor,(MethodInfo *)0x0);
                            (this->fields).fadeOutRatio = pVVar8->w;
                            pRVar5 = (this->fields).mRenderer;
                            if (pRVar5 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial
                                        (pRVar5,(this->fields).trailMaterial,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Update(TrailArc *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffd30;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffd30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_Trail_effect_ending_with_a_segme);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  uStack_2 = 0;
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar8 == (Transform *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar9->x;
    uVar11._4_4_ = pVVar9->y;
    pCVar12 = (Color__Array *)pVVar9->z;
    uStack_13 = uVar11;
    pCStack_14 = pCVar12;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                            ((Vector3 *)aIStack_10,pTVar8,0.0,0.0,
                             (float)((uint)(this->fields).pointDistance ^
                                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                    ),(MethodInfo *)0x0);
        if (pVVar16 != (Vector3__Array *)0x0) {
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if (pIStack_15 < (Int32__Array *)pVVar16->max_length) {
            pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
            pVVar16->vector[(int)pIStack_15].y = fVar17;
            pVVar16->vector[(int)pIStack_15].z = fVar18;
            pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
            pVVar16 = (this->fields).savedUp;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
              if (pVVar16 != (Vector3__Array *)0x0) {
                fVar17 = pVVar9->y;
                fVar18 = pVVar9->z;
                if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
                pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
                pVVar16->vector[(int)pIStack_15].y = fVar17;
                pVVar16->vector[(int)pIStack_15].z = fVar18;
                iVar19 = (this->fields).savedCnt;
                pVVar16 = (this->fields).saved;
                (this->fields).savedCnt = iVar19 + 1U;
                if (pVVar16 != (Vector3__Array *)0x0) {
                  if (pVVar16->max_length <= iVar19 + 1U) goto code_?;
                  pVVar16->vector[iVar19 + 1].x = (float)uStack_13;
                  pVVar16->vector[iVar19 + 1].y = uStack_13._4_4_;
                  pVVar16->vector[iVar19 + 1].z = (float)pCStack_14;
                  pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
                  pVVar16 = (this->fields).savedUp;
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
                    if (pVVar16 != (Vector3__Array *)0x0) {
                      fVar17 = pVVar9->y;
                      fVar18 = pVVar9->z;
                      if (pIStack_15 < (Int32__Array *)pVVar16->max_length) {
                        pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
                        pVVar16->vector[(int)pIStack_15].y = fVar17;
                        pVVar16->vector[(int)pIStack_15].z = fVar18;
                        piVar20 = &(this->fields).savedCnt;
                        *piVar20 = *piVar20 + 1;
                        pIStack_15 = (Int32__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                               ((MethodInfo *)0x0);
                        (this->fields).lastPointCreationTime = (float)pIStack_15;
                        pIStack_15 = (Int32__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                               ((MethodInfo *)0x0);
                        (this->fields).creationTime = (float)pIStack_15;
                        (this->fields).initialized = 1;
                        goto code_?;
                      }
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
          else {
            func_?();
code_?:
            func_?();
code_?:
            func_?();
code_?:
            func_?();
code_?:
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
    pIStack_15 = (Int32__Array *)(this->fields).creationTime;
    pVStack_21 = (Vector2__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar22 = &(this->fields).maxLifeTime;
    if (*pfVar22 <= (float)pIStack_15 - (float)pVStack_21 &&
        (float)pIStack_15 - (float)pVStack_21 != *pfVar22) {
      (this->fields).Emit = 0;
    }
    if ((this->fields).Emit == 0) {
      if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
        (this->fields).emittingDone = 1;
        goto code_?;
      }
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                          ((Vector3 *)aIStack_10,pTVar8,0.0,0.0,(this->fields).pointDistance,
                           (MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
      pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pIStack_15].y = fVar17;
      pVVar16->vector[(int)pIStack_15].z = fVar18;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
      pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pIStack_15].y = fVar17;
      pVVar16->vector[(int)pIStack_15].z = fVar18;
      iVar19 = (this->fields).savedCnt;
      (this->fields).savedCnt = iVar19 + 1;
      TrailArc_findCoordinates(this,iVar19 + -2,(MethodInfo *)0x0);
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      in_stack_23.method =
           (MethodInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
      fVar18 = (this->fields).pointDistance;
      if (in_stack_23.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto code_?;
      in_stack_24.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_25 = (Il2CppRGCTXData)(fVar18 + fVar18);
      in_stack_26.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_28.rgctxDataDummy = aIStack_10;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                          ((Vector3 *)in_stack_28.method,(Transform *)in_stack_23.method
                           ,0.0,0.0,(float)in_stack_25,(MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
      pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pIStack_15].y = fVar17;
      pVVar16->vector[(int)pIStack_15].z = fVar18;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      IStack_29.rgctxDataDummy = &UNK_?;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      in_stack_30.rgctxDataDummy = aIStack_10;
      in_stack_31.rgctxDataDummy = &UNK_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)in_stack_30.method,pTVar8,(MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if (pIStack_15 < (Int32__Array *)pVVar16->max_length) {
        pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
        pVVar16->vector[(int)pIStack_15].y = fVar17;
        pVVar16->vector[(int)pIStack_15].z = fVar18;
        iVar19 = (this->fields).savedCnt;
        (this->fields).savedCnt = iVar19 + 1;
        TrailArc_findCoordinates(this,iVar19 + -2,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((this->fields).emittingDone != 0) {
      (this->fields).Emit = 0;
    }
    if ((this->fields).Emit == 0) {
code_?:
      if ((this->fields).displayCnt == (this->fields).pointCnt) {
        pMVar32 = (this->fields).trailMaterial;
        if (pMVar32 != (Material *)0x0) {
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                              ((Vector4 *)&stack0xfffffe48,pMVar32,StringLiteral__TintColor,
                               (MethodInfo *)0x0);
          uVar34 = pVVar33->x;
          uVar35 = pVVar33->y;
          uVar36 = pVVar33->z;
          value.z = (float)uVar36;
          value.y = (float)uVar35;
          value.x = (float)uVar34;
          fVar18 = pVVar33->w;
          pVStack_21 = (Vector2__Array *)(this->fields).fadeOutRatio;
          pIStack_15 = (Int32__Array *)(this->fields).lifeTimeRatio;
          fStack_37 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
          fVar18 = fVar18 - (float)pIStack_15 * (float)pVStack_21 * fStack_37;
          if (fVar18 <= _UNK_?) {
            if ((this->fields).printResults != 0) {
              pSVar38 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar38 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_Trail_effect_ending_with_a_segme,pSVar38,
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                        ((Object *)pSVar38,(MethodInfo *)0x0);
            }
            pGVar39 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar39,(MethodInfo *)0x0);
            pGVar39 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar39,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
          pMVar32 = (this->fields).trailMaterial;
          if (pMVar32 != (Material *)0x0) {
            value.w = fVar18;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar32,StringLiteral__TintColor,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
      }
      else {
code_?:
        if ((this->fields).displayCnt < (this->fields).pointCnt) {
          pVStack_21 = (Vector2__Array *)(this->fields).elapsedInsertionTime;
          pIStack_15 = (Int32__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
          fVar18 = (float)pIStack_15 + (float)pVStack_21;
          pfVar22 = &(this->fields).averageInsertionTime;
          (this->fields).elapsedInsertionTime = fVar18;
          if (*pfVar22 <= fVar18 && fVar18 != *pfVar22) {
            fVar18 = (this->fields).averageInsertionTime;
            iVar19 = (this->fields).displayCnt;
            do {
              fVar17 = (this->fields).elapsedInsertionTime - fVar18;
              iVar40 = iVar19 + 1;
              if ((this->fields).pointCnt <= iVar19) {
                iVar40 = iVar19;
              }
              (this->fields).elapsedInsertionTime = fVar17;
              iVar19 = iVar40;
            } while (fVar18 < fVar17);
            (this->fields).displayCnt = iVar40;
          }
        }
        if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
          pRVar41 = (this->fields).mRenderer;
          if (pRVar41 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar41,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
        else {
          pRVar41 = (this->fields).mRenderer;
          if (pRVar41 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar41,1,(MethodInfo *)0x0);
            iStack_42 = (this->fields).displayCnt;
            (this->fields).lifeTimeRatio = _UNK_? / (this->fields).lifetime;
            if (((this->fields).maxPointsDrawn < iStack_42) && (0 < (this->fields).maxPointsDrawn))
            {
              iStack_42 = (this->fields).maxPointsDrawn;
            }
            iVar19 = iStack_42;
            pVStack_43 = (Vector3__Array *)func_?();
            pVStack_21 = (Vector2__Array *)func_?();
            pIStack_15 = (Int32__Array *)func_?();
            pCStack_14 = (Color__Array *)func_?();
            fVar18 = _UNK_? / (float)(iVar19 + -1);
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              IVar44.rgctxDataDummy = &UNK_?;
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                IVar45.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                __return_storage_ptr__.rgctxDataDummy = aIStack_10;
                IVar46.rgctxDataDummy = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)__return_storage_ptr__.method,pTVar8,(MethodInfo *)0x0);
                fVar17 = 0.0;
                while( true ) {
                  fStack_37 = fVar17;
                  if (iStack_42 <= (int)fVar17) break;
                  pVVar16 = (this->fields).points;
                  if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                  uVar47 = ((this->fields).displayCnt + (int)fVar17) - iStack_42;
                  if (pVVar16->max_length <= uVar47) goto code_?;
                  uVar11 = *(undefined8 *)((int)pVVar16 + uVar47 * 0xc + 0x10);
                  fVar48 = *(float *)((int)pVVar16 + uVar47 * 0xc + 0x18);
                  pCVar12 = (this->fields).colors;
                  fStack_49 = (float)(int)fVar17 * fVar18;
                  uStack_13 = uVar11;
                  fStack_50 = fVar48;
                  if (pCVar12 == (Color__Array *)0x0) goto code_?;
                  if (pCVar12->max_length == 0) {
                    in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_23.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    pCVar51 = (Color *)&puStack_52;
                    IVar46 = in_stack_25;
                    __return_storage_ptr__ = in_stack_24;
                    pTVar8 = in_stack_53;
                    t = in_stack_54;
code_?:
                    a.g = (float)IStack_29.rgctxDataDummy;
                    a.r = (float)in_stack_28.rgctxDataDummy;
                    a.b = (float)in_stack_23.rgctxDataDummy;
                    a.a = (float)in_stack_27.rgctxDataDummy;
                    b.g = (float)IVar46.rgctxDataDummy;
                    b.r = (float)in_stack_26.rgctxDataDummy;
                    b.b = (float)__return_storage_ptr__.rgctxDataDummy;
                    b.a = (float)pTVar8;
                    pCVar51 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                        (pCVar51,a,b,t,in_stack_55);
                    in_stack_25 = (Il2CppRGCTXData)pCVar51->r;
                    in_stack_24 = (Il2CppRGCTXData)pCVar51->g;
                    in_stack_53 = (Transform *)pCVar51->b;
                    in_stack_54 = pCVar51->a;
                    in_stack_28 = IStack_29;
                    IVar56 = IVar46;
                    IVar57 = __return_storage_ptr__;
                    pTVar58 = pTVar8;
                  }
                  else {
                    if (pCVar12->max_length == 1) {
                      in_stack_26 = in_stack_59;
                      func_?();
                      in_stack_55 = (MethodInfo *)0x0;
                      in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_23.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      pCVar51 = (Color *)&stack0xfffffd68;
                      IVar46 = in_stack_60;
                      __return_storage_ptr__ = in_stack_61;
                      pTVar8 = in_stack_62;
                      t = fStack_49;
                      in_stack_59 = in_stack_26;
                      goto code_?;
                    }
                    if (pCVar12->max_length == 2) {
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        pTVar8 = (Transform *)0x0;
                        __return_storage_ptr__.rgctxDataDummy = &stack0xfffffe08;
                        IVar46.rgctxDataDummy = &UNK_?;
                        IStack_29 = in_stack_23;
                        in_stack_23 = in_stack_27;
                        in_stack_27 = IVar45;
                        func_?();
                        in_stack_55 = (MethodInfo *)0x0;
                        pCVar51 = (Color *)&stack0xfffffd78;
                        in_stack_26 = in_stack_27;
                        t = fStack_49;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    fStack_63 = (float)(int)(pCVar12->max_length - 1) -
                                (float)(int)(pCVar12->max_length - 1) * fStack_49;
                    if (fStack_63 != (float)(int)(pCVar12->max_length - 1)) {
                      uStack_64 = (double)fStack_63;
                      fVar65 = (float10)func_?();
                      fStack_66 = (float)(int)fVar65;
                      fStack_63 = fStack_63 - (float)(int)fStack_66;
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_23 = in_stack_31;
                        in_stack_27 = in_stack_30;
                        func_?();
                        in_stack_55 = (MethodInfo *)0x0;
                        in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                        pCVar51 = (Color *)&stack0xfffffd88;
                        in_stack_26 = IVar44;
                        t = fStack_63;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if (pCVar12 == (Color__Array *)0x0) goto code_?;
                    func_?();
                    IVar56 = in_stack_25;
                    IVar57 = in_stack_24;
                    pTVar58 = in_stack_53;
                    t = in_stack_54;
                  }
                  uStack_64 = (double)CONCAT44(in_stack_54,in_stack_53);
                  IStack_67 = in_stack_25;
                  IStack_68 = in_stack_24;
                  if (pCStack_14 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_31.rgctxDataDummy = (void *)((int)fVar17 * 2 + 1);
                  IStack_29.rgctxDataDummy = &UNK_?;
                  in_stack_30 = IStack_67;
                  IVar44 = IStack_68;
                  func_?();
                  pSVar69 = (this->fields).widths;
                  if (pSVar69 == (Single__Array *)0x0) goto code_?;
                  if (pSVar69->max_length == 0) {
                    fStack_63 = _UNK_?;
                  }
                  else if (pSVar69->max_length == 1) {
                    if (pSVar69->max_length == 0) goto code_?;
                    fStack_63 = pSVar69->vector[0];
                  }
                  else if (pSVar69->max_length == 2) {
                    if (pSVar69->max_length < 2) goto code_?;
                    if (pSVar69 == (Single__Array *)0x0) goto code_?;
                    if (pSVar69->max_length == 0) goto code_?;
                    fStack_63 = pSVar69->vector[0];
                    fVar70 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                       (fStack_49,(MethodInfo *)0x0);
                    pSVar69 = (this->fields).widths;
                    uStack_64 = (double)CONCAT44(fVar70,(undefined4)uStack_64);
                    fStack_63 = (fStack_63 - pSVar69->vector[1]) * fVar70 + pSVar69->vector[1];
                  }
                  else {
                    fStack_63 = (float)(int)(pSVar69->max_length - 1) -
                                (float)(int)(pSVar69->max_length - 1) * fStack_49;
                    if (fStack_63 == (float)(int)(pSVar69->max_length - 1)) {
                      if (pSVar69 == (Single__Array *)0x0) goto code_?;
                      if (pSVar69->max_length <= pSVar69->max_length - 1) goto code_?;
                      fStack_63 = pSVar69->vector[pSVar69->max_length - 1];
                    }
                    else {
                      uStack_64 = (double)fStack_63;
                      fVar65 = (float10)func_?();
                      pSVar69 = (this->fields).widths;
                      fStack_66 = (float)(int)fVar65;
                      fVar70 = fStack_63 - (float)(int)fStack_66;
                      if (pSVar69->max_length <= (uint)fStack_66) goto code_?;
                      if (pSVar69 == (Single__Array *)0x0) goto code_?;
                      if (pSVar69->max_length <= (int)fStack_66 + 1U) goto code_?;
                      fStack_63 = pSVar69->vector[(int)fStack_66 + 1U];
                      fVar70 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                         (fVar70,(MethodInfo *)0x0);
                      pSVar69 = (this->fields).widths;
                      uStack_64 = (double)CONCAT44(fVar70,(undefined4)uStack_64);
                      fStack_63 = (fStack_63 - pSVar69->vector[(int)fStack_66]) * fVar70 +
                                  pSVar69->vector[(int)fStack_66];
                    }
                  }
                  fStack_71 = (float)uVar11;
                  fStack_72 = (float)((ulonglong)uVar11 >> 0x20);
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      uStack_64 = (double)CONCAT44(fVar48,(undefined4)uStack_64);
                      fStack_66 = fStack_72;
                      fStack_73 = fStack_71;
                      fStack_74 = 0.0;
                      uStack_13 = 0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar70 = fStack_75 * fStack_63 * _UNK_?;
                      IVar45 = (Il2CppRGCTXData)(fStack_66 - fStack_76 * fStack_63 * _UNK_?)
                      ;
                    }
                    else {
                      uStack_64 = (double)CONCAT44((this->fields).time,(undefined4)uStack_64);
                      fStack_66 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                  Time_1_get_deltaTime((MethodInfo *)0x0);
                      (this->fields).time = uStack_64._4_4_ + fStack_66;
                      pVVar16 = (this->fields).points;
                      if (fVar17 == (float)(iStack_42 + -1)) {
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        uStack_77 = uStack_78;
                        fStack_79 = fStack_80;
                        fVar70 = fStack_50;
                      }
                      else {
                        fStack_79 = fStack_50;
                        uStack_77 = uStack_13;
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fVar70 = fStack_81;
                        uStack_13 = uStack_82;
                      }
                      fStack_83 = (float)((ulonglong)uStack_13 >> 0x20);
                      fVar70 = fVar70 - fStack_79;
                      fStack_84 = (float)uStack_13;
                      fStack_73 = fStack_84 - (float)uStack_77;
                      fStack_74 = 0.0;
                      uStack_13 = 0;
                      dVar85 = (double)(this->fields).time;
                      uStack_64._4_4_ = fStack_83 - uStack_77._4_4_;
                      func_?();
                      IVar44.rgctxDataDummy = &UNK_?;
                      axis.y = uStack_64._4_4_;
                      axis.x = fStack_73;
                      axis.z = fVar70;
                      pQVar86 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_AngleAxis
                                          ((Quaternion *)&stack0xfffffd48,(float)dVar85,axis,
                                           (MethodInfo *)0x0);
                      fStack_73 = pQVar86->x;
                      fStack_74 = pQVar86->y;
                      uStack_13._0_4_ = pQVar86->z;
                      uStack_13._4_4_ = pQVar86->w;
                      pVVar9 = (Vector3 *)func_?();
                      rotation.y = fStack_74;
                      rotation.x = fStack_73;
                      rotation.z = (float)uStack_13;
                      rotation.w = uStack_13._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xfffffdb8,rotation,*pVVar9,(MethodInfo *)0x0);
                      in_stack_59.rgctxDataDummy = auStack_87;
                      in_stack_60.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      puVar88 = (undefined8 *)func_?();
                      fStack_89 = (float)((ulonglong)*puVar88 >> 0x20);
                      fStack_90 = (float)*puVar88;
                      uStack_64 = (double)CONCAT44(fVar48,(undefined4)uStack_64);
                      fStack_66 = fStack_72;
                      fStack_73 = fStack_71;
                      fStack_74 = 0.0;
                      uStack_13 = 0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar70 = fStack_90 * fStack_63 * _UNK_?;
                      IVar45 = (Il2CppRGCTXData)(fStack_66 - fStack_89 * fStack_63 * _UNK_?);
                    }
                  }
                  else {
                    pVVar16 = (this->fields).points;
                    if (fVar17 == (float)(iStack_42 + -1)) {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    fStack_66 = fStack_72;
                    fStack_73 = fStack_71;
                    fStack_74 = 0.0;
                    uStack_13 = 0;
                    fStack_50 = fVar48;
                    puVar88 = (undefined8 *)func_?();
                    fVar48 = *(float *)(puVar88 + 1);
                    fStack_91 = (float)((ulonglong)*puVar88 >> 0x20);
                    fStack_92 = (float)*puVar88;
                    if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fVar70 = fStack_92 * fStack_63 * _UNK_?;
                    fStack_93 = fStack_50 - fVar48 * fStack_63 * _UNK_?;
                    IVar45 = (Il2CppRGCTXData)(fStack_66 - fStack_91 * fStack_63 * _UNK_?);
                  }
                  pTVar8 = (Transform *)(fStack_73 - fVar70);
                  __return_storage_ptr__.rgctxDataDummy = (void *)((int)fVar17 * 2 + 1);
                  IVar46.rgctxDataDummy = &UNK_?;
                  func_?();
                  if (pVStack_21 == (Vector2__Array *)0x0) goto code_?;
                  if (pVStack_21->max_length <= (uint)((int)fVar17 * 2)) goto code_?;
                  pVStack_21->vector[(int)fVar17 * 2].x = fStack_49;
                  pVStack_21->vector[(int)fVar17 * 2].y = 0.0;
                  if (pVStack_21->max_length <= (int)fVar17 * 2 + 1U) goto code_?;
                  pVStack_21->vector[(int)fVar17 * 2 + 1].x = fStack_49;
                  pVStack_21->vector[(int)fVar17 * 2 + 1].y = 1.0;
                  if (0 < (int)fVar17) {
                    iVar19 = (int)fVar17 * 6;
                    if (pIStack_15 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_15->max_length <= iVar19 - 6U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -6] = (int)fVar17 * 2 + -2;
                    iVar40 = (int)fVar17 * 2;
                    uStack_64 = (double)CONCAT44(iVar40 + -1,(undefined4)uStack_64);
                    if (pIStack_15->max_length <= iVar19 - 5U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -5] = iVar40 + -1;
                    if (pIStack_15->max_length <= iVar19 - 4U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -4] = iVar40;
                    if (pIStack_15->max_length <= iVar19 - 3U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -3] = iVar40;
                    if (pIStack_15->max_length <= iVar19 - 2U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -2] = iVar40 + -1;
                    if (pIStack_15->max_length <= iVar19 - 1U) goto code_?;
                    pIStack_15->vector[(int)fVar17 * 6 + -1] = iVar40 + 1;
                    fVar17 = fStack_37;
                  }
                  fVar17 = (float)((int)fVar17 + 1);
                  in_stack_25 = IVar56;
                  in_stack_24 = IVar57;
                  in_stack_53 = pTVar58;
                  in_stack_54 = t;
                }
                pGVar39 = (this->fields).trail;
                if (pGVar39 != (GameObject *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar39,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    pGVar39 = (this->fields).trail;
                    if (pGVar39 != (GameObject *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar39,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (pTVar8 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->
                                           identityQuaternion,(MethodInfo *)0x0);
                        pMVar94 = (this->fields).mesh;
                        if (pMVar94 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                    (pMVar94,(MethodInfo *)0x0);
                          pMVar94 = (this->fields).mesh;
                          if (pMVar94 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                      (pMVar94,pVStack_43,(MethodInfo *)0x0);
                            pMVar94 = (this->fields).mesh;
                            if (pMVar94 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                                        (pMVar94,pCStack_14,(MethodInfo *)0x0);
                              pMVar94 = (this->fields).mesh;
                              if (pMVar94 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                          (pMVar94,pVStack_21,(MethodInfo *)0x0);
                                pMVar94 = (this->fields).mesh;
                                if (pMVar94 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                            (pMVar94,pIStack_15,(MethodInfo *)0x0);
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
        }
      }
      goto code_?;
    }
    pVVar16 = (this->fields).saved;
    iVar19 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar16->max_length <= iVar19 - 1U) goto code_?;
    uVar95 = pVVar16->vector[iVar19 + -1].x;
    uVar96 = pVVar16->vector[iVar19 + -1].y;
    fVar18 = pVVar16->vector[iVar19 + -1].z - (float)pCVar12;
    fVar18 = fVar18 * fVar18 +
             ((float)uVar96 - (float)uVar11._4_4_) * ((float)uVar96 - (float)uVar11._4_4_) +
             ((float)uVar95 - (float)(undefined4)uVar11) * ((float)uVar95 - (float)(undefined4)uVar11);
    pfVar22 = &(this->fields).pointSqrDistance;
    if (fVar18 < *pfVar22 || fVar18 == *pfVar22) {
code_?:
      if ((this->fields).Emit == 0) goto code_?;
      goto code_?;
    }
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if ((int)(pVVar16->max_length - 1) < (this->fields).savedCnt) {
      pVVar16 = (Vector3__Array *)func_?();
      (this->fields).saved = pVVar16;
      func_?();
      if ((this->fields).saved != (Vector3__Array *)0x0) {
        pVVar16 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar16;
        func_?();
        if ((this->fields).saved != (Vector3__Array *)0x0) {
          pVVar16 = (Vector3__Array *)func_?();
          (this->fields).points = pVVar16;
          func_?();
          if ((this->fields).points != (Vector3__Array *)0x0) {
            pVVar16 = (Vector3__Array *)func_?();
            (this->fields).pointsUp = pVVar16;
            func_?();
            (this->fields).savedCnt = 0;
            (this->fields).displayCnt = 0;
            goto code_?;
          }
        }
      }
      goto code_?;
    }
code_?:
    pVVar16 = (this->fields).saved;
    uVar47 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (uVar47 < pVVar16->max_length) {
      pVVar16->vector[uVar47].x = (float)uStack_13;
      pVVar16->vector[uVar47].y = uStack_13._4_4_;
      pVVar16->vector[uVar47].z = (float)pCStack_14;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
        if (pVVar16 != (Vector3__Array *)0x0) {
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
          pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
          pVVar16->vector[(int)pIStack_15].y = fVar17;
          pVVar16->vector[(int)pIStack_15].z = fVar18;
          piVar20 = &(this->fields).savedCnt;
          *piVar20 = *piVar20 + 1;
          if ((this->fields).averageCreationTime == _UNK_?) {
            pIStack_15 = (Int32__Array *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0);
            fVar18 = (float)pIStack_15 - (this->fields).lastPointCreationTime;
          }
          else {
            pIStack_15 = (Int32__Array *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0);
            fVar18 = ((this->fields).averageCreationTime +
                     ((float)pIStack_15 - (this->fields).lastPointCreationTime)) * _UNK_?;
          }
          (this->fields).averageCreationTime = fVar18;
          (this->fields).averageInsertionTime = (this->fields).tRatio * fVar18;
          pIStack_15 = (Int32__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          (this->fields).lastPointCreationTime = (float)pIStack_15;
          if (3 < (this->fields).savedCnt) {
            TrailArc_findCoordinates(this,(this->fields).savedCnt + -3,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar97 = (code *)swi(3);
  (*pcVar97)();
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
  (this->fields).maxLifeTime = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void findCoordinates(Int32) */

void Assembly-CSharp.dll::TrailArc::TrailArc_findCoordinates
               (TrailArc *this,int32_t index,MethodInfo *method)

{
  if ((index == 0) || ((this->fields).savedCnt + -2 <= index)) {
    return;
  }
  pVVar1 = (this->fields).saved;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((pVVar1->max_length <= index - 1U) || (pVVar1->max_length <= (uint)index))
    goto code_?;
    uVar2 = pVVar1->vector[index].x;
    uVar3 = pVVar1->vector[index].y;
    fVar4 = pVVar1->vector[index].z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (pVVar1->max_length <= index + 1U) goto code_?;
      uVar5 = pVVar1->vector[index + 1].x;
      uVar6 = pVVar1->vector[index + 1].y;
      fVar7 = pVVar1->vector[index + 1].z;
      if (pVVar1 != (Vector3__Array *)0x0) {
        if (index + 2U < pVVar1->max_length) {
          uVar8 = pVVar1->vector[index + 1].x;
          uVar9 = pVVar1->vector[index + 1].y;
          uVar10 = pVVar1->vector[index + -1].x;
          uVar11 = pVVar1->vector[index + -1].y;
          fVar12 = ((float)uVar8 - (float)uVar10) * _UNK_?;
          fVar13 = ((float)uVar9 - (float)uVar11) * _UNK_?;
          fVar14 = (pVVar1->vector[index + 1].z - pVVar1->vector[index + -1].z) * _UNK_?;
          uVar15 = pVVar1->vector[index + 2].x;
          uVar16 = pVVar1->vector[index + 2].y;
          uVar17 = pVVar1->vector[index].x;
          uVar18 = pVVar1->vector[index].y;
          fVar19 = ((float)uVar15 - (float)uVar17) * _UNK_?;
          fVar20 = ((float)uVar16 - (float)uVar18) * _UNK_?;
          fVar21 = (pVVar1->vector[index + 2].z - pVVar1->vector[index].z) * _UNK_?;
          iVar22 = (this->fields).segmentsPerPoint * index;
          if (iVar22 < (this->fields).segmentsPerPoint + iVar22) {
            iStack_23 = 0;
            iVar24 = iVar22;
            fVar25 = _UNK_?;
            fVar26 = _UNK_?;
            do {
              pVVar1 = (this->fields).points;
              uVar27 = iVar24 - (this->fields).segmentsPerPoint;
              fVar28 = (float)iStack_23 * (this->fields).tRatio;
              fVar29 = fVar28 * fVar28;
              fVar30 = fVar29 * fVar28;
              fVar25 = ((fVar30 + fVar30) - fVar29 * fVar26) + fVar25;
              fVar26 = fVar29 * fVar26 - (fVar30 + fVar30);
              fVar31 = (fVar30 - (fVar29 + fVar29)) + fVar28;
              fVar30 = fVar30 - fVar29;
              uStack_32 = CONCAT44(fVar20 * fVar30 +
                                   fVar13 * fVar31 + (float)uVar6 * fVar26 + (float)uVar3 * fVar25,
                                   fVar19 * fVar30 +
                                   fVar12 * fVar31 + (float)uVar5 * fVar26 + (float)uVar2 * fVar25);
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar1->max_length <= uVar27) goto code_?;
              *(undefined8 *)((int)pVVar1 + uVar27 * 0xc + 0x10) = uStack_32;
              *(float *)((int)pVVar1 + uVar27 * 0xc + 0x18) =
                   fVar21 * fVar30 + fVar14 * fVar31 + fVar7 * fVar26 + fVar4 * fVar25;
              fVar26 = _UNK_?;
              fVar25 = _UNK_?;
              pVVar1 = (this->fields).savedUp;
              pVVar33 = (this->fields).pointsUp;
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if ((pVVar1->max_length <= (uint)index) || (pVVar1->max_length <= index + 1U))
              goto code_?;
              uVar34 = pVVar1->vector[index + 1].x;
              uVar35 = pVVar1->vector[index + 1].y;
              fVar31 = pVVar1->vector[index + 1].z;
              uVar36 = pVVar1->vector[index].x;
              uVar37 = pVVar1->vector[index].y;
              fVar30 = pVVar1->vector[index].z;
              if (fVar28 < 0.0) {
                fVar28 = 0.0;
              }
              else if (_UNK_? < fVar28) {
                fVar28 = _UNK_?;
              }
              if (pVVar33 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar33->max_length <= uVar27) goto code_?;
              iStack_23 = iStack_23 + 1;
              *(ulonglong *)((int)pVVar33 + uVar27 * 0xc + 0x10) =
                   CONCAT44(((float)uVar35 - (float)uVar37) * fVar28 + (float)uVar37,
                            ((float)uVar34 - (float)uVar36) * fVar28 + (float)uVar36);
              *(float *)((int)pVVar33 + uVar27 * 0xc + 0x18) = (fVar31 - fVar30) * fVar28 + fVar30;
              iVar24 = iVar24 + 1;
            } while (iVar24 < (this->fields).segmentsPerPoint + iVar22);
          }
          (this->fields).pointCnt = iVar22;
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void printAllPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printAllPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_Index__);
    func_?(&StringLiteral_Points_at_time_);
    func_?(&StringLiteral__u000A);
    func_?(&StringLiteral_u0009Pos__);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pSStack_2 = (String__Array__Class *)0x0;
  if ((this->fields).pointCnt != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0)
    ;
    if (0 < (this->fields).pointCnt) {
      do {
        pSStack_2 = TypeInfo__System__String;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        values = (String__Array *)func_?();
        if (values == (String__Array *)0x0) {
code_?:
          func_?();
code_?:
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (values->max_length == 0) goto code_?;
        pSStack_2 = (String__Array__Class *)values->vector;
        values->vector[0] = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        values->vector[1] = StringLiteral_Index__;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (values->max_length < 3) goto code_?;
        values->vector[2] = pSVar3;
        pSStack_2 = (String__Array__Class *)(values->vector + 2);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 4) goto code_?;
        values->vector[3] = StringLiteral_u0009Pos__;
        pSStack_2 = (String__Array__Class *)(values->vector + 3);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pVVar5 = (this->fields).points;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar5->max_length <= (uint)unaff_ESI.m_value) goto code_?;
        pSStack_2 = (String__Array__Class *)0x0;
        uStack_1 = ZEXT48(&uStack_1);
        pSVar3 = (String *)func_?();
        if (values->max_length < 5) goto code_?;
        values->vector[4] = pSVar3;
        pSStack_2 = (String__Array__Class *)(values->vector + 4);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 6) goto code_?;
        values->vector[5] = StringLiteral_u000A;
        pSStack_2 = (String__Array__Class *)(values->vector + 5);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        unaff_ESI.m_value = unaff_ESI.m_value + 1;
      } while (unaff_ESI.m_value < (this->fields).pointCnt);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void printPoints() */

void Assembly-CSharp.dll::TrailArc::TrailArc_printPoints(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_Saved_Points_at_time_);
    func_?(&StringLiteral_Index__);
    func_?(&StringLiteral__u000A);
    func_?(&StringLiteral_u0009Pos__);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pSStack_2 = (String__Array__Class *)0x0;
  if ((this->fields).savedCnt != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Saved_Points_at_time_,pSVar3,StringLiteral__u000A,
                        (MethodInfo *)0x0);
    if (0 < (this->fields).savedCnt) {
      do {
        pSStack_2 = TypeInfo__System__String;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        values = (String__Array *)func_?();
        if (values == (String__Array *)0x0) {
code_?:
          func_?();
code_?:
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (values->max_length == 0) goto code_?;
        pSStack_2 = (String__Array__Class *)values->vector;
        values->vector[0] = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        values->vector[1] = StringLiteral_Index__;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (values->max_length < 3) goto code_?;
        values->vector[2] = pSVar3;
        pSStack_2 = (String__Array__Class *)(values->vector + 2);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 4) goto code_?;
        values->vector[3] = StringLiteral_u0009Pos__;
        pSStack_2 = (String__Array__Class *)(values->vector + 3);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pVVar5 = (this->fields).saved;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar5->max_length <= (uint)unaff_ESI.m_value) goto code_?;
        pSStack_2 = (String__Array__Class *)0x0;
        uStack_1 = ZEXT48(&uStack_1);
        pSVar3 = (String *)func_?();
        if (values->max_length < 5) goto code_?;
        values->vector[4] = pSVar3;
        pSStack_2 = (String__Array__Class *)(values->vector + 4);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 6) goto code_?;
        values->vector[5] = StringLiteral_u000A;
        pSStack_2 = (String__Array__Class *)(values->vector + 5);
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        unaff_ESI.m_value = unaff_ESI.m_value + 1;
      } while (unaff_ESI.m_value < (this->fields).savedCnt);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}

