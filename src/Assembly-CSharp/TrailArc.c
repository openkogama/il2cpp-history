
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
        ppCVar2 = &(this->fields).colors;
        pCVar1->vector[2].r = baseColor.r;
        pCVar1->vector[2].g = baseColor.g;
        pCVar1->vector[2].b = baseColor.b;
        pCVar1->vector[2].a = baseColor.a;
        *ppCVar2 = pCVar1;
        func_?(ppCVar2,pCVar1);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  ppVVar2 = &(this->fields).saved;
  *ppVVar2 = pVVar1;
  func_?(ppVVar2,pVVar1);
  if (*ppVVar2 != (Vector3__Array *)0x0) {
    pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,(*ppVVar2)->max_length);
    ppVVar3 = &(this->fields).savedUp;
    *ppVVar3 = pVVar1;
    func_?(ppVVar3,pVVar1);
    if (*ppVVar2 != (Vector3__Array *)0x0) {
      pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,(*ppVVar2)->max_length * (this->fields).segmentsPerPoint);
      ppVVar2 = &(this->fields).points;
      *ppVVar2 = pVVar1;
      func_?(ppVVar2,pVVar1);
      if (*ppVVar2 != (Vector3__Array *)0x0) {
        pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,(*ppVVar2)->max_length);
        ppVVar2 = &(this->fields).pointsUp;
        *ppVVar2 = pVVar1;
        func_?(ppVVar2,pVVar1);
        fVar4 = (this->fields).pointDistance;
        (this->fields).tRatio = 1.0 / (float)(this->fields).segmentsPerPoint;
        (this->fields).pointSqrDistance = fVar4 * fVar4;
        this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor(this_00,StringLiteral_Trail,(MethodInfo *)0x0);
        ppGVar5 = &(this->fields).trail;
        *ppGVar5 = this_00;
        func_?(ppGVar5,this_00);
        if (*ppGVar5 != (GameObject *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
            if (*ppGVar5 != (GameObject *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar6,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                if (*ppGVar5 != (GameObject *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(*ppGVar5,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar6 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
                    if (*ppGVar5 != (GameObject *)0x0) {
                      this_01 = (MeshFilter *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(*ppGVar5,UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__);
                      if (*ppGVar5 != (GameObject *)0x0) {
                        pRVar7 = (Renderer *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(*ppGVar5,UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__);
                        (this->fields).mRenderer = pRVar7;
                        func_?();
                        if (this_01 != (MeshFilter *)0x0) {
                          pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh(this_01,(MethodInfo *)0x0);
                          ppMVar9 = &(this->fields).mesh;
                          *ppMVar9 = pMVar8;
                          func_?(ppMVar9,pMVar8);
                          source = (this->fields).material;
                          this_02 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1(this_02,source,(MethodInfo *)0x0);
                          ppMVar10 = &(this->fields).trailMaterial;
                          *ppMVar10 = this_02;
                          func_?(ppMVar10,this_02);
                          if (*ppMVar10 != (Material *)0x0) {
                            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xffffffec,*ppMVar10,StringLiteral__TintColor,(MethodInfo *)0x0);
                            (this->fields).fadeOutRatio = pVVar11->w;
                            pRVar7 = (this->fields).mRenderer;
                            if (pRVar7 != (Renderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial(pRVar7,*ppMVar10,(MethodInfo *)0x0);
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
    uVar11._0_4_ = (MethodInfo *)pVVar9->x;
    uVar11._4_4_ = (Il2CppMethodPointer)pVVar9->y;
    pCVar12 = (Color__Array *)pVVar9->z;
    uStack_13 = uVar11;
    pCStack_14 = pCVar12;
    if (((this->fields).initialized == 0) && ((this->fields).Emit != 0)) {
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).saved;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 != (Transform *)0x0) && (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_10,pTVar8,0.0,0.0,-(this->fields).pointDistance,(MethodInfo *)0x0), pVVar16 != (Vector3__Array *)0x0)) {
        fVar17 = pVVar9->y;
        fVar18 = pVVar9->z;
        if (pVStack_15 < (Vector2__Array *)pVVar16->max_length) {
          pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
          pVVar16->vector[(int)pVStack_15].y = fVar17;
          pVVar16->vector[(int)pVStack_15].z = fVar18;
          pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
          pVVar16 = (this->fields).savedUp;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if ((pTVar8 == (Transform *)0x0) || (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0), pVVar16 == (Vector3__Array *)0x0)) goto code_?;
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
          pVVar16->vector[iVar19 + 1].x = (float)(Il2CppClass *)uStack_13;
          pVVar16->vector[iVar19 + 1].y = (float)uStack_13._4_4_;
          pVVar16->vector[iVar19 + 1].z = (float)pCStack_14;
          pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
          pVVar16 = (this->fields).savedUp;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if ((pTVar8 == (Transform *)0x0) || (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0), pVVar16 == (Vector3__Array *)0x0)) goto code_?;
          fVar17 = pVVar9->y;
          fVar18 = pVVar9->z;
          if (pVStack_15 < (Vector2__Array *)pVVar16->max_length) {
            pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
            pVVar16->vector[(int)pVStack_15].y = fVar17;
            pVVar16->vector[(int)pVStack_15].z = fVar18;
            piVar20 = &(this->fields).savedCnt;
            *piVar20 = *piVar20 + 1;
            pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            (this->fields).lastPointCreationTime = (float)pVStack_15;
            pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
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
    pMStack_21 = (MethodInfo *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar22 = &(this->fields).maxLifeTime;
    if (*pfVar22 <= (float)pVStack_15 - (float)pMStack_21 && (float)pVStack_15 - (float)pMStack_21 != *pfVar22) {
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
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 == (Transform *)0x0) || (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1(&VStack_10,pTVar8,0.0,0.0,(this->fields).pointDistance,(MethodInfo *)0x0), pVVar16 == (Vector3__Array *)0x0)) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
      pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pVStack_15].y = fVar17;
      pVVar16->vector[(int)pVStack_15].z = fVar18;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 == (Transform *)0x0) || (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0), pVVar16 == (Vector3__Array *)0x0)) goto code_?;
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
      in_stack_23 = (Il2CppClass *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      fVar18 = (this->fields).pointDistance;
      if (in_stack_23 == (Il2CppClass *)0x0) goto code_?;
      in_stack_24.m_CachedPtr = (Transform__Class *)0x0;
      in_stack_25 = (Il2CppClass *)(fVar18 + fVar18);
      in_stack_26 = (Il2CppClass *)0x0;
      in_stack_27._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
      in_stack_28 = (Il2CppClass *)&VStack_10;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint_1((Vector3 *)in_stack_28,(Transform *)in_stack_23,0.0,0.0,(float)in_stack_25,(MethodInfo *)0x0);
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      fVar17 = pVVar9->y;
      fVar18 = pVVar9->z;
      if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
      pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
      pVVar16->vector[(int)pVStack_15].y = fVar17;
      pVVar16->vector[(int)pVStack_15].z = fVar18;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      in_stack_29._._.m_CachedPtr = (Component__Fields)&VStack_10;
      in_stack_30 = (Il2CppClass *)&UNK_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)in_stack_29._._.m_CachedPtr,pTVar8,(MethodInfo *)0x0);
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
        pMVar31 = (this->fields).trailMaterial;
        if (pMVar31 != (Material *)0x0) {
          pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector((Vector4 *)&stack0xfffffe48,pMVar31,StringLiteral__TintColor,(MethodInfo *)0x0);
          uVar33 = pVVar32->x;
          uVar34 = pVVar32->y;
          uVar35 = pVVar32->z;
          value.z = (float)uVar35;
          value.y = (float)uVar34;
          value.x = (float)uVar33;
          fVar18 = pVVar32->w;
          pMStack_21 = (MethodInfo *)(this->fields).fadeOutRatio;
          pVStack_15 = (Vector2__Array *)(this->fields).lifeTimeRatio;
          pCStack_14 = (Color__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar18 = fVar18 - (float)pVStack_15 * (float)pMStack_21 * (float)pCStack_14;
          if (fVar18 <= 0.0) {
            if ((this->fields).printResults != 0) {
              pSVar36 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)piVar20,(MethodInfo *)0x0);
              pSVar36 = mscorlib.dll::System::String::String_Concat_3(StringLiteral_Trail_effect_ending_with_a_segme,pSVar36,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar36,(MethodInfo *)0x0);
            }
            pGVar37 = (this->fields).trail;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar37,(MethodInfo *)0x0);
            pGVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar37,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
          pMVar31 = (this->fields).trailMaterial;
          if (pMVar31 != (Material *)0x0) {
            value.w = fVar18;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(pMVar31,StringLiteral__TintColor,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
      }
      else {
code_?:
        if ((this->fields).displayCnt < (this->fields).pointCnt) {
          pMStack_21 = (MethodInfo *)(this->fields).elapsedInsertionTime;
          pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar18 = (this->fields).averageInsertionTime;
          (this->fields).elapsedInsertionTime = (float)pVStack_15 + (float)pMStack_21;
          if (fVar18 < (float)pVStack_15 + (float)pMStack_21) {
            iVar19 = (this->fields).displayCnt;
            do {
              fVar17 = (this->fields).elapsedInsertionTime - fVar18;
              iVar38 = iVar19 + 1;
              if ((this->fields).pointCnt <= iVar19) {
                iVar38 = iVar19;
              }
              (this->fields).elapsedInsertionTime = fVar17;
              iVar19 = iVar38;
            } while (fVar18 < fVar17);
            (this->fields).displayCnt = iVar38;
          }
        }
        if (((this->fields).displayCnt < 2) || ((this->fields).maxPointsDrawn == 1)) {
          pRVar39 = (this->fields).mRenderer;
          if (pRVar39 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar39,0,(MethodInfo *)0x0);
code_?:
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
        else {
          pRVar39 = (this->fields).mRenderer;
          if (pRVar39 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled(pRVar39,1,(MethodInfo *)0x0);
            iVar19 = (this->fields).displayCnt;
            iVar38 = (this->fields).maxPointsDrawn;
            (this->fields).lifeTimeRatio = 1.0 / (this->fields).lifetime;
            if ((iVar38 < iVar19) && (0 < iVar38)) {
              iVar19 = iVar38;
            }
            iStack_40 = iVar19;
            pVStack_41 = (Vector3__Array *)func_?();
            pVStack_15 = (Vector2__Array *)func_?();
            pIStack_42 = (Int32__Array *)func_?();
            pCStack_14 = (Color__Array *)func_?();
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
            if (this_00 != (Camera *)0x0) {
              pIVar43 = (Il2CppClass *)&UNK_?;
              pIVar44 = (Il2CppClass *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
              if (pIVar44 != (Il2CppClass *)0x0) {
                pIVar45 = (Il2CppRGCTXData *)0x0;
                __return_storage_ptr__._._.m_CachedPtr = (Component__Fields)&VStack_10;
                pIVar46 = (Il2CppClass *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)__return_storage_ptr__._._.m_CachedPtr,(Transform *)pIVar44,(MethodInfo *)0x0);
                for (iVar38 = 0; iVar38 < iStack_40; iVar38 = iVar38 + 1) {
                  pVVar16 = (this->fields).points;
                  if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                  uVar47 = ((this->fields).displayCnt - iStack_40) + iVar38;
                  if (pVVar16->max_length <= uVar47) goto code_?;
                  uVar11 = *(undefined8 *)((int)pVVar16 + uVar47 * 0xc + 0x10);
                  pMVar48 = *(MethodInfo **)((int)pVVar16 + uVar47 * 0xc + 0x18);
                  pCVar12 = (this->fields).colors;
                  pIStack_49 = (Il2CppClass *)((float)iVar38 * (1.0 / (float)(iVar19 + -1)));
                  uStack_13 = uVar11;
                  pMStack_50 = pMVar48;
                  if (pCVar12 == (Color__Array *)0x0) goto code_?;
                  if (pCVar12->max_length == 0) {
                    pIVar45 = (Il2CppRGCTXData *)0x0;
                    pIStack_51 = (Il2CppClass *)0x0;
                    in_stack_30 = (Il2CppClass *)0x0;
                    in_stack_29._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
                    pCVar52 = (Color *)&puStack_53;
                    pIVar43 = in_stack_26;
                    pIVar46 = in_stack_25;
                    __return_storage_ptr__._._.m_CachedPtr = (Component__Fields)(Component__Fields)in_stack_24.m_CachedPtr;
                    pIVar44 = in_stack_54;
                    t = in_stack_55;
code_?:
                    a.g = (float)pIStack_51;
                    a.r = (float)pIVar45;
                    a.b = (float)in_stack_30;
                    a.a = (float)in_stack_29._._.m_CachedPtr;
                    b.g = (float)pIVar46;
                    b.r = (float)pIVar43;
                    b.b = (float)__return_storage_ptr__._._.m_CachedPtr;
                    b.a = (float)pIVar44;
                    pCVar52 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp(pCVar52,a,b,(float)t,in_stack_56);
                    in_stack_25 = (Il2CppClass *)pCVar52->r;
                    in_stack_24.m_CachedPtr = (void *)pCVar52->g;
                    in_stack_54 = (Il2CppClass *)pCVar52->b;
                    in_stack_55 = (Il2CppClass *)pCVar52->a;
                    in_stack_28 = pIStack_51;
                    in_stack_23 = in_stack_30;
                    in_stack_27._._.m_CachedPtr = in_stack_29._._.m_CachedPtr;
                    in_stack_26 = pIVar43;
                    pIVar57 = pIVar46;
                    OVar58.m_CachedPtr = (void *)__return_storage_ptr__._._.m_CachedPtr;
                    pIVar59 = pIVar44;
                  }
                  else {
                    if (pCVar12->max_length == 1) {
                      func_?();
                      in_stack_56 = (MethodInfo *)0x0;
                      pIVar45 = (Il2CppRGCTXData *)0x0;
                      pIStack_51 = (Il2CppClass *)0x0;
                      in_stack_30 = (Il2CppClass *)0x0;
                      in_stack_29._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
                      pCVar52 = (Color *)&stack0xfffffd68;
                      pIVar43 = in_stack_60;
                      pIVar46 = in_stack_61;
                      __return_storage_ptr__._._.m_CachedPtr = (Component__Fields)(Component__Fields)in_stack_62.m_CachedPtr;
                      pIVar44 = in_stack_63;
                      t = pIStack_49;
                      goto code_?;
                    }
                    if (pCVar12->max_length == 2) {
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        in_stack_29._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
                        in_stack_30 = (Il2CppClass *)&stack0xfffffdc8;
                        func_?();
                        in_stack_56 = (MethodInfo *)0x0;
                        pCVar52 = (Color *)&stack0xfffffd78;
                        pIVar43 = in_stack_28;
                        pIVar46 = in_stack_23;
                        __return_storage_ptr__._._.m_CachedPtr = in_stack_27._._.m_CachedPtr;
                        pIVar44 = in_stack_26;
                        t = pIStack_49;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    pIStack_64 = (Il2CppClass *)((float)(int)(pCVar12->max_length - 1) - (float)(int)(pCVar12->max_length - 1) * (float)pIStack_49);
                    if ((float)pIStack_64 != (float)(int)(pCVar12->max_length - 1)) {
                      uStack_65 = (double)(float)pIStack_64;
                      fVar66 = (float10)func_?();
                      pMStack_21 = (MethodInfo *)(int)fVar66;
                      pIStack_64 = (Il2CppClass *)((float)pIStack_64 - (float)(int)pMStack_21);
                      func_?();
                      if ((this->fields).colors != (Color__Array *)0x0) {
                        func_?();
                        in_stack_56 = (MethodInfo *)0x0;
                        pIVar45 = (Il2CppRGCTXData *)0x0;
                        pCVar52 = (Color *)&stack0xfffffd88;
                        t = pIStack_64;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    func_?();
                    pIVar57 = in_stack_25;
                    OVar58.m_CachedPtr = in_stack_24.m_CachedPtr;
                    pIVar59 = in_stack_54;
                    t = in_stack_55;
                  }
                  uStack_65 = (double)CONCAT44(in_stack_55,in_stack_54);
                  pIStack_67 = in_stack_25;
                  pIStack_68 = in_stack_24.m_CachedPtr;
                  if (pCStack_14 == (Color__Array *)0x0) goto code_?;
                  func_?();
                  in_stack_30 = (Il2CppClass *)(iVar38 * 2 + 1);
                  in_stack_29._._.m_CachedPtr = (Component__Fields)(Component__Fields)pIStack_67;
                  pIVar43 = pIStack_68;
                  func_?();
                  pSVar69 = (this->fields).widths;
                  if (pSVar69 == (Single__Array *)0x0) goto code_?;
                  if (pSVar69->max_length == 0) {
                    pIStack_64 = (Il2CppClass *)0x3f800000;
                  }
                  else if (pSVar69->max_length == 1) {
                    if (pSVar69->max_length == 0) goto code_?;
                    pIStack_64 = (Il2CppClass *)pSVar69->vector[0];
                  }
                  else {
                    if (pSVar69->max_length == 2) {
                      if (pSVar69->max_length < 2) goto code_?;
                      fVar18 = pSVar69->vector[1];
                      if (pSVar69->max_length == 0) goto code_?;
                      fVar17 = pSVar69->vector[0];
                      pIVar44 = pIStack_49;
                    }
                    else {
                      pIStack_64 = (Il2CppClass *)((float)(int)(pSVar69->max_length - 1) - (float)(int)(pSVar69->max_length - 1) * (float)pIStack_49);
                      if ((float)pIStack_64 == (float)(int)(pSVar69->max_length - 1)) {
                        if (pSVar69->max_length - 1 < pSVar69->max_length) {
                          pIStack_64 = (Il2CppClass *)pSVar69->vector[pSVar69->max_length - 1];
                          goto code_?;
                        }
                        goto code_?;
                      }
                      uStack_65 = (double)(float)pIStack_64;
                      fVar66 = (float10)func_?();
                      pSVar69 = (this->fields).widths;
                      pMStack_21 = (MethodInfo *)(float)fVar66;
                      uVar47 = (uint)fVar66;
                      if (pSVar69->max_length <= uVar47) goto code_?;
                      fVar18 = pSVar69->vector[uVar47];
                      if (pSVar69->max_length <= uVar47 + 1) goto code_?;
                      fVar17 = pSVar69->vector[uVar47 + 1];
                      pIVar44 = (Il2CppClass *)((float)pIStack_64 - (float)(int)uVar47);
                    }
                    if ((float)pIVar44 < 0.0) {
                      pIVar44 = (Il2CppClass *)0x0;
                    }
                    else if (1.0 < (float)pIVar44) {
                      pIStack_64 = (Il2CppClass *)((fVar17 - fVar18) * 1.0 + fVar18);
                      goto code_?;
                    }
                    pIStack_64 = (Il2CppClass *)((fVar17 - fVar18) * (float)pIVar44 + fVar18);
                  }
code_?:
                  pMStack_70 = (MethodInfo *)uVar11;
                  pMStack_71 = SUB84(uVar11,4);
                  if ((this->fields).faceCamera == 0) {
                    if ((this->fields).twist == 0) {
                      if ((this->fields).pointsUp == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      pMStack_50 = pMStack_71;
                      pIStack_72 = (Il2CppClass *)pMStack_70;
                      CStack_73._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
                      uStack_13._0_4_ = (Il2CppClass *)0x0;
                      uStack_13._4_4_ = (Il2CppClass *)0x0;
                      pMStack_21 = pMVar48;
                      if ((pVStack_41 == (Vector3__Array *)0x0) || (func_?(), (this->fields).pointsUp == (Vector3__Array *)0x0)) goto code_?;
                      func_?();
                      fStack_74 = (float)pIStack_64 * fStack_75;
                      fStack_76 = (float)pIStack_64 * fStack_77;
                      pMVar48 = pMStack_50;
                    }
                    else {
                      pMStack_21 = (MethodInfo *)(this->fields).time;
                      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
                      uStack_65 = (double)CONCAT44(fVar18,(undefined4)uStack_65);
                      (this->fields).time = (float)pMStack_21 + fVar18;
                      pVVar16 = (this->fields).points;
                      if (iVar38 == iStack_40 + -1) {
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        _pMStack_d4 = uStack_78;
                        pMStack_79 = pMStack_80;
                        pMVar81 = pMStack_50;
                      }
                      else {
                        pMStack_79 = pMStack_50;
                        pMStack_82 = (MethodInfo *)(Il2CppClass *)uStack_13;
                        pIStack_83 = (Il2CppMethodPointer)uStack_13._4_4_;
                        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                        func_?();
                        pMVar81 = pMStack_84;
                        uStack_13 = uStack_85;
                      }
                      pIStack_86 = SUB84(uStack_13,4);
                      fVar18 = (float)pMVar81 - (float)pMStack_79;
                      pMStack_87 = (MethodInfo *)uStack_13;
                      pIStack_72 = (Il2CppClass *)((float)pMStack_87 - (float)pMStack_82);
                      CStack_73._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
                      uStack_13 = 0;
                      dVar88 = (double)(this->fields).time;
                      uStack_65._4_4_ = (float)pIStack_86 - (float)pIStack_83;
                      func_?();
                      axis.y = uStack_65._4_4_;
                      axis.x = (float)pIStack_72;
                      axis.z = fVar18;
                      pQVar89 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xfffffd48,(float)dVar88,axis,(MethodInfo *)0x0);
                      pIStack_72 = (Il2CppClass *)pQVar89->x;
                      CStack_73._.m_CachedPtr = (Object_1__Fields)pQVar89->y;
                      uStack_13._0_4_ = (Il2CppClass *)pQVar89->z;
                      uStack_13._4_4_ = (Il2CppClass *)pQVar89->w;
                      pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xfffffdb8,(MethodInfo *)0x0);
                      OVar58.m_CachedPtr = (void *)pVVar9->x;
                      pIVar59 = (Il2CppClass *)pVVar9->y;
                      t = (Il2CppClass *)pVVar9->z;
                      in_stack_56 = (MethodInfo *)0x0;
                      in_stack_28 = (Il2CppClass *)&stack0xfffffda8;
                      rotation.y = (float)CStack_73._.m_CachedPtr;
                      rotation.x = (float)pIStack_72;
                      rotation.z = (float)(Il2CppClass *)uStack_13;
                      rotation.w = (float)uStack_13._4_4_;
                      in_stack_23 = pIStack_72;
                      in_stack_27._._.m_CachedPtr = (Component__Fields)(Component__Fields)CStack_73._.m_CachedPtr;
                      in_stack_26 = (Il2CppClass *)uStack_13;
                      pIVar57 = uStack_13._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)in_stack_28,rotation,*pVVar9,(MethodInfo *)0x0);
                      pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xfffffd98,(MethodInfo *)0x0);
                      uVar90 = pVVar9->x;
                      uVar91 = pVVar9->y;
                      uStack_65 = (double)CONCAT44(pMVar48,(undefined4)uStack_65);
                      pMStack_21 = pMStack_71;
                      pIStack_72 = (Il2CppClass *)pMStack_70;
                      CStack_73._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
                      uStack_13._0_4_ = (Il2CppClass *)0x0;
                      uStack_13._4_4_ = (Il2CppClass *)0x0;
                      if (pVStack_41 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                      fStack_74 = (float)pIStack_64 * (float)uVar91;
                      fStack_76 = (float)pIStack_64 * (float)uVar90;
                      pMVar48 = pMStack_21;
                    }
                  }
                  else {
                    pVVar16 = (this->fields).points;
                    if (iVar38 == iStack_40 + -1) {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    else {
                      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
                      func_?();
                    }
                    pMStack_21 = pMStack_71;
                    pIStack_72 = (Il2CppClass *)pMStack_70;
                    CStack_73._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
                    uStack_13._0_4_ = (Il2CppClass *)0x0;
                    uStack_13._4_4_ = (Il2CppClass *)0x0;
                    pMStack_50 = pMVar48;
                    puVar92 = (undefined8 *)func_?();
                    fVar18 = *(float *)(puVar92 + 1);
                    fStack_74 = (float)((ulonglong)*puVar92 >> 0x20);
                    fStack_76 = (float)*puVar92;
                    if (pVStack_41 == (Vector3__Array *)0x0) goto code_?;
                    func_?();
                    fStack_74 = fStack_74 * (float)pIStack_64;
                    fStack_76 = fStack_76 * (float)pIStack_64;
                    VStack_10.z = (float)pMStack_50 - fVar18 * (float)pIStack_64 * 0.5;
                    pMVar48 = pMStack_21;
                  }
                  pIVar45 = (Il2CppRGCTXData *)((float)pMVar48 - fStack_74 * 0.5);
                  pIVar44 = (Il2CppClass *)((float)pIStack_72 - fStack_76 * 0.5);
                  __return_storage_ptr__._._.m_CachedPtr = (Component__Fields)(iVar38 * 2 + 1);
                  pIVar46 = (Il2CppClass *)&UNK_?;
                  func_?();
                  if (pVStack_15 == (Vector2__Array *)0x0) goto code_?;
                  uVar47 = iVar38 * 2;
                  if (pVStack_15->max_length <= uVar47) goto code_?;
                  pVStack_15->vector[iVar38 * 2].x = (float)pIStack_49;
                  pVStack_15->vector[iVar38 * 2].y = 0.0;
                  if (pVStack_15->max_length <= iVar38 * 2 + 1U) goto code_?;
                  pVStack_15->vector[iVar38 * 2 + 1].x = (float)pIStack_49;
                  pVStack_15->vector[iVar38 * 2 + 1].y = 1.0;
                  if (0 < iVar38) {
                    iVar93 = iVar38 * 6;
                    if (pIStack_42 == (Int32__Array *)0x0) goto code_?;
                    if (pIStack_42->max_length <= iVar93 - 6U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -6] = uVar47 - 2;
                    if (pIStack_42->max_length <= iVar93 - 5U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -5] = uVar47 - 1;
                    if (pIStack_42->max_length <= iVar93 - 4U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -4] = uVar47;
                    if (pIStack_42->max_length <= iVar93 - 3U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -3] = uVar47;
                    if (pIStack_42->max_length <= iVar93 - 2U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -2] = uVar47 - 1;
                    if (pIStack_42->max_length <= iVar93 - 1U) goto code_?;
                    pIStack_42->vector[iVar38 * 6 + -1] = uVar47 + 1;
                  }
                  in_stack_25 = pIVar57;
                  in_stack_24.m_CachedPtr = OVar58.m_CachedPtr;
                  in_stack_54 = pIVar59;
                  in_stack_55 = t;
                }
                pGVar37 = (this->fields).trail;
                if (pGVar37 != (GameObject *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar37,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar8,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
                    pGVar37 = (this->fields).trail;
                    if (pGVar37 != (GameObject *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar37,(MethodInfo *)0x0);
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
                            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar94,pVStack_41,(MethodInfo *)0x0);
                            pMVar94 = (this->fields).mesh;
                            if (pMVar94 != (Mesh *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors(pMVar94,pCStack_14,(MethodInfo *)0x0);
                              pMVar94 = (this->fields).mesh;
                              if (pMVar94 != (Mesh *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar94,pVStack_15,(MethodInfo *)0x0);
                                pMVar94 = (this->fields).mesh;
                                if (pMVar94 != (Mesh *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles(pMVar94,pIStack_42,(MethodInfo *)0x0);
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
    ppVVar95 = &(this->fields).saved;
    iVar19 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar16->max_length <= iVar19 - 1U) goto code_?;
    uVar96 = pVVar16->vector[iVar19 + -1].x;
    uVar97 = pVVar16->vector[iVar19 + -1].y;
    fVar18 = pVVar16->vector[iVar19 + -1].z - (float)pCVar12;
    fVar18 = fVar18 * fVar18 + ((float)uVar97 - (float)uVar11._4_4_) * ((float)uVar97 - (float)uVar11._4_4_) + ((float)uVar96 - (float)(MethodInfo *)uVar11) * ((float)uVar96 - (float)(MethodInfo *)uVar11);
    pfVar22 = &(this->fields).pointSqrDistance;
    if (fVar18 < *pfVar22 || fVar18 == *pfVar22) {
code_?:
      if ((this->fields).Emit == 0) goto code_?;
      goto code_?;
    }
    if ((int)(pVVar16->max_length - 1) < iVar19) {
      pVVar16 = (Vector3__Array *)func_?();
      *ppVVar95 = pVVar16;
      func_?();
      if (*ppVVar95 != (Vector3__Array *)0x0) {
        pVVar16 = (Vector3__Array *)func_?();
        (this->fields).savedUp = pVVar16;
        func_?();
        if (*ppVVar95 != (Vector3__Array *)0x0) {
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
    pVVar16 = *ppVVar95;
    uVar47 = (this->fields).savedCnt;
    if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
    if (uVar47 < pVVar16->max_length) {
      pVVar16->vector[uVar47].x = (float)(Il2CppClass *)uStack_13;
      pVVar16->vector[uVar47].y = (float)uStack_13._4_4_;
      pVVar16->vector[uVar47].z = (float)pCStack_14;
      pVStack_15 = (Vector2__Array *)(this->fields).savedCnt;
      pVVar16 = (this->fields).savedUp;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if ((pTVar8 != (Transform *)0x0) && (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_10,pTVar8,(MethodInfo *)0x0), pVVar16 != (Vector3__Array *)0x0)) {
        fVar17 = pVVar9->y;
        fVar18 = pVVar9->z;
        if ((Vector2__Array *)pVVar16->max_length <= pVStack_15) goto code_?;
        pVVar16->vector[(int)pVStack_15].x = pVVar9->x;
        pVVar16->vector[(int)pVStack_15].y = fVar17;
        pVVar16->vector[(int)pVStack_15].z = fVar18;
        piVar20 = &(this->fields).savedCnt;
        *piVar20 = *piVar20 + 1;
        if ((this->fields).averageCreationTime == 0.0) {
          pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          fVar18 = (float)pVStack_15 - (this->fields).lastPointCreationTime;
        }
        else {
          pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          fVar18 = ((this->fields).averageCreationTime + ((float)pVStack_15 - (this->fields).lastPointCreationTime)) * 0.5;
        }
        (this->fields).averageCreationTime = fVar18;
        (this->fields).averageInsertionTime = (this->fields).tRatio * fVar18;
        pVStack_15 = (Vector2__Array *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
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
  pcVar98 = (code *)swi(3);
  (*pcVar98)();
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
        fVar8 = pVVar1->vector[index + 1].z;
        uVar9 = pVVar1->vector[index + -1].x;
        uVar10 = pVVar1->vector[index + -1].y;
        fVar11 = pVVar1->vector[index + -1].z;
        uVar12 = pVVar1->vector[index + 2].x;
        uVar13 = pVVar1->vector[index + 2].y;
        fVar14 = pVVar1->vector[index + 2].z;
        uVar15 = pVVar1->vector[index].x;
        uVar16 = pVVar1->vector[index].y;
        fVar17 = pVVar1->vector[index].z;
        iVar18 = (this->fields).segmentsPerPoint;
        iVar19 = iVar18 * index;
        if (iVar19 < iVar18 + iVar19) {
          iStack_20 = 0;
          iVar18 = iVar19;
          do {
            pVVar1 = (this->fields).points;
            uVar21 = iVar18 - (this->fields).segmentsPerPoint;
            fVar22 = (float)iStack_20 * (this->fields).tRatio;
            fVar23 = fVar22 * fVar22;
            fVar24 = fVar23 * fVar22;
            fVar25 = ((fVar24 + fVar24) - fVar23 * 3.0) + 1.0;
            fVar26 = fVar23 * 3.0 - (fVar24 + fVar24);
            fVar27 = (fVar24 - (fVar23 + fVar23)) + fVar22;
            fVar24 = fVar24 - fVar23;
            uStack_28 = CONCAT44(((float)uVar13 - (float)uVar16) * 0.5 * fVar24 + ((float)uVar7 - (float)uVar10) * 0.5 * fVar27 + (float)uVar7 * fVar26 + (float)uVar4 * fVar25,((float)uVar12 - (float)uVar15) * 0.5 * fVar24 + ((float)uVar6 - (float)uVar9) * 0.5 * fVar27 + (float)uVar6 * fVar26 + (float)uVar3 * fVar25);
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if (pVVar1->max_length <= uVar21) goto code_?;
            *(undefined8 *)((int)pVVar1 + uVar21 * 0xc + 0x10) = uStack_28;
            *(float *)((int)pVVar1 + uVar21 * 0xc + 0x18) = (fVar14 - fVar17) * 0.5 * fVar24 + (fVar8 - fVar11) * 0.5 * fVar27 + fVar5 * fVar26 + fVar2 * fVar25;
            pVVar1 = (this->fields).savedUp;
            pVVar29 = (this->fields).pointsUp;
            if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
            if ((pVVar1->max_length <= (uint)index) || (pVVar1->max_length <= index + 1U)) goto code_?;
            uVar30 = pVVar1->vector[index + 1].x;
            uVar31 = pVVar1->vector[index + 1].y;
            fVar23 = pVVar1->vector[index + 1].z;
            uVar32 = pVVar1->vector[index].x;
            uVar33 = pVVar1->vector[index].y;
            fVar25 = pVVar1->vector[index].z;
            if (fVar22 < 0.0) {
              fVar22 = 0.0;
            }
            else if (1.0 < fVar22) {
              fVar22 = 1.0;
            }
            if (pVVar29 == (Vector3__Array *)0x0) goto code_?;
            if (pVVar29->max_length <= uVar21) goto code_?;
            *(ulonglong *)((int)pVVar29 + uVar21 * 0xc + 0x10) = CONCAT44(((float)uVar31 - (float)uVar33) * fVar22 + (float)uVar33,((float)uVar30 - (float)uVar32) * fVar22 + (float)uVar32);
            iVar18 = iVar18 + 1;
            *(float *)((int)pVVar29 + uVar21 * 0xc + 0x18) = (fVar23 - fVar25) * fVar22 + fVar25;
            iStack_20 = iStack_20 + 1;
          } while (iVar18 < (this->fields).segmentsPerPoint + iVar19);
        }
        (this->fields).pointCnt = iVar19;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
        *(String **)pSStack_2 = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_Index__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pIVar5 = (Il2CppImage *)mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
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
        *(String **)pSStack_2 = pSVar3;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        if (values->max_length < 2) goto code_?;
        pSStack_2 = (String__Array__Class *)(values->vector + 1);
        (pSStack_2->_0).image = (Il2CppImage *)StringLiteral_Index__;
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        func_?();
        pIVar5 = (Il2CppImage *)mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}

