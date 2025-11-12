
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
    if (((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
        (pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0)) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,memberRequired,(MethodInfo *)0x0);
      pGVar2 = (this->fields).rightButton;
      if (((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
          (pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0)) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,memberRequired,(MethodInfo *)0x0);
        pGVar2 = (this->fields).flipButton;
        if ((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pGVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,canRotate,(MethodInfo *)0x0);
          pGVar2 = (this->fields).flipButton;
          if ((pGVar2 != (GizmoRotationButtonNg *)0x0) &&
             ((pIVar3 = (pGVar2->fields).memberBadge, pIVar3 != (Image *)0x0 &&
              (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar3,(MethodInfo *)0x0),
              pGVar1 != (GameObject *)0x0)))) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,memberRequired,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar1 == (GameObject *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar5 = (pGVar1->fields)._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar5,memberRequired);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

