
/* Void Setup(Boolean, Boolean) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationButtonHolderNg::
     GizmoRotationButtonHolderNg_Setup
               (GizmoRotationButtonHolderNg *this,bool canRotate,bool memberRequired,
               MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,canRotate,(MethodInfo *)0x0);
    pGVar2 = (this->fields).leftButton;
    if ((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
       (pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0)) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar3,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,memberRequired,(MethodInfo *)0x0);
        pGVar2 = (this->fields).rightButton;
        if ((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
           (pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0)) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar3,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,memberRequired,(MethodInfo *)0x0);
            pGVar2 = (this->fields).flipButton;
            if (pGVar2 != (GizmoRotationButtonNg *)0x0) {
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pGVar2,(MethodInfo *)0x0);
              if (pGVar1 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,memberRequired,(MethodInfo *)0x0);
                pGVar2 = (this->fields).flipButton;
                if ((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
                   (pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0)) {
                  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pIVar3,(MethodInfo *)0x0);
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,memberRequired,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

