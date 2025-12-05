
/* Void Generate(GameObject, Action`1[UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
               (GameObject *bodyCloneGO,Action_1_UnityEngine_Texture2D_ *screenShotDataTexHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarScreenShotGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((bodyCloneGO == (GameObject *)0x0) ||
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (bodyCloneGO,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (bodyCloneGO,(MethodInfo *)0x0);
    lStack_5 = (ulonglong)_UNK_? << 0x20;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(&lStack_5);
    if (pTVar1 != (Transform *)0x0) {
      uStack_9 = (undefined4)uStack_7;
      uStack_10 = uStack_7._4_4_;
      uStack_11 = (undefined4)uStack_8;
      uStack_12 = uStack_8._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar3);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (bodyCloneGO,(MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,layer,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      Extensions::Extensions_ScaleBounds(bodyCloneGO,_UNK_?,(MethodInfo *)0x0);
      self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      name = StringLiteral_AvatarScreenShotGenerator;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                (self,name,(MethodInfo *)0x0);
      if ((self != (GameObject *)0x0) &&
         (this = (IEnumerator__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (self,
                            AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__
                           ), this != (IEnumerator__Class *)0x0)) {
        (this->_0).generic_class = (Il2CppGenericClass *)screenShotDataTexHandler;
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)&(this->_0).generic_class >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        iVar18 = iRam_?;
        (this->_0).parent = (Il2CppClass *)bodyCloneGO;
        if (iVar18 != 0) {
          uVar13 = (uint)((ulonglong)&(this->_0).parent >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        pMVar19 = 
        BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__;
        if ((
            BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
                       );
        }
        pIVar20 = (Il2CppClass *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_3
                           (bodyCloneGO,0,((pMVar19->field7_0x38).rgctx_data)->method);
        bVar17 = iRam_? != 0;
        (this->_0).declaringType = pIVar20;
        if (bVar17) {
          uVar13 = (uint)((ulonglong)&(this->_0).declaringType >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        pMVar19 = 
        UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
        ;
        if ((
            UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                       );
        }
        pIVar20 = (Il2CppClass *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (bodyCloneGO,0,((pMVar19->field7_0x38).rgctx_data)->method);
        bVar17 = iRam_? != 0;
        (this->_0).castClass = pIVar20;
        if (bVar17) {
          uVar13 = (uint)((ulonglong)&(this->_0).castClass >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        pIVar20 = (this->_0).declaringType;
        if (pIVar20 != (Il2CppClass *)0x0) {
          BoneAnimation::BoneAnimation_PlayAndPauseAt
                    ((BoneAnimation *)pIVar20,*(String **)&(this->_0).this_arg.attrs,
                     *(float *)&(this->_0).element_class,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          routine = (IEnumerator *)
                    FUN_?(TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
          bVar17 = iRam_? != 0;
          *(undefined4 *)&routine[1].klass = 0;
          routine[2].klass = this;
          if (bVar17) {
            uVar13 = (uint)((ulonglong)(routine + 2) >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar17 = uVar15 == *puVar16;
              if (bVar17) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
          }
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator GenerateScreenshot() */

IEnumerator *
Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_GenerateScreenshot
          (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::
     AvatarScreenshotGenerator_ScreenShotDataTexHandler
               (AvatarScreenshotGenerator *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarEditModeBodyController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
  if (this_00 == (CloudyThemeBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Theme::Theme_Activate((Theme *)this_00,(MethodInfo *)0x0);
  if ((this->fields).screenShotDataTexHandler != (Action_1_UnityEngine_Texture2D_ *)0x0) {
    pAVar2 = (this->fields).screenShotDataTexHandler;
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
  }
  pGVar3 = (this->fields).bodyCloneGO;
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
  iVar4 = iRam_?;
  (this->fields).bodyCloneGO = (GameObject *)0x0;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).bodyCloneGO >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).boneAnimation = (BoneAnimation *)0x0;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).boneAnimation >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar10 = (void *)0x0;
  if (pGVar3 != (GameObject *)0x0) {
    pvVar10 = (pGVar3->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar10,0);
  return;
}


/* AvatarScreenshotGenerator() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator__ctor
               (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = TypeRef__System__Activator__T._0_4_;
  uVar2 = _UNK_?;
  bVar3 = iRam_? != 0;
  (this->fields).cameraOffset.x = (float)_UNK_?;
  (this->fields).cameraOffset.y = (float)uVar2;
  (this->fields).cameraOffset.z = fVar1;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).lookAtOffset.z = 0.0;
  (this->fields).animationToShoot = StringLiteral_Walk;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).animationToShoot >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = cRam_? == '\0';
  (this->fields).animationTime = 0.16;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar8 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar9 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar10 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar11 = ppMVar9;
  if (lVar10 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar10 = lRam_?;
  }
  else {
    do {
      uVar4 = (uint)ppMVar11;
      LOCK();
      bVar3 = uVar4 != uRam_?;
      uVar12 = uVar4;
      uVar13 = uVar4 + 1;
      if (bVar3) {
        uVar12 = uRam_?;
        uVar13 = uRam_?;
      }
      uRam_? = uVar13;
      UNLOCK();
    } while ((bVar3) && (ppMVar11 = (MethodInfo **)(ulonglong)uVar12, uVar4 = uVar12, uVar12 != 2)
            );
    while (uVar4 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar4 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar10;
  puVar14 = &(pOVar8->_1).field_0x1c;
  LOCK();
  bVar3 = *(int *)puVar14 == 1;
  if (bVar3) {
    *(undefined4 *)puVar14 = 1;
  }
  uVar4 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar4 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar15 = &(pOVar8->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar3 = *puVar15 == 1;
  if (bVar3) {
    *puVar15 = 1;
  }
  uVar4 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar4 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar4 = GetCurrentThreadId();
    psVar16 = &(pOVar8->_1).cctor_thread;
    LOCK();
    bVar3 = (ulonglong)uVar4 == *psVar16;
    if (bVar3) {
      *psVar16 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
    while( true ) {
      puVar14 = &(pOVar8->_1).field_0x1c;
      LOCK();
      bVar3 = *(int *)puVar14 == 1;
      if (bVar3) {
        *(undefined4 *)puVar14 = 1;
      }
      UNLOCK();
      if (bVar3) break;
      LOCK();
      lVar10._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
      lVar10._4_4_ = (pOVar8->_1).cctor_started;
      if (lVar10 == 0) {
        (pOVar8->_1).initializationExceptionGCHandle = 0;
        (pOVar8->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar10 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar17._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
    lVar17._4_4_ = (pOVar8->_1).cctor_started;
    if (lVar17 == 0) {
      return;
    }
  }
  else {
    uVar4 = GetCurrentThreadId();
    LOCK();
    (pOVar8->_1).cctor_thread = (ulonglong)uVar4;
    UNLOCK();
    LOCK();
    (pOVar8->_1).cctor_finished_or_no_cctor = 1;
    uVar4 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar4 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar8->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar8);
      ppMVar11 = ppMVar9;
      pIVar18 = (Il2CppClass *)pOVar8;
code_?:
      do {
        if (ppMVar11 == (MethodInfo **)0x0) {
          FUN_?(pIVar18);
          if (pIVar18->field_count != 0) {
            ppMVar11 = pIVar18->methods;
            pMVar19 = *ppMVar11;
code_?:
            if (pMVar19 != (MethodInfo *)0x0) {
              if ((*pMVar19->name == '.') && ((pMVar19->flags & 0x800) != 0)) {
                ppMVar20 = ppMVar9;
                while (pcVar21 = (char *)((longlong)ppMVar20 + 0xADDR),
                      ppMVar20 = (MethodInfo **)((longlong)ppMVar20 + 1),
                      *pcVar21 == (pMVar19->name + -1)[(longlong)ppMVar20]) {
                  if (ppMVar20 == (MethodInfo **)0x7) {
                    FUN_?(pMVar19,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar11 = ppMVar11 + 1;
          if (ppMVar11 < pIVar18->methods + pIVar18->field_count) {
            pMVar19 = *ppMVar11;
            goto code_?;
          }
        }
        pIVar18 = pIVar18->parent;
        ppMVar11 = ppMVar9;
      } while (pIVar18 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar8->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar22 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar8->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar8->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_25 < 0x10) {
code_?:
      lVar10 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_24 = uVar22;
      uStack_25 = uVar5;
      lVar17 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar10 != 0) {
        *(longlong *)(lVar17 + 0x28U) = lVar10;
        if (iRam_? != 0) {
          uVar4 = (uint)(lVar17 + 0x28U >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar7;
            LOCK();
            uVar5 = *puVar7;
            if (uVar6 == uVar5) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar5);
        }
      }
      FUN_?(pOVar8,lVar17);
      if (0xf < uStack_26) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_26 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_25 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar22 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar22._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
  uVar22._4_4_ = (pOVar8->_1).cctor_started;
  uVar22 = FUN_?(uVar22);
  FUN_?(uVar22,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

