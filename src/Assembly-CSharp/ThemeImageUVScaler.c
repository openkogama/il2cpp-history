
/* Void Reset() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Reset
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__RawImage_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::RawImage>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RawImage *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__RawImage_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::RawImage>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).image = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).image >> 0xc);
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
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Update
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    obj = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      obj = pTVar1;
    }
    if (obj == (Transform *)0x0) {
      FUN_?(pTVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar5,&uStack_3);
    fVar7 = (float)uStack_3;
    fVar8 = uStack_3._4_4_;
    fVar9 = (float)uStack_4;
    fVar10 = uStack_4._4_4_;
    pRVar11 = (this->fields).image;
    fStack_12 = (float)uStack_3;
    fStack_13 = uStack_3._4_4_;
    fStack_14 = (float)uStack_4;
    fStack_15 = uStack_4._4_4_;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar7 = (float)uStack_3;
      fVar8 = uStack_3._4_4_;
      fVar9 = (float)uStack_4;
      fVar10 = uStack_4._4_4_;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar7 = (float)uStack_3;
      fVar8 = uStack_3._4_4_;
      fVar9 = (float)uStack_4;
      fVar10 = uStack_4._4_4_;
    }
    if (pRVar11 != (RawImage *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((void *)(pRVar11->fields)._._._._._._._ != (void *)0x0) {
        if (((((this->fields).prevRect.m_XMin != fVar7) || ((this->fields).prevRect.m_YMin != fVar8)
             ) || ((this->fields).prevRect.m_Width != fVar9)) ||
           ((this->fields).prevRect.m_Height != fVar10)) {
          (this->fields).prevRect.m_XMin = fVar7;
          (this->fields).prevRect.m_YMin = fVar8;
          (this->fields).prevRect.m_Width = fVar9;
          (this->fields).prevRect.m_Height = fVar10;
          pRVar11 = (this->fields).image;
          fVar7 = fStack_15 / fStack_14;
          if (pRVar11 == (RawImage *)0x0) goto code_?;
          uStack_3 = 0;
          uStack_4 = CONCAT44(fVar7,0x3f800000);
          if ((((pRVar11->fields).m_UVRect.m_XMin != 0.0) ||
              ((pRVar11->fields).m_UVRect.m_YMin != 0.0)) ||
             (((pRVar11->fields).m_UVRect.m_Width != _UNK_? ||
              ((pRVar11->fields).m_UVRect.m_Height != fVar7)))) {
            pRVar16 = pRVar11->klass;
            (pRVar11->fields).m_UVRect.m_XMin = 0.0;
            (pRVar11->fields).m_UVRect.m_YMin = 0.0;
            (pRVar11->fields).m_UVRect.m_Width = 1.0;
            (pRVar11->fields).m_UVRect.m_Height = fVar7;
            (*(pRVar16->vtable).SetVerticesDirty.methodPtr)
                      (pRVar11,(pRVar16->vtable).SetVerticesDirty.method);
          }
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_get_RectTransform
          (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pTVar2 = pTVar1;
  if (pTVar1 != (Transform *)0x0) {
    pTVar2 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pRVar4 = (RectTransform *)(*pcVar3)();
      return pRVar4;
    }
  }
  return (RectTransform *)pTVar2;
}

