
/* Void SetTrailColor(Color) */

void Assembly-CSharp.dll::TrailArc::TrailArc_SetTrailColor(TrailArc *this,Color baseColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,3);
  if (pCVar1 == (Color__Array *)0x0) {
    func_?();
  }
  else if (pCVar1->max_length != 0) {
    pCVar1->vector[0].r = (1.0 - baseColor.r) * 0.75 + baseColor.r;
    pCVar1->vector[0].g = (1.0 - baseColor.g) * 0.75 + baseColor.g;
    pCVar1->vector[0].b = (1.0 - baseColor.b) * 0.75 + baseColor.b;
    pCVar1->vector[0].a = (0.0 - baseColor.a) * 0.75 + baseColor.a;
    if (1 < pCVar1->max_length) {
      pCVar1->vector[1].r = (1.0 - baseColor.r) * 0.5 + baseColor.r;
      pCVar1->vector[1].g = (1.0 - baseColor.g) * 0.5 + baseColor.g;
      pCVar1->vector[1].b = (1.0 - baseColor.b) * 0.5 + baseColor.b;
      pCVar1->vector[1].a = (0.0 - baseColor.a) * 0.5 + baseColor.a;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TrailArc::TrailArc_Start(TrailArc *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__);
    func_?(&UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_Trail);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,(this->fields).pointsStored);
  (this->fields).saved = pVVar1;
  func_?(&(this->fields).saved,pVVar1);
  pVVar1 = (this->fields).saved;
  if (pVVar1 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
    (this->fields).savedUp = pVVar1;
    func_?(&(this->fields).savedUp,pVVar1);
    pVVar1 = (this->fields).saved;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length * (this->fields).segmentsPerPoint);
      (this->fields).points = pVVar1;
      func_?(&(this->fields).points,pVVar1);
      pVVar1 = (this->fields).points;
      if (pVVar1 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,pVVar1->max_length);
        (this->fields).pointsUp = pVVar1;
        func_?(&(this->fields).pointsUp,pVVar1);
        fVar2 = (this->fields).pointDistance;
        (this->fields).tRatio = 1.0 / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar2 * fVar2;
        pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor(pGVar3,StringLiteral_Trail,(MethodInfo *)0x0);
        (this->fields).trail = pGVar3;
        func_?(&(this->fields).trail,pGVar3);
        pGVar3 = (this->fields).trail;
        if (pGVar3 != (GameObject *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
            pGVar3 = (this->fields).trail;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar4,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                pGVar3 = (this->fields).trail;
                if (pGVar3 != (GameObject *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
                    pGVar3 = (this->fields).trail;
                    if (pGVar3 != (GameObject *)0x0) {
                      this_00 = (MeshFilter *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(pGVar3,UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__);
                      pGVar3 = (this->fields).trail;
                      if (pGVar3 != (GameObject *)0x0) {
                        pRVar5 = (Renderer *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(pGVar3,UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__);
                        (this->fields).mRenderer = pRVar5;
                        func_?();
                        if (this_00 != (MeshFilter *)0x0) {
                          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh(this_00,(MethodInfo *)0x0);
                          (this->fields).mesh = pMVar6;
                          func_?(&(this->fields).mesh,pMVar6);
                          pMVar7 = (this->fields).material;
                          this_01 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1(this_01,pMVar7,(MethodInfo *)0x0);
                          (this->fields).trailMaterial = this_01;
                          func_?(&(this->fields).trailMaterial,this_01);
                          pMVar7 = (this->fields).trailMaterial;
                          if (pMVar7 != (Material *)0x0) {
                            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xffffffec,pMVar7,StringLiteral__TintColor,(MethodInfo *)0x0);
                            (this->fields).fadeOutRatio = pVVar8->w;
                            pRVar5 = (this->fields).mRenderer;
                            if (pRVar5 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial(pRVar5,(this->fields).trailMaterial,(MethodInfo *)0x0);
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
  pVStack_1 = (Vector3__Array *)&stack0xfffffffc;
  pVStack_2 = (Vector3__Array *)0xffffffff;
  pVStack_3 = (Vector3__Array *)&DAT_?;
  iStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_4;
  pVStack_5 = (Vector3__Array *)&stack0xfffffd30;
  pCVar6 = in_stack_7;
  pVVar8 = (Vector3__Array *)&stack0xfffffffc;
  pVVar9 = (Vector3__Array *)&stack0xfffffd30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_Trail_effect_ending_with_a_segme);
    cRam_? = '\x01';
    pCVar6 = in_stack_7;
    pVVar8 = pVStack_1;
    pVVar9 = pVStack_5;
  }
  pVStack_5 = pVVar9;
  pVStack_1 = pVVar8;
  pVStack_2 = (Vector3__Array *)0x0;
  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
  if (pTVar10 == (Transform *)0x0) {
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
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_12,pTVar10,(MethodInfo *)0x0);
    uVar13._0_4_ = pVVar11->x;
    uVar13._4_4_ = pVVar11->y;
    pCVar14 = (Color__Array *)pVVar11->z;
    CStack_15._0_8_ = uVar13;
    pCStack_16 = pCVar14;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).saved;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_12,pTVar10,0.0,0.0,-(this->fields).pointDistance,(MethodInfo *)0x0);
        if (pVVar8 != (Vector3__Array *)0x0) {
          fVar18 = pVVar11->y;
          fVar19 = pVVar11->z;
          if (pIStack_17 < (Int32__Array *)pVVar8->max_length) {
            pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
            pVVar8->vector[(int)pIStack_17].y = fVar18;
            pVVar8->vector[(int)pIStack_17].z = fVar19;
            pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
            pVVar8 = (this->fields).savedUp;
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_12,pTVar10,(MethodInfo *)0x0);
              if (pVVar8 != (Vector3__Array *)0x0) {
                fVar18 = pVVar11->y;
                fVar19 = pVVar11->z;
                if ((Int32__Array *)pVVar8->max_length <= pIStack_17) goto code_?;
                pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
                pVVar8->vector[(int)pIStack_17].y = fVar18;
                pVVar8->vector[(int)pIStack_17].z = fVar19;
                iVar20 = (this->fields).savedCnt;
                pVVar8 = (this->fields).saved;
                (this->fields).savedCnt = iVar20 + 1U;
                if (pVVar8 != (Vector3__Array *)0x0) {
                  if (pVVar8->max_length <= iVar20 + 1U) goto code_?;
                  pVVar8->vector[iVar20 + 1].x = CStack_15.r;
                  pVVar8->vector[iVar20 + 1].y = CStack_15.g;
                  pVVar8->vector[iVar20 + 1].z = (float)pCStack_16;
                  pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
                  pVVar8 = (this->fields).savedUp;
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar10 != (Transform *)0x0) {
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_12,pTVar10,(MethodInfo *)0x0);
                    if (pVVar8 != (Vector3__Array *)0x0) {
                      fVar18 = pVVar11->y;
                      fVar19 = pVVar11->z;
                      if (pIStack_17 < (Int32__Array *)pVVar8->max_length) {
                        pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
                        pVVar8->vector[(int)pIStack_17].y = fVar18;
                        pVVar8->vector[(int)pIStack_17].z = fVar19;
                        piVar21 = &(this->fields).savedCnt;
                        *piVar21 = *piVar21 + 1;
                        pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                        (this->fields).lastPointCreationTime = (float)pIStack_17;
                        pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                        (this->fields).creationTime = (float)pIStack_17;
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
    pIStack_17 = (Int32__Array *)(this->fields).creationTime;
    pVStack_22 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar23 = &(this->fields).maxLifeTime;
    if (*pfVar23 <= (float)pIStack_17 - (float)pVStack_22 && (float)pIStack_17 - (float)pVStack_22 != *pfVar23) {
      (this->fields).Emit = 0;
    }
    if ((this->fields).Emit == 0) {
      if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
        (this->fields).emittingDone = 1;
        goto code_?;
      }
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).saved;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) goto code_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_12,pTVar10,0.0,0.0,(this->fields).pointDistance,(MethodInfo *)0x0);
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      fVar18 = pVVar11->y;
      fVar19 = pVVar11->z;
      if ((Int32__Array *)pVVar8->max_length <= pIStack_17) goto code_?;
      pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
      pVVar8->vector[(int)pIStack_17].y = fVar18;
      pVVar8->vector[(int)pIStack_17].z = fVar19;
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).savedUp;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) goto code_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_12,pTVar10,(MethodInfo *)0x0);
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      fVar18 = pVVar11->y;
      fVar19 = pVVar11->z;
      if ((Int32__Array *)pVVar8->max_length <= pIStack_17) goto code_?;
      pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
      pVVar8->vector[(int)pIStack_17].y = fVar18;
      pVVar8->vector[(int)pIStack_17].z = fVar19;
      iVar20 = (this->fields).savedCnt;
      (this->fields).savedCnt = iVar20 + 1;
      in_stack_24 = (Color__Array *)this;
      TrailArc_findCoordinates(this,iVar20 + -2,(MethodInfo *)0x0);
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).saved;
      in_stack_25 = (Color__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      fVar19 = (this->fields).pointDistance;
      if (in_stack_25 == (Color__Array *)0x0) goto code_?;
      in_stack_26 = (Vector3__Array *)0x0;
      in_stack_27 = (Color__Array *)(fVar19 + fVar19);
      in_stack_28 = (Vector3__Array *)0x0;
      in_stack_29 = (Color__Array *)0x0;
      in_stack_30 = (Color__Array *)&VStack_12;
      in_stack_31 = (Color__Array *)&UNK_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)in_stack_30,(Transform *)in_stack_25,0.0,0.0,(float)in_stack_27,(MethodInfo *)0x0);
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      fVar18 = pVVar11->y;
      fVar19 = pVVar11->z;
      if ((Int32__Array *)pVVar8->max_length <= pIStack_17) goto code_?;
      pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
      pVVar8->vector[(int)pIStack_17].y = fVar18;
      pVVar8->vector[(int)pIStack_17].z = fVar19;
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).savedUp;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) goto code_?;
      in_stack_32 = (Color__Array *)&VStack_12;
      in_stack_33 = (Vector3__Array *)&UNK_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)in_stack_32,pTVar10,(MethodInfo *)0x0);
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      fVar18 = pVVar11->y;
      fVar19 = pVVar11->z;
      if (pIStack_17 < (Int32__Array *)pVVar8->max_length) {
        pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
        pVVar8->vector[(int)pIStack_17].y = fVar18;
        pVVar8->vector[(int)pIStack_17].z = fVar19;
        iVar20 = (this->fields).savedCnt;
        (this->fields).savedCnt = iVar20 + 1;
        TrailArc_findCoordinates(this,iVar20 + -2,(MethodInfo *)0x0);
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
        pMVar34 = (this->fields).trailMaterial;
        if (pMVar34 != (Material *)0x0) {
          pVVar35 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xfffffe48,pMVar34,StringLiteral__TintColor,(MethodInfo *)0x0);
          uVar36 = pVVar35->x;
          uVar37 = pVVar35->y;
          uVar38 = pVVar35->z;
          value.z = (float)uVar38;
          value.y = (float)uVar37;
          value.x = (float)uVar36;
          fVar19 = pVVar35->w;
          pVStack_22 = (Vector2__Array *)(this->fields).fadeOutRatio;
          pIStack_17 = (Int32__Array *)(this->fields).lifeTimeRatio;
          CStack_15.a = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar19 = fVar19 - (float)pIStack_17 * (float)pVStack_22 * CStack_15.a;
          if (fVar19 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar39 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar39 = mscorlib.dll::System::String::String_Concat_3(StringLiteral_Trail_effect_ending_with_a_segme,pSVar39,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar39,(MethodInfo *)0x0);
            }
            pGVar40 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar40,(MethodInfo *)0x0);
            pGVar40 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar40,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
          pMVar34 = (this->fields).trailMaterial;
          if (pMVar34 != (Material *)0x0) {
            value.w = fVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar34,StringLiteral__TintColor,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
        }
      }
      else {
code_?:
        if ((this->fields).displayCnt < (this->fields).pointCnt) {
          pVStack_22 = (Vector2__Array *)(this->fields).elapsedInsertionTime;
          pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar19 = (float)pIStack_17 + (float)pVStack_22;
          pfVar23 = &(this->fields).averageInsertionTime;
          (this->fields).elapsedInsertionTime = fVar19;
          if (*pfVar23 <= fVar19 && fVar19 != *pfVar23) {
            fVar19 = (this->fields).averageInsertionTime;
            iVar20 = (this->fields).displayCnt;
            do {
              fVar18 = (this->fields).elapsedInsertionTime - fVar19;
              iVar41 = iVar20 + 1;
              if ((this->fields).pointCnt <= iVar20) {
                iVar41 = iVar20;
              }
              (this->fields).elapsedInsertionTime = fVar18;
              iVar20 = iVar41;
            } while (fVar19 < fVar18);
            (this->fields).displayCnt = iVar41;
          }
        }
        if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
          pRVar42 = (this->fields).mRenderer;
          if (pRVar42 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar42,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
        }
        else {
          pRVar42 = (this->fields).mRenderer;
          if (pRVar42 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar42,1,(MethodInfo *)0x0);
            pSStack_43 = (Single__Array *)(this->fields).displayCnt;
            (this->fields).lifeTimeRatio = 1.0 / (this->fields).lifetime;
            if (((this->fields).maxPointsDrawn < (int)pSStack_43) && (0 < (this->fields).maxPointsDrawn)) {
              pSStack_43 = (Single__Array *)(this->fields).maxPointsDrawn;
            }
            pSVar44 = pSStack_43;
            pVStack_45 = (Vector3__Array *)func_?();
            pVStack_22 = (Vector2__Array *)func_?();
            pIStack_17 = (Int32__Array *)func_?();
            pCStack_16 = (Color__Array *)func_?();
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              pVVar8 = (Vector3__Array *)&UNK_?;
              pCVar14 = (Color__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
              if (pCVar14 != (Color__Array *)0x0) {
                pVVar46 = (Vector3__Array *)0x0;
                pVVar9 = (Vector3__Array *)&VStack_12;
                pCVar47 = (Color__Array *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)pVVar9,(Transform *)pCVar14,(MethodInfo *)0x0);
                puVar48 = (undefined1 *)0x0;
                while( true ) {
                  CStack_15.a = (float)puVar48;
                  if ((int)pSStack_43 <= (int)puVar48) break;
                  pVVar49 = (this->fields).points;
                  if (pVVar49 == (Vector3__Array *)0x0) goto code_?;
                  puVar50 = puVar48 + ((this->fields).displayCnt - (int)pSStack_43);
                  if ((undefined1 *)pVVar49->max_length <= puVar50) goto code_?;
                  uVar51._0_4_ = pVVar49->vector[(int)puVar50].x;
                  uVar51._4_4_ = pVVar49->vector[(int)puVar50].y;
                  fVar19 = pVVar49->vector[(int)puVar50].z;
                  pCVar52 = (this->fields).colors;
                  pCStack_53 = (Color__Array *)((float)(int)puVar48 * (1.0 / (float)(int)((int)pSVar44[-1].vector + 0x7f)));
                  CStack_15._0_8_ = uVar51;
                  fStack_54 = fVar19;
                  if (pCVar52 == (Color__Array *)0x0) goto code_?;
                  if (pCVar52->max_length == 0) {
                    pCStack_55 = (Color__Array *)0x0;
                    pCVar47 = (Color__Array *)&stack0xfffffd50;
                    in_stack_24 = (Color__Array *)0x0;
                    pCVar52 = (Color__Array *)0x0;
                    in_stack_30 = (Color__Array *)0x0;
                    pVVar9 = in_stack_28;
                    pCVar14 = in_stack_27;
                    pVVar46 = in_stack_26;
code_?:
                    in_stack_25 = in_stack_30;
                    in_stack_30 = pCVar52;
                    in_stack_31 = in_stack_24;
                    a.g = (float)in_stack_30;
                    a.r = (float)in_stack_31;
                    a.b = (float)in_stack_25;
                    a.a = (float)pCStack_55;
                    b.g = (float)pCVar14;
                    b.r = (float)pVVar9;
                    b.b = (float)pVVar46;
                    b.a = (float)pCVar6;
                    pCVar56 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp((Color *)pCVar47,a,b,(float)in_stack_57,in_stack_58);
                    in_stack_29 = (Color__Array *)pCVar56->r;
                    in_stack_28 = (Vector3__Array *)pCVar56->g;
                    in_stack_27 = (Color__Array *)pCVar56->b;
                    in_stack_26 = (Vector3__Array *)pCVar56->a;
                    in_stack_24 = pCVar47;
                    pCVar52 = pCStack_55;
                    pVVar59 = pVVar9;
                    pCVar60 = pCVar14;
                    pVVar49 = pVVar46;
                  }
                  else {
                    if (pCVar52->max_length == 1) {
                      pCVar6 = in_stack_61;
                      func_?();
                      in_stack_58 = (MethodInfo *)0x0;
                      pCStack_55 = (Color__Array *)0x0;
                      pCVar47 = (Color__Array *)&stack0xfffffd60;
                      in_stack_24 = (Color__Array *)0x0;
                      pCVar52 = (Color__Array *)0x0;
                      in_stack_30 = (Color__Array *)0x0;
                      pVVar9 = in_stack_62;
                      pCVar14 = in_stack_63;
                      pVVar46 = in_stack_64;
                      in_stack_57 = pCStack_53;
                      in_stack_61 = pCVar6;
                      goto code_?;
                    }
                    if (pCVar52->max_length == 2) {
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        pCVar6 = (Color__Array *)&UNK_?;
                        func_?();
                        in_stack_58 = (MethodInfo *)0x0;
                        pCVar47 = (Color__Array *)&stack0xfffffd70;
                        pCVar52 = in_stack_31;
                        pCStack_55 = in_stack_25;
                        in_stack_57 = pCStack_53;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    pCStack_65 = (Color__Array *)((float)(int)(pCVar52->max_length - 1) - (float)(int)(pCVar52->max_length - 1) * (float)pCStack_53);
                    if ((float)pCStack_65 != (float)(int)(pCVar52->max_length - 1)) {
                      uStack_66 = (double)(float)pCStack_65;
                      fVar67 = (float10)func_?();
                      fStack_68 = (float)(int)fVar67;
                      pCStack_65 = (Color__Array *)((float)pCStack_65 - (float)(int)fStack_68);
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        pCVar6 = pCVar47;
                        func_?();
                        in_stack_58 = (MethodInfo *)0x0;
                        pCVar47 = (Color__Array *)&stack0xfffffd80;
                        in_stack_24 = pCVar6;
                        pCVar52 = pCStack_65;
                        in_stack_30 = (Color__Array *)0x0;
                        pVVar9 = in_stack_33;
                        pCVar14 = in_stack_32;
                        pVVar46 = pVVar8;
                        in_stack_57 = pCStack_65;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if (pCVar52 == (Color__Array *)0x0) goto code_?;
                    func_?();
                    pCVar52 = in_stack_29;
                    pVVar59 = in_stack_28;
                    pCVar60 = in_stack_27;
                    pVVar49 = in_stack_26;
                  }
                  uStack_66 = (double)CONCAT44(in_stack_26,in_stack_27);
                  pCStack_69 = in_stack_29;
                  pVStack_70 = in_stack_28;
                  if (pCStack_16 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_33 = (Vector3__Array *)((int)puVar48 * 2 + 1);
                  in_stack_32 = pCStack_69;
                  pVVar8 = pVStack_70;
                  func_?();
                  pSVar71 = (this->fields).widths;
                  if (pSVar71 == (Single__Array *)0x0) goto code_?;
                  if (pSVar71->max_length == 0) {
                    pCStack_65 = (Color__Array *)0x3f800000;
                  }
                  else if (pSVar71->max_length == 1) {
                    if (pSVar71->max_length == 0) goto code_?;
                    pCStack_65 = (Color__Array *)pSVar71->vector[0];
                  }
                  else if (pSVar71->max_length == 2) {
                    if (pSVar71->max_length < 2) goto code_?;
                    if (pSVar71 == (Single__Array *)0x0) goto code_?;
                    if (pSVar71->max_length == 0) goto code_?;
                    pCStack_65 = (Color__Array *)pSVar71->vector[0];
                    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01((float)pCStack_53,(MethodInfo *)0x0);
                    pSVar71 = (this->fields).widths;
                    uStack_66 = (double)CONCAT44(fVar18,(float)uStack_66);
                    pCStack_65 = (Color__Array *)(((float)pCStack_65 - pSVar71->vector[1]) * fVar18 + pSVar71->vector[1]);
                  }
                  else {
                    pCStack_65 = (Color__Array *)((float)(int)(pSVar71->max_length - 1) - (float)(int)(pSVar71->max_length - 1) * (float)pCStack_53);
                    if ((float)pCStack_65 == (float)(int)(pSVar71->max_length - 1)) {
                      if (pSVar71 == (Single__Array *)0x0) goto code_?;
                      if (pSVar71->max_length <= pSVar71->max_length - 1) goto code_?;
                      pCStack_65 = (Color__Array *)pSVar71->vector[pSVar71->max_length - 1];
                    }
                    else {
                      uStack_66 = (double)(float)pCStack_65;
                      fVar67 = (float10)func_?();
                      pSVar71 = (this->fields).widths;
                      fStack_68 = (float)(int)fVar67;
                      fVar18 = (float)pCStack_65 - (float)(int)fStack_68;
                      if (pSVar71->max_length <= (uint)fStack_68) goto code_?;
                      if (pSVar71 == (Single__Array *)0x0) goto code_?;
                      if (pSVar71->max_length <= (int)fStack_68 + 1U) goto code_?;
                      pCStack_65 = (Color__Array *)pSVar71->vector[(int)fStack_68 + 1];
                      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar18,(MethodInfo *)0x0);
                      pSVar71 = (this->fields).widths;
                      uStack_66 = (double)CONCAT44(fVar18,(float)uStack_66);
                      pCStack_65 = (Color__Array *)(((float)pCStack_65 - pSVar71->vector[(int)fStack_68]) * fVar18 + pSVar71->vector[(int)fStack_68]);
                    }
                  }
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      uStack_66 = (double)CONCAT44(fVar19,(float)uStack_66);
                      fStack_68 = uVar51._4_4_;
                      pCStack_72 = (Color__Array *)(float)uVar51;
                      pCStack_73 = (Color__Array *)0x0;
                      CStack_15.r = 0.0;
                      CStack_15.g = 0.0;
                      if (pVStack_45 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar18 = fStack_74 * (float)pCStack_65 * 0.5;
                      fVar75 = fStack_76 * (float)pCStack_65 * 0.5;
                    }
                    else {
                      uStack_66 = (double)CONCAT44((this->fields).time,(float)uStack_66);
                      fStack_68 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
                      (this->fields).time = (float)uStack_66._4_4_ + fStack_68;
                      pVVar9 = (this->fields).points;
                      if (puVar48 == (undefined1 *)((int)pSStack_43[-1].vector + 0x7f)) {
                        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        CStack_77._0_8_ = auStack_78._12_8_;
                        CStack_77.b = fStack_79;
                        fVar18 = fStack_54;
                      }
                      else {
                        CStack_77.b = fStack_54;
                        CStack_77.r = CStack_15.r;
                        CStack_77.g = CStack_15.g;
                        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fVar18 = (float)auStack_78._8_4_;
                        CStack_15._0_8_ = auStack_78._0_8_;
                      }
                      fStack_80 = CStack_15.g;
                      fVar18 = fVar18 - CStack_77.b;
                      CStack_77.a = CStack_15.r;
                      pCStack_72 = (Color__Array *)(CStack_77.a - CStack_77.r);
                      pCStack_73 = (Color__Array *)0x0;
                      CStack_15.r = 0.0;
                      CStack_15.g = 0.0;
                      dVar81 = (double)(this->fields).time;
                      uStack_66._4_4_ = (Color__Array *)(fStack_80 - CStack_77.g);
                      func_?();
                      axis.y = (float)uStack_66._4_4_;
                      axis.x = (float)pCStack_72;
                      axis.z = fVar18;
                      in_stack_24 = uStack_66._4_4_;
                      pQVar82 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xfffffd40,(float)dVar81,axis,(MethodInfo *)0x0);
                      pCStack_72 = (Color__Array *)pQVar82->x;
                      pCStack_73 = (Color__Array *)pQVar82->y;
                      CStack_15.r = pQVar82->z;
                      CStack_15.g = pQVar82->w;
                      pVVar11 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xfffffd90,(MethodInfo *)0x0);
                      pVVar49 = (Vector3__Array *)pVVar11->x;
                      pCVar6 = (Color__Array *)pVVar11->y;
                      in_stack_57 = (Color__Array *)pVVar11->z;
                      in_stack_58 = (MethodInfo *)0x0;
                      in_stack_30 = (Color__Array *)&stack0xfffffdb0;
                      in_stack_31 = (Color__Array *)&UNK_?;
                      rotation.y = (float)pCStack_73;
                      rotation.x = (float)pCStack_72;
                      rotation.z = CStack_15.r;
                      rotation.w = CStack_15.g;
                      in_stack_25 = pCStack_72;
                      pCVar52 = pCStack_73;
                      pVVar59 = (Vector3__Array *)CStack_15.r;
                      pCVar60 = (Color__Array *)CStack_15.g;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)in_stack_30,rotation,*pVVar11,(MethodInfo *)0x0);
                      pVVar11 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_83,(MethodInfo *)0x0);
                      uVar84 = pVVar11->x;
                      uVar85 = pVVar11->y;
                      uStack_66 = (double)CONCAT44(fVar19,(float)uStack_66);
                      fStack_68 = uVar51._4_4_;
                      pCStack_72 = (Color__Array *)(float)uVar51;
                      pCStack_73 = (Color__Array *)0x0;
                      CStack_15.r = 0.0;
                      CStack_15.g = 0.0;
                      if (pVStack_45 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar18 = (float)uVar85 * (float)pCStack_65 * 0.5;
                      fVar75 = (float)uVar84 * (float)pCStack_65 * 0.5;
                    }
                  }
                  else {
                    pVVar9 = (this->fields).points;
                    if (puVar48 == (undefined1 *)((int)pSStack_43[-1].vector + 0x7f)) {
                      if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    fStack_68 = uVar51._4_4_;
                    pCStack_72 = (Color__Array *)(float)uVar51;
                    pCStack_73 = (Color__Array *)0x0;
                    CStack_15.r = 0.0;
                    CStack_15.g = 0.0;
                    fStack_54 = fVar19;
                    puVar86 = (undefined8 *)func_?();
                    fVar19 = *(float *)(puVar86 + 1);
                    fStack_87 = (float)((ulonglong)*puVar86 >> 0x20);
                    fStack_88 = (float)*puVar86;
                    if (pVStack_45 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fVar18 = fStack_87 * (float)pCStack_65 * 0.5;
                    fVar75 = fStack_88 * (float)pCStack_65 * 0.5;
                    VStack_12.z = fStack_54 - fVar19 * (float)pCStack_65 * 0.5;
                  }
                  pCVar14 = (Color__Array *)((float)pCStack_72 - fVar75);
                  pVVar46 = (Vector3__Array *)(fStack_68 - fVar18);
                  pVVar9 = (Vector3__Array *)((int)puVar48 * 2 + 1);
                  pCVar47 = (Color__Array *)&UNK_?;
                  func_?();
                  if (pVStack_22 == (Vector2__Array *)0x0) goto code_?;
                  if (pVStack_22->max_length <= (uint)((int)puVar48 * 2)) goto code_?;
                  pVStack_22->vector[(int)puVar48 * 2].x = (float)pCStack_53;
                  pVStack_22->vector[(int)puVar48 * 2].y = 0.0;
                  if (pVStack_22->max_length <= (int)puVar48 * 2 + 1U) goto code_?;
                  pVStack_22->vector[(int)puVar48 * 2 + 1].x = (float)pCStack_53;
                  pVStack_22->vector[(int)puVar48 * 2 + 1].y = 1.0;
                  if (0 < (int)puVar48) {
                    iVar20 = (int)puVar48 * 6;
                    if (pIStack_17 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_17->max_length <= iVar20 - 6U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -6] = (int)puVar48 * 2 + -2;
                    iVar41 = (int)puVar48 * 2;
                    uStack_66 = (double)CONCAT44(iVar41 + -1,(float)uStack_66);
                    if (pIStack_17->max_length <= iVar20 - 5U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -5] = iVar41 + -1;
                    if (pIStack_17->max_length <= iVar20 - 4U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -4] = iVar41;
                    if (pIStack_17->max_length <= iVar20 - 3U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -3] = iVar41;
                    if (pIStack_17->max_length <= iVar20 - 2U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -2] = iVar41 + -1;
                    if (pIStack_17->max_length <= iVar20 - 1U) goto code_?;
                    pIStack_17->vector[(int)puVar48 * 6 + -1] = iVar41 + 1;
                    puVar48 = (undefined1 *)CStack_15.a;
                  }
                  puVar48 = puVar48 + 1;
                  in_stack_29 = pCVar52;
                  in_stack_28 = pVVar59;
                  in_stack_27 = pCVar60;
                  in_stack_26 = pVVar49;
                }
                pGVar40 = (this->fields).trail;
                if (pGVar40 != (GameObject *)0x0) {
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar40,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar10 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar10,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
                    pGVar40 = (this->fields).trail;
                    if (pGVar40 != (GameObject *)0x0) {
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar40,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (pTVar10 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar10,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                        pMVar89 = (this->fields).mesh;
                        if (pMVar89 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar89,(MethodInfo *)0x0);
                          pMVar89 = (this->fields).mesh;
                          if (pMVar89 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar89,pVStack_45,(MethodInfo *)0x0);
                            pMVar89 = (this->fields).mesh;
                            if (pMVar89 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar89,pCStack_16,(MethodInfo *)0x0);
                              pMVar89 = (this->fields).mesh;
                              if (pMVar89 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar89,pVStack_22,(MethodInfo *)0x0);
                                pMVar89 = (this->fields).mesh;
                                if (pMVar89 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles(pMVar89,pIStack_17,(MethodInfo *)0x0);
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
    pVVar8 = (this->fields).saved;
    iVar20 = (this->fields).savedCnt;
    if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar8->max_length <= iVar20 - 1U) goto code_?;
    uVar90 = pVVar8->vector[iVar20 + -1].x;
    uVar91 = pVVar8->vector[iVar20 + -1].y;
    fVar19 = pVVar8->vector[iVar20 + -1].z - (float)pCVar14;
    fVar19 = fVar19 * fVar19 + ((float)uVar91 - uVar13._4_4_) * ((float)uVar91 - uVar13._4_4_) + ((float)uVar90 - (float)uVar13) * ((float)uVar90 - (float)uVar13);
    pfVar23 = &(this->fields).pointSqrDistance;
    if (fVar19 < *pfVar23 || fVar19 == *pfVar23) {
code_?:
      if ((this->fields).Emit == 0) goto code_?;
      goto code_?;
    }
    if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
    if ((int)(pVVar8->max_length - 1) < (this->fields).savedCnt) {
      pVVar8 = (Vector3__Array *)func_?();
      (this->fields).saved = pVVar8;
      func_?();
      if ((this->fields).saved != (Vector3__Array *)0x0) {
        pVVar8 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar8;
        func_?();
        if ((this->fields).saved != (Vector3__Array *)0x0) {
          pVVar8 = (Vector3__Array *)func_?();
          (this->fields).points = pVVar8;
          func_?();
          if ((this->fields).points != (Vector3__Array *)0x0) {
            pVVar8 = (Vector3__Array *)func_?();
            (this->fields).pointsUp = pVVar8;
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
    pVVar8 = (this->fields).saved;
    uVar92 = (this->fields).savedCnt;
    if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
    if (uVar92 < pVVar8->max_length) {
      pVVar8->vector[uVar92].x = CStack_15.r;
      pVVar8->vector[uVar92].y = CStack_15.g;
      pVVar8->vector[uVar92].z = (float)pCStack_16;
      pIStack_17 = (Int32__Array *)(this->fields).savedCnt;
      pVVar8 = (this->fields).savedUp;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_12,pTVar10,(MethodInfo *)0x0);
        if (pVVar8 != (Vector3__Array *)0x0) {
          fVar18 = pVVar11->y;
          fVar19 = pVVar11->z;
          if ((Int32__Array *)pVVar8->max_length <= pIStack_17) goto code_?;
          pVVar8->vector[(int)pIStack_17].x = pVVar11->x;
          pVVar8->vector[(int)pIStack_17].y = fVar18;
          pVVar8->vector[(int)pIStack_17].z = fVar19;
          piVar21 = &(this->fields).savedCnt;
          *piVar21 = *piVar21 + 1;
          if ((this->fields).averageCreationTime == 0.0) {
            pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar19 = (float)pIStack_17 - (this->fields).lastPointCreationTime;
          }
          else {
            pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar19 = ((this->fields).averageCreationTime + ((float)pIStack_17 - (this->fields).lastPointCreationTime)) * 0.5;
          }
          (this->fields).averageCreationTime = fVar19;
          (this->fields).averageInsertionTime = (this->fields).tRatio * fVar19;
          pIStack_17 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).lastPointCreationTime = (float)pIStack_17;
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
  pcVar93 = (code *)swi(3);
  (*pcVar93)();
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

void Assembly-CSharp.dll::TrailArc::TrailArc_findCoordinates(TrailArc *this,int32_t index,MethodInfo *method)

{
  if ((index == 0) || ((this->fields).savedCnt + -2 <= index)) {
    return;
  }
  pVVar1 = (this->fields).saved;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((pVVar1->max_length <= index - 1U) || (pVVar1->max_length <= (uint)index)) goto code_?;
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
          fVar10 = pVVar1->vector[index + 1].z;
          uVar11 = pVVar1->vector[index + -1].x;
          uVar12 = pVVar1->vector[index + -1].y;
          fVar13 = pVVar1->vector[index + -1].z;
          uVar14 = pVVar1->vector[index + 2].x;
          uVar15 = pVVar1->vector[index + 2].y;
          fVar16 = pVVar1->vector[index + 2].z;
          uVar17 = pVVar1->vector[index].x;
          uVar18 = pVVar1->vector[index].y;
          fVar19 = pVVar1->vector[index].z;
          iVar20 = (this->fields).segmentsPerPoint * index;
          if (iVar20 < (this->fields).segmentsPerPoint + iVar20) {
            iStack_21 = 0;
            iVar22 = iVar20;
            do {
              pVVar1 = (this->fields).points;
              uVar23 = iVar22 - (this->fields).segmentsPerPoint;
              fVar24 = (float)iStack_21 * (this->fields).tRatio;
              fVar25 = fVar24 * fVar24;
              fVar26 = fVar25 * fVar24;
              fVar27 = ((fVar26 + fVar26) - fVar25 * 3.0) + 1.0;
              fVar28 = fVar25 * 3.0 - (fVar26 + fVar26);
              fVar29 = (fVar26 - (fVar25 + fVar25)) + fVar24;
              fVar26 = fVar26 - fVar25;
              uStack_30 = CONCAT44(fVar26 * ((float)uVar15 - (float)uVar18) * 0.5 + ((float)uVar9 - (float)uVar12) * 0.5 * fVar29 + (float)uVar3 * fVar27 + (float)uVar6 * fVar28,fVar26 * ((float)uVar14 - (float)uVar17) * 0.5 + ((float)uVar8 - (float)uVar11) * 0.5 * fVar29 + (float)uVar2 * fVar27 + (float)uVar5 * fVar28);
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar1->max_length <= uVar23) goto code_?;
              *(undefined8 *)((int)pVVar1 + uVar23 * 0xc + 0x10) = uStack_30;
              *(float *)((int)pVVar1 + uVar23 * 0xc + 0x18) = fVar26 * (fVar16 - fVar19) * 0.5 + (fVar10 - fVar13) * 0.5 * fVar29 + fVar4 * fVar27 + fVar7 * fVar28;
              pVVar1 = (this->fields).savedUp;
              pVVar31 = (this->fields).pointsUp;
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if ((pVVar1->max_length <= (uint)index) || (pVVar1->max_length <= index + 1U)) goto code_?;
              uVar32 = pVVar1->vector[index + 1].x;
              uVar33 = pVVar1->vector[index + 1].y;
              fVar27 = pVVar1->vector[index + 1].z;
              uVar34 = pVVar1->vector[index].x;
              uVar35 = pVVar1->vector[index].y;
              fVar29 = pVVar1->vector[index].z;
              if (fVar24 < 0.0) {
                fVar24 = 0.0;
              }
              else if (1.0 < fVar24) {
                fVar24 = 1.0;
              }
              if (pVVar31 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar31->max_length <= uVar23) goto code_?;
              *(ulonglong *)((int)pVVar31 + uVar23 * 0xc + 0x10) = CONCAT44(((float)uVar33 - (float)uVar35) * fVar24 + (float)uVar35,((float)uVar32 - (float)uVar34) * fVar24 + (float)uVar34);
              *(float *)((int)pVVar31 + uVar23 * 0xc + 0x18) = (fVar27 - fVar29) * fVar24 + fVar29;
              iVar22 = iVar22 + 1;
              iStack_21 = iStack_21 + 1;
            } while (iVar22 < (this->fields).segmentsPerPoint + iVar20);
          }
          (this->fields).pointCnt = iVar20;
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
    pSVar3 = mscorlib.dll::System::Single::Single_ToString((Single *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0);
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
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar3,(MethodInfo *)0x0);
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
    pSVar3 = mscorlib.dll::System::Single::Single_ToString((Single *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Saved_Points_at_time_,pSVar3,StringLiteral__u000A,(MethodInfo *)0x0);
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
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}

