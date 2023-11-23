
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
  pVVar6 = (Vector3__Array *)&stack0xfffffffc;
  pVVar7 = (Vector3__Array *)&stack0xfffffd30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_Trail_effect_ending_with_a_segme);
    cRam_? = '\x01';
    pVVar6 = pVStack_1;
    pVVar7 = pVStack_5;
  }
  pVStack_5 = pVVar7;
  pVStack_1 = pVVar6;
  pVStack_2 = (Vector3__Array *)0x0;
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
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
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_10,pTVar8,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar9->x;
    uVar11._4_4_ = pVVar9->y;
    pCVar12 = (Color__Array *)pVVar9->z;
    CStack_13._0_8_ = uVar11;
    pCStack_14 = pCVar12;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_10,pTVar8,0.0,0.0,-(this->fields).pointDistance,(MethodInfo *)0x0);
        if (pVVar6 != (Vector3__Array *)0x0) {
          fVar16 = pVVar9->y;
          fVar17 = pVVar9->z;
          if (pIStack_15 < (Int32__Array *)pVVar6->max_length) {
            pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
            pVVar6->vector[(int)pIStack_15].y = fVar16;
            pVVar6->vector[(int)pIStack_15].z = fVar17;
            pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
            pVVar6 = (this->fields).savedUp;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0);
              if (pVVar6 != (Vector3__Array *)0x0) {
                fVar16 = pVVar9->y;
                fVar17 = pVVar9->z;
                if ((Int32__Array *)pVVar6->max_length <= pIStack_15) goto code_?;
                pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
                pVVar6->vector[(int)pIStack_15].y = fVar16;
                pVVar6->vector[(int)pIStack_15].z = fVar17;
                iVar18 = (this->fields).savedCnt;
                pVVar6 = (this->fields).saved;
                (this->fields).savedCnt = iVar18 + 1U;
                if (pVVar6 != (Vector3__Array *)0x0) {
                  if (pVVar6->max_length <= iVar18 + 1U) goto code_?;
                  pVVar6->vector[iVar18 + 1].x = CStack_13.r;
                  pVVar6->vector[iVar18 + 1].y = CStack_13.g;
                  pVVar6->vector[iVar18 + 1].z = (float)pCStack_14;
                  pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
                  pVVar6 = (this->fields).savedUp;
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0);
                    if (pVVar6 != (Vector3__Array *)0x0) {
                      fVar16 = pVVar9->y;
                      fVar17 = pVVar9->z;
                      if (pIStack_15 < (Int32__Array *)pVVar6->max_length) {
                        pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
                        pVVar6->vector[(int)pIStack_15].y = fVar16;
                        pVVar6->vector[(int)pIStack_15].z = fVar17;
                        piVar19 = &(this->fields).savedCnt;
                        *piVar19 = *piVar19 + 1;
                        pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
                        (this->fields).lastPointCreationTime = (float)pIStack_15;
                        pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
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
    pVStack_20 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar21 = &(this->fields).maxLifeTime;
    if (*pfVar21 <= (float)pIStack_15 - (float)pVStack_20 && (float)pIStack_15 - (float)pVStack_20 != *pfVar21) {
      (this->fields).Emit = 0;
    }
    if ((this->fields).Emit == 0) {
      if (((this->fields).emittingDone != 0) || ((this->fields).pointCnt < 1)) {
code_?:
        (this->fields).emittingDone = 1;
        goto code_?;
      }
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_10,pTVar8,0.0,0.0,(this->fields).pointDistance,(MethodInfo *)0x0);
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      fVar16 = pVVar9->y;
      fVar17 = pVVar9->z;
      if ((Int32__Array *)pVVar6->max_length <= pIStack_15) goto code_?;
      pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar6->vector[(int)pIStack_15].y = fVar16;
      pVVar6->vector[(int)pIStack_15].z = fVar17;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0);
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      fVar16 = pVVar9->y;
      fVar17 = pVVar9->z;
      if ((Int32__Array *)pVVar6->max_length <= pIStack_15) goto code_?;
      pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar6->vector[(int)pIStack_15].y = fVar16;
      pVVar6->vector[(int)pIStack_15].z = fVar17;
      iVar18 = (this->fields).savedCnt;
      (this->fields).savedCnt = iVar18 + 1;
      in_stack_22 = (Color__Array *)this;
      TrailArc_findCoordinates(this,iVar18 + -2,(MethodInfo *)0x0);
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).saved;
      in_stack_23 = (Color__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      fVar17 = (this->fields).pointDistance;
      if (in_stack_23 == (Color__Array *)0x0) goto code_?;
      in_stack_24 = (Vector3__Array *)0x0;
      in_stack_25 = (Color__Array *)(fVar17 + fVar17);
      in_stack_26 = (Vector3__Array *)0x0;
      in_stack_27 = (Color__Array *)0x0;
      in_stack_28 = (Color__Array *)&VStack_10;
      in_stack_29 = (Color__Array *)&UNK_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)in_stack_28,(Transform *)in_stack_23,0.0,0.0,(float)in_stack_25,(MethodInfo *)0x0);
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      fVar16 = pVVar9->y;
      fVar17 = pVVar9->z;
      if ((Int32__Array *)pVVar6->max_length <= pIStack_15) goto code_?;
      pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar6->vector[(int)pIStack_15].y = fVar16;
      pVVar6->vector[(int)pIStack_15].z = fVar17;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      in_stack_30 = (Color__Array *)&VStack_10;
      in_stack_31 = (Vector3__Array *)&UNK_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)in_stack_30,pTVar8,(MethodInfo *)0x0);
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      fVar16 = pVVar9->y;
      fVar17 = pVVar9->z;
      if (pIStack_15 < (Int32__Array *)pVVar6->max_length) {
        pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
        pVVar6->vector[(int)pIStack_15].y = fVar16;
        pVVar6->vector[(int)pIStack_15].z = fVar17;
        iVar18 = (this->fields).savedCnt;
        (this->fields).savedCnt = iVar18 + 1;
        TrailArc_findCoordinates(this,iVar18 + -2,(MethodInfo *)0x0);
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
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xfffffe48,pMVar32,StringLiteral__TintColor,(MethodInfo *)0x0);
          uVar34 = pVVar33->x;
          uVar35 = pVVar33->y;
          uVar36 = pVVar33->z;
          value.z = (float)uVar36;
          value.y = (float)uVar35;
          value.x = (float)uVar34;
          fVar17 = pVVar33->w;
          pVStack_20 = (Vector2__Array *)(this->fields).fadeOutRatio;
          pIStack_15 = (Int32__Array *)(this->fields).lifeTimeRatio;
          CStack_13.a = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar17 = fVar17 - (float)pIStack_15 * (float)pVStack_20 * CStack_13.a;
          if (fVar17 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar37 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar37 = mscorlib.dll::System::String::String_Concat_3(StringLiteral_Trail_effect_ending_with_a_segme,pSVar37,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar37,(MethodInfo *)0x0);
            }
            pGVar38 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar38,(MethodInfo *)0x0);
            pGVar38 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar38,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
          pMVar32 = (this->fields).trailMaterial;
          if (pMVar32 != (Material *)0x0) {
            value.w = fVar17;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar32,StringLiteral__TintColor,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
        }
      }
      else {
code_?:
        if ((this->fields).displayCnt < (this->fields).pointCnt) {
          pVStack_20 = (Vector2__Array *)(this->fields).elapsedInsertionTime;
          pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar17 = (float)pIStack_15 + (float)pVStack_20;
          pfVar21 = &(this->fields).averageInsertionTime;
          (this->fields).elapsedInsertionTime = fVar17;
          if (*pfVar21 <= fVar17 && fVar17 != *pfVar21) {
            fVar17 = (this->fields).averageInsertionTime;
            iVar18 = (this->fields).displayCnt;
            do {
              fVar16 = (this->fields).elapsedInsertionTime - fVar17;
              iVar39 = iVar18 + 1;
              if ((this->fields).pointCnt <= iVar18) {
                iVar39 = iVar18;
              }
              (this->fields).elapsedInsertionTime = fVar16;
              iVar18 = iVar39;
            } while (fVar17 < fVar16);
            (this->fields).displayCnt = iVar39;
          }
        }
        if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
          pRVar40 = (this->fields).mRenderer;
          if (pRVar40 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar40,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = iStack_4;
            return;
          }
        }
        else {
          pRVar40 = (this->fields).mRenderer;
          if (pRVar40 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar40,1,(MethodInfo *)0x0);
            pSStack_41 = (Single__Array *)(this->fields).displayCnt;
            (this->fields).lifeTimeRatio = 1.0 / (this->fields).lifetime;
            if (((this->fields).maxPointsDrawn < (int)pSStack_41) && (0 < (this->fields).maxPointsDrawn)) {
              pSStack_41 = (Single__Array *)(this->fields).maxPointsDrawn;
            }
            pSVar42 = pSStack_41;
            pVStack_43 = (Vector3__Array *)func_?();
            pVStack_20 = (Vector2__Array *)func_?();
            pIStack_15 = (Int32__Array *)func_?();
            pCStack_14 = (Color__Array *)func_?();
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              pVVar6 = (Vector3__Array *)&UNK_?;
              pCVar12 = (Color__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
              if (pCVar12 != (Color__Array *)0x0) {
                pVVar44 = (Vector3__Array *)0x0;
                pVVar7 = (Vector3__Array *)&VStack_10;
                pCVar45 = (Color__Array *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)pVVar7,(Transform *)pCVar12,(MethodInfo *)0x0);
                puVar46 = (undefined1 *)0x0;
                while( true ) {
                  CStack_13.a = (float)puVar46;
                  if ((int)pSStack_41 <= (int)puVar46) break;
                  pVVar47 = (this->fields).points;
                  if (pVVar47 == (Vector3__Array *)0x0) goto code_?;
                  puVar48 = puVar46 + ((this->fields).displayCnt - (int)pSStack_41);
                  if ((undefined1 *)pVVar47->max_length <= puVar48) goto code_?;
                  uVar49._0_4_ = pVVar47->vector[(int)puVar48].x;
                  uVar49._4_4_ = pVVar47->vector[(int)puVar48].y;
                  fVar17 = pVVar47->vector[(int)puVar48].z;
                  pCVar50 = (this->fields).colors;
                  pCStack_51 = (Color__Array *)((float)(int)puVar46 * (1.0 / (float)(int)((int)pSVar42[-1].vector + 0x7f)));
                  CStack_13._0_8_ = uVar49;
                  fStack_52 = fVar17;
                  if (pCVar50 == (Color__Array *)0x0) goto code_?;
                  if (pCVar50->max_length == 0) {
                    pCStack_53 = (Color__Array *)0x0;
                    pCVar45 = (Color__Array *)&stack0xfffffd50;
                    in_stack_22 = (Color__Array *)0x0;
                    pCVar50 = (Color__Array *)0x0;
                    in_stack_28 = (Color__Array *)0x0;
                    pVVar7 = in_stack_26;
                    pCVar12 = in_stack_25;
                    pVVar44 = in_stack_24;
code_?:
                    in_stack_23 = in_stack_28;
                    in_stack_28 = pCVar50;
                    in_stack_29 = in_stack_22;
                    a.g = (float)in_stack_28;
                    a.r = (float)in_stack_29;
                    a.b = (float)in_stack_23;
                    a.a = (float)pCStack_53;
                    b.g = (float)pCVar12;
                    b.r = (float)pVVar7;
                    b.b = (float)pVVar44;
                    b.a = (float)in_stack_54;
                    pCVar55 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp((Color *)pCVar45,a,b,(float)in_stack_56,in_stack_57);
                    in_stack_27 = (Color__Array *)pCVar55->r;
                    in_stack_26 = (Vector3__Array *)pCVar55->g;
                    in_stack_25 = (Color__Array *)pCVar55->b;
                    in_stack_24 = (Vector3__Array *)pCVar55->a;
                    in_stack_22 = pCVar45;
                    pCVar50 = pCStack_53;
                    pVVar47 = pVVar7;
                    pCVar58 = pCVar12;
                    pVVar59 = pVVar44;
                  }
                  else {
                    if (pCVar50->max_length == 1) {
                      in_stack_54 = in_stack_60;
                      func_?();
                      in_stack_57 = (MethodInfo *)0x0;
                      pCStack_53 = (Color__Array *)0x0;
                      pCVar45 = (Color__Array *)&stack0xfffffd60;
                      in_stack_22 = (Color__Array *)0x0;
                      pCVar50 = (Color__Array *)0x0;
                      in_stack_28 = (Color__Array *)0x0;
                      pVVar7 = in_stack_61;
                      pCVar12 = in_stack_62;
                      pVVar44 = in_stack_63;
                      in_stack_56 = pCStack_51;
                      in_stack_60 = in_stack_54;
                      goto code_?;
                    }
                    if (pCVar50->max_length == 2) {
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_54 = (Color__Array *)&UNK_?;
                        func_?();
                        in_stack_57 = (MethodInfo *)0x0;
                        pCVar45 = (Color__Array *)&stack0xfffffd70;
                        pCVar50 = in_stack_29;
                        pCStack_53 = in_stack_23;
                        in_stack_56 = pCStack_51;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    pCStack_64 = (Color__Array *)((float)(int)(pCVar50->max_length - 1) - (float)(int)(pCVar50->max_length - 1) * (float)pCStack_51);
                    if ((float)pCStack_64 != (float)(int)(pCVar50->max_length - 1)) {
                      uStack_65 = (double)(float)pCStack_64;
                      fVar66 = (float10)func_?();
                      fStack_67 = (float)(int)fVar66;
                      pCStack_64 = (Color__Array *)((float)pCStack_64 - (float)(int)fStack_67);
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_54 = pCVar45;
                        func_?();
                        in_stack_57 = (MethodInfo *)0x0;
                        pCVar45 = (Color__Array *)&stack0xfffffd80;
                        in_stack_22 = in_stack_54;
                        pCVar50 = pCStack_64;
                        in_stack_28 = (Color__Array *)0x0;
                        pVVar7 = in_stack_31;
                        pCVar12 = in_stack_30;
                        pVVar44 = pVVar6;
                        in_stack_56 = pCStack_64;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if (pCVar50 == (Color__Array *)0x0) goto code_?;
                    func_?();
                    pCVar50 = in_stack_27;
                    pVVar47 = in_stack_26;
                    pCVar58 = in_stack_25;
                    pVVar59 = in_stack_24;
                  }
                  uStack_65 = (double)CONCAT44(in_stack_24,in_stack_25);
                  pCStack_68 = in_stack_27;
                  pVStack_69 = in_stack_26;
                  if (pCStack_14 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_31 = (Vector3__Array *)((int)puVar46 * 2 + 1);
                  in_stack_30 = pCStack_68;
                  pVVar6 = pVStack_69;
                  func_?();
                  pSVar70 = (this->fields).widths;
                  if (pSVar70 == (Single__Array *)0x0) goto code_?;
                  if (pSVar70->max_length == 0) {
                    pCStack_64 = (Color__Array *)0x3f800000;
                  }
                  else if (pSVar70->max_length == 1) {
                    if (pSVar70->max_length == 0) goto code_?;
                    pCStack_64 = (Color__Array *)pSVar70->vector[0];
                  }
                  else if (pSVar70->max_length == 2) {
                    if (pSVar70->max_length < 2) goto code_?;
                    if (pSVar70 == (Single__Array *)0x0) goto code_?;
                    if (pSVar70->max_length == 0) goto code_?;
                    pCStack_64 = (Color__Array *)pSVar70->vector[0];
                    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01((float)pCStack_51,(MethodInfo *)0x0);
                    pSVar70 = (this->fields).widths;
                    uStack_65 = (double)CONCAT44(fVar16,(float)uStack_65);
                    pCStack_64 = (Color__Array *)(((float)pCStack_64 - pSVar70->vector[1]) * fVar16 + pSVar70->vector[1]);
                  }
                  else {
                    pCStack_64 = (Color__Array *)((float)(int)(pSVar70->max_length - 1) - (float)(int)(pSVar70->max_length - 1) * (float)pCStack_51);
                    if ((float)pCStack_64 == (float)(int)(pSVar70->max_length - 1)) {
                      if (pSVar70 == (Single__Array *)0x0) goto code_?;
                      if (pSVar70->max_length <= pSVar70->max_length - 1) goto code_?;
                      pCStack_64 = (Color__Array *)pSVar70->vector[pSVar70->max_length - 1];
                    }
                    else {
                      uStack_65 = (double)(float)pCStack_64;
                      fVar66 = (float10)func_?();
                      pSVar70 = (this->fields).widths;
                      fStack_67 = (float)(int)fVar66;
                      fVar16 = (float)pCStack_64 - (float)(int)fStack_67;
                      if (pSVar70->max_length <= (uint)fStack_67) goto code_?;
                      if (pSVar70 == (Single__Array *)0x0) goto code_?;
                      if (pSVar70->max_length <= (int)fStack_67 + 1U) goto code_?;
                      pCStack_64 = (Color__Array *)pSVar70->vector[(int)fStack_67 + 1];
                      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar16,(MethodInfo *)0x0);
                      pSVar70 = (this->fields).widths;
                      uStack_65 = (double)CONCAT44(fVar16,(float)uStack_65);
                      pCStack_64 = (Color__Array *)(((float)pCStack_64 - pSVar70->vector[(int)fStack_67]) * fVar16 + pSVar70->vector[(int)fStack_67]);
                    }
                  }
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      uStack_65 = (double)CONCAT44(fVar17,(float)uStack_65);
                      fStack_67 = uVar49._4_4_;
                      pMStack_71 = (Material *)(float)uVar49;
                      fStack_72 = 0.0;
                      CStack_13.r = 0.0;
                      CStack_13.g = 0.0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar16 = fStack_73 * (float)pCStack_64 * 0.5;
                      fVar74 = fStack_75 * (float)pCStack_64 * 0.5;
                    }
                    else {
                      uStack_65 = (double)CONCAT44((this->fields).time,(float)uStack_65);
                      fStack_67 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
                      (this->fields).time = uStack_65._4_4_ + fStack_67;
                      pVVar6 = (this->fields).points;
                      if (puVar46 == (undefined1 *)((int)pSStack_41[-1].vector + 0x7f)) {
                        if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        CStack_76._0_8_ = auStack_77._12_8_;
                        CStack_76.b = fStack_78;
                        fVar16 = fStack_52;
                      }
                      else {
                        CStack_76.b = fStack_52;
                        CStack_76.r = CStack_13.r;
                        CStack_76.g = CStack_13.g;
                        if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fVar16 = (float)auStack_77._8_4_;
                        CStack_13._0_8_ = auStack_77._0_8_;
                      }
                      fStack_79 = CStack_13.g;
                      fVar16 = fVar16 - CStack_76.b;
                      CStack_76.a = CStack_13.r;
                      pMStack_71 = (Material *)(CStack_76.a - CStack_76.r);
                      fStack_72 = 0.0;
                      CStack_13._0_8_ = 0;
                      dVar80 = (double)(this->fields).time;
                      uStack_65._4_4_ = fStack_79 - CStack_76.g;
                      func_?();
                      pVVar6 = (Vector3__Array *)&UNK_?;
                      axis.y = uStack_65._4_4_;
                      axis.x = (float)pMStack_71;
                      axis.z = fVar16;
                      pQVar81 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xfffffd40,(float)dVar80,axis,(MethodInfo *)0x0);
                      pMStack_71 = (Material *)pQVar81->x;
                      fStack_72 = pQVar81->y;
                      CStack_13.r = pQVar81->z;
                      CStack_13.g = pQVar81->w;
                      pVVar9 = (Vector3 *)func_?();
                      rotation.y = fStack_72;
                      rotation.x = (float)pMStack_71;
                      rotation.z = CStack_13.r;
                      rotation.w = CStack_13.g;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xfffffdb0,rotation,*pVVar9,(MethodInfo *)0x0);
                      in_stack_61 = (Vector3__Array *)&stack0xfffffda0;
                      in_stack_62 = (Color__Array *)0x0;
                      puVar82 = (undefined8 *)func_?();
                      fStack_83 = (float)((ulonglong)*puVar82 >> 0x20);
                      fStack_84 = (float)*puVar82;
                      uStack_65 = (double)CONCAT44(fVar17,(float)uStack_65);
                      fStack_67 = uVar49._4_4_;
                      pMStack_71 = (Material *)(float)uVar49;
                      fStack_72 = 0.0;
                      CStack_13.r = 0.0;
                      CStack_13.g = 0.0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar16 = fStack_83 * (float)pCStack_64 * 0.5;
                      fVar74 = fStack_84 * (float)pCStack_64 * 0.5;
                    }
                  }
                  else {
                    pVVar7 = (this->fields).points;
                    if (puVar46 == (undefined1 *)((int)pSStack_41[-1].vector + 0x7f)) {
                      if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    fStack_67 = uVar49._4_4_;
                    pMStack_71 = (Material *)(float)uVar49;
                    fStack_72 = 0.0;
                    CStack_13.r = 0.0;
                    CStack_13.g = 0.0;
                    fStack_52 = fVar17;
                    puVar82 = (undefined8 *)func_?();
                    fVar17 = *(float *)(puVar82 + 1);
                    fStack_85 = (float)((ulonglong)*puVar82 >> 0x20);
                    fStack_86 = (float)*puVar82;
                    if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fVar16 = fStack_85 * (float)pCStack_64 * 0.5;
                    fVar74 = fStack_86 * (float)pCStack_64 * 0.5;
                    VStack_10.z = fStack_52 - fVar17 * (float)pCStack_64 * 0.5;
                  }
                  pCVar12 = (Color__Array *)((float)pMStack_71 - fVar74);
                  pVVar44 = (Vector3__Array *)(fStack_67 - fVar16);
                  pVVar7 = (Vector3__Array *)((int)puVar46 * 2 + 1);
                  pCVar45 = (Color__Array *)&UNK_?;
                  func_?();
                  if (pVStack_20 == (Vector2__Array *)0x0) goto code_?;
                  if (pVStack_20->max_length <= (uint)((int)puVar46 * 2)) goto code_?;
                  pVStack_20->vector[(int)puVar46 * 2].x = (float)pCStack_51;
                  pVStack_20->vector[(int)puVar46 * 2].y = 0.0;
                  if (pVStack_20->max_length <= (int)puVar46 * 2 + 1U) goto code_?;
                  pVStack_20->vector[(int)puVar46 * 2 + 1].x = (float)pCStack_51;
                  pVStack_20->vector[(int)puVar46 * 2 + 1].y = 1.0;
                  if (0 < (int)puVar46) {
                    iVar18 = (int)puVar46 * 6;
                    if (pIStack_15 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_15->max_length <= iVar18 - 6U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -6] = (int)puVar46 * 2 + -2;
                    iVar39 = (int)puVar46 * 2;
                    uStack_65 = (double)CONCAT44(iVar39 + -1,(float)uStack_65);
                    if (pIStack_15->max_length <= iVar18 - 5U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -5] = iVar39 + -1;
                    if (pIStack_15->max_length <= iVar18 - 4U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -4] = iVar39;
                    if (pIStack_15->max_length <= iVar18 - 3U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -3] = iVar39;
                    if (pIStack_15->max_length <= iVar18 - 2U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -2] = iVar39 + -1;
                    if (pIStack_15->max_length <= iVar18 - 1U) goto code_?;
                    pIStack_15->vector[(int)puVar46 * 6 + -1] = iVar39 + 1;
                    puVar46 = (undefined1 *)CStack_13.a;
                  }
                  puVar46 = puVar46 + 1;
                  in_stack_27 = pCVar50;
                  in_stack_26 = pVVar47;
                  in_stack_25 = pCVar58;
                  in_stack_24 = pVVar59;
                }
                pGVar38 = (this->fields).trail;
                if (pGVar38 != (GameObject *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar38,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
                    pGVar38 = (this->fields).trail;
                    if (pGVar38 != (GameObject *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar38,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (pTVar8 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                        pMVar87 = (this->fields).mesh;
                        if (pMVar87 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar87,(MethodInfo *)0x0);
                          pMVar87 = (this->fields).mesh;
                          if (pMVar87 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar87,pVStack_43,(MethodInfo *)0x0);
                            pMVar87 = (this->fields).mesh;
                            if (pMVar87 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar87,pCStack_14,(MethodInfo *)0x0);
                              pMVar87 = (this->fields).mesh;
                              if (pMVar87 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar87,pVStack_20,(MethodInfo *)0x0);
                                pMVar87 = (this->fields).mesh;
                                if (pMVar87 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles(pMVar87,pIStack_15,(MethodInfo *)0x0);
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
    pVVar6 = (this->fields).saved;
    iVar18 = (this->fields).savedCnt;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar6->max_length <= iVar18 - 1U) goto code_?;
    uVar88 = pVVar6->vector[iVar18 + -1].x;
    uVar89 = pVVar6->vector[iVar18 + -1].y;
    fVar17 = pVVar6->vector[iVar18 + -1].z - (float)pCVar12;
    fVar17 = fVar17 * fVar17 + ((float)uVar89 - uVar11._4_4_) * ((float)uVar89 - uVar11._4_4_) + ((float)uVar88 - (float)uVar11) * ((float)uVar88 - (float)uVar11);
    pfVar21 = &(this->fields).pointSqrDistance;
    if (fVar17 < *pfVar21 || fVar17 == *pfVar21) {
code_?:
      if ((this->fields).Emit == 0) goto code_?;
      goto code_?;
    }
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if ((int)(pVVar6->max_length - 1) < (this->fields).savedCnt) {
      pVVar6 = (Vector3__Array *)func_?();
      (this->fields).saved = pVVar6;
      func_?();
      if ((this->fields).saved != (Vector3__Array *)0x0) {
        pVVar6 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar6;
        func_?();
        if ((this->fields).saved != (Vector3__Array *)0x0) {
          pVVar6 = (Vector3__Array *)func_?();
          (this->fields).points = pVVar6;
          func_?();
          if ((this->fields).points != (Vector3__Array *)0x0) {
            pVVar6 = (Vector3__Array *)func_?();
            (this->fields).pointsUp = pVVar6;
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
    pVVar6 = (this->fields).saved;
    uVar90 = (this->fields).savedCnt;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if (uVar90 < pVVar6->max_length) {
      pVVar6->vector[uVar90].x = CStack_13.r;
      pVVar6->vector[uVar90].y = CStack_13.g;
      pVVar6->vector[uVar90].z = (float)pCStack_14;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar6 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0);
        if (pVVar6 != (Vector3__Array *)0x0) {
          fVar16 = pVVar9->y;
          fVar17 = pVVar9->z;
          if ((Int32__Array *)pVVar6->max_length <= pIStack_15) goto code_?;
          pVVar6->vector[(int)pIStack_15].x = pVVar9->x;
          pVVar6->vector[(int)pIStack_15].y = fVar16;
          pVVar6->vector[(int)pIStack_15].z = fVar17;
          piVar19 = &(this->fields).savedCnt;
          *piVar19 = *piVar19 + 1;
          if ((this->fields).averageCreationTime == 0.0) {
            pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar17 = (float)pIStack_15 - (this->fields).lastPointCreationTime;
          }
          else {
            pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar17 = ((this->fields).averageCreationTime + ((float)pIStack_15 - (this->fields).lastPointCreationTime)) * 0.5;
          }
          (this->fields).averageCreationTime = fVar17;
          (this->fields).averageInsertionTime = (this->fields).tRatio * fVar17;
          pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
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
  pcVar91 = (code *)swi(3);
  (*pcVar91)();
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

