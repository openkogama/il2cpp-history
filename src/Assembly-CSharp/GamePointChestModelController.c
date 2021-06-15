
/* Void Close() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Close
               (GamePointChestModelController *this,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields).openMesh;
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pGVar2 = (this->fields).closedMesh;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pRVar3 = (this->fields).openingRenderer;
      (this->fields).isOpening = 0;
      if (pRVar3 != (Renderer *)0x0) {
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar3,(MethodInfo *)0x0);
        if (pMVar4 != (Material *)0x0) {
          pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             ((Color *)&stack0xffffffdc,pMVar4,StringLiteral__MainColor,
                              (MethodInfo *)0x0);
          fVar6 = pCVar5->r;
          fVar7 = pCVar5->g;
          fVar8 = pCVar5->b;
          pRVar3 = (this->fields).openingRenderer;
          if (pRVar3 != (Renderer *)0x0) {
            pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar3,(MethodInfo *)0x0);
            if (pMVar4 != (Material *)0x0) {
              this = (GamePointChestModelController *)fVar8;
              fVar9 = fVar7;
              method = (MethodInfo *)0x3f800000;
              value.x = fVar6;
              value = (Vector4)CONCAT124(auVar10,value.x);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar4,StringLiteral__MainColor,value,(MethodInfo *)0x0);
              pGVar11 = (pGVar1->fields).greyOutScript;
              if (pGVar11 != (GreyOutObjectScript *)0x0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar11,(MethodInfo *)0x0);
                pGVar11 = (pGVar1->fields).greyOutScript;
                if (pGVar11 != (GreyOutObjectScript *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pGVar11,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Disable
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).openingRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         ((Color *)&stack0xffffffdc,pMVar2,StringLiteral__MainColor,
                          (MethodInfo *)0x0);
      fVar4 = pCVar3->r;
      fVar5 = pCVar3->g;
      pRVar1 = (this->fields).openingRenderer;
      if (pRVar1 != (Renderer *)0x0) {
        puVar6 = &UNK_?;
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          value.y = fVar5;
          value.x = fVar4;
          value.z = (float)puVar6;
          value.w = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar2,StringLiteral__MainColor,value,(MethodInfo *)0x0);
          pGVar7 = (this->fields).openMesh;
          (this->fields).isOpening = 0;
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,0,(MethodInfo *)0x0);
            pGVar7 = (this->fields).closedMesh;
            if (pGVar7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
              this_00 = (this->fields).greyOutScript;
              if (this_00 != (GreyOutObjectScript *)0x0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_IsVisible
               (GamePointChestModelController *this,MethodInfo *method)

{
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      return bVar2 == 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Open() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Open
               (GamePointChestModelController *this,MethodInfo *method)

{
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).openingAnimation;
      if (this_00 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play
                  (this_00,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pGVar3 = (this->fields).greyOutScript;
        (this->fields).isOpening = 1;
        (this->fields).openingStartTime = fVar2;
        if (pGVar3 != (GreyOutObjectScript *)0x0) {
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar3,(MethodInfo *)0x0);
          if ((this->fields).shouldGreyOut != 0) {
            return;
          }
          pGVar3 = (this->fields).greyOutScript;
          if ((pGVar3 != (GreyOutObjectScript *)0x0) &&
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pGVar3,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            return;
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


/* Void Update() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Update
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isOpening != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).fadeStartTime;
    fVar1 = fVar1 - (this->fields).openingStartTime;
    if (fVar2 < fVar1) {
      pRVar3 = (this->fields).openingRenderer;
      fVar2 = _UNK_? - (fVar1 - fVar2) / ((this->fields).fadeEndTime - fVar2);
      if ((pRVar3 != (Renderer *)0x0) &&
         (pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar3,(MethodInfo *)0x0), pMVar4 != (Material *)0x0)) {
        pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           ((Color *)&stack0xffffffdc,pMVar4,StringLiteral__MainColor,
                            (MethodInfo *)0x0);
        fVar1 = pCVar5->r;
        fVar6 = pCVar5->g;
        fVar7 = pCVar5->b;
        pRVar3 = (this->fields).openingRenderer;
        if ((pRVar3 != (Renderer *)0x0) &&
           (pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar3,(MethodInfo *)0x0), pMVar4 != (Material *)0x0)) {
          value.y = fVar6;
          value.x = fVar1;
          value.z = fVar7;
          value.w = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar4,StringLiteral__MainColor,value,(MethodInfo *)0x0);
          if (0.0 < fVar2) {
            return;
          }
          this_00 = (this->fields).openMesh;
          (this->fields).isOpening = 0;
          if (this_00 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* Void set_ShouldGreyOut(Boolean) */

void Assembly-CSharp.dll::GamePointChestModelController::
     GamePointChestModelController_set_ShouldGreyOut
               (GamePointChestModelController *this,bool value,MethodInfo *method)

{
  (this->fields).shouldGreyOut = value;
  return;
}

