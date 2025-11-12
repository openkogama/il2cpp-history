
/* Void Set(RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModeDef::ChatConsoleModeDef_Set
               (ChatConsoleModeDef *this,RectTransform **targetRectTransform,MethodInfo *method)

{
  pRVar1 = *targetRectTransform;
  pRVar2 = (this->fields).rectTransform;
  if ((pRVar2 != (RectTransform *)0x0) &&
     (VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar2,(MethodInfo *)0x0), pRVar1 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar1,VVar3,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rectTransform;
    pRVar2 = *targetRectTransform;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar2,VVar3,(MethodInfo *)0x0);
      pRVar1 = (this->fields).rectTransform;
      pRVar2 = *targetRectTransform;
      if ((pRVar1 != (RectTransform *)0x0) &&
         (VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                            (pRVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (pRVar2,VVar3,(MethodInfo *)0x0);
        pRVar1 = (this->fields).rectTransform;
        pRVar2 = *targetRectTransform;
        if ((pRVar1 != (RectTransform *)0x0) &&
           (VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0),
           pRVar2 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                    (pRVar2,VVar3,(MethodInfo *)0x0);
          pRVar1 = (this->fields).rectTransform;
          pRVar2 = *targetRectTransform;
          if ((pRVar1 != (RectTransform *)0x0) &&
             (aVStack_4[0] =
                   UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_sizeDelta(pRVar1,(MethodInfo *)0x0),
             pRVar2 != (RectTransform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                            ,aVStack_4[0],0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pRVar2 == (RectTransform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar6 = (pRVar2->fields)._._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,aVStack_4);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

