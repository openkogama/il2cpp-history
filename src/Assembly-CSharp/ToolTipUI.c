
/* Vector2 GetPivot(Vector2) */

Vector2 Assembly-CSharp.dll::ToolTipUI::ToolTipUI_GetPivot(ToolTipUI *this,Vector2 position,MethodInfo *method)

{
  fVar1 = 0.0;
  fVar2 = 0.0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    VVar5 = (Vector2)(*pcVar3)();
    return VVar5;
  }
  pcRam_? = pcVar3;
  iVar6 = (*pcRam_?)();
  fStackX_20 = position.x;
  if ((float)iVar6 * 0.5 < fStackX_20) {
    fVar1 = 1.0;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    VVar5 = (Vector2)(*pcVar3)();
    return VVar5;
  }
  pcRam_? = pcVar3;
  iVar6 = (*pcRam_?)();
  fStackX_24 = position.y;
  if ((float)iVar6 * 0.5 < fStackX_24) {
    fVar2 = 1.0;
  }
  VVar5.y = fVar2;
  VVar5.x = fVar1;
  return VVar5;
}


/* Void Set(Vector2, String) */

void Assembly-CSharp.dll::ToolTipUI::ToolTipUI_Set(ToolTipUI *this,Vector2 position,String *tooltip,MethodInfo *method)

{
  pTVar1 = (this->fields).toolTipText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,tooltip);
    pRVar2 = (this->fields).rectTransform;
    fVar3 = 0.0;
    fVar4 = 0.0;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    iVar7 = (*pcRam_?)();
    fStack_8 = position.x;
    if ((float)iVar7 * 0.5 < fStack_8) {
      fVar3 = 1.0;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    iVar7 = (*pcRam_?)();
    fStack_9 = position.y;
    if ((float)iVar7 * 0.5 < fStack_9) {
      fVar4 = 1.0;
    }
    if (pRVar2 != (RectTransform *)0x0) {
      value.y = fVar4;
      value.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot(pRVar2,value,(MethodInfo *)0x0);
      pRVar2 = (this->fields).rectTransform;
      if (pRVar2 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pRVar2->fields)._._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar10);
        pRVar2 = (this->fields).rectTransform;
        if (pRVar2 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pRVar2->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar10);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

