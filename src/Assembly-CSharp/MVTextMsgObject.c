
/* Void Awake() */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_Awake
               (MVTextMsgObject *this,MethodInfo *method)

{
  obj = (this->fields).canvas;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if (obj != (Canvas *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Canvas>_UnityEngine__Canvas_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Camera>_UnityEngine__Camera_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    obj_00 = (this->fields).canvasGroup;
    if (obj_00 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj_00 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = (obj_00->fields)._._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar1,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector2 CalculateSizeDeltas() */

Vector2 Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_CalculateSizeDeltas
                  (MVTextMsgObject *this,MethodInfo *method)

{
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 != (TextMeshProUGUI *)0x0) {
    pRVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                       ((TMP_Text *)pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textMesh;
    fVar3 = (this->fields).storedWidth;
    if (pTVar1 != (TextMeshProUGUI *)0x0) {
      this_00 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                          ((TMP_Text *)pTVar1,(MethodInfo *)0x0);
      if (this_00 != (RectTransform *)0x0) {
        VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (this_00,(MethodInfo *)0x0);
        fStackX_c = VVar4.y;
        if (pRVar2 != (RectTransform *)0x0) {
          VVar4.y = fStackX_c;
          VVar4.x = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar2,VVar4,(MethodInfo *)0x0);
          pTVar1 = (this->fields).textMesh;
          if (pTVar1 != (TextMeshProUGUI *)0x0) {
            (*(pTVar1->klass->vtable).ForceMeshUpdate.methodPtr)
                      (pTVar1,0,0,(pTVar1->klass->vtable).ForceMeshUpdate.method);
            pTVar1 = (this->fields).textMesh;
            if (pTVar1 != (TextMeshProUGUI *)0x0) {
              pBVar5 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_bounds
                                 (&BStack_6,(TMP_Text *)pTVar1,(MethodInfo *)0x0);
              uVar7 = (pBVar5->m_Extents).y;
              pTVar1 = (this->fields).textMesh;
              if (pTVar1 != (TextMeshProUGUI *)0x0) {
                pRVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                                   ((TMP_Text *)pTVar1,(MethodInfo *)0x0);
                if (pRVar2 != (RectTransform *)0x0) {
                  value.y = (float)uVar7 + (float)uVar7;
                  value.x = (this->fields).storedWidth;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta(pRVar2,value,(MethodInfo *)0x0);
                  pTVar1 = (this->fields).textMesh;
                  if (pTVar1 != (TextMeshProUGUI *)0x0) {
                    pRVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_rectTransform
                                       ((TMP_Text *)pTVar1,(MethodInfo *)0x0);
                    if (pRVar2 != (RectTransform *)0x0) {
                      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_sizeDelta(pRVar2,(MethodInfo *)0x0);
                      fStackX_8 = VVar4.x;
                      fStackX_c = VVar4.y;
                      VVar8.y = fStackX_c + (this->fields).storedPadding;
                      VVar8.x = fStackX_8 + (this->fields).storedPadding;
                      return VVar8;
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar9)();
  return VVar4;
}


/* IEnumerator FullFadeInAnimation(TMP_FontAsset) */

IEnumerator *
Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_FullFadeInAnimation
          (MVTextMsgObject *this,TMP_FontAsset *fontAsset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTextMsgObject___FullFadeInAnimation_d__35);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MVTextMsgObject___FullFadeInAnimation_d__35);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].klass = (IEnumerator__Class *)fontAsset;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void OnFontReceived(TMP_FontAsset) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_OnFontReceived
               (MVTextMsgObject *this,TMP_FontAsset *fontAsset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isFontStreamed = 1;
  if ((this->fields).timeout != (Coroutine *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_1
              ((MonoBehaviour *)this,(this->fields).timeout,(MethodInfo *)0x0);
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 != '\0') {
      if ((this->fields).hasTimedOut == 0) {
        routine = MVTextMsgObject_FullFadeInAnimation(this,fontAsset,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVTextMsgObject___SwitchFadeAnimation_d__36);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)FUN_?();
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = (IEnumerator__Class *)this;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(routine + 2) >> 0xc);
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
        iVar10 = iRam_?;
        routine[2].monitor = (MonitorData *)fontAsset;
        if (iVar10 != 0) {
          uVar5 = (uint)((ulonglong)&routine[2].monitor >> 0xc);
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
      }
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      return;
    }
    MVTextMsgObject_SetFont(this,fontAsset,(MethodInfo *)0x0);
    this_00 = (this->fields).canvas;
    if (this_00 != (Canvas *)0x0) {
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      value = MVTextMsgObject_CalculateSizeDeltas(this,(MethodInfo *)0x0);
      if (pTVar11 != (Transform *)0x0) {
        pTVar12 = (Transform *)0x0;
        if (pTVar11->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (Transform *)0x0) {
          pTVar12 = (Transform *)0x0;
          if (pTVar11->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar12 = pTVar11;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    ((RectTransform *)pTVar12,value,(MethodInfo *)0x0);
          this_01 = (this->fields).canvasGroup;
          if (this_01 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_01,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetBillboard(Boolean) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SetBillboard
               (MVTextMsgObject *this,bool billboard,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).billboardScript;
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
  if (pLVar1 == (LookAtMainCamera *)0x0) {
    bVar2 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = (pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  if ((billboard == 0) || (bVar2 != false)) {
    if ((bVar2 & (billboard ^ 1)) != 0) {
      pLVar1 = (this->fields).billboardScript;
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
                ((Object_1 *)pLVar1,0.0,(MethodInfo *)0x0);
    }
  }
  else {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pLVar1 = (LookAtMainCamera *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                       );
    bVar2 = iRam_? != 0;
    (this->fields).billboardScript = pLVar1;
    if (bVar2) {
      uVar4 = (uint)((ulonglong)&(this->fields).billboardScript >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar6 == *puVar7;
        if (bVar2) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      return;
    }
  }
  return;
}


/* Void SetFont(TMP_FontAsset) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SetFont
               (MVTextMsgObject *this,TMP_FontAsset *fontAsset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FaceColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FaceDilate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OutlineWidth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OUTLINE_ON);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TextMeshPro_Mobile_Distance_Fiel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OutlineColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 == (TextMeshProUGUI *)0x0) goto code_?;
  pMVar2 = (Material *)
           (*(pTVar1->klass->vtable).GetMaterial.methodPtr)
                     (pTVar1,(pTVar1->fields)._.m_sharedMaterial);
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 == (TextMeshProUGUI *)0x0) goto code_?;
  Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_set_font
            ((TMP_Text *)pTVar1,fontAsset,(MethodInfo *)0x0);
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 == (TextMeshProUGUI *)0x0) goto code_?;
  source = (Material *)
           (*(pTVar1->klass->vtable).GetMaterial.methodPtr)
                     (pTVar1,(pTVar1->fields)._.m_sharedMaterial);
  this_00 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,source,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                    (StringLiteral_TextMeshPro_Mobile_Distance_Fiel,(MethodInfo *)0x0);
  if ((this_00 == (Material *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                (this_00,value,(MethodInfo *)0x0), pMVar2 == (Material *)0x0))
  goto code_?;
  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                     (aCStack_4,pMVar2,StringLiteral__FaceColor,(MethodInfo *)0x0);
  aCStack_4[0].r = pCVar3->r;
  aCStack_4[0].g = pCVar3->g;
  aCStack_4[0].b = pCVar3->b;
  aCStack_4[0].a = pCVar3->a;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
            (this_00,StringLiteral__FaceColor,aCStack_4,(MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__FaceDilate,(MethodInfo *)0x0);
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloatImpl
                     (pMVar2,iVar5,(MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__FaceDilate,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
            (this_00,iVar5,fVar6,(MethodInfo *)0x0);
  if ((this->fields).storedFontHasOutline == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_DisableKeyword
              (this_00,StringLiteral_OUTLINE_ON,(MethodInfo *)0x0);
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_EnableKeyword
              (this_00,StringLiteral_OUTLINE_ON,(MethodInfo *)0x0);
  }
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__OutlineWidth,(MethodInfo *)0x0);
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloatImpl
                     (pMVar2,iVar5,(MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__OutlineWidth,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
            (this_00,iVar5,fVar6,(MethodInfo *)0x0);
  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                     (aCStack_4,pMVar2,StringLiteral__OutlineColor,(MethodInfo *)0x0);
  aCStack_4[0].r = pCVar3->r;
  aCStack_4[0].g = pCVar3->g;
  aCStack_4[0].b = pCVar3->b;
  aCStack_4[0].a = pCVar3->a;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
            (this_00,StringLiteral__OutlineColor,aCStack_4,(MethodInfo *)0x0);
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 == (TextMeshProUGUI *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (pTVar1->fields)._.m_sharedMaterial;
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
  if (pMVar2 == (Material *)0x0) {
code_?:
    bVar7 = iRam_? != 0;
    (pTVar1->fields)._.m_sharedMaterial = this_00;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(pTVar1->fields)._.m_sharedMaterial >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uVar12 = (*(pTVar1->klass->vtable).GetPaddingForMaterial.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).GetPaddingForMaterial.method);
    pTVar13 = pTVar1->klass;
    *(undefined4 *)&(pTVar1->fields)._.m_actionStack.itemStack = uVar12;
    *(undefined1 *)&(pTVar1->fields)._.m_marginLeft = 1;
    (*(pTVar13->vtable).SetVerticesDirty.methodPtr)(pTVar1,(pTVar13->vtable).SetVerticesDirty.method);
    (*(pTVar1->klass->vtable).SetMaterialDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable).SetMaterialDirty.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar2->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar2 = (pTVar1->fields)._.m_sharedMaterial;
    if (pMVar2 == (Material *)0x0) goto code_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pMVar2,(MethodInfo *)0x0);
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (iVar5 != iVar14) goto code_?;
  }
  pTVar1 = (this->fields).textMesh;
  if (pTVar1 != (TextMeshProUGUI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).UpdateMeshPadding.methodPtr)
              (pTVar1,(pTVar1->klass->vtable).UpdateMeshPadding.method);
    return;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetFontIndex(Int32) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SetFontIndex
               (MVTextMsgObject *this,int32_t fontIndex,MethodInfo *method)

{
  if (fontIndex == (this->fields).storedFontIndex) {
    return;
  }
  (this->fields).storedFontIndex = fontIndex;
  this_00 = (this->fields).fontList;
  if (this_00 != (StreamedTextMeshProFontList *)0x0) {
    pSVar1 = StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                       (this_00,fontIndex,(MethodInfo *)0x0);
    this_01 = (this->fields).fontStream;
    if (this_01 != (StreamedTextMeshProFontTriggered *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__StreamingAsset<TMPro::TMP_FontAsset,_TMPro::TMP_FontAsset>__DownloadWhenPossible__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_StreamedAsset_is_missing_a_refer);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar2 = iRam_?;
      if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar1 = StringLiteral_StreamedAsset_is_missing_a_refer;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar3 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar1);
        return;
      }
      (this_01->fields)._._._.url = pSVar1;
      if (iVar2 != 0) {
        uVar5 = (uint)((ulonglong)&(this_01->fields)._._._.url >> 0xc);
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
          iVar2 = iRam_?;
        } while (!bVar9);
      }
      (this_01->fields)._.receiver = (StreamedTextMeshProFont_IReceiver *)this;
      if (iVar2 != 0) {
        uVar5 = (uint)((ulonglong)&(this_01->fields)._.receiver >> 0xc);
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
      pMVar10 = 
      MethodInfo__StreamingAsset<TMPro::TMP_FontAsset,_TMPro::TMP_FontAsset>__DownloadWhenPossible__
      ;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
      if (bVar11 == 0) {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this_01,pMVar10->klass->rgctx_data[2].rgctxDataDummy,
                   (MethodInfo *)0x0);
        pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
        if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
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
      else {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this_01,pMVar10->klass->rgctx_data[2].rgctxDataDummy,
                   (MethodInfo *)0x0);
        pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
        if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
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
        requestPriority = (this_01->fields)._._.requestPriority;
        onAssetSetAction = (this_01->fields)._._._.onAssetSetAction;
        pSVar1 = (this_01->fields)._._._.url;
        if ((this_01->fields)._._.useCache == 0) {
          StreamingAsset::StreamingAsset_Download_NonCached
                    ((StreamingAsset *)this_01,pSVar1,onAssetSetAction,requestPriority,
                     (MethodInfo *)0x0);
        }
        else {
          StreamingAsset::StreamingAsset_Download_Cached
                    ((StreamingAsset *)this_01,pSVar1,onAssetSetAction,requestPriority,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetFontStyle(Boolean, FontStyles) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SetFontStyle
               (MVTextMsgObject *this,bool isSet,FontStyles__Enum style,MethodInfo *method)

{
  pTVar1 = (this->fields).textMesh;
  if (isSet == 0) {
    if (pTVar1 == (TextMeshProUGUI *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3 = ~style & *(FontStyles__Enum *)&(pTVar1->fields)._.m_enableAutoSizing;
  }
  else {
    if (pTVar1 == (TextMeshProUGUI *)0x0) goto code_?;
    FVar3 = style | *(FontStyles__Enum *)&(pTVar1->fields)._.m_enableAutoSizing;
  }
  if (*(FontStyles__Enum *)&(pTVar1->fields)._.m_enableAutoSizing != FVar3) {
    *(FontStyles__Enum *)&(pTVar1->fields)._.m_enableAutoSizing = FVar3;
    *(undefined1 *)&(pTVar1->fields)._.m_marginLeft = 1;
    (*(pTVar1->klass->vtable).SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable).SetVerticesDirty.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).SetLayoutDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable).SetLayoutDirty.method);
    return;
  }
  return;
}


/* Void SetSize(Single, Single) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SetSize
               (MVTextMsgObject *this,float width,float padding,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvas;
  (this->fields).storedWidth = width;
  (this->fields).storedPadding = padding;
  if (this_00 != (Canvas *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    aVStack_2[0] = MVTextMsgObject_CalculateSizeDeltas(this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar3 = (Transform *)0x0;
      if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar1;
      }
      if (pTVar3 != (Transform *)0x0) {
        pTVar3 = (Transform *)0x0;
        if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar3 = pTVar1;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        ,aVStack_2[0],0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar3 == (Transform *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar5,aVStack_2);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_Start
               (MVTextMsgObject *this,MethodInfo *method)

{
  if ((this->fields).isFontStreamed == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVTextMsgObject___TimeoutRoutine_d__33);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MVTextMsgObject___TimeoutRoutine_d__33);
    bVar2 = iRam_? != 0;
    *(undefined4 *)&pIVar1[1].klass = 0;
    pIVar1[2].klass = (IEnumerator__Class *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
    pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                       ((MonoBehaviour *)this,pIVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).timeout = pCVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).timeout >> 0xc);
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
    return;
  }
  pIVar1 = MVTextMsgObject_FullFadeInAnimation(this,(TMP_FontAsset *)0x0,(MethodInfo *)0x0);
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar8 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar8 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
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
  if (this == (MVTextMsgObject *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pvVar12 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar12,pIVar1);
  return;
}


/* IEnumerator SwitchFadeAnimation(TMP_FontAsset) */

IEnumerator *
Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_SwitchFadeAnimation
          (MVTextMsgObject *this,TMP_FontAsset *fontAsset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTextMsgObject___SwitchFadeAnimation_d__36);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MVTextMsgObject___SwitchFadeAnimation_d__36);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].monitor = (MonitorData *)fontAsset;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* IEnumerator TimeoutRoutine() */

IEnumerator *
Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_TimeoutRoutine
          (MVTextMsgObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTextMsgObject___TimeoutRoutine_d__33);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MVTextMsgObject___TimeoutRoutine_d__33);
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


/* MVTextMsgObject() */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject__ctor
               (MVTextMsgObject *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).storedFontIndex = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* GameObject get_TextMessageParentObject() */

GameObject *
Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_get_TextMessageParentObject
          (MVTextMsgObject *this,MethodInfo *method)

{
  obj = (this->fields).canvas;
  if (obj == (Canvas *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Canvas *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pGVar2 = (GameObject *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pGVar2 != (GameObject *)0x0) {
        return pGVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar1)();
      return pGVar2;
    }
  }
  return (GameObject *)0x0;
}

