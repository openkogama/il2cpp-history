
/* Vector2 SwitchToRectTransform(RectTransform, RectTransform) */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+Utils::
        DOTweenModuleUI_Utils_SwitchToRectTransform
                  (RectTransform *from,RectTransform *to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransformUtility);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_8.x = 0.0;
  VStackX_8.y = 0.0;
  if (from != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    uStack_2 = 0;
    pvVar3 = (from->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)from,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    uStack_8 = 0;
    pvVar3 = (from->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)from,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    uStack_10 = 0;
    pvVar3 = (from->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)from,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_11 = 0;
    uStack_12 = 0;
    pvVar3 = (from->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)from,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    fVar13 = _UNK_?;
    fVar14 = (float)uStack_2 * _UNK_? + (float)uStack_7;
    fVar15 = uStack_10._4_4_ * _UNK_? + uStack_11._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    uStack_2 = uStack_2 & 0xffffffff00000000;
    pvVar3 = (from->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)from,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,&uStack_1);
    if (*(int *)&(TypeInfo__UnityEngine__RectTransformUtility->_1).field_0x1c == 0) {
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
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VVar5.y = uStack_1._4_4_ + fVar15;
    VVar5.x = (float)uStack_1 + fVar14;
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
    RectTransformUtility_ScreenPointToLocalPointInRectangle
              (to,VVar5,(Camera *)0x0,&VStackX_8,(MethodInfo *)0x0);
    if (to != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = 0;
      uStack_12 = 0;
      pvVar3 = (to->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)to,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      uStack_10 = 0;
      pvVar3 = (to->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)to,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      pvVar3 = (to->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)to,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_1 = 0;
      uStack_2 = 0;
      pvVar3 = (to->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)to,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        VVar5 = (Vector2)(*pcVar4)();
        return VVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(to,(MethodInfo *)0x0);
      fStackX_20 = VVar5.x;
      fStackX_24 = VVar5.y;
      VVar16.y = (VStackX_8.y + fStackX_24) - (uStack_8._4_4_ * fVar13 + uStack_1._4_4_);
      VVar16.x = (VStackX_8.x + fStackX_20) - ((float)uStack_12 * fVar13 + (float)uStack_9);
      return VVar16;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar4)();
  return VVar5;
}

