
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>d__17::
     NinjaRunModifier_DoFadeAndDestroy_d_17_MoveNext
               (NinjaRunModifier_DoFadeAndDestroy_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (NinjaRunModifier *)0x0) {
      this_01 = (this_00->fields).soundEffect;
      (this_00->fields).isDestroying = 1;
      if (this_01 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_01,0.0,(MethodInfo *)0x0);
        pTVar2 = (this_00->fields).trailRenderer;
        if (((pTVar2 != (TrailRenderer *)0x0) &&
            (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
            )) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar3,(MethodInfo *)0x0), obj != (Transform *)0x0
                  )) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar4 = (obj->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            bVar6 = (*pcVar5)();
            return bVar6;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            bVar6 = (*pcVar5)();
            return bVar6;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4,0,1);
          pTVar2 = (this_00->fields).trailRenderer;
          if (pTVar2 != (TrailRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TrailRenderer>_UnityEngine__TrailRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar4 = (pTVar2->fields)._._._.m_CachedPtr;
            if (pvVar4 != (void *)0x0) {
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar5 = (code *)swi(3);
                bVar6 = (*pcVar5)();
                return bVar6;
              }
              pcRam_? = pcVar5;
              uVar8 = (*pcRam_?)(pvVar4);
              pOVar9 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
              bVar10 = iRam_? != 0;
              *(undefined4 *)&pOVar9[1].klass = uVar8;
              (this->fields).__2__current = pOVar9;
              if (bVar10) {
                uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                do {
                  uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                  puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar13 == *puVar14;
                  if (bVar10) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              (this->fields).__1__state = 1;
              return 1;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            bVar6 = (*pcVar5)();
            return bVar6;
          }
        }
      }
    }
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if ((this_00 == (NinjaRunModifier *)0x0) ||
       (pTVar2 = (this_00->fields).trailRenderer, pTVar2 == (TrailRenderer *)0x0))
    goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)pGVar3,0.0,(MethodInfo *)0x0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)pGVar3,0.0,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>d__17::
     NinjaRunModifier_DoFadeAndDestroy_d_17_System_Collections_IEnumerator_Reset
               (NinjaRunModifier_DoFadeAndDestroy_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__NinjaRunModifier___DoFadeAndDestroy_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

