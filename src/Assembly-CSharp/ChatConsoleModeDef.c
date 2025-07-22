
/* Void Set(RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModeDef::ChatConsoleModeDef_Set
               (ChatConsoleModeDef *this,RectTransform **targetRectTransform,MethodInfo *method)

{
  pRVar1 = *targetRectTransform;
  pRVar2 = (this->fields).rectTransform;
  if (pRVar2 != (RectTransform *)0x0) {
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar2,(MethodInfo *)0x0);
    if (pRVar1 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar1,VVar3,(MethodInfo *)0x0);
      pRVar1 = (this->fields).rectTransform;
      pRVar2 = *targetRectTransform;
      if (pRVar1 != (RectTransform *)0x0) {
        VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar1,(MethodInfo *)0x0);
        if (pRVar2 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                    (pRVar2,VVar3,(MethodInfo *)0x0);
          pRVar1 = (this->fields).rectTransform;
          pRVar2 = *targetRectTransform;
          if (pRVar1 != (RectTransform *)0x0) {
            VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                              (pRVar1,(MethodInfo *)0x0);
            if (pRVar2 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                        (pRVar2,VVar3,(MethodInfo *)0x0);
              pRVar1 = (this->fields).rectTransform;
              pRVar2 = *targetRectTransform;
              if (pRVar1 != (RectTransform *)0x0) {
                VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
                if (pRVar2 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_anchoredPosition(pRVar2,VVar3,(MethodInfo *)0x0);
                  pRVar1 = (this->fields).rectTransform;
                  pRVar2 = *targetRectTransform;
                  if (pRVar1 != (RectTransform *)0x0) {
                    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_get_sizeDelta(pRVar1,(MethodInfo *)0x0);
                    if (pRVar2 != (RectTransform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_set_sizeDelta(pRVar2,VVar3,(MethodInfo *)0x0);
                      return;
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

