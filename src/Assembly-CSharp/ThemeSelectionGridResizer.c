
/* Void Update() */

void Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_Update
               (ThemeSelectionGridResizer *this,MethodInfo *method)

{
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
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    if ((this->fields).prevSize == 0.0) {
      return;
    }
    pGVar5 = (this->fields).grid;
    if (pGVar5 != (GridLayoutGroup *)0x0) {
      pRVar6 = (pGVar5->fields)._.m_Padding;
      fVar7 = (float)(pGVar5->fields).m_Constraint;
      if (pRVar6 != (RectOffset *)0x0) {
        pvVar3 = (pRVar6->fields).m_Ptr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
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
        iVar8 = (*pcRam_?)(pvVar3);
        pGVar5 = (this->fields).grid;
        if ((pGVar5 != (GridLayoutGroup *)0x0) &&
           (pRVar6 = (pGVar5->fields)._.m_Padding, pRVar6 != (RectOffset *)0x0)) {
          pvVar3 = (pRVar6->fields).m_Ptr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
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
          iVar9 = (*pcRam_?)(pvVar3);
          pGVar5 = (this->fields).grid;
          fVar7 = (((0.0 - fVar7) - (float)iVar8) - (float)iVar9) * _UNK_?;
          if (pGVar5 != (GridLayoutGroup *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::Vector2>_UnityEngine__Vector2___UnityEngine__Vector2_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            FUN_?(pGVar5,&(pGVar5->fields).m_Spacing,CONCAT44(fVar7,fVar7));
            (this->fields).prevSize = 0.0;
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


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_get_RectTransform
          (ThemeSelectionGridResizer *this,MethodInfo *method)

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

