
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
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar9->x;
    uVar11._4_4_ = pVVar9->y;
    pCVar12 = (Color__Array *)pVVar9->z;
    uStack_13 = uVar11;
    pCStack_14 = pCVar12;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)aIStack_10,pTVar8,0.0,0.0,-(this->fields).pointDistance,(MethodInfo *)0x0);
        if (pVVar16 != (Vector3__Array *)0x0) {
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if (pIStack_15 < (Int32__Array *)pVVar16->max_length) {
            pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
            pVVar16->vector[(int)pIStack_15].y = fVar17;
            pVVar16->vector[(int)pIStack_15].z = fVar18;
            pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
            pVVar16 = (this->fields).savedUp;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
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
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
                    if (pVVar16 != (Vector3__Array *)0x0) {
                      fVar17 = pVVar9->y;
                      fVar18 = pVVar9->z;
                      if (pIStack_15 < (Int32__Array *)pVVar16->max_length) {
                        pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
                        pVVar16->vector[(int)pIStack_15].y = fVar17;
                        pVVar16->vector[(int)pIStack_15].z = fVar18;
                        piVar20 = &(this->fields).savedCnt;
                        *piVar20 = *piVar20 + 1;
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
    pVStack_21 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar22 = &(this->fields).maxLifeTime;
    if (*pfVar22 <= (float)pIStack_15 - (float)pVStack_21 && (float)pIStack_15 - (float)pVStack_21 != *pfVar22) {
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
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)aIStack_10,pTVar8,0.0,0.0,(this->fields).pointDistance,(MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
      pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pIStack_15].y = fVar17;
      pVVar16->vector[(int)pIStack_15].z = fVar18;
      pIStack_15 = (Int32__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
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
      in_stack_23.method = (MethodInfo *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      fVar18 = (this->fields).pointDistance;
      if (in_stack_23.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto code_?;
      in_stack_24.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_25 = (Il2CppRGCTXData)(fVar18 + fVar18);
      in_stack_26.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      in_stack_28.rgctxDataDummy = aIStack_10;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)in_stack_28.method,(Transform *)in_stack_23.method,0.0,0.0,(float)in_stack_25,(MethodInfo *)0x0);
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
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      in_stack_30.rgctxDataDummy = aIStack_10;
      in_stack_31.rgctxDataDummy = &UNK_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)in_stack_30.method,pTVar8,(MethodInfo *)0x0);
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
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xfffffe48,pMVar32,StringLiteral__TintColor,(MethodInfo *)0x0);
          uVar34 = pVVar33->x;
          uVar35 = pVVar33->y;
          uVar36 = pVVar33->z;
          value.z = (float)uVar36;
          value.y = (float)uVar35;
          value.x = (float)uVar34;
          fVar18 = pVVar33->w;
          pVStack_21 = (Vector2__Array *)(this->fields).fadeOutRatio;
          pIStack_15 = (Int32__Array *)(this->fields).lifeTimeRatio;
          fStack_37 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar18 = fVar18 - (float)pIStack_15 * (float)pVStack_21 * fStack_37;
          if (fVar18 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar38 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(this->fields).pointCnt,(MethodInfo *)0x0);
              pSVar38 = mscorlib.dll::System::String::String_Concat_3(StringLiteral_Trail_effect_ending_with_a_segme,pSVar38,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar38,(MethodInfo *)0x0);
            }
            pGVar39 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar39,(MethodInfo *)0x0);
            pGVar39 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar39,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
          pMVar32 = (this->fields).trailMaterial;
          if (pMVar32 != (Material *)0x0) {
            value.w = fVar18;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar32,StringLiteral__TintColor,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
      }
      else {
code_?:
        if ((this->fields).displayCnt < (this->fields).pointCnt) {
          pVStack_21 = (Vector2__Array *)(this->fields).elapsedInsertionTime;
          pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
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
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar41,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
        else {
          pRVar41 = (this->fields).mRenderer;
          if (pRVar41 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar41,1,(MethodInfo *)0x0);
            iStack_42 = (this->fields).displayCnt;
            (this->fields).lifeTimeRatio = 1.0 / (this->fields).lifetime;
            if (((this->fields).maxPointsDrawn < iStack_42) && (0 < (this->fields).maxPointsDrawn)) {
              iStack_42 = (this->fields).maxPointsDrawn;
            }
            iVar19 = iStack_42;
            pVStack_43 = (Vector3__Array *)func_?();
            pVStack_21 = (Vector2__Array *)func_?();
            pIStack_15 = (Int32__Array *)func_?();
            pCStack_14 = (Color__Array *)func_?();
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              IVar44.rgctxDataDummy = &UNK_?;
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                IVar45.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                __return_storage_ptr__.rgctxDataDummy = aIStack_10;
                IVar46.rgctxDataDummy = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)__return_storage_ptr__.method,pTVar8,(MethodInfo *)0x0);
                fVar18 = 0.0;
                while( true ) {
                  fStack_37 = fVar18;
                  if (iStack_42 <= (int)fVar18) break;
                  pVVar16 = (this->fields).points;
                  if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                  uVar47 = ((this->fields).displayCnt + (int)fVar18) - iStack_42;
                  if (pVVar16->max_length <= uVar47) goto code_?;
                  uVar11 = *(undefined8 *)((int)pVVar16 + uVar47 * 0xc + 0x10);
                  fVar17 = *(float *)((int)pVVar16 + uVar47 * 0xc + 0x18);
                  pCVar12 = (this->fields).colors;
                  fStack_48 = (float)(int)fVar18 * (1.0 / (float)(iVar19 + -1));
                  uStack_13 = uVar11;
                  fStack_49 = fVar17;
                  if (pCVar12 == (Color__Array *)0x0) goto code_?;
                  if (pCVar12->max_length == 0) {
                    in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_23.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                    pCVar50 = (Color *)&puStack_51;
                    IVar46 = in_stack_25;
                    __return_storage_ptr__ = in_stack_24;
                    pTVar8 = in_stack_52;
                    t = in_stack_53;
code_?:
                    a.g = (float)IStack_29.rgctxDataDummy;
                    a.r = (float)in_stack_28.rgctxDataDummy;
                    a.b = (float)in_stack_23.rgctxDataDummy;
                    a.a = (float)in_stack_27.rgctxDataDummy;
                    b.g = (float)IVar46.rgctxDataDummy;
                    b.r = (float)in_stack_26.rgctxDataDummy;
                    b.b = (float)__return_storage_ptr__.rgctxDataDummy;
                    b.a = (float)pTVar8;
                    pCVar50 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp(pCVar50,a,b,t,in_stack_54);
                    in_stack_25 = (Il2CppRGCTXData)pCVar50->r;
                    in_stack_24 = (Il2CppRGCTXData)pCVar50->g;
                    in_stack_52 = (Transform *)pCVar50->b;
                    in_stack_53 = pCVar50->a;
                    in_stack_28 = IStack_29;
                    IVar55 = IVar46;
                    IVar56 = __return_storage_ptr__;
                    pTVar57 = pTVar8;
                  }
                  else {
                    if (pCVar12->max_length == 1) {
                      in_stack_26 = in_stack_58;
                      func_?();
                      in_stack_54 = (MethodInfo *)0x0;
                      in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      IStack_29.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_23.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      in_stack_27.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      pCVar50 = (Color *)&stack0xfffffd68;
                      IVar46 = in_stack_59;
                      __return_storage_ptr__ = in_stack_60;
                      pTVar8 = in_stack_61;
                      t = fStack_48;
                      in_stack_58 = in_stack_26;
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
                        in_stack_54 = (MethodInfo *)0x0;
                        pCVar50 = (Color *)&stack0xfffffd78;
                        in_stack_26 = in_stack_27;
                        t = fStack_48;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    fStack_62 = (float)(int)(pCVar12->max_length - 1) - (float)(int)(pCVar12->max_length - 1) * fStack_48;
                    if (fStack_62 != (float)(int)(pCVar12->max_length - 1)) {
                      uStack_63 = (double)fStack_62;
                      fVar64 = (float10)func_?();
                      fStack_65 = (float)(int)fVar64;
                      fStack_62 = fStack_62 - (float)(int)fStack_65;
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_23 = in_stack_31;
                        in_stack_27 = in_stack_30;
                        func_?();
                        in_stack_54 = (MethodInfo *)0x0;
                        in_stack_28.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                        pCVar50 = (Color *)&stack0xfffffd88;
                        in_stack_26 = IVar44;
                        t = fStack_62;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if (pCVar12 == (Color__Array *)0x0) goto code_?;
                    func_?();
                    IVar55 = in_stack_25;
                    IVar56 = in_stack_24;
                    pTVar57 = in_stack_52;
                    t = in_stack_53;
                  }
                  uStack_63 = (double)CONCAT44(in_stack_53,in_stack_52);
                  IStack_66 = in_stack_25;
                  IStack_67 = in_stack_24;
                  if (pCStack_14 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_31.rgctxDataDummy = (void *)((int)fVar18 * 2 + 1);
                  IStack_29.rgctxDataDummy = &UNK_?;
                  in_stack_30 = IStack_66;
                  IVar44 = IStack_67;
                  func_?();
                  pSVar68 = (this->fields).widths;
                  if (pSVar68 == (Single__Array *)0x0) goto code_?;
                  if (pSVar68->max_length == 0) {
                    fStack_62 = 1.0;
                  }
                  else if (pSVar68->max_length == 1) {
                    if (pSVar68->max_length == 0) goto code_?;
                    fStack_62 = pSVar68->vector[0];
                  }
                  else if (pSVar68->max_length == 2) {
                    if (pSVar68->max_length < 2) goto code_?;
                    if (pSVar68 == (Single__Array *)0x0) goto code_?;
                    if (pSVar68->max_length == 0) goto code_?;
                    fStack_62 = pSVar68->vector[0];
                    fVar69 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fStack_48,(MethodInfo *)0x0);
                    pSVar68 = (this->fields).widths;
                    uStack_63 = (double)CONCAT44(fVar69,(undefined4)uStack_63);
                    fStack_62 = (fStack_62 - pSVar68->vector[1]) * fVar69 + pSVar68->vector[1];
                  }
                  else {
                    fStack_62 = (float)(int)(pSVar68->max_length - 1) - (float)(int)(pSVar68->max_length - 1) * fStack_48;
                    if (fStack_62 == (float)(int)(pSVar68->max_length - 1)) {
                      if (pSVar68 == (Single__Array *)0x0) goto code_?;
                      if (pSVar68->max_length <= pSVar68->max_length - 1) goto code_?;
                      fStack_62 = pSVar68->vector[pSVar68->max_length - 1];
                    }
                    else {
                      uStack_63 = (double)fStack_62;
                      fVar64 = (float10)func_?();
                      pSVar68 = (this->fields).widths;
                      fStack_65 = (float)(int)fVar64;
                      fVar69 = fStack_62 - (float)(int)fStack_65;
                      if (pSVar68->max_length <= (uint)fStack_65) goto code_?;
                      if (pSVar68 == (Single__Array *)0x0) goto code_?;
                      if (pSVar68->max_length <= (int)fStack_65 + 1U) goto code_?;
                      fStack_62 = pSVar68->vector[(int)fStack_65 + 1U];
                      fVar69 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar69,(MethodInfo *)0x0);
                      pSVar68 = (this->fields).widths;
                      uStack_63 = (double)CONCAT44(fVar69,(undefined4)uStack_63);
                      fStack_62 = (fStack_62 - pSVar68->vector[(int)fStack_65]) * fVar69 + pSVar68->vector[(int)fStack_65];
                    }
                  }
                  fStack_70 = (float)uVar11;
                  fStack_71 = (float)((ulonglong)uVar11 >> 0x20);
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      uStack_63 = (double)CONCAT44(fVar17,(undefined4)uStack_63);
                      fStack_65 = fStack_71;
                      fStack_72 = fStack_70;
                      fStack_73 = 0.0;
                      uStack_13 = 0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar69 = fStack_74 * fStack_62 * 0.5;
                      IVar45 = (Il2CppRGCTXData)(fStack_65 - fStack_75 * fStack_62 * 0.5);
                    }
                    else {
                      uStack_63 = (double)CONCAT44((this->fields).time,(undefined4)uStack_63);
                      fStack_65 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
                      (this->fields).time = uStack_63._4_4_ + fStack_65;
                      pVVar16 = (this->fields).points;
                      if (fVar18 == (float)(iStack_42 + -1)) {
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        uStack_76 = uStack_77;
                        fStack_78 = fStack_79;
                        fVar69 = fStack_49;
                      }
                      else {
                        fStack_78 = fStack_49;
                        uStack_76 = uStack_13;
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        fVar69 = fStack_80;
                        uStack_13 = uStack_81;
                      }
                      fStack_82 = (float)((ulonglong)uStack_13 >> 0x20);
                      fVar69 = fVar69 - fStack_78;
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
                      axis.z = fVar69;
                      pQVar85 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xfffffd48,(float)dVar84,axis,(MethodInfo *)0x0);
                      fStack_72 = pQVar85->x;
                      fStack_73 = pQVar85->y;
                      uStack_13._0_4_ = pQVar85->z;
                      uStack_13._4_4_ = pQVar85->w;
                      pVVar9 = (Vector3 *)func_?();
                      rotation.y = fStack_73;
                      rotation.x = fStack_72;
                      rotation.z = (float)uStack_13;
                      rotation.w = uStack_13._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&stack0xfffffdb8,rotation,*pVVar9,(MethodInfo *)0x0);
                      in_stack_58.rgctxDataDummy = auStack_86;
                      in_stack_59.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
                      puVar87 = (undefined8 *)func_?();
                      fStack_88 = (float)((ulonglong)*puVar87 >> 0x20);
                      fStack_89 = (float)*puVar87;
                      uStack_63 = (double)CONCAT44(fVar17,(undefined4)uStack_63);
                      fStack_65 = fStack_71;
                      fStack_72 = fStack_70;
                      fStack_73 = 0.0;
                      uStack_13 = 0;
                      if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fVar69 = fStack_89 * fStack_62 * 0.5;
                      IVar45 = (Il2CppRGCTXData)(fStack_65 - fStack_88 * fStack_62 * 0.5);
                    }
                  }
                  else {
                    pVVar16 = (this->fields).points;
                    if (fVar18 == (float)(iStack_42 + -1)) {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    fStack_65 = fStack_71;
                    fStack_72 = fStack_70;
                    fStack_73 = 0.0;
                    uStack_13 = 0;
                    fStack_49 = fVar17;
                    puVar87 = (undefined8 *)func_?();
                    fVar17 = *(float *)(puVar87 + 1);
                    fStack_90 = (float)((ulonglong)*puVar87 >> 0x20);
                    fStack_91 = (float)*puVar87;
                    if (pVStack_43 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fVar69 = fStack_91 * fStack_62 * 0.5;
                    fStack_92 = fStack_49 - fVar17 * fStack_62 * 0.5;
                    IVar45 = (Il2CppRGCTXData)(fStack_65 - fStack_90 * fStack_62 * 0.5);
                  }
                  pTVar8 = (Transform *)(fStack_72 - fVar69);
                  __return_storage_ptr__.rgctxDataDummy = (void *)((int)fVar18 * 2 + 1);
                  IVar46.rgctxDataDummy = &UNK_?;
                  func_?();
                  if (pVStack_21 == (Vector2__Array *)0x0) goto code_?;
                  if (pVStack_21->max_length <= (uint)((int)fVar18 * 2)) goto code_?;
                  pVStack_21->vector[(int)fVar18 * 2].x = fStack_48;
                  pVStack_21->vector[(int)fVar18 * 2].y = 0.0;
                  if (pVStack_21->max_length <= (int)fVar18 * 2 + 1U) goto code_?;
                  pVStack_21->vector[(int)fVar18 * 2 + 1].x = fStack_48;
                  pVStack_21->vector[(int)fVar18 * 2 + 1].y = 1.0;
                  if (0 < (int)fVar18) {
                    iVar40 = (int)fVar18 * 6;
                    if (pIStack_15 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_15->max_length <= iVar40 - 6U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -6] = (int)fVar18 * 2 + -2;
                    iVar93 = (int)fVar18 * 2;
                    uStack_63 = (double)CONCAT44(iVar93 + -1,(undefined4)uStack_63);
                    if (pIStack_15->max_length <= iVar40 - 5U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -5] = iVar93 + -1;
                    if (pIStack_15->max_length <= iVar40 - 4U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -4] = iVar93;
                    if (pIStack_15->max_length <= iVar40 - 3U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -3] = iVar93;
                    if (pIStack_15->max_length <= iVar40 - 2U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -2] = iVar93 + -1;
                    if (pIStack_15->max_length <= iVar40 - 1U) goto code_?;
                    pIStack_15->vector[(int)fVar18 * 6 + -1] = iVar93 + 1;
                    fVar18 = fStack_37;
                  }
                  fVar18 = (float)((int)fVar18 + 1);
                  in_stack_25 = IVar55;
                  in_stack_24 = IVar56;
                  in_stack_52 = pTVar57;
                  in_stack_53 = t;
                }
                pGVar39 = (this->fields).trail;
                if (pGVar39 != (GameObject *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar39,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
                    pGVar39 = (this->fields).trail;
                    if (pGVar39 != (GameObject *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar39,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (pTVar8 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                        pMVar94 = (this->fields).mesh;
                        if (pMVar94 != (Mesh *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar94,(MethodInfo *)0x0);
                          pMVar94 = (this->fields).mesh;
                          if (pMVar94 != (Mesh *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar94,pVStack_43,(MethodInfo *)0x0);
                            pMVar94 = (this->fields).mesh;
                            if (pMVar94 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar94,pCStack_14,(MethodInfo *)0x0);
                              pMVar94 = (this->fields).mesh;
                              if (pMVar94 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar94,pVStack_21,(MethodInfo *)0x0);
                                pMVar94 = (this->fields).mesh;
                                if (pMVar94 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles(pMVar94,pIStack_15,(MethodInfo *)0x0);
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
    fVar18 = fVar18 * fVar18 + ((float)uVar96 - (float)uVar11._4_4_) * ((float)uVar96 - (float)uVar11._4_4_) + ((float)uVar95 - (float)(undefined4)uVar11) * ((float)uVar95 - (float)(undefined4)uVar11);
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
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)aIStack_10,pTVar8,(MethodInfo *)0x0);
        if (pVVar16 != (Vector3__Array *)0x0) {
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if ((Int32__Array *)pVVar16->max_length <= pIStack_15) goto code_?;
          pVVar16->vector[(int)pIStack_15].x = pVVar9->x;
          pVVar16->vector[(int)pIStack_15].y = fVar17;
          pVVar16->vector[(int)pIStack_15].z = fVar18;
          piVar20 = &(this->fields).savedCnt;
          *piVar20 = *piVar20 + 1;
          if ((this->fields).averageCreationTime == 0.0) {
            pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar18 = (float)pIStack_15 - (this->fields).lastPointCreationTime;
          }
          else {
            pIStack_15 = (Int32__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            fVar18 = ((this->fields).averageCreationTime + ((float)pIStack_15 - (this->fields).lastPointCreationTime)) * 0.5;
          }
          (this->fields).averageCreationTime = fVar18;
          (this->fields).averageInsertionTime = (this->fields).tRatio * fVar18;
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
              uStack_30 = CONCAT44(((float)uVar15 - (float)uVar18) * 0.5 * fVar26 + ((float)uVar9 - (float)uVar12) * 0.5 * fVar29 + (float)uVar6 * fVar28 + (float)uVar3 * fVar27,((float)uVar14 - (float)uVar17) * 0.5 * fVar26 + ((float)uVar8 - (float)uVar11) * 0.5 * fVar29 + (float)uVar5 * fVar28 + (float)uVar2 * fVar27);
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar1->max_length <= uVar23) goto code_?;
              *(undefined8 *)((int)pVVar1 + uVar23 * 0xc + 0x10) = uStack_30;
              *(float *)((int)pVVar1 + uVar23 * 0xc + 0x18) = (fVar16 - fVar19) * 0.5 * fVar26 + (fVar10 - fVar13) * 0.5 * fVar29 + fVar7 * fVar28 + fVar4 * fVar27;
              pVVar1 = (this->fields).savedUp;
              pVVar31 = (this->fields).pointsUp;
              if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
              if ((pVVar1->max_length <= (uint)index) || (pVVar1->max_length <= index + 1U)) goto code_?;
              uVar32 = pVVar1->vector[index + 1].x;
              uVar33 = pVVar1->vector[index + 1].y;
              fVar27 = pVVar1->vector[index + 1].z;
              uVar34 = pVVar1->vector[index].x;
              uVar35 = pVVar1->vector[index].y;
              fVar28 = pVVar1->vector[index].z;
              if (fVar24 < 0.0) {
                fVar24 = 0.0;
              }
              else if (1.0 < fVar24) {
                fVar24 = 1.0;
              }
              if (pVVar31 == (Vector3__Array *)0x0) goto code_?;
              if (pVVar31->max_length <= uVar23) goto code_?;
              iStack_21 = iStack_21 + 1;
              *(ulonglong *)((int)pVVar31 + uVar23 * 0xc + 0x10) = CONCAT44(((float)uVar33 - (float)uVar35) * fVar24 + (float)uVar35,((float)uVar32 - (float)uVar34) * fVar24 + (float)uVar34);
              *(float *)((int)pVVar31 + uVar23 * 0xc + 0x18) = (fVar27 - fVar28) * fVar24 + fVar28;
              iVar22 = iVar22 + 1;
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

