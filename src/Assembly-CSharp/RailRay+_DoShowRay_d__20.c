
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_MoveNext
               (RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  iVar3 = (this->fields).__1__state;
  pOVar4 = (Object *)0x0;
  obj = (this->fields).__4__this;
  if (iVar3 == 0) {
    (this->fields).__1__state = -1;
    uVar5 = _UNK_?;
    _UNK_? = (undefined4)uVar2;
    _UNK_? = SUB84(uVar2,4);
    uVar6 = _UNK_?;
    (this->fields)._endColor_5__2.r = (float)_UNK_?;
    _UNK_? = uVar5;
    uVar2 = _UNK_?;
    (this->fields)._endColor_5__2.g = (float)uVar6;
    _UNK_? = (undefined4)uVar1;
    _UNK_? = SUB84(uVar1,4);
    uVar6 = _UNK_?;
    (this->fields)._endColor_5__2.b = (float)_UNK_?;
    _UNK_? = uVar2;
    (this->fields)._endColor_5__2.a = (float)uVar6;
    if ((obj == (RailRay *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)obj,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8);
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)obj,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    uStack_11._0_4_ = (obj->fields).target.x;
    uStack_11._4_4_ = (obj->fields).target.y;
    fStack_12 = (obj->fields).target.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_11);
    pLVar13 = (obj->fields).rayRenderer;
    if (pLVar13 == (LineRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar13,2,(MethodInfo *)0x0);
    pLVar13 = (obj->fields).rayRenderer;
    if (pLVar13 == (LineRenderer *)0x0) goto code_?;
    uStack_14 = 0;
    uStack_15 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pLVar13->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar13,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,1,&uStack_14);
    pLVar13 = (obj->fields).rayRenderer;
    if (pLVar13 == (LineRenderer *)0x0) goto code_?;
    aCStack_16[0].r = (this->fields).hit.x;
    aCStack_16[0].g = (this->fields).hit.y;
    aCStack_16[0].b = (this->fields).hit.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pLVar13->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar13,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8);
    (this->fields)._time_5__3 = 1.2;
    (this->fields)._t_5__4 = 0.0;
code_?:
    fVar17 = (this->fields)._time_5__3;
    pfVar18 = &(this->fields)._t_5__4;
    if (*pfVar18 <= fVar17 && fVar17 != *pfVar18) {
      if ((obj != (RailRay *)0x0) &&
         (pLVar13 = (obj->fields).rayRenderer, pLVar13 != (LineRenderer *)0x0)) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar13,(MethodInfo *)0x0);
        fVar19 = (this->fields)._t_5__4 / (this->fields)._time_5__3;
        fVar17 = (obj->fields).startColor.r;
        fVar20 = (obj->fields).startColor.g;
        fVar21 = (obj->fields).startColor.b;
        fVar22 = (obj->fields).startColor.a;
        if (fVar19 < 0.0) {
          fVar19 = 0.0;
        }
        else if (_UNK_? < fVar19) {
          fVar19 = _UNK_?;
        }
        aCStack_16[0].g = ((this->fields)._endColor_5__2.g - fVar20) * fVar19 + fVar20;
        aCStack_16[0].r = ((this->fields)._endColor_5__2.r - fVar17) * fVar19 + fVar17;
        aCStack_16[0].a = ((this->fields)._endColor_5__2.a - fVar22) * fVar19 + fVar22;
        aCStack_16[0].b = ((this->fields)._endColor_5__2.b - fVar21) * fVar19 + fVar21;
        if (this_01 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (this_01,StringLiteral__TintColor,aCStack_16,(MethodInfo *)0x0);
          fVar17 = (this->fields)._t_5__4;
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          pcRam_? = pcVar9;
          fVar20 = (float)(*pcRam_?)();
          uStackX_8 = 0;
          (this->fields)._t_5__4 = fVar20 + fVar17;
          lVar23 = lRam_?;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar4 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar23 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar24 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
                uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                do {
                  uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                  puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                  LOCK();
                  bVar28 = uVar26 == *puVar27;
                  if (bVar28) {
                    *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar28);
              }
            }
          }
          else {
            pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
          }
          bVar28 = iRam_? != 0;
          (this->fields).__2__current = pOVar4;
          if (bVar28) {
            uVar24 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
            do {
              uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
              puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
              LOCK();
              bVar28 = uVar26 == *puVar27;
              if (bVar28) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar28);
          }
          (this->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar3 == 1) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
    if (iVar3 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((obj != (RailRay *)0x0) &&
     (this_00 = (obj->fields).particles, this_00 != (ParticleSystem *)0x0)) {
    bVar10 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
    lVar23 = lRam_?;
    if (bVar10 != 0) {
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar4 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar23 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar24 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
            uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
            do {
              uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
              puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
              LOCK();
              bVar28 = uVar26 == *puVar27;
              if (bVar28) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar28);
          }
        }
      }
      else {
        pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar28 = iRam_? != 0;
      (this->fields).__2__current = pOVar4;
      if (bVar28) {
        uVar24 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
        do {
          uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
          puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
          LOCK();
          bVar28 = uVar26 == *puVar27;
          if (bVar28) {
            *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
          }
          UNLOCK();
        } while (!bVar28);
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
    pPVar29 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar29 != (PrefabPool *)0x0) &&
        (pEVar30 = (pPVar29->fields).enumPoolManager, pEVar30 != (EnumPoolManager *)0x0)) &&
       (pPVar31 = (pEVar30->fields).lookupTable, pPVar31 != (Pool__Array *)0x0)) {
      uVar24 = (obj->fields).railEnumType;
      if ((uint)pPVar31->max_length <= uVar24) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      if (pPVar31->vector[(int)uVar24] != (Pool *)0x0) {
        Pool::Pool_ReturnObject(pPVar31->vector[(int)uVar24],(MonoBehaviour *)obj,(MethodInfo *)0x0)
        ;
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::
     RailRay_DoShowRay_d_20_System_Collections_IEnumerator_Reset
               (RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RailRay___DoShowRay_d__20__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

