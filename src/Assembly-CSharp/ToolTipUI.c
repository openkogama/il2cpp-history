
/* Vector2 GetPivot(Vector2) */

Vector2 Assembly-CSharp.dll::ToolTipUI::ToolTipUI_GetPivot
                  (ToolTipUI *this,Vector2 position,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  fStackX_20 = position.x;
  fVar5 = 0.0;
  if ((float)iVar4 * _UNK_? < fStackX_20) {
    fVar5 = _UNK_?;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  fStackX_24 = position.y;
  fVar6 = 0.0;
  if ((float)iVar4 * _UNK_? < fStackX_24) {
    fVar6 = _UNK_?;
  }
  VVar3.y = fVar6;
  VVar3.x = fVar5;
  return VVar3;
}


/* Void Set(Vector2, String) */

void Assembly-CSharp.dll::ToolTipUI::ToolTipUI_Set
               (ToolTipUI *this,Vector2 position,String *tooltip,MethodInfo *method)

{
  pTVar1 = (this->fields).toolTipText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,tooltip);
    pRVar2 = (this->fields).rectTransform;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    iVar5 = (*pcRam_?)();
    fVar6 = _UNK_?;
    fStack_7 = position.x;
    fVar8 = 0.0;
    if ((float)iVar5 * _UNK_? < fStack_7) {
      fVar8 = _UNK_?;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    iVar5 = (*pcRam_?)();
    fStack_9 = position.y;
    fVar10 = 0.0;
    if ((float)iVar5 * fVar6 < fStack_9) {
      fVar10 = _UNK_?;
    }
    if (pRVar2 != (RectTransform *)0x0) {
      value.y = fVar10;
      value.x = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar2,value,(MethodInfo *)0x0);
      pRVar2 = (this->fields).rectTransform;
      if (pRVar2 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar11 = (pRVar2->fields)._._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar11);
        pRVar2 = (this->fields).rectTransform;
        if (pRVar2 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (pRVar2->fields)._._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar11);
          return;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

