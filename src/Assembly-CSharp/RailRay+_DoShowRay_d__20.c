
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_MoveNext(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._endColor_5__2.r = 0.1;
    (this->fields)._endColor_5__2.g = 0.1;
    (this->fields)._endColor_5__2.b = 0.1;
    (this->fields)._endColor_5__2.a = 0.0;
    if ((this_00 == (RailRay *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar3,(this_00->fields).target,(MethodInfo *)0x0);
    pLVar8 = (this_00->fields).rayRenderer;
    if (pLVar8 == (LineRenderer *)0x0) goto code_?;
    uVar9 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount(pLVar8,2,(MethodInfo *)0x0);
    pLVar8 = (this_00->fields).rayRenderer;
    if (pLVar8 == (LineRenderer *)0x0) goto code_?;
    position.y = (float)uVar6;
    position.x = (float)uVar9;
    position.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition(pLVar8,1,position,(MethodInfo *)0x0);
    this_02 = (RailRay_DoShowRay_d_20 *)(this_00->fields).rayRenderer;
    if (this_02 == (RailRay_DoShowRay_d_20 *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    this = this_02;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition((LineRenderer *)this_02,0,(pRVar1->fields).hit,(MethodInfo *)0x0);
    (pRVar1->fields)._time_5__3 = 1.2;
    (pRVar1->fields)._t_5__4 = 0.0;
code_?:
    fVar7 = (pRVar1->fields)._time_5__3;
    pfVar10 = &(pRVar1->fields)._t_5__4;
    if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
      if ((this_00 != (RailRay *)0x0) && (pLVar8 = (this_00->fields).rayRenderer, pLVar8 != (LineRenderer *)0x0)) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material((Renderer *)pLVar8,(MethodInfo *)0x0);
        fVar11 = (pRVar1->fields)._t_5__4 / (pRVar1->fields)._time_5__3;
        fVar7 = (this_00->fields).startColor.r;
        fVar12 = (this_00->fields).startColor.g;
        fVar13 = (this_00->fields).startColor.b;
        fVar14 = (this_00->fields).startColor.a;
        puStack_5 = (undefined *)(pRVar1->fields)._endColor_5__2.g;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
        if (this_03 != (Material *)0x0) {
          value.y = ((float)puStack_5 - fVar12) * fVar11 + fVar12;
          value.x = ((pRVar1->fields)._endColor_5__2.r - fVar7) * fVar11 + fVar7;
          value.z = ((pRVar1->fields)._endColor_5__2.b - fVar13) * fVar11 + fVar13;
          value.w = ((pRVar1->fields)._endColor_5__2.a - fVar14) * fVar11 + fVar14;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(this_03,StringLiteral__TintColor,value,(MethodInfo *)0x0);
          this = (RailRay_DoShowRay_d_20 *)(pRVar1->fields)._t_5__4;
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          (pRVar1->fields)._t_5__4 = fVar7 + (float)this;
          pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
          ppOVar16 = &(pRVar1->fields).__2__current;
          *ppOVar16 = pOVar15;
          func_?(ppOVar16,pOVar15);
          (pRVar1->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((this_00 != (RailRay *)0x0) && (this_01 = (this_00->fields).particles, this_01 != (ParticleSystem *)0x0)) {
    bVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_isPlaying(this_01,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      this = (RailRay_DoShowRay_d_20 *)0x0;
      pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
      ppOVar16 = &(pRVar1->fields).__2__current;
      *ppOVar16 = pOVar15;
      func_?(ppOVar16,pOVar15);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar18 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar18 != (PrefabPool *)0x0) && (pEVar19 = (pPVar18->fields).enumPoolManager, pEVar19 != (EnumPoolManager *)0x0)) && (pPVar20 = (pEVar19->fields).lookupTable, pPVar20 != (Pool__Array *)0x0)) {
      uVar21 = (this_00->fields).railEnumType;
      if (uVar21 < pPVar20->max_length) {
        pRVar1 = (RailRay_DoShowRay_d_20 *)pPVar20->vector[uVar21];
        this = pRVar1;
        if (pRVar1 != (RailRay_DoShowRay_d_20 *)0x0) {
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          pMVar22 = (MonoBehaviour__Array *)(pRVar1->fields).hit.z;
          uVar21 = 0;
          if (pMVar22 != (MonoBehaviour__Array *)0x0) {
            iVar2 = 0x10;
            do {
              if ((int)pMVar22->max_length <= (int)uVar21) {
                pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar23,(MethodInfo *)0x0);
                return 0;
              }
              if (pMVar22 == (MonoBehaviour__Array *)0x0) break;
              if (pMVar22->max_length <= uVar21) goto code_?;
              x = *(Object_1 **)((int)pMVar22->vector + iVar2 + -0x10);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality(x,(Object_1 *)this_00,(MethodInfo *)0x0);
              if (bVar17 != 0) {
                pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                if (pGVar23 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar23,0,(MethodInfo *)0x0);
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  pRVar1 = this;
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent(pTVar3,(Transform *)(this->fields).hit.x,(MethodInfo *)0x0);
                    fVar7 = (pRVar1->fields).hit.y;
                    if (fVar7 != 0.0) {
                      func_?(fVar7,uVar21,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                      return 0;
                    }
                  }
                }
                break;
              }
              uVar21 = uVar21 + 1;
              iVar2 = iVar2 + 4;
              pMVar22 = (MonoBehaviour__Array *)(this->fields).hit.z;
            } while (pMVar22 != (MonoBehaviour__Array *)0x0);
          }
        }
      }
      else {
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  bVar17 = (*pcVar24)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_System_Collections_IEnumerator_Reset(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__RailRay___DoShowRay_d__20__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

