
/* Void OnBackgroundImageRecieved() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_OnBackgroundImageRecieved
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).imageStream;
  if ((pSVar1 != (StreamPngToSprite *)0x0) &&
     (pRVar2 = (pSVar1->fields).rawImage, pRVar2 != (RawImage *)0x0)) {
    uStack_3 = _UNK_?;
    uStack_4 = _UNK_?;
    (*(pRVar2->klass->vtable).set_color.methodPtr)
              (pRVar2,&uStack_3,(pRVar2->klass->vtable).set_color.method);
    pSVar1 = (this->fields).imageStream;
    if ((pSVar1 != (StreamPngToSprite *)0x0) &&
       ((pRVar2 = (pSVar1->fields).rawImage, pRVar2 != (RawImage *)0x0 &&
        (source = (Texture *)
                  (*(pRVar2->klass->vtable).get_mainTexture.methodPtr)
                            (pRVar2,(pRVar2->klass->vtable).get_mainTexture.method),
        source != (Texture *)0x0)))) {
      iVar5 = (*(source->klass->vtable).get_width.methodPtr)
                        (source,(source->klass->vtable).get_width.method);
      iVar6 = (*(source->klass->vtable).get_height.methodPtr)
                        (source,(source->klass->vtable).get_height.method);
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_7
                         (iVar5,iVar6,0,(MethodInfo *)0x0);
      iVar5 = (*(source->klass->vtable).get_width.methodPtr)
                        (source,(source->klass->vtable).get_width.method);
      iVar6 = (*(source->klass->vtable).get_height.methodPtr)
                        (source,(source->klass->vtable).get_height.method);
      pRVar8 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
      pvVar9 = (void *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                (pRVar8,iVar5,iVar6,0,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields).finalBluredTex = pRVar8;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).finalBluredTex >> 0xc);
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
      pRVar8 = (this->fields).finalBluredTex;
      if (pRVar8 != (RenderTexture *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (pRVar8->fields)._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar8,(MethodInfo *)0x0);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pcVar16 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pcRam_? = pcVar16;
        (*pcRam_?)(pvVar15);
        mat = (this->fields).horizontalBlur;
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_2
                  (source,pRVar7,mat,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_2
                  ((Texture *)pRVar7,(this->fields).finalBluredTex,(this->fields).VerticalBlur,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pRVar7 != (RenderTexture *)0x0) {
          pvVar9 = (pRVar7->fields)._._.m_CachedPtr;
        }
        pcVar16 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pcRam_? = pcVar16;
        (*pcRam_?)(pvVar9);
        pSVar1 = (this->fields).imageStream;
        if ((pSVar1 != (StreamPngToSprite *)0x0) &&
           (pRVar2 = (pSVar1->fields).rawImage, pRVar2 != (RawImage *)0x0)) {
          pRVar7 = (this->fields).finalBluredTex;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object,pRVar7,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pRVar8 = (RenderTexture *)(pRVar2->fields).m_Texture;
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
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pRVar7 != (RenderTexture *)0x0 || pRVar8 != (RenderTexture *)0x0) {
            if (pRVar7 == (RenderTexture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pRVar8 == (RenderTexture *)0x0) {
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              bVar10 = (pRVar8->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else if (pRVar8 == (RenderTexture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar10 = (pRVar7->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar10 = pRVar8 == pRVar7;
            }
            if (!bVar10) {
              bVar10 = iRam_? != 0;
              (pRVar2->fields).m_Texture = (Texture *)pRVar7;
              if (bVar10) {
                uVar11 = (uint)((ulonglong)&(pRVar2->fields).m_Texture >> 0xc);
                puVar14 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar13 = *puVar14;
                  LOCK();
                  uVar12 = *puVar14;
                  if (uVar13 == uVar12) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar13 != uVar12);
              }
              (*(pRVar2->klass->vtable).SetVerticesDirty.methodPtr)
                        (pRVar2,(pRVar2->klass->vtable).SetVerticesDirty.method);
              (*(pRVar2->klass->vtable).SetMaterialDirty.methodPtr)
                        (pRVar2,(pRVar2->klass->vtable).SetMaterialDirty.method);
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_OnDestroy
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).imageStream;
  if (pSVar1 == (StreamPngToSprite *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pSVar1->fields).OnDownloadFinish;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__
             ,(MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (pSVar1->fields).OnDownloadFinish = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pSVar1->fields).OnDownloadFinish = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pSVar1->fields).OnDownloadFinish >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pRVar10 = (this->fields).finalBluredTex;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar10 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar10->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar10 = (this->fields).finalBluredTex;
      if (pRVar10 == (RenderTexture *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                (pRVar10,(MethodInfo *)0x0);
      bVar9 = iRam_? != 0;
      (this->fields).finalBluredTex = (RenderTexture *)0x0;
      if (bVar9) {
        uVar5 = (uint)((ulonglong)&(this->fields).finalBluredTex >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_Start
               (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  StreamPngToSprite_MethodInfo__UnityEngine__Component__GetComponent<StreamPngToSprite>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (StreamPngToSprite *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      StreamPngToSprite_MethodInfo__UnityEngine__Component__GetComponent<StreamPngToSprite>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).imageStream = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).imageStream >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = (this->fields).imageStream;
  if (pSVar1 == (StreamPngToSprite *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar8 = (pSVar1->fields).OnDownloadFinish;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LoadingScreenBackground__OnBackgroundImageRecieved__
             ,(MethodInfo *)0x0);
  pAVar8 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar8 == (Action *)0x0) {
    (pSVar1->fields).OnDownloadFinish = (Action *)0x0;
  }
  else {
    pAVar9 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (pSVar1->fields).OnDownloadFinish = pAVar9;
    pAVar9 = (Action *)0x0;
    if (pAVar8->klass == TypeInfo__System__Action) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 == (Action *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pSVar1->fields).OnDownloadFinish >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5);
  bVar2 = iRam_? != 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(LoadingScreenBackground **)(lVar4 + 0x20) = this;
  if (bVar2) {
    uVar3 = (uint)(lVar4 + 0x20U >> 0xc);
    lVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar6 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (lVar4 == 0) {
    uVar11 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar11);
    pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_01,uVar11);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar13 == 0) {
    uVar11 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar11);
    pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_02,uVar11);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (LoadingScreenBackground *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvVar14 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar14,lVar4);
  return;
}


/* IEnumerator WaitForSessionDataCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenBackground::LoadingScreenBackground_WaitForSessionDataCoroutine
          (LoadingScreenBackground *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5);
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

