
/* Void SetTrailColor(Color) */

void Assembly-CSharp.dll::TrailArc::TrailArc_SetTrailColor
               (TrailArc *this,Color baseColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,3);
  fVar2 = _UNK_? - baseColor.r;
  fVar3 = _UNK_? - baseColor.g;
  fVar4 = _UNK_? - baseColor.b;
  fVar5 = (0.0 - baseColor.a) * _UNK_?;
  fVar6 = fVar3 * _UNK_?;
  fVar7 = fVar4 * _UNK_?;
  if (pCVar1 == (Color__Array *)0x0) {
    func_?();
  }
  else if (pCVar1->max_length != 0) {
    pCVar1->vector[0].r = fVar2 * _UNK_? + baseColor.r;
    pCVar1->vector[0].g = fVar6 + baseColor.g;
    pCVar1->vector[0].b = fVar7 + baseColor.b;
    pCVar1->vector[0].a = fVar5 + baseColor.a;
    fVar3 = fVar3 * _UNK_?;
    fVar4 = fVar4 * _UNK_?;
    fVar5 = (0.0 - baseColor.a) * _UNK_?;
    if (1 < pCVar1->max_length) {
      pCVar1->vector[1].r = fVar2 * _UNK_? + baseColor.r;
      pCVar1->vector[1].g = fVar3 + baseColor.g;
      pCVar1->vector[1].b = fVar4 + baseColor.b;
      pCVar1->vector[1].a = fVar5 + baseColor.a;
      if (2 < pCVar1->max_length) {
        ppCVar8 = &(this->fields).colors;
        pCVar1->vector[2].r = baseColor.r;
        pCVar1->vector[2].g = baseColor.g;
        pCVar1->vector[2].b = baseColor.b;
        pCVar1->vector[2].a = baseColor.a;
        *ppCVar8 = pCVar1;
        func_?(ppCVar8,pCVar1);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  ppVVar2 = &(this->fields).saved;
  *ppVVar2 = pVVar1;
  func_?(ppVVar2,pVVar1);
  if (*ppVVar2 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)
             func_?(TypeInfo__UnityEngine__Vector3,(*ppVVar2)->max_length);
    ppVVar3 = &(this->fields).savedUp;
    *ppVVar3 = pVVar1;
    func_?(ppVVar3,pVVar1);
    if (*ppVVar2 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)
               func_?(TypeInfo__UnityEngine__Vector3,
                               (*ppVVar2)->max_length * (this->fields).segmentsPerPoint);
      ppVVar2 = &(this->fields).points;
      *ppVVar2 = pVVar1;
      func_?(ppVVar2,pVVar1);
      if (*ppVVar2 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)
                 func_?(TypeInfo__UnityEngine__Vector3,(*ppVVar2)->max_length);
        ppVVar2 = &(this->fields).pointsUp;
        *ppVVar2 = pVVar1;
        func_?(ppVVar2,pVVar1);
        fVar4 = (this->fields).pointDistance;
        (this->fields).tRatio = _UNK_? / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar4 * fVar4;
        this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_00,StringLiteral_Trail,(MethodInfo *)0x0);
        ppGVar5 = &(this->fields).trail;
        *ppGVar5 = this_00;
        func_?(ppGVar5,this_00);
        if (*ppGVar5 != (GameObject *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (*ppGVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            if (*ppGVar5 != (GameObject *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*ppGVar5,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar6,TypeInfo__UnityEngine__Quaternion->static_fields->
                                  identityQuaternion,(MethodInfo *)0x0);
                if (*ppGVar5 != (GameObject *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar6 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                               (MethodInfo *)0x0);
                    if (*ppGVar5 != (GameObject *)0x0) {
                      this_01 = (MeshFilter *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (*ppGVar5,
                                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                          );
                      if (*ppGVar5 != (GameObject *)0x0) {
                        pRVar7 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            (*ppGVar5,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                            );
                        (this->fields).mRenderer = pRVar7;
                        func_?();
                        if (this_01 != (MeshFilter *)0x0) {
                          pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                    MeshFilter_get_mesh(this_01,(MethodInfo *)0x0);
                          ppMVar9 = &(this->fields).mesh;
                          *ppMVar9 = pMVar8;
                          func_?(ppMVar9,pMVar8);
                          source = (this->fields).material;
                          this_02 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                                    (this_02,source,(MethodInfo *)0x0);
                          ppMVar10 = &(this->fields).trailMaterial;
                          *ppMVar10 = this_02;
                          func_?(ppMVar10,this_02);
                          if (*ppMVar10 != (Material *)0x0) {
                            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                      Material_GetVector((Vector4 *)&stack0xffffffec,*ppMVar10,
                                                         StringLiteral__TintColor,(MethodInfo *)0x0)
                            ;
                            (this->fields).fadeOutRatio = pVVar11->w;
                            pRVar7 = (this->fields).mRenderer;
                            if (pRVar7 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial(pRVar7,*ppMVar10,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 != (Transform *)0x0) &&
         (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                              ((Vector3 *)aIStack_10,pTVar8,0.0,0.0,
                               (float)((uint)(this->fields).pointDistance ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      ),(MethodInfo *)0x0), pVVar16 != (Vector3__Array *)0x0)) {
        fVar17 = pVVar9->y;
        fVar18 = pVVar9->z;
        if (pVStack_15 < (Vector2__Array *)pVVar16->max_length) {
          pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
          pVVar16->vector[(int)pVStack_15].y = fVar17;
          pVVar16->vector[(int)pVStack_15].z = fVar18;
          pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
          pVVar16 = (this->fields).savedUp;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if ((pTVar8 == (Transform *)0x0) ||
             (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0),
             pVVar16 == (Vector3__Array *)0x0)) goto code_?;
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
          pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
          pVVar16->vector[(int)pVStack_15].y = fVar17;
          pVVar16->vector[(int)pVStack_15].z = fVar18;
          iVar19 = (this->fields).savedCnt;
          pVVar16 = (this->fields).saved;
          (this->fields).savedCnt = iVar19 + 1U;
          if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
          if (pVVar16->max_length <= iVar19 + 1U) goto code_?;
          pVVar16->vector[iVar19 + 1].x = (float)uStack_13;
          pVVar16->vector[iVar19 + 1].y = uStack_13._4_4_;
          pVVar16->vector[iVar19 + 1].z = (float)pCStack_14;
          pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
          pVVar16 = (this->fields).savedUp;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if ((pTVar8 == (Transform *)0x0) ||
             (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0),
             pVVar16 == (Vector3__Array *)0x0)) goto code_?;
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if (pVStack_15 < (Vector2__Array *)pVVar16->max_length) {
            pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
            pVVar16->vector[(int)pVStack_15].y = fVar17;
            pVVar16->vector[(int)pVStack_15].z = fVar18;
            piVar20 = &(this->fields).savedCnt;
            *piVar20 = *piVar20 + 1;
            pVStack_15 = (Vector2__Array *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0);
            (this->fields).lastPointCreationTime = (float)pVStack_15;
            pVStack_15 = (Vector2__Array *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0);
            (this->fields).creationTime = (float)pVStack_15;
            (this->fields).initialized = 1;
            goto code_?;
          }
        }
        else {
          func_?();
code_?:
          func_?();
code_?:
          func_?();
        }
        func_?();
code_?:
        func_?();
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
    pVStack_15 = (Vector2__Array *)(this->fields).creationTime;
    fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar22 = &(this->fields).maxLifeTime;
    if (*pfVar22 <= (float)pVStack_15 - fStack_21 && (float)pVStack_15 - fStack_21 != *pfVar22) {
      (this->fields).Emit = 0;
    }
    if ((this->fields).Emit == 0) {
      if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
        (this->fields).emittingDone = 1;
        goto code_?;
      }
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 == (Transform *)0x0) ||
         (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1
                              ((Vector3 *)aIStack_10,pTVar8,0.0,0.0,(this->fields).pointDistance,
                               (MethodInfo *)0x0), pVVar16 == (Vector3__Array *)0x0))
      goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
      pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pVStack_15].y = fVar17;
      pVVar16->vector[(int)pVStack_15].z = fVar18;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 == (Transform *)0x0) ||
         (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0),
         pVVar16 == (Vector3__Array *)0x0)) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
      pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pVStack_15].y = fVar17;
      pVVar16->vector[(int)pVStack_15].z = fVar18;
      iVar19 = (this->fields).savedCnt;
      (this->fields).savedCnt = iVar19 + 1;
      TrailArc_findCoordinates(this,iVar19 + -2,(MethodInfo *)0x0);
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
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
      if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
      pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pVStack_15].y = fVar17;
      pVVar16->vector[(int)pVStack_15].z = fVar18;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
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
      if (pVStack_15 < (Vector2__Array *)pVVar16->max_length) {
        pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
        pVVar16->vector[(int)pVStack_15].y = fVar17;
        pVVar16->vector[(int)pVStack_15].z = fVar18;
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
      piVar20 = &(this->fields).pointCnt;
      if ((this->fields).displayCnt == *piVar20) {
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
          fStack_21 = (this->fields).fadeOutRatio;
          pVStack_15 = (Vector2__Array *)(this->fields).lifeTimeRatio;
          pCStack_14 = (Color__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
          fVar18 = fVar18 - (float)pVStack_15 * fStack_21 * (float)pCStack_14;
          if (fVar18 <= _UNK_?) {
            if ((this->fields).printResults != 0) {
              pSVar37 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)piVar20,(MethodInfo *)0x0);
              pSVar37 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_Trail_effect_ending_with_a_segme,pSVar37,
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                        ((Object *)pSVar37,(MethodInfo *)0x0);
            }
            pGVar38 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar38,(MethodInfo *)0x0);
            pGVar38 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar38,(MethodInfo *)0x0);
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
          fStack_21 = (this->fields).elapsedInsertionTime;
          pVStack_15 = (Vector2__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
          fVar18 = (this->fields).averageInsertionTime;
          (this->fields).elapsedInsertionTime = (float)pVStack_15 + fStack_21;
          if (fVar18 < (float)pVStack_15 + fStack_21) {
            iVar19 = (this->fields).displayCnt;
            do {
              fVar17 = (this->fields).elapsedInsertionTime - fVar18;
              iVar39 = iVar19 + 1;
              if ((this->fields).pointCnt <= iVar19) {
                iVar39 = iVar19;
              }
              (this->fields).elapsedInsertionTime = fVar17;
              iVar19 = iVar39;
            } while (fVar18 < fVar17);
            (this->fields).displayCnt = iVar39;
          }
        }
        if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
          pRVar40 = (this->fields).mRenderer;
          if (pRVar40 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar40,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
        else {
          pRVar40 = (this->fields).mRenderer;
          if (pRVar40 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (pRVar40,1,(MethodInfo *)0x0);
            iVar19 = (this->fields).displayCnt;
            iVar39 = (this->fields).maxPointsDrawn;
            (this->fields).lifeTimeRatio = _UNK_? / (this->fields).lifetime;
            if ((iVar39 < iVar19) && (0 < iVar39)) {
              iVar19 = iVar39;
            }
            iStack_41 = iVar19;
            pVStack_42 = (Vector3__Array *)func_?();
            pVStack_15 = (Vector2__Array *)func_?();
            pIStack_43 = (Int32__Array *)func_?();
            pCStack_14 = (Color__Array *)func_?();
            fVar18 = _UNK_? / (float)(iVar19 + -1);
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              IVar44.rgctxDataDummy = &UNK_?;
              this_01.method =
                   (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
              if (this_01.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
                fVar17 = 0.0;
                __return_storage_ptr__.rgctxDataDummy = aIStack_10;
                IVar45.rgctxDataDummy = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)__return_storage_ptr__.method,(Transform *)this_01.method,
                           (MethodInfo *)0x0);
                for (iVar19 = 0; iVar19 < iStack_41; iVar19 = iVar19 + 1) {
                  pVVar16 = (this->fields).points;
                  if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                  uVar46 = ((this->fields).displayCnt - iStack_41) + iVar19;
                  if (pVVar16->max_length <= uVar46) goto code_?;
                  uVar11 = *(undefined8 *)((int)pVVar16 + uVar46 * 0xc + 0x10);
                  fVar47 = *(float *)((int)pVVar16 + uVar46 * 0xc + 0x18);
                  pCVar12 = (this->fields).colors;
                  fStack_48 = (float)iVar19 * fVar18;
                  uStack_13 = uVar11;
                  fStack_49 = fVar47;
                  if (pCVar12 == (Color__Array *)0x0) goto code_?;
                  if (pCVar12->max_length == 0) {
                    fVar17 = 0.0;
                    IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    pCVar50 = (Color *)&puStack_51;
                    IVar44 = in_stack_26;
                    IVar45 = in_stack_25;
                    __return_storage_ptr__ = in_stack_24;
                    this_01 = in_stack_52;
                    t = in_stack_53;
code_?:
                    a.g = (float)IStack_29.rgctxDataDummy;
                    a.r = fVar17;
                    a.b = (float)in_stack_31.rgctxDataDummy;
                    a.a = (float)in_stack_30.rgctxDataDummy;
                    b.g = (float)IVar45.rgctxDataDummy;
                    b.r = (float)IVar44.rgctxDataDummy;
                    b.b = (float)__return_storage_ptr__.rgctxDataDummy;
                    b.a = (float)this_01.rgctxDataDummy;
                    pCVar50 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                        (pCVar50,a,b,t,in_stack_54);
                    in_stack_25 = (Il2CppRGCTXData)pCVar50->r;
                    in_stack_24 = (Il2CppRGCTXData)pCVar50->g;
                    in_stack_52 = (Il2CppRGCTXData)pCVar50->b;
                    in_stack_53 = pCVar50->a;
                    in_stack_28 = IStack_29;
                    in_stack_23 = in_stack_31;
                    in_stack_27 = in_stack_30;
                    in_stack_26 = IVar44;
                    IVar55 = IVar45;
                    IVar56 = __return_storage_ptr__;
                    IVar57 = this_01;
                  }
                  else {
                    if (pCVar12->max_length == 1) {
                      func_?();
                      in_stack_54 = (MethodInfo *)0x0;
                      fVar17 = 0.0;
                      IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      pCVar50 = (Color *)&stack0xfffffd68;
                      IVar44 = in_stack_58;
                      IVar45 = in_stack_59;
                      __return_storage_ptr__ = in_stack_60;
                      this_01 = in_stack_61;
                      t = fStack_48;
                      goto code_?;
                    }
                    if (pCVar12->max_length == 2) {
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                        in_stack_31.rgctxDataDummy = &stack0xfffffdc8;
                        IStack_29.rgctxDataDummy = &UNK_?;
                        func_?();
                        in_stack_54 = (MethodInfo *)0x0;
                        pCVar50 = (Color *)&stack0xfffffd78;
                        IVar44 = in_stack_28;
                        IVar45 = in_stack_23;
                        __return_storage_ptr__ = in_stack_27;
                        this_01 = in_stack_26;
                        t = fStack_48;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    fStack_62 = (float)(int)(pCVar12->max_length - 1) -
                                (float)(int)(pCVar12->max_length - 1) * fStack_48;
                    if (fStack_62 != (float)(int)(pCVar12->max_length - 1)) {
                      uStack_63 = (double)fStack_62;
                      fVar64 = (float10)func_?();
                      fStack_21 = (float)(int)fVar64;
                      fStack_62 = fStack_62 - (float)(int)fStack_21;
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        func_?();
                        in_stack_54 = (MethodInfo *)0x0;
                        fVar17 = 0.0;
                        pCVar50 = (Color *)&stack0xfffffd88;
                        t = fStack_62;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    func_?();
                    IVar55 = in_stack_25;
                    IVar56 = in_stack_24;
                    IVar57 = in_stack_52;
                    t = in_stack_53;
                  }
                  uStack_63 = (double)CONCAT44(in_stack_53,in_stack_52.rgctxDataDummy);
                  IStack_65 = in_stack_25;
                  IStack_66 = in_stack_24;
                  if (pCStack_14 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_31.rgctxDataDummy = (void *)(iVar19 * 2 + 1);
                  IStack_29.rgctxDataDummy = &UNK_?;
                  in_stack_30 = IStack_65;
                  IVar44 = IStack_66;
                  func_?();
                  pSVar67 = (this->fields).widths;
                  if (pSVar67 == (Single__Array *)0x0) goto code_?;
                  fVar17 = _UNK_?;
                  if (pSVar67->max_length != 0) {
                    if (pSVar67->max_length == 1) {
                      if (pSVar67->max_length == 0) goto code_?;
                      fVar17 = pSVar67->vector[0];
                    }
                    else {
                      if (pSVar67->max_length == 2) {
                        if (pSVar67->max_length < 2) goto code_?;
                        fVar17 = pSVar67->vector[1];
                        if (pSVar67->max_length == 0) goto code_?;
                        fVar68 = pSVar67->vector[0];
                        fVar69 = fStack_48;
                      }
                      else {
                        fStack_62 = (float)(int)(pSVar67->max_length - 1) -
                                    (float)(int)(pSVar67->max_length - 1) * fStack_48;
                        if (fStack_62 == (float)(int)(pSVar67->max_length - 1)) {
                          if (pSVar67->max_length - 1 < pSVar67->max_length) {
                            fVar17 = pSVar67->vector[pSVar67->max_length - 1];
                            goto code_?;
                          }
                          goto code_?;
                        }
                        uStack_63 = (double)fStack_62;
                        fVar64 = (float10)func_?();
                        pSVar67 = (this->fields).widths;
                        fStack_21 = (float)fVar64;
                        uVar46 = (uint)fVar64;
                        if (pSVar67->max_length <= uVar46) goto code_?;
                        fVar17 = pSVar67->vector[uVar46];
                        if (pSVar67->max_length <= uVar46 + 1) goto code_?;
                        fVar68 = pSVar67->vector[uVar46 + 1];
                        fVar69 = fStack_62 - (float)(int)uVar46;
                      }
                      if (fVar69 < 0.0) {
                        fVar69 = 0.0;
                      }
                      else if (_UNK_? < fVar69) {
                        fVar17 = (fVar68 - fVar17) * _UNK_? + fVar17;
                        goto code_?;
                      }
                      fVar17 = (fVar68 - fVar17) * fVar69 + fVar17;
                    }
                  }
code_?:
                  fStack_70 = (float)uVar11;
                  fStack_71 = (float)((ulonglong)uVar11 >> 0x20);
                  fStack_62 = fVar17;
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fStack_49 = fStack_71;
                      fStack_72 = fStack_70;
                      fStack_73 = 0.0;
                      uStack_13 = 0;
                      fStack_21 = fVar47;
                      if ((pVStack_42 == (Vector3__Array *)0x0) ||
                         (func_?(), (this->fields).pointsUp == (Vector3__Array *)0x0))
                      goto code_?;
                      func_?();
                      fVar47 = fStack_62 * fStack_74 * _UNK_?;
                      fVar68 = fStack_62 * fStack_75 * _UNK_?;
                      fVar17 = fStack_49;
                    }
                    else {
                      fStack_21 = (this->fields).time;
                      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                         ((MethodInfo *)0x0);
                      uStack_63 = (double)CONCAT44(fVar17,(undefined4)uStack_63);
                      (this->fields).time = fStack_21 + fVar17;
                      pVVar16 = (this->fields).points;
                      if (iVar19 == iStack_41 + -1) {
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        uStack_76 = uStack_77;
                        fStack_78 = fStack_79;
                        fVar17 = fStack_49;
                      }
                      else {
                        fStack_78 = fStack_49;
                        uStack_76 = uStack_13;
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fVar17 = fStack_80;
                        uStack_13 = uStack_81;
                      }
                      fStack_82 = (float)((ulonglong)uStack_13 >> 0x20);
                      fVar17 = fVar17 - fStack_78;
                      fStack_83 = (float)uStack_13;
                      fStack_72 = fStack_83 - (float)uStack_76;
                      fStack_73 = 0.0;
                      uStack_13 = 0;
                      dVar84 = (double)(this->fields).time;
                      uStack_63._4_4_ = fStack_82 - uStack_76._4_4_;
                      func_?();
                      IVar44.rgctxDataDummy = &UNK_?;
                      axis.y = uStack_63._4_4_;
                      axis.x = fStack_72;
                      axis.z = fVar17;
                      pQVar85 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_AngleAxis
                                          ((Quaternion *)&stack0xfffffd48,(float)dVar84,axis,
                                           (MethodInfo *)0x0);
                      fStack_72 = pQVar85->x;
                      fStack_73 = pQVar85->y;
                      uStack_13._0_4_ = pQVar85->z;
                      uStack_13._4_4_ = pQVar85->w;
                      pVVar9 = (Vector3 *)func_?();
                      rotation.y = fStack_73;
                      rotation.x = fStack_72;
                      rotation.z = (float)uStack_13;
                      rotation.w = uStack_13._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xfffffda8,rotation,*pVVar9,(MethodInfo *)0x0);
                      in_stack_58.rgctxDataDummy = &stack0xfffffd98;
                      in_stack_59.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      puVar86 = (undefined8 *)func_?();
                      fStack_87 = (float)((ulonglong)*puVar86 >> 0x20);
                      fStack_88 = (float)*puVar86;
                      uStack_63 = (double)CONCAT44(fVar47,(undefined4)uStack_63);
                      fStack_21 = fStack_71;
                      fStack_72 = fStack_70;
                      fStack_73 = 0.0;
                      uStack_13 = 0;
                      if (pVStack_42 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar47 = fStack_62 * fStack_87 * _UNK_?;
                      fVar68 = fStack_62 * fStack_88 * _UNK_?;
                      fVar17 = fStack_21;
                    }
                  }
                  else {
                    pVVar16 = (this->fields).points;
                    if (iVar19 == iStack_41 + -1) {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    fStack_21 = fStack_71;
                    fStack_72 = fStack_70;
                    fStack_73 = 0.0;
                    uStack_13 = 0;
                    fStack_49 = fVar47;
                    puVar86 = (undefined8 *)func_?();
                    fVar17 = *(float *)(puVar86 + 1);
                    fStack_89 = (float)((ulonglong)*puVar86 >> 0x20);
                    fStack_90 = (float)*puVar86;
                    if (pVStack_42 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fVar47 = fStack_89 * fStack_62 * _UNK_?;
                    fVar68 = fStack_90 * fStack_62 * _UNK_?;
                    fStack_91 = fStack_49 - fVar17 * fStack_62 * _UNK_?;
                    fVar17 = fStack_21;
                  }
                  fVar17 = fVar17 - fVar47;
                  this_01 = (Il2CppRGCTXData)(fStack_72 - fVar68);
                  __return_storage_ptr__.rgctxDataDummy = (void *)(iVar19 * 2 + 1);
                  IVar45.rgctxDataDummy = &UNK_?;
                  func_?();
                  if (pVStack_15 == (Vector2__Array *)0x0) goto code_?;
                  uVar46 = iVar19 * 2;
                  if (pVStack_15->max_length <= uVar46) goto code_?;
                  pVStack_15->vector[iVar19 * 2].x = fStack_48;
                  pVStack_15->vector[iVar19 * 2].y = 0.0;
                  if (pVStack_15->max_length <= iVar19 * 2 + 1U) goto code_?;
                  pVStack_15->vector[iVar19 * 2 + 1].x = fStack_48;
                  pVStack_15->vector[iVar19 * 2 + 1].y = 1.0;
                  if (0 < iVar19) {
                    iVar39 = iVar19 * 6;
                    if (pIStack_43 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_43->max_length <= iVar39 - 6U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -6] = uVar46 - 2;
                    if (pIStack_43->max_length <= iVar39 - 5U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -5] = uVar46 - 1;
                    if (pIStack_43->max_length <= iVar39 - 4U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -4] = uVar46;
                    if (pIStack_43->max_length <= iVar39 - 3U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -3] = uVar46;
                    if (pIStack_43->max_length <= iVar39 - 2U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -2] = uVar46 - 1;
                    if (pIStack_43->max_length <= iVar39 - 1U) goto code_?;
                    pIStack_43->vector[iVar19 * 6 + -1] = uVar46 + 1;
                  }
                  in_stack_25 = IVar55;
                  in_stack_24 = IVar56;
                  in_stack_52 = IVar57;
                  in_stack_53 = t;
                }
                pGVar38 = (this->fields).trail;
                if (pGVar38 != (GameObject *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar38,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    pGVar38 = (this->fields).trail;
                    if (pGVar38 != (GameObject *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar38,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (pTVar8 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->
                                           identityQuaternion,(MethodInfo *)0x0);
                        pMVar92 = (this->fields).mesh;
                        if (pMVar92 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                    (pMVar92,(MethodInfo *)0x0);
                          pMVar92 = (this->fields).mesh;
                          if (pMVar92 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                      (pMVar92,pVStack_42,(MethodInfo *)0x0);
                            pMVar92 = (this->fields).mesh;
                            if (pMVar92 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                                        (pMVar92,pCStack_14,(MethodInfo *)0x0);
                              pMVar92 = (this->fields).mesh;
                              if (pMVar92 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                          (pMVar92,pVStack_15,(MethodInfo *)0x0);
                                pMVar92 = (this->fields).mesh;
                                if (pMVar92 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                            (pMVar92,pIStack_43,(MethodInfo *)0x0);
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
    ppVVar93 = &(this->fields).saved;
    iVar19 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar16->max_length <= iVar19 - 1U) goto code_?;
    uVar94 = pVVar16->vector[iVar19 + -1].x;
    uVar95 = pVVar16->vector[iVar19 + -1].y;
    fVar18 = pVVar16->vector[iVar19 + -1].z - (float)pCVar12;
    fVar18 = fVar18 * fVar18 +
             ((float)uVar95 - (float)uVar11._4_4_) * ((float)uVar95 - (float)uVar11._4_4_) +
             ((float)uVar94 - (float)(undefined4)uVar11) * ((float)uVar94 - (float)(undefined4)uVar11);
    pfVar22 = &(this->fields).pointSqrDistance;
    if (fVar18 < *pfVar22 || fVar18 == *pfVar22) {
code_?:
      if ((this->fields).Emit == 0) goto code_?;
      goto code_?;
    }
    if ((int)(pVVar16->max_length - 1) < iVar19) {
      pVVar16 = (Vector3__Array *)func_?();
      *ppVVar93 = pVVar16;
      func_?();
      if (*ppVVar93 != (Vector3__Array *)0x0) {
        pVVar16 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar16;
        func_?();
        if (*ppVVar93 != (Vector3__Array *)0x0) {
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
    pVVar16 = *ppVVar93;
    uVar46 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (uVar46 < pVVar16->max_length) {
      pVVar16->vector[uVar46].x = (float)uStack_13;
      pVVar16->vector[uVar46].y = uStack_13._4_4_;
      pVVar16->vector[uVar46].z = (float)pCStack_14;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 != (Transform *)0x0) &&
         (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0),
         pVVar16 != (Vector3__Array *)0x0)) {
        fVar17 = pVVar9->y;
        fVar18 = pVVar9->z;
        if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
        pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
        pVVar16->vector[(int)pVStack_15].y = fVar17;
        pVVar16->vector[(int)pVStack_15].z = fVar18;
        piVar20 = &(this->fields).savedCnt;
        *piVar20 = *piVar20 + 1;
        if ((this->fields).averageCreationTime == _UNK_?) {
          pVStack_15 = (Vector2__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          fVar18 = (float)pVStack_15 - (this->fields).lastPointCreationTime;
        }
        else {
          pVStack_15 = (Vector2__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          fVar18 = ((this->fields).averageCreationTime +
                   ((float)pVStack_15 - (this->fields).lastPointCreationTime)) * _UNK_?;
        }
        (this->fields).averageCreationTime = fVar18;
        (this->fields).averageInsertionTime = (this->fields).tRatio * fVar18;
        pVStack_15 = (Vector2__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        iVar19 = (this->fields).savedCnt;
        (this->fields).lastPointCreationTime = (float)pVStack_15;
        if (3 < iVar19) {
          TrailArc_findCoordinates(this,iVar19 + -3,(MethodInfo *)0x0);
        }
        goto code_?;
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
  pcVar96 = (code *)swi(3);
  (*pcVar96)();
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
  if (pVVar1 == (Vector3__Array *)0x0) {
code_?:
    func_?();
  }
  else if ((index - 1U < pVVar1->max_length) && ((uint)index < pVVar1->max_length)) {
    fVar2 = pVVar1->vector[index].z;
    uVar3 = pVVar1->vector[index].x;
    uVar4 = pVVar1->vector[index].y;
    if (index + 1U < pVVar1->max_length) {
      fVar5 = pVVar1->vector[index + 1].z;
      uVar6 = pVVar1->vector[index + 1].x;
      uVar7 = pVVar1->vector[index + 1].y;
      if (index + 2U < pVVar1->max_length) {
        uVar8 = pVVar1->vector[index + -1].x;
        uVar9 = pVVar1->vector[index + -1].y;
        fVar10 = ((float)uVar6 - (float)uVar8) * _UNK_?;
        fVar11 = ((float)uVar7 - (float)uVar9) * _UNK_?;
        fVar12 = (pVVar1->vector[index + 1].z - pVVar1->vector[index + -1].z) * _UNK_?;
        uVar13 = pVVar1->vector[index + 2].x;
        uVar14 = pVVar1->vector[index + 2].y;
        uVar15 = pVVar1->vector[index].x;
        uVar16 = pVVar1->vector[index].y;
        fVar17 = ((float)uVar13 - (float)uVar15) * _UNK_?;
        fVar18 = ((float)uVar14 - (float)uVar16) * _UNK_?;
        fVar19 = (pVVar1->vector[index + 2].z - pVVar1->vector[index].z) * _UNK_?;
        iVar20 = (this->fields).segmentsPerPoint;
        iVar21 = iVar20 * index;
        if (iVar21 < iVar20 + iVar21) {
          iStack_22 = 0;
          iVar20 = iVar21;
          fVar23 = _UNK_?;
          do {
            pVVar1 = (this->fields).points;
            uVar24 = iVar20 - (this->fields).segmentsPerPoint;
            fVar25 = (float)iStack_22 * (this->fields).tRatio;
            fVar26 = fVar25 * fVar25;
            fVar27 = fVar26 * fVar25;
            fVar23 = ((fVar27 + fVar27) - fVar26 * _UNK_?) + fVar23;
            fVar28 = fVar26 * _UNK_? - (fVar27 + fVar27);
            fVar29 = (fVar27 - (fVar26 + fVar26)) + fVar25;
            fVar27 = fVar27 - fVar26;
            uStack_30 = CONCAT44(fVar18 * fVar27 +
                                 fVar11 * fVar29 + (float)uVar7 * fVar28 + (float)uVar4 * fVar23,
                                 fVar17 * fVar27 +
                                 fVar10 * fVar29 + (float)uVar6 * fVar28 + (float)uVar3 * fVar23);
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if (pVVar1->max_length <= uVar24) goto code_?;
            *(undefined8 *)((int)pVVar1 + uVar24 * 0xc + 0x10) = uStack_30;
            *(float *)((int)pVVar1 + uVar24 * 0xc + 0x18) =
                 fVar19 * fVar27 + fVar12 * fVar29 + fVar5 * fVar28 + fVar2 * fVar23;
            fVar23 = _UNK_?;
            pVVar1 = (this->fields).savedUp;
            pVVar31 = (this->fields).pointsUp;
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if ((pVVar1->max_length <= (uint)index) || (pVVar1->max_length <= index + 1U))
            goto code_?;
            uVar32 = pVVar1->vector[index + 1].x;
            uVar33 = pVVar1->vector[index + 1].y;
            fVar26 = pVVar1->vector[index + 1].z;
            uVar34 = pVVar1->vector[index].x;
            uVar35 = pVVar1->vector[index].y;
            fVar29 = pVVar1->vector[index].z;
            if (fVar25 < 0.0) {
              fVar25 = 0.0;
            }
            else if (_UNK_? < fVar25) {
              fVar25 = _UNK_?;
            }
            if (pVVar31 == (Vector3__Array *)0x0) goto code_?;
            if (pVVar31->max_length <= uVar24) goto code_?;
            *(ulonglong *)((int)pVVar31 + uVar24 * 0xc + 0x10) =
                 CONCAT44(((float)uVar33 - (float)uVar35) * fVar25 + (float)uVar35,
                          ((float)uVar32 - (float)uVar34) * fVar25 + (float)uVar34);
            iVar20 = iVar20 + 1;
            *(float *)((int)pVVar31 + uVar24 * 0xc + 0x18) = (fVar26 - fVar29) * fVar25 + fVar29;
            iStack_22 = iStack_22 + 1;
          } while (iVar20 < (this->fields).segmentsPerPoint + iVar21);
        }
        (this->fields).pointCnt = iVar21;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
        *(String **)pSStack_2 = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_Index__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pIVar5 = (Il2CppImage *)
                 mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (values->max_length < 3) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 2);
        (pSStack_2->_0).image = pIVar5;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 4) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 3);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_u0009Pos__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pVVar6 = (this->fields).points;
        if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar6->max_length <= (uint)unaff_ESI.m_value) goto code_?;
        pSStack_2 = (String__Array__Class *)0x0;
        uStack_1 = ZEXT48(&uStack_1);
        pIVar5 = (Il2CppImage *)func_?();
        if (values->max_length < 5) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 4);
        (pSStack_2->_0).image = pIVar5;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 6) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 5);
        *(String **)pSStack_2 = StringLiteral_u000A;
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
        *(String **)pSStack_2 = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_Index__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pIVar5 = (Il2CppImage *)
                 mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (values->max_length < 3) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 2);
        (pSStack_2->_0).image = pIVar5;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 4) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 3);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_u0009Pos__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pVVar6 = (this->fields).saved;
        if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
        if (pVVar6->max_length <= (uint)unaff_ESI.m_value) goto code_?;
        pSStack_2 = (String__Array__Class *)0x0;
        uStack_1 = ZEXT48(&uStack_1);
        pIVar5 = (Il2CppImage *)func_?();
        if (values->max_length < 5) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 4);
        (pSStack_2->_0).image = pIVar5;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 6) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 5);
        *(String **)pSStack_2 = StringLiteral_u000A;
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

