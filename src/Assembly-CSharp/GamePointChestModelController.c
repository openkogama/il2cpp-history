
/* Void Close() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Close
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainColor);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).openingRenderer;
      (this->fields).isOpening = 0;
      if (pRVar2 != (Renderer *)0x0) {
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar2,(MethodInfo *)0x0);
        if (pMVar3 != (Material *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                             ((Vector4 *)&stack0xffffffec,pMVar3,StringLiteral__MainColor,
                              (MethodInfo *)0x0);
          fVar5 = pVVar4->x;
          fVar6 = pVVar4->y;
          fVar7 = pVVar4->z;
          pRVar2 = (this->fields).openingRenderer;
          fVar8 = 1.0;
          if (pRVar2 != (Renderer *)0x0) {
            pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar2,(MethodInfo *)0x0);
            if (pMVar3 != (Material *)0x0) {
              value.y = fVar6;
              value.x = fVar5;
              value.z = fVar7;
              value.w = fVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar3,StringLiteral__MainColor,value,(MethodInfo *)0x0);
              pGVar9 = (this->fields).greyOutScript;
              if (pGVar9 != (GreyOutObjectScript *)0x0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar9,(MethodInfo *)0x0);
                pGVar9 = (this->fields).greyOutScript;
                if (pGVar9 != (GreyOutObjectScript *)0x0) {
                  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pGVar9,(MethodInfo *)0x0);
                  if (pGVar1 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,1,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Disable
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainColor);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).openingRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                         ((Vector4 *)&stack0xffffffec,pMVar2,StringLiteral__MainColor,
                          (MethodInfo *)0x0);
      fVar4 = pVVar3->x;
      fVar5 = pVVar3->y;
      pRVar1 = (this->fields).openingRenderer;
      if (pRVar1 != (Renderer *)0x0) {
        auVar6._4_4_ = pRVar1;
        auVar6._0_4_ = &UNK_?;
        auVar6._8_4_ = 0;
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          value.y = fVar5;
          value.x = fVar4;
          value.z = auVar6._0_4_;
          value.w = auVar6._4_4_;
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_IsVisible
               (GamePointChestModelController *this,MethodInfo *method)

{
  this_00 = (this->fields).openMesh;
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    if ((this->fields).closedMesh != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar1 = (*pcRam_?)();
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
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
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pGVar3,(MethodInfo *)0x0),
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
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainColor);
    cRam_? = '\x01';
  }
  if (((this->fields).isOpening == 0) ||
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar2 = fVar2 - (this->fields).openingStartTime, pfVar3 = &(this->fields).fadeStartTime,
     fVar2 < *pfVar3 || fVar2 == *pfVar3)) {
    return;
  }
  pRVar4 = (this->fields).openingRenderer;
  if ((pRVar4 != (Renderer *)0x0) &&
     (pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar4,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                       ((Vector4 *)&stack0xffffffec,pMVar5,StringLiteral__MainColor,
                        (MethodInfo *)0x0);
    fVar2 = pVVar6->x;
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    pRVar4 = (this->fields).openingRenderer;
    if (pRVar4 != (Renderer *)0x0) {
      this = (GamePointChestModelController *)&UNK_?;
      pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar4,(MethodInfo *)0x0);
      if (pMVar5 != (Material *)0x0) {
        fVar9 = fVar7;
        fVar10 = fVar2;
        uVar11 = CONCAT44(fVar9,fVar10);
        fVar12 = fVar8;
        value = (Vector4)CONCAT88(uVar13,uVar11);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (pMVar5,StringLiteral__MainColor,value,(MethodInfo *)0x0);
        if (0.0 < (float)this) {
          return;
        }
        this_00 = (pGVar1->fields).openMesh;
        (pGVar1->fields).isOpening = 0;
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

