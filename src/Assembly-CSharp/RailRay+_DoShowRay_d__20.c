
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_MoveNext(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  obj = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._endColor_5__2.r = 0.1;
    (this->fields)._endColor_5__2.g = 0.1;
    (this->fields)._endColor_5__2.b = 0.1;
    (this->fields)._endColor_5__2.a = 0.0;
    if ((obj == (RailRay *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)obj,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)obj,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    uStack_8._0_4_ = (obj->fields).target.x;
    uStack_8._4_4_ = (obj->fields).target.y;
    fStack_9 = (obj->fields).target.z;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_8);
    pLVar10 = (obj->fields).rayRenderer;
    if (pLVar10 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount(pLVar10,2,(MethodInfo *)0x0);
    pLVar10 = (obj->fields).rayRenderer;
    if (pLVar10 == (LineRenderer *)0x0) goto code_?;
    uStack_11 = 0;
    uStack_12 = 0;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar10->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar10,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,1,&uStack_11);
    pLVar10 = (obj->fields).rayRenderer;
    if (pLVar10 == (LineRenderer *)0x0) goto code_?;
    aCStack_13[0].r = (this->fields).hit.x;
    aCStack_13[0].g = (this->fields).hit.y;
    aCStack_13[0].b = (this->fields).hit.z;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar10->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar10,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    (this->fields)._time_5__3 = 1.2;
    (this->fields)._t_5__4 = 0.0;
code_?:
    fVar14 = (this->fields)._time_5__3;
    pfVar15 = &(this->fields)._t_5__4;
    if (*pfVar15 <= fVar14 && fVar14 != *pfVar15) {
      if ((obj != (RailRay *)0x0) && (pLVar10 = (obj->fields).rayRenderer, pLVar10 != (LineRenderer *)0x0)) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material((Renderer *)pLVar10,(MethodInfo *)0x0);
        fVar16 = (this->fields)._t_5__4 / (this->fields)._time_5__3;
        fVar14 = (obj->fields).startColor.r;
        fVar17 = (obj->fields).startColor.g;
        fVar18 = (obj->fields).startColor.b;
        fVar19 = (obj->fields).startColor.a;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (1.0 < fVar16) {
          fVar16 = 1.0;
        }
        aCStack_13[0].g = ((this->fields)._endColor_5__2.g - fVar17) * fVar16 + fVar17;
        aCStack_13[0].r = ((this->fields)._endColor_5__2.r - fVar14) * fVar16 + fVar14;
        aCStack_13[0].a = ((this->fields)._endColor_5__2.a - fVar19) * fVar16 + fVar19;
        aCStack_13[0].b = ((this->fields)._endColor_5__2.b - fVar18) * fVar16 + fVar18;
        if (this_01 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor(this_01,StringLiteral__TintColor,aCStack_13,(MethodInfo *)0x0);
          fVar14 = (this->fields)._t_5__4;
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            bVar6 = (*pcVar5)();
            return bVar6;
          }
          pcRam_? = pcVar5;
          fVar17 = (float)(*pcRam_?)();
          uStackX_8 = 0;
          (this->fields)._t_5__4 = fVar17 + fVar14;
          lVar20 = lRam_?;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) || ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar2 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar20 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar21 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
                uVar22 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
                do {
                  uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
                  puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
                  LOCK();
                  bVar25 = uVar23 == *puVar24;
                  if (bVar25) {
                    *puVar24 = uVar23 | 1L << (uVar21 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar25);
              }
            }
          }
          else {
            pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
          }
          bVar25 = iRam_? != 0;
          (this->fields).__2__current = pOVar2;
          if (bVar25) {
            uVar21 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar22 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
            do {
              uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
              puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
              LOCK();
              bVar25 = uVar23 == *puVar24;
              if (bVar25) {
                *puVar24 = uVar23 | 1L << (uVar21 & 0x3f);
              }
              UNLOCK();
            } while (!bVar25);
          }
          (this->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((obj != (RailRay *)0x0) && (this_00 = (obj->fields).particles, this_00 != (ParticleSystem *)0x0)) {
    bVar6 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
    lVar20 = lRam_?;
    if (bVar6 != 0) {
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) || ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar20 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar21 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            uVar22 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
            do {
              uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
              puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
              LOCK();
              bVar25 = uVar23 == *puVar24;
              if (bVar25) {
                *puVar24 = uVar23 | 1L << (uVar21 & 0x3f);
              }
              UNLOCK();
            } while (!bVar25);
          }
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar25 = iRam_? != 0;
      (this->fields).__2__current = pOVar2;
      if (bVar25) {
        uVar21 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar22 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
        do {
          uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
          puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
          LOCK();
          bVar25 = uVar23 == *puVar24;
          if (bVar25) {
            *puVar24 = uVar23 | 1L << (uVar21 & 0x3f);
          }
          UNLOCK();
        } while (!bVar25);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar26 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar26 != (PrefabPool *)0x0) && (pEVar27 = (pPVar26->fields).enumPoolManager, pEVar27 != (EnumPoolManager *)0x0)) && (pPVar28 = (pEVar27->fields).lookupTable, pPVar28 != (Pool__Array *)0x0)) {
      uVar21 = (obj->fields).railEnumType;
      if ((uint)pPVar28->max_length <= uVar21) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      if (pPVar28->vector[(int)uVar21] != (Pool *)0x0) {
        Pool::Pool_ReturnObject(pPVar28->vector[(int)uVar21],(MonoBehaviour *)obj,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_System_Collections_IEnumerator_Reset(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__RailRay___DoShowRay_d__20__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

